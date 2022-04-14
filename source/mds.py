import traceback

from sklearn.manifold import MDS
from sklearn.preprocessing import MinMaxScaler
import pandas as pandas

from source import plot

RESOLUTION_HIGH = 1000
RESOLUTION_MEDIUM = 500
RESOLUTION_LOW = 100


class Mds:
    def __init__(self, input_path, header_names, use_columns, classifier_column):
        # set defaults
        self._figname = 'mds'
        self._r = RESOLUTION_MEDIUM
        self._axlabelfontsize = 8
        self._markerdot = 'o'
        self._dotsize = 2
        self._valphadot = 0.8
        self._dim = (10, 10)
        self._xpadstart = 0.2
        self._xpadend = 0.2
        self._ypadstart = 0.2
        self._ypadend = 0.2
        self._isexact = 0

        names = None if header_names is None or header_names.strip() == '' \
            else header_names.strip().split(',')

        usecols = None if use_columns is None or use_columns.strip() is False \
            else [x - 1 for x in [int(x) for x in use_columns.split(',') if x.strip().isdigit()]]

        self._df = pandas.read_csv(input_path, sep=None, header='infer', engine='python', usecols=usecols, names=names)

        print(self._df.head(2))

        col_count = self._df.shape[1]
        cols_without_classifier = [x for x in range(col_count) if x != int(classifier_column) - 1]

        self._x = self._df.iloc[:, cols_without_classifier]
        self._target = self._df.iloc[:, int(classifier_column) - 1].to_numpy()

        try:
            scaler = MinMaxScaler()
            self._x_minmax = scaler.fit_transform(self._x)

            print(self._x_minmax)

            mds = MDS(n_components=2, random_state=0, n_init=2, n_jobs=1, max_iter=100)
            self._x_2d = mds.fit_transform(self._x_minmax)
            print(self._x_2d)
        except Exception:
            print(traceback.format_exc())

    def set_figure_name(self, value):
        self._figname = value + '_mds'

    def set_high_resolution(self):
        self._r = RESOLUTION_HIGH

    def set_medium_resolution(self):
        self._r = RESOLUTION_MEDIUM

    def set_low_resolution(self):
        self._r = RESOLUTION_LOW

    def set_label_font_size(self, value):
        self._axlabelfontsize = value

    def set_marker_format(self, value):
        self._markerdot = value

    def set_marker_size(self, value):
        self._dotsize = value

    def set_marker_alpha(self, value):
        self._valphadot = value

    def set_dimensions(self, x, y):
        self._dim = (x, y)

    def set_padding(self, x_start, x_end, y_start, y_end):
        self._xpadstart = x_start
        self._xpadend = x_end
        self._ypadstart = y_start
        self._ypadend = y_end
        self._isexact = 0

    def set_exact(self, x_start, x_end, y_start, y_end):
        self._xpadstart = x_start
        self._xpadend = x_end
        self._ypadstart = y_start
        self._ypadend = y_end
        self._isexact = 1

    def output(self, show=0):
        plot.scatter(figname=self._figname,
                     x_2d=self._x_2d,
                     target=self._target,
                     show=show,
                     axlabelfontsize=self._axlabelfontsize,
                     r=self._r,
                     markerdot=self._markerdot,
                     dotsize=self._dotsize,
                     valphadot=self._valphadot,
                     dim=self._dim,
                     xpadstart=self._xpadstart,
                     xpadend=self._xpadend,
                     ypadstart=self._ypadstart,
                     ypadend=self._ypadend,
                     limitisexact=self._isexact)
