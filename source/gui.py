from enum import Enum

from pyforms import BaseWidget
from pyforms.controls import ControlFile
from pyforms.controls import ControlText
from pyforms.controls import ControlSlider
from pyforms.controls import ControlButton
from pyforms.controls import ControlLabel
from pyforms.controls import ControlNumber
from pyforms.controls import ControlCombo
from pyforms.controls import ControlCheckBox

from source.mds import Mds
from source.pca import Pca


class SelectedResolution(Enum):
    LOW = 1
    MEDIUM = 2
    HIGH = 3


class SelectedZoomMethod(Enum):
    PADDING = 1
    EXACT = 2


class Gui(BaseWidget):
    def __init__(self, *args, **kwargs):
        super().__init__('genviz')

        self.set_margin(30)

        self._data_file = ControlFile('.map file location: ')
        self._data_file.changed_event = self.__data_file_selected
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

        self._dimensions_x = ControlNumber('Horizontal diagram size: ', default=10)
        self._dimensions_y = ControlNumber('Vertical diagram size: ', default=10)

        self._marker_size = ControlSlider('Size of the marker: ', minimum=1, maximum=100, default=3)
        self._marker_alpha = ControlSlider('Alpha value of the marker: ', minimum=0, maximum=100, default=80,
                                           helptext='Alpha of 100 has no transparency while alpha of 0 is fully transparent')

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

        self._generate_mds_button = ControlButton('Generate MDS')
        self._generate_mds_button.value = self.__generate_mds_pressed

        self._show_mds = ControlCheckBox('Preview')

        self._formset = [
            'File setup',
            '_data_file',
            '_output_file',
            '',
            'View options',
            ('_resolution_label', '_resolution_low_button', '_resolution_medium_button', '_resolution_high_button'),
            ('_dimensions_x', '_dimensions_y'),
            ('_marker_size', '_marker_alpha'),
            '_zoom_selection',
            ('_x_start', '_x_end', '_y_start', '_y_end'),
            '',
            ('_generate_pca_button', '=', '_show_pca'),
            '',
            ('_generate_mds_button', '=', '_show_mds')
        ]

    def __data_file_selected(self):
        if self._data_file is None:
            return
        if not self._data_file.value.lower().endswith('.map'):
            print('Not .map file')
            self._data_file.changed_event = self.__empty_event
            self._data_file.value = None
            self._data_file.changed_event = self.__data_file_selected
        print(self._data_file.value)

    def __empty_event(self):
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

    def __generate_pca_pressed(self):
        print('Generating PCA')

        data_file = self._data_file.value
        print(data_file)
        if data_file is None:
            return
        pca = Pca(data_file)

        output_file = self._output_file.value
        print(output_file)
        if output_file is None:
            return
        pca.set_figure_name(output_file)

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

        pca.output(show=self._show_pca.value)

    def __generate_mds_pressed(self):
        print('Generating MDS')

        data_file = self._data_file.value
        print(data_file)
        if data_file is None:
            return
        mds = Mds(data_file)
