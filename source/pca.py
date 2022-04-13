import pandas as pandas
from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler

import plot

RESOLUTION_HIGH = 1000
RESOLUTION_MEDIUM = 500
RESOLUTION_LOW = 100


class Pca:
    def __init__(self, input_path):
        # set defaults
        self._figname = 'biplot_2d'
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

        self._df = pandas.read_csv(input_path, delimiter='\t', header=None, names=['chromosome',
                                                                                   'rs#',
                                                                                   'genetic distance (morgans)',
                                                                                   'base-pair position (bp units)'])

        print(self._df.head(2))

        self._x = self._df.iloc[:, 2:4]
        self._target = self._df['rs#'].to_numpy()

        print(self._x.head(2))

        self._x_st = StandardScaler().fit_transform(self._x)
        self._pca_out = PCA(n_components=2).fit(self._x_st)

        self._loadings = self._pca_out.components_

        print(self._pca_out.explained_variance_)

        self._pca_scores = PCA().fit_transform(self._x_st)

    def set_figure_name(self, value):
        self._figname = value

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
        plot.biplot(figname=self._figname,
                    cscore=self._pca_scores,
                    loadings=self._loadings,
                    labels=self._x.columns.values,
                    var1=round(self._pca_out.explained_variance_ratio_[0] * 100, 2),
                    var2=round(self._pca_out.explained_variance_ratio_[1] * 100, 2),
                    colorlist=self._target,
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
