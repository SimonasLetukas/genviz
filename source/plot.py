import numpy as numpy
from matplotlib import pyplot as pyplot
from matplotlib.colors import ListedColormap


# from https://github.com/reneshbedre/bioinfokit/blob/master/bioinfokit/visuz.py
def biplot(cscore=None, loadings=None, labels=None, var1=None, var2=None, var3=None, axlabelfontsize=9,
           axlabelfontname="Arial", figname='biplot_2d', show=False, save=True,
           figtype='png', r=300, markerdot="o", dotsize=6, valphadot=1, colordot='#eba487',
           arrowcolor='#87ceeb', xpadstart=0.2, xpadend=0.2, ypadstart=0.2, ypadend=0.2, limitisexact=0,
           valphaarrow=1, arrowlinestyle='-', arrowlinewidth=0.5, centerlines=True, colorlist=None,
           legendpos='best',
           datapoints=True, dim=(6, 4), theme=None):

    if theme == 'dark':
        pyplot.style.use('dark_background')
    assert cscore is not None and loadings is not None and labels is not None and var1 is not None and var2 is not None, \
        "cscore or loadings or labels or var1 or var2 are missing"
    if var1 is not None and var2 is not None and var3 is None:
        print('cscore')
        print(cscore)
        print('cscore[:, 0]')
        print(cscore[:, 0])
        print('cscore[:, 1]')
        print(cscore[:, 1])
        xscale = 1.0 / (cscore[:, 0].max() - cscore[:, 0].min())
        yscale = 1.0 / (cscore[:, 1].max() - cscore[:, 1].min())

        pyplot.subplots(figsize=dim)
        if datapoints:
            if colorlist is not None:
                unique_class = set(colorlist)
                assign_values = {col: i for i, col in enumerate(unique_class)}
                color_result_num = [assign_values[i] for i in colorlist]
                if colordot and isinstance(colordot, (tuple, list)):
                    colour_map = ListedColormap(colordot)
                    s = pyplot.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, c=color_result_num,
                                       cmap=colour_map,
                                       s=dotsize, alpha=valphadot, marker=markerdot)
                    pyplot.legend(handles=s.legend_elements()[0], labels=list(unique_class), loc=legendpos)
                elif colordot and not isinstance(colordot, (tuple, list)):
                    s = pyplot.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, c=color_result_num, s=dotsize,
                                       alpha=valphadot, marker=markerdot)
                    pyplot.legend(handles=s.legend_elements()[0], labels=list(unique_class), loc=legendpos)
            else:
                pyplot.scatter(cscore[:, 0] * xscale, cscore[:, 1] * yscale, color=colordot, s=dotsize,
                               alpha=valphadot, marker=markerdot)
        if centerlines:
            pyplot.axhline(y=0, linestyle='--', color='#7d7d7d', linewidth=1)
            pyplot.axvline(x=0, linestyle='--', color='#7d7d7d', linewidth=1)

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

        x_label = "PC1 ({}%)".format(var1)
        y_label = "PC2 ({}%)".format(var2)
        pyplot.xlabel(x_label, fontsize=axlabelfontsize, fontname=axlabelfontname)
        pyplot.ylabel(y_label, fontsize=axlabelfontsize, fontname=axlabelfontname)

        if save:
            pyplot.savefig(figname + '.' + figtype, format=figtype, bbox_inches='tight', dpi=r)

        if show:
            pyplot.show()

        # Return theme to default
        if theme == 'dark':
            pyplot.style.use('default')


def scatter(x_2d=None, target=None, axlabelfontsize=9, axlabelfontname="Arial", figname='scatter_2d',
            figtype='png', r=300, show=False, save=True,
            markerdot="o", dotsize=6, valphadot=1, colordot='#eba487',
            arrowcolor='#87ceeb', xpadstart=0.2, xpadend=0.2, ypadstart=0.2, ypadend=0.2, limitisexact=0,
            valphaarrow=1, arrowlinestyle='-', arrowlinewidth=0.5, centerlines=True,
            legendpos='best', dim=(6, 4), theme=None):

    if theme == 'dark':
        pyplot.style.use('dark_background')

    assert x_2d is not None and target is not None, "x_2d or target cannot be empty"

    pyplot.subplots(figsize=dim)

    unique_class = set(target)
    assign_values = {col: i for i, col in enumerate(unique_class)}
    color_result_num = [assign_values[i] for i in target]

    if colordot and isinstance(colordot, (tuple, list)):
        colour_map = ListedColormap(colordot)
        s = pyplot.scatter(x_2d[:, 0], x_2d[:, 1], c=color_result_num, s=dotsize,
                           alpha=valphadot, marker=markerdot, cmap=colour_map)
        pyplot.legend(handles=s.legend_elements()[0], labels=list(unique_class), loc=legendpos)
    elif colordot and not isinstance(colordot, (tuple, list)):
        s = pyplot.scatter(x_2d[:, 0], x_2d[:, 1], c=color_result_num, s=dotsize,
                           alpha=valphadot, marker=markerdot)
        pyplot.legend(handles=s.legend_elements()[0], labels=list(unique_class), loc=legendpos)

    if centerlines:
        pyplot.axhline(y=0, linestyle='--', color='#7d7d7d', linewidth=1)
        pyplot.axvline(x=0, linestyle='--', color='#7d7d7d', linewidth=1)

    if limitisexact == 0:
        xlimit_max = numpy.max(x_2d[:, 0])
        xlimit_min = numpy.min(x_2d[:, 0])
        ylimit_max = numpy.max(x_2d[:, 1])
        ylimit_min = numpy.min(x_2d[:, 1])
        pyplot.xlim(xlimit_min - xpadstart, xlimit_max + xpadend)
        pyplot.ylim(ylimit_min - ypadstart, ylimit_max + ypadend)
    else:
        pyplot.xlim(xpadstart, xpadend)
        pyplot.ylim(ypadstart, ypadend)

    # What to put in the axis labels?
    # x_label = "PC1 ({}%)".format(var1)
    # y_label = "PC2 ({}%)".format(var2)
    # pyplot.xlabel(x_label, fontsize=axlabelfontsize, fontname=axlabelfontname)
    # pyplot.ylabel(y_label, fontsize=axlabelfontsize, fontname=axlabelfontname)

    if save:
        pyplot.savefig(figname + '.' + figtype, format=figtype, bbox_inches='tight', dpi=r)

    if show:
        pyplot.show()

    # Return theme to default
    if theme == 'dark':
        pyplot.style.use('default')
