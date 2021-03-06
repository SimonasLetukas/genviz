import traceback
from enum import Enum

from pyforms.basewidget import BaseWidget
from pyforms.controls import ControlFile
from pyforms.controls import ControlText
from pyforms.controls import ControlTextArea
from pyforms.controls import ControlSlider
from pyforms.controls import ControlButton
from pyforms.controls import ControlLabel
from pyforms.controls import ControlNumber
from pyforms.controls import ControlCombo
from pyforms.controls import ControlCheckBox

from mds import Mds
from pca import Pca


class SelectedResolution(Enum):
    LOW = 1
    MEDIUM = 2
    HIGH = 3


class SelectedZoomMethod(Enum):
    PADDING = 1
    EXACT = 2


class SelectedClassifierColumn(Enum):
    START = 1
    END = 2
    EXACT = 3


class AlertWindow(BaseWidget):
    def __init__(self, message: str):
        super().__init__(message)
        self.set_margin(20)
        self._label = ControlLabel(message)
        self._ok_button = ControlButton('Ok')
        self._ok_button.value = self.__ok_button_pressed
        self._formset = ['_label', '_ok_button']

    def __ok_button_pressed(self):
        self.close()


class Gui(BaseWidget):
    def __init__(self, *args, **kwargs):
        super().__init__('genviz')

        self.set_margin(20)

        self._data_file = ControlFile('Input file location: ')
        self._data_file.changed_event = self.__data_file_selected
        self._input_headers = ControlTextArea('Comma-separated headers (if empty, first row from the input file will '
                                              'be used instead): ', default='')
        self._use_columns = ControlTextArea('Use columns (comma-separated indexes, starts at 1, control range with a '
                                            'dash (e.g. \n1-2, -5, 3-); use all columns if empty): ',
                                            default='')
        self._classifier_column_label = ControlLabel('Classifier column: ')
        self._classifier_start_button = ControlButton('Start', checkable=1)
        self._classifier_start_button.value = self.__classifier_start_button_pressed
        self._classifier_start_button.checked = 1
        self._selected_classifier_column = SelectedClassifierColumn.START
        self._classifier_end_button = ControlButton('End', checkable=1)
        self._classifier_end_button.value = self.__classifier_end_button_pressed
        self._classifier_exact_button = ControlButton('Exact', checkable=1)
        self._classifier_exact_button.value = self.__classifier_exact_button_pressed
        self._classifier_column = ControlNumber('Index of classifier column (starts at 1, calculated from used '
                                                'columns above): ', default=1, minimum=1)
        self._classifier_column.enabled = False
        self._output_file = ControlText('Name of the output diagram: ', default='biplot_2d')

        self._resolution_label = ControlLabel('Resolution: ')
        self._resolution_high_button = ControlButton('High', checkable=1)
        self._resolution_high_button.value = self.__resolution_high_button_pressed
        self._resolution_medium_button = ControlButton('Medium', checkable=1)
        self._resolution_medium_button.checked = 1
        self._selected_resolution = SelectedResolution.MEDIUM
        self._resolution_medium_button.value = self.__resolution_medium_button_pressed
        self._resolution_low_button = ControlButton('Low', checkable=1)
        self._resolution_low_button.value = self.__resolution_low_button_pressed

        self._dimensions_x = ControlNumber('Horizontal diagram size: ', default=10, minimum=1)
        self._dimensions_y = ControlNumber('Vertical diagram size: ', default=10, minimum=1)

        self._marker_size = ControlSlider('Size of the marker: ', minimum=1, maximum=100, default=3)
        self._marker_alpha = ControlSlider('Alpha value of the marker: ', minimum=0, maximum=100, default=80,
                                           helptext='Alpha of 100 has no transparency while alpha of 0 is fully transparent')

        self._axis_name_x = ControlText('X-axis name: ')
        self._axis_name_y = ControlText('Y-axis name: ')
        self._axis_font_size = ControlNumber('Axis font size: ', default=9, minimum=1)

        self._zoom_selection = ControlCombo('Axis zoom: ', helptext='Select how the zooming on the axis is done')
        self._zoom_selection.add_item('Padding (start and end values get added to the axis limits)', '1')
        self._zoom_selection.add_item('Exact (start and end values of axes are set)', '2')
        self._selected_zoom_method = SelectedZoomMethod(int(self._zoom_selection.value))
        self._zoom_selection.activated_event = self.__zoom_selected
        self._x_start = ControlText('Start (x): ', default='0.2')
        self._x_end = ControlText('End (x): ', default='0.2')
        self._y_start = ControlText('Start (y): ', default='0.2')
        self._y_end = ControlText('End (y): ', default='0.2')

        self._generate_pca_button = ControlButton('Generate PCA')
        self._generate_pca_button.value = self.__generate_pca_pressed

        self._show_pca = ControlCheckBox('Preview')
        self._show_pca.changed_event = self.__show_pca_checked
        self._generate_pca_file = ControlCheckBox('Generate File')
        self._generate_pca_file.value = True
        self._generate_pca_file.enabled = False

        self._generate_mds_button = ControlButton('Generate MDS')
        self._generate_mds_button.value = self.__generate_mds_pressed

        self._show_mds = ControlCheckBox('Preview')
        self._show_mds.changed_event = self.__show_mds_checked
        self._generate_mds_file = ControlCheckBox('Generate File')
        self._generate_mds_file.value = True
        self._generate_mds_file.enabled = False

        self._clear_logs_button = ControlButton('Clear logs')
        self._clear_logs_button.value = self.__clear_logs_button_pressed
        self._event_log = ControlLabel('No error logs to show.')

        self._formset = [
            'File Setup',
            '_data_file',
            '_input_headers',
            '_use_columns',
            ('_classifier_column_label', '_classifier_start_button', '_classifier_end_button', '_classifier_exact_button'),
            '_classifier_column',
            '_output_file',
            '',
            ('Error Log', '', '', '', '', '', '', '', '', '', '',
             '', '', '', '', '', '', '', '', '', '', '', '_clear_logs_button'),
            '_event_log',
            '||',
            'View Options',
            ('_resolution_label', '_resolution_low_button', '_resolution_medium_button', '_resolution_high_button'),
            ('_dimensions_x', '_dimensions_y'),
            ('_marker_size', '_marker_alpha'),
            ('_axis_name_x', '_axis_name_y', '_axis_font_size'),
            '_zoom_selection',
            ('_x_start', '_x_end', '_y_start', '_y_end'),
            '',
            'Output Diagrams',
            ('_generate_pca_button', '=', '_show_pca', '_generate_pca_file'),
            '',
            ('_generate_mds_button', '=', '_show_mds', '_generate_mds_file')
        ]

    def __data_file_selected(self):
        if self._data_file is None:
            return
        print(self._data_file.value)

    def __classifier_start_button_pressed(self):
        self._selected_classifier_column = SelectedClassifierColumn.START
        self._classifier_start_button.checked = 1
        self._classifier_end_button.checked = 0
        self._classifier_exact_button.checked = 0
        self._classifier_column.enabled = False
        print(self._selected_classifier_column)
        return

    def __classifier_end_button_pressed(self):
        self._selected_classifier_column = SelectedClassifierColumn.END
        self._classifier_start_button.checked = 0
        self._classifier_end_button.checked = 1
        self._classifier_exact_button.checked = 0
        self._classifier_column.enabled = False
        print(self._selected_classifier_column)
        return

    def __classifier_exact_button_pressed(self):
        self._selected_classifier_column = SelectedClassifierColumn.EXACT
        self._classifier_start_button.checked = 0
        self._classifier_end_button.checked = 0
        self._classifier_exact_button.checked = 1
        self._classifier_column.enabled = True
        print(self._selected_classifier_column)
        return

    def __resolution_high_button_pressed(self):
        self._selected_resolution = SelectedResolution.HIGH
        self._resolution_high_button.checked = 1
        self._resolution_medium_button.checked = 0
        self._resolution_low_button.checked = 0
        print(self._selected_resolution)
        return

    def __resolution_medium_button_pressed(self):
        self._selected_resolution = SelectedResolution.MEDIUM
        self._resolution_high_button.checked = 0
        self._resolution_medium_button.checked = 1
        self._resolution_low_button.checked = 0
        print(self._selected_resolution)
        return

    def __resolution_low_button_pressed(self):
        self._selected_resolution = SelectedResolution.LOW
        self._resolution_high_button.checked = 0
        self._resolution_medium_button.checked = 0
        self._resolution_low_button.checked = 1
        print(self._selected_resolution)
        return

    def __zoom_selected(self, index):
        self._selected_zoom_method = SelectedZoomMethod(int(self._zoom_selection.value))
        print(self._selected_zoom_method)

    def __clear_logs_button_pressed(self):
        self._event_log.value = 'No error logs to show.'

    def __show_pca_checked(self):
        if self._show_pca.value is False:
            self._generate_pca_file.enabled = False
            self._generate_pca_file.value = True
        else:
            self._generate_pca_file.enabled = True

    def __show_mds_checked(self):
        if self._show_mds.value is False:
            self._generate_mds_file.enabled = False
            self._generate_mds_file.value = True
        else:
            self._generate_mds_file.enabled = True

    def __get_selected_classifier_column(self):
        if self._selected_classifier_column is SelectedClassifierColumn.START:
            return SelectedClassifierColumn.START.name
        if self._selected_classifier_column is SelectedClassifierColumn.END:
            return SelectedClassifierColumn.END.name
        return self._classifier_column.value

    def __show_alert(self, message):
        if self._show_pca.value is False:
            alert = AlertWindow(f'{message} saved successfully')
            alert.show()

    def __generate_pca_pressed(self):
        print('Generating PCA')
        try:
            data_file = self._data_file.value
            print(data_file)
            if data_file is None:
                return
            pca = Pca(input_path=data_file, header_names=self._input_headers.value,
                      use_columns=self._use_columns.value, classifier_column=self.__get_selected_classifier_column())

            output_file = self._output_file.value
            print(output_file)
            if output_file is None:
                return
            pca.set_figure_name(output_file + '_pca')

            print(self._selected_resolution)
            if self._selected_resolution is SelectedResolution.HIGH:
                pca.set_high_resolution()
            elif self._selected_resolution is SelectedResolution.MEDIUM:
                pca.set_medium_resolution()
            else:
                pca.set_low_resolution()

            print(self._dimensions_x.value)
            print(self._dimensions_y.value)
            pca.set_dimensions(int(self._dimensions_x.value), int(self._dimensions_y.value))

            print(self._marker_size.value)
            pca.set_marker_size(int(self._marker_size.value))

            marker_alpha = float(self._marker_alpha.value) / 100
            print(marker_alpha)
            pca.set_marker_alpha(marker_alpha)

            print(self._axis_font_size.value)
            pca.set_label_font_size(int(self._axis_font_size.value))

            print(self._axis_name_x.value)
            print(self._axis_name_y.value)
            pca.set_axis_labels(self._axis_name_x.value, self._axis_name_y.value)

            x_start = float(self._x_start.value)
            x_end = float(self._x_end.value)
            y_start = float(self._y_start.value)
            y_end = float(self._y_end.value)
            print(self._selected_zoom_method)
            print(x_start)
            print(x_end)
            print(y_start)
            print(y_end)
            if self._selected_zoom_method is SelectedZoomMethod.PADDING:
                pca.set_padding(x_start=x_start, x_end=x_end, y_start=y_start, y_end=y_end)
            else:
                pca.set_exact(x_start=x_start, x_end=x_end, y_start=y_start, y_end=y_end)

            pca.output(show=self._show_pca.value, save=self._generate_pca_file.value)
            self.__show_alert(output_file + '_pca')
        except Exception:
            self._event_log.value = traceback.format_exc(limit=1)

    def __generate_mds_pressed(self):
        print('Generating MDS')
        try:
            data_file = self._data_file.value
            print(data_file)
            if data_file is None:
                return
            mds = Mds(input_path=data_file, header_names=self._input_headers.value,
                      use_columns=self._use_columns.value, classifier_column=self.__get_selected_classifier_column())

            output_file = self._output_file.value
            print(output_file)
            if output_file is None:
                return
            mds.set_figure_name(output_file + '_mds')

            print(self._selected_resolution)
            if self._selected_resolution is SelectedResolution.HIGH:
                mds.set_high_resolution()
            elif self._selected_resolution is SelectedResolution.MEDIUM:
                mds.set_medium_resolution()
            else:
                mds.set_low_resolution()

            print(self._dimensions_x.value)
            print(self._dimensions_y.value)
            mds.set_dimensions(int(self._dimensions_x.value), int(self._dimensions_y.value))

            print(self._marker_size.value)
            mds.set_marker_size(int(self._marker_size.value))

            marker_alpha = float(self._marker_alpha.value) / 100
            print(marker_alpha)
            mds.set_marker_alpha(marker_alpha)

            print(self._axis_font_size.value)
            mds.set_label_font_size(int(self._axis_font_size.value))

            print(self._axis_name_x.value)
            print(self._axis_name_y.value)
            mds.set_axis_labels(self._axis_name_x.value, self._axis_name_y.value)

            x_start = float(self._x_start.value)
            x_end = float(self._x_end.value)
            y_start = float(self._y_start.value)
            y_end = float(self._y_end.value)
            print(self._selected_zoom_method)
            print(x_start)
            print(x_end)
            print(y_start)
            print(y_end)
            if self._selected_zoom_method is SelectedZoomMethod.PADDING:
                mds.set_padding(x_start=x_start, x_end=x_end, y_start=y_start, y_end=y_end)
            else:
                mds.set_exact(x_start=x_start, x_end=x_end, y_start=y_start, y_end=y_end)

            mds.output(show=self._show_mds.value, save=self._generate_mds_file.value)
            self.__show_alert(output_file + '_mds')
        except Exception:
            self._event_log.value = traceback.format_exc(limit=1)
