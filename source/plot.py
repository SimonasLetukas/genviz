import numpy as numpy
from matplotlib import pyplot as pyplot
from matplotlib.colors import ListedColormap


# from https://github.com/reneshbedre/bioinfokit/blob/master/bioinfokit/visuz.py
def biplot(cscore=None, loadings=None, labels=None, var1=None, var2=None, var3=None, axlabelfontsize=9,
           axlabelfontname="Arial", figname='biplot_2d',
           figtype='png', r=300, show=False, markerdot="o", dotsize=6, valphadot=1, colordot='#eba487',
           arrowcolor='#87ceeb', xpadstart=0.2, xpadend=0.2, ypadstart=0.2, ypadend=0.2, limitisexact=0,
           valphaarrow=1, arrowlinestyle='-', arrowlinewidth=0.5, centerlines=True, colorlist=None,
           legendpos='best',
           datapoints=True, dim=(6, 4), theme=None):
    if theme == 'dark':
        pyplot.style.use('dark_background')
    assert cscore is not None and loadings is not None and labels is not None and var1 is not None and var2 is not None, \
        "cscore or loadings or labels or var1 or var2 are missing"
    if var1 is not None and var2 is not None and var3 is None:
        xscale = 1.0 / (cscore[:, 0].max() - cscore[:, 0].min())
        yscale = 1.0 / (cscore[:, 1].max() - cscore[:, 1].min())

        # colorlist is an array of classes from dataframe column
        pyplot.subplots(figsize=dim)
        if datapoints:
            if colorlist is not None:
                unique_class = set(colorlist)
                # color_dict = dict()
                assign_values = {col: i for i, col in enumerate(unique_class)}
                color_result_num = [assign_values[i] for i in colorlist]
                if colordot and isinstance(colordot, (tuple, list)):
                    colour_map = ListedColormap(colordot)
                    # for i in range(len(list(unique_class))):
                    #    color_dict[list(unique_class)[i]] = colordot[i]
                    # color_result = [color_dict[i] for i in colorlist]
                    s = pyplot.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, c=color_result_num,
                                       cmap=colour_map,
                                       s=dotsize, alpha=valphadot, marker=markerdot)
                    pyplot.legend(handles=s.legend_elements()[0], labels=list(unique_class), loc=legendpos)
                elif colordot and not isinstance(colordot, (tuple, list)):
                    # s = plt.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, color=color_result, s=dotsize,
                    #                alpha=valphadot, marker=markerdot)
                    # plt.legend(handles=s.legend_elements()[0], labels=list(unique_class))
                    s = pyplot.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, c=color_result_num, s=dotsize,
                                       alpha=valphadot, marker=markerdot)
                    pyplot.legend(handles=s.legend_elements()[0], labels=list(unique_class), loc=legendpos)
            else:
                pyplot.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, color=colordot, s=dotsize,
                               alpha=valphadot, marker=markerdot)
        if centerlines:
            pyplot.axhline(y=0, linestyle='--', color='#7d7d7d', linewidth=1)
            pyplot.axvline(x=0, linestyle='--', color='#7d7d7d', linewidth=1)
        # loadings[0] is the number of the original variables
        # this is important where variables more than number of observations
        # Labelling together with zooming does not work right now:
        # for i in range(len(loadings[0])):
        #     pyplot.arrow(0, 0, loadings[0][i], loadings[1][i], color=arrowcolor, alpha=valphaarrow,
        #                  ls=arrowlinestyle,
        #                  lw=arrowlinewidth, label=labels[i])
        #     #pyplot.text(loadings[0][i] - xpadend, loadings[1][i] - ypadend, labels[i])

        # xlimit_max = numpy.max([numpy.max(cscore[:, 0] * xscale), numpy.max(loadings[0])])
        # xlimit_min = numpy.min([numpy.min(cscore[:, 0] * xscale), numpy.min(loadings[0])])
        # ylimit_max = numpy.max([numpy.max(cscore[:, 1] * yscale), numpy.max(loadings[1])])
        # ylimit_min = numpy.min([numpy.min(cscore[:, 1] * yscale), numpy.min(loadings[1])])

        print(cscore[:, 0])

        if limitisexact == 0:
            xlimit_max = numpy.max(cscore[:, 0] * xscale)
            xlimit_min = numpy.min(cscore[:, 0] * xscale)
            ylimit_max = numpy.max(cscore[:, 1] * yscale)
            ylimit_min = numpy.min(cscore[:, 1] * yscale)
            pyplot.xlim(xlimit_min - xpadstart, xlimit_max + xpadend)
            pyplot.ylim(ylimit_min - ypadstart, ylimit_max + ypadend)
        else:
            pyplot.xlim(xpadstart, xpadend)
            pyplot.ylim(ypadstart, ypadend)

        print(limitisexact)

        x_label = "PC1 ({}%)".format(var1)
        y_label = "PC2 ({}%)".format(var2)
        pyplot.xlabel(x_label, fontsize=axlabelfontsize, fontname=axlabelfontname)
        pyplot.ylabel(y_label, fontsize=axlabelfontsize, fontname=axlabelfontname)

        print(figname)

        if show:
            pyplot.show()
        else:
            pyplot.savefig(figname + '.' + figtype, format=figtype, bbox_inches='tight', dpi=r)
            pyplot.clf()
            pyplot.close()
        if theme == 'dark':
            pyplot.style.use('default')
