import pandas
from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler
from bioinfokit.analys import get_data
from bioinfokit.visuz import cluster
from os.path import exists

input_path = "lithuanian_genotype.map"

df = pandas.read_csv(input_path,
                     delimiter='\t',
                     header=None,
                     names=['chromosome', 'rs#', 'genetic distance (morgans)', 'base-pair position (bp units)'])

print(df.head(2))

X = df.iloc[:, 2:4]
target = df['rs#'].to_numpy()

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



