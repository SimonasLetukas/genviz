# -*- mode: python ; coding: utf-8 -*-


block_cipher = None


a = Analysis(
    ['source\\main.py'],
    pathex=['venv\\Lib\\site-packages'],
    binaries=[],
    datas=[('venv\\Lib\\site-packages\\pyforms_gui\\controls\\*.ui', 'pyforms_gui\\controls' )],
    hiddenimports=['source', 'functions', 'gui', 'mds', 'pca', 'plot', 'projection_method', 'sklearn.utils._typedefs', 'sklearn.utils', 'sklearn.tree._utils', 'sklearn.neighbors', 'sklearn.neighbors._partition_nodes', 'sklearn.neighbors.quad_tree', 'sklearn.neighbors.typedefs', 'sklearn.utils._cython_blas', 'scipy.special.gammaln', 'pyforms_gui', 'pyforms_gui.resources_settings'],
    hookspath=['hooks'],
    hooksconfig={},
    runtime_hooks=[],
    excludes=[],
    win_no_prefer_redirects=False,
    win_private_assemblies=False,
    cipher=block_cipher,
    noarchive=False,
)
pyz = PYZ(a.pure, a.zipped_data, cipher=block_cipher)

exe = EXE(
    pyz,
    a.scripts,
    a.binaries,
    a.zipfiles,
    a.datas,
    [],
    name='main',
    debug=False,
    bootloader_ignore_signals=False,
    strip=False,
    upx=True,
    upx_exclude=[],
    runtime_tmpdir=None,
    console=True,
    disable_windowed_traceback=False,
    argv_emulation=False,
    target_arch=None,
    codesign_identity=None,
    entitlements_file=None,
)
