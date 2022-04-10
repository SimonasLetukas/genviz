# import pandas as pd
# import numpy as np
# from matplotlib import pyplot as plt
# from sklearn.datasets import load_iris
# from sklearn.preprocessing import StandardScaler
#
# class convers_pca():
#     def __init__(self, no_of_components):
#         self.no_of_components = no_of_components
#         self.eigen_values = None
#         self.eigen_vectors = None
#
#     def transform(self, x):
#         return np.dot(x - self.mean, self.projection_matrix.T)
#
#     def inverse_transform(self, x):
#         return np.dot(x, self.projection_matrix) + self.mean
#
#     def fit(self, x):
#         self.no_of_components = x.shape[1] if self.no_of_components is None else self.no_of_components
#         self.mean = np.mean(x, axis=0)
#
#         cov_matrix = np.cov(x - self.mean, rowvar=False)
#
#         self.eigen_values, self.eigen_vectors = np.linalg.eig(cov_matrix)
#         self.eigen_vectors = self.eigen_vectors.T
#
#         self.sorted_components = np.argsort(self.eigen_values)[::-1]
#
#         self.projection_matrix = self.eigen_vectors[self.sorted_components[:self.no_of_components]]
#         self.explained_variance = self.eigen_values[self.sorted_components]
#         self.explained_variance_ratio = self.explained_variance / self.eigen_values.sum()
#
# iris = load_iris()
# df = pd.DataFrame(data=iris.data, columns=iris.feature_names)
# df['class'] = iris.target
#
# x = df.drop(labels='class', axis=1).values
# y = df['class'].values
#
# std = StandardScaler()
# transformed = StandardScaler().fit_transform(x)
#
# pca = convers_pca(no_of_components=2)
# pca.fit(transformed)
# # print(f"eigen_vectors: {convers_pca.eigen_vectors}")
# # print(f"eigen_values: {convers_pca.eigen_values}")
# # print(f"sorted_components: {convers_pca.sorted_components}")
#
# x_std = pca.transform(transformed)
# plt.figure()
# plt.scatter(x_std[:, 0], x_std[:, 1], c=y)
# plt.show()

# img = plt.matshow(cov_data, cmap=plt.cm.rainbow)
# plt.colorbar(img, ticks=[-1, 0, 1], fraction=0.045)
# for x in range(cov_data.shape[0]):
#     for y in range(cov_data.shape[1]):
#         plt.text(x, y, "%0.2f" % cov_data[x, y], size=12, color='black', ha="center", va="center")
#
# plt.show()
import pandas
from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler
from bioinfokit.analys import get_data
from bioinfokit.visuz import cluster
from os.path import exists

# load iris dataset
# df = get_data('iris').data
# df.to_csv('iris_data.txt')

input_path = "lithuanian_genotype.map"
# output_path = "lithuanian_genotype.csv"

#if not exists(output_path):
#     file = open(output_path, 'a')
#     file.write('chromosome,rs#,genetic distance (morgans),base-pair position (bp units)\n')
#     with open(input_path) as input_file:
#         (line.strip().split('\t') for line in input_file)

df = pandas.read_csv(input_path,
                     delimiter='\t',
                     header=None,
                     names=['chromosome', 'rs#', 'genetic distance (morgans)', 'base-pair position (bp units)'])

# kiek stulpeliu
print(df.head(2))

# print(df.read())
#    all rows, cols
X = df.iloc[:, 2:4]
target = df['rs#'].to_numpy()
# stulpeliai be klases
print(X.head(2))

X_st = StandardScaler().fit_transform(X)
pca_out = PCA().fit(X_st)

loadings = pca_out.components_

# get eigenvalues (variance explained by each PC) -- tikrines reiksmes
print(pca_out.explained_variance_)

pca_scores = PCA().fit_transform(X_st)
cluster.biplot(cscore=pca_scores,
               loadings=loadings,
               labels=X.columns.values,
               var1=round(pca_out.explained_variance_ratio_[0]*100, 2),
               var2=round(pca_out.explained_variance_ratio_[1]*100, 2),
               colorlist=target,
               show=0,
               )
