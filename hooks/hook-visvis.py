from PyInstaller.utils.hooks import collect_all
from visvis import freezeHelp

datas, binaries, hiddenimports = collect_all('visvis')
datas.extend(freezeHelp.collectResourcePaths())
