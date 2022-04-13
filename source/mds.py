import traceback

from sklearn.manifold import MDS
from sklearn.preprocessing import MinMaxScaler
import pandas as pandas

from source import plot

RESOLUTION_HIGH = 1000
RESOLUTION_MEDIUM = 500
RESOLUTION_LOW = 100


class Mds:
    def __init__(self, input_path):
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

        self._df = pandas.read_csv(input_path, delimiter='\t', header=None, names=['chromosome',
                                                                                   'rs#',
                                                                                   'genetic distance (morgans)',
                                                                                   'base-pair position (bp units)'])

        self._x = self._df.iloc[:, 2:4]
        self._target = self._df['rs#'].to_numpy()
        print(self._target)

        try:
            scaler = MinMaxScaler()
            self._x_minmax = scaler.fit_transform(self._x)

            print(self._x_minmax)

            mds = MDS(n_components=2, random_state=0, n_init=2, n_jobs=1, max_iter=100)
            self._x_2d = mds.fit_transform(self._x_minmax)
            print(self._x_2d)
        except Exception:
            print(traceback.format_exc())

        plot.scatter(figname=self._figname,
                     x_2d=self._x_2d,
                     target=self._target,
                     show=1,
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


