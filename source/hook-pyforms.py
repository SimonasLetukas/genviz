from PyInstaller.utils.hooks import collect_data_files

hiddenimports = ["pyforms.settings", "pyforms.gui.settings", "pyforms.controls", "pyforms.terminal"]

datas = collect_data_files('pyforms')
