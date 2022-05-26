from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler

import plot
from projection_method import ProjectionMethod


class Pca(ProjectionMethod):
    def __init__(self, input_path, header_names, use_columns, classifier_column):
        super().__init__(input_path, header_names, use_columns, classifier_column)

        self._x_st = StandardScaler().fit_transform(self._x)
        self._pca_out = PCA(n_components=2).fit(self._x_st)

        self._loadings = self._pca_out.components_

        print(self._pca_out.explained_variance_)

        self._pca_scores = PCA().fit_transform(self._x_st)

    def output(self, show=0, save=1):
        plot.biplot(figname=self._figname,
                    cscore=self._pca_scores,
                    loadings=self._loadings,
                    labels=self._x.columns.values,
                    var1=round(self._pca_out.explained_variance_ratio_[0] * 100, 2),
                    var2=round(self._pca_out.explained_variance_ratio_[1] * 100, 2),
                    colorlist=self._target,
                    show=show,
                    save=save,
                    xaxisname=self._axis_name_x,
                    yaxisname=self._axis_name_y,
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
