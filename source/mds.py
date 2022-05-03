from sklearn.manifold import MDS
from sklearn.preprocessing import MinMaxScaler

from source import plot
from source.clusterization_method import ClusterizationMethod


class Mds(ClusterizationMethod):
    def __init__(self, input_path, header_names, use_columns, classifier_column):
        super().__init__(input_path, header_names, use_columns, classifier_column)

        scaler = MinMaxScaler()
        self._x_minmax = scaler.fit_transform(self._x)

        print(self._x_minmax)

        mds = MDS(n_components=2, random_state=0, n_init=2, n_jobs=1, max_iter=100)
        self._x_2d = mds.fit_transform(self._x_minmax)
        print(self._x_2d)

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
