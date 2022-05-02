/* Generated code for Python module 'OpenGL.raw.GL.VERSION.GL_2_0'
 * created by Nuitka version 0.8rc9
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_OpenGL$raw$GL$VERSION$GL_2_0" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GL$VERSION$GL_2_0;
PyDictObject *moduledict_OpenGL$raw$GL$VERSION$GL_2_0;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[358];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[358];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GL.VERSION.GL_2_0"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 358; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenGL$raw$GL$VERSION$GL_2_0(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 358; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fca64db5cb9ae9c9846166ae88bc4a65;
static PyCodeObject *codeobj_0a614d8b29672287558c8cf3af3e562f;
static PyCodeObject *codeobj_dafa36f40b48a61d3dc1532f521156d8;
static PyCodeObject *codeobj_fb6d83c2e2cc8a461a2e749a1c1277c4;
static PyCodeObject *codeobj_9b84067eb94074d5ae80fccc9e92c348;
static PyCodeObject *codeobj_77cba6ff91564cb7752cd5e14157c29c;
static PyCodeObject *codeobj_51f89ffce032947a3f8f1e1524fbba02;
static PyCodeObject *codeobj_1528c21735a1c7537092691c45551e80;
static PyCodeObject *codeobj_fb52912eb5ff9958c549ab85915ef8b8;
static PyCodeObject *codeobj_4824734a706fdf8a8a32cad194233167;
static PyCodeObject *codeobj_1533894a8b70c135277d0b08c3655a09;
static PyCodeObject *codeobj_e965436de1efbdefa90084481e14ecce;
static PyCodeObject *codeobj_def688c0a3dd4ea1c799a7b5928197ab;
static PyCodeObject *codeobj_6327dcec03d89d214a1d5d3dff13f8b3;
static PyCodeObject *codeobj_427150ca3a152c389c76aed9929f51a9;
static PyCodeObject *codeobj_1f6c870d28288ca3d6f815cc07cc1a2c;
static PyCodeObject *codeobj_38ddb8944e715f0d52ea24836fd40e31;
static PyCodeObject *codeobj_c0adf79ee600149feefde67e856b3eea;
static PyCodeObject *codeobj_93596fb417bb89394247e8f9d11c0216;
static PyCodeObject *codeobj_ebf955e121181b6ec9377476e6fb866b;
static PyCodeObject *codeobj_86501ce2e251c0f1da8d7a3764b827ad;
static PyCodeObject *codeobj_a99350508c9a650ea537bca55f2a67fd;
static PyCodeObject *codeobj_70575edaa23b396dcf66b781507585c0;
static PyCodeObject *codeobj_919ba2ade033ff226a79601c7dbe308b;
static PyCodeObject *codeobj_19498598bb6b20863edc4c38688a81ff;
static PyCodeObject *codeobj_ed4f09e6a46c5f132b8e9b7e55ca04ab;
static PyCodeObject *codeobj_0ef017ac764544b76b25129a6defd5c4;
static PyCodeObject *codeobj_7f098d7bf5bf1c9c563e4da0e9ff9860;
static PyCodeObject *codeobj_8cf820147dbc96eca1b1e38007bb3968;
static PyCodeObject *codeobj_1271d9fb43b5f1afe25fc7fad90bb7a0;
static PyCodeObject *codeobj_5762ce30392b28759feb9a3029807b3e;
static PyCodeObject *codeobj_a9e4f0f5120070e055267891078665cf;
static PyCodeObject *codeobj_ffebcd53af6fc4c8366687f66deae99c;
static PyCodeObject *codeobj_dedbbce9d5d634e9ec88ac9d1559ee31;
static PyCodeObject *codeobj_58323943808f4dba27017c7ed8c87686;
static PyCodeObject *codeobj_5438a4d38408505157d4d1e50100ba9e;
static PyCodeObject *codeobj_f917b24b0b0b99eec6836a950a08291e;
static PyCodeObject *codeobj_5c8dbcfce8011d6c9bb98f17f0480383;
static PyCodeObject *codeobj_cee007f9269ab7f444e61a42f7dd6307;
static PyCodeObject *codeobj_552a3ec465fa51e4a8a7d92ba4762674;
static PyCodeObject *codeobj_c6d70876057b26aa779c7a3c2c136078;
static PyCodeObject *codeobj_aeeebbd1029e5ea3594e60ce784b9a4e;
static PyCodeObject *codeobj_2b04ff4df993324ed5971df1e64e26f2;
static PyCodeObject *codeobj_26c933283931a25dc707f2616395f7fc;
static PyCodeObject *codeobj_5eeca0b075544eed3eb0ab404d6d1420;
static PyCodeObject *codeobj_dcdcc3e868b71dfd9d366809ae2ce168;
static PyCodeObject *codeobj_c769bb9e072876570aad164de43bfd14;
static PyCodeObject *codeobj_a5a4b131a029af55b670c47e921b7dac;
static PyCodeObject *codeobj_9769bc2d35b3c9cf72f486f7fe03af04;
static PyCodeObject *codeobj_be10a012df439f1c0ac596aca01ef7d8;
static PyCodeObject *codeobj_52181a2886059c34b256826c70230338;
static PyCodeObject *codeobj_e9c21da2b78a138e47667c2dc1b7ebf4;
static PyCodeObject *codeobj_9709b08cb3f67c6037affe10ebe19865;
static PyCodeObject *codeobj_9312c1c8fe62ec0cd9260092b0b3a3fc;
static PyCodeObject *codeobj_8d683224995c87f9c6d501a078cd4240;
static PyCodeObject *codeobj_fb87173bb8973ec3d04fc7c2d05bcc86;
static PyCodeObject *codeobj_5830ffe603a4581a28927522d93ad909;
static PyCodeObject *codeobj_07ed58f5ef8eb1a5fd27b4823b080c5c;
static PyCodeObject *codeobj_d1b945d9219e4324a1539c0ac127a352;
static PyCodeObject *codeobj_30ac47b1f0dfb97f2a972952751cea23;
static PyCodeObject *codeobj_7204ea5b1bcea2ad015d008cc7d6979a;
static PyCodeObject *codeobj_e6a20ed7200ae88ab485b23c039932b1;
static PyCodeObject *codeobj_52ed856440fae67bbb45aa0d07f4d925;
static PyCodeObject *codeobj_ef2c1f33fa9fae4fd06484fcefc9de2c;
static PyCodeObject *codeobj_f64b865b02bbd0939f4205e81d4ccced;
static PyCodeObject *codeobj_d95f31c920ae8452233b8e42ccbf6d83;
static PyCodeObject *codeobj_291488757d6bf7b6a2bf56377ce58fbc;
static PyCodeObject *codeobj_6c67d5c02636be599fbcdb79f35a0c19;
static PyCodeObject *codeobj_1ce0e19b58eb4559be970d6e597b225b;
static PyCodeObject *codeobj_07dc88751ce0a5ea152e5b920caa7060;
static PyCodeObject *codeobj_24acc8b390b1002d222a6b06f6c69cd4;
static PyCodeObject *codeobj_931fc0cca226b34724225493e68682ab;
static PyCodeObject *codeobj_2e35c1e463509981f0287e636f32a8a2;
static PyCodeObject *codeobj_38e35ef80759e8a8f913fc3497fcf935;
static PyCodeObject *codeobj_6508b19a8ac39644ab8047e703515150;
static PyCodeObject *codeobj_8ef5ca5367a3812a2ec9774cb22d99c7;
static PyCodeObject *codeobj_208cf2a1d0530748dead298bb13bb947;
static PyCodeObject *codeobj_0e371bdc79188c8f9424c710d14c9b6b;
static PyCodeObject *codeobj_5deb8c0d8c85693ccbfe3ca66b5f5da3;
static PyCodeObject *codeobj_6d5d47bf6985dc936ad3af52221b1fa7;
static PyCodeObject *codeobj_87ad17acf0cf1f30e3ea9cc6512c09c9;
static PyCodeObject *codeobj_bf7105c8bf4cea1f3ef779136eaf6ee8;
static PyCodeObject *codeobj_be4bcc9b8d7f56dfb649f7d44519c630;
static PyCodeObject *codeobj_1925767693f3863ae124d415ed0670a7;
static PyCodeObject *codeobj_e253f4693688415e20032b94590a6fc0;
static PyCodeObject *codeobj_569b6f541ea57347de22322d3c24e222;
static PyCodeObject *codeobj_70254ec7ff7845ed449123b521eef635;
static PyCodeObject *codeobj_a86667676996b8c5bf4eaf1fc0f06cb2;
static PyCodeObject *codeobj_174ed9f38ceb695bb4b048a301a7c71e;
static PyCodeObject *codeobj_2c5ee047b15d725555fc4db2ff0a7c6b;
static PyCodeObject *codeobj_77b6bf01666613904f6e5a84c70cf849;
static PyCodeObject *codeobj_71da33d23d2f00aea421348006983e68;
static PyCodeObject *codeobj_6acec371f3bf88e178f5bcf32809030a;
static PyCodeObject *codeobj_efa28192e66b0c1197572111e25ec738;
static PyCodeObject *codeobj_2f14906ac28c229d71f9a893519a008c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[319]); CHECK_OBJECT(module_filename_obj);
    codeobj_fca64db5cb9ae9c9846166ae88bc4a65 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[320], NULL, NULL, 0, 0, 0);
    codeobj_0a614d8b29672287558c8cf3af3e562f = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[321], NULL, 1, 0, 0);
    codeobj_dafa36f40b48a61d3dc1532f521156d8 = MAKE_CODEOBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[204], mod_consts[322], NULL, 2, 0, 0);
    codeobj_fb6d83c2e2cc8a461a2e749a1c1277c4 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_NOFREE, mod_consts[206], mod_consts[323], NULL, 3, 0, 0);
    codeobj_9b84067eb94074d5ae80fccc9e92c348 = MAKE_CODEOBJECT(module_filename_obj, 106, CO_NOFREE, mod_consts[208], mod_consts[324], NULL, 2, 0, 0);
    codeobj_77cba6ff91564cb7752cd5e14157c29c = MAKE_CODEOBJECT(module_filename_obj, 109, CO_NOFREE, mod_consts[209], mod_consts[325], NULL, 1, 0, 0);
    codeobj_51f89ffce032947a3f8f1e1524fbba02 = MAKE_CODEOBJECT(module_filename_obj, 112, CO_NOFREE, mod_consts[210], NULL, NULL, 0, 0, 0);
    codeobj_1528c21735a1c7537092691c45551e80 = MAKE_CODEOBJECT(module_filename_obj, 115, CO_NOFREE, mod_consts[211], mod_consts[326], NULL, 1, 0, 0);
    codeobj_fb52912eb5ff9958c549ab85915ef8b8 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_NOFREE, mod_consts[212], mod_consts[327], NULL, 1, 0, 0);
    codeobj_4824734a706fdf8a8a32cad194233167 = MAKE_CODEOBJECT(module_filename_obj, 121, CO_NOFREE, mod_consts[213], mod_consts[325], NULL, 1, 0, 0);
    codeobj_1533894a8b70c135277d0b08c3655a09 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_NOFREE, mod_consts[214], mod_consts[322], NULL, 2, 0, 0);
    codeobj_e965436de1efbdefa90084481e14ecce = MAKE_CODEOBJECT(module_filename_obj, 127, CO_NOFREE, mod_consts[215], mod_consts[328], NULL, 1, 0, 0);
    codeobj_def688c0a3dd4ea1c799a7b5928197ab = MAKE_CODEOBJECT(module_filename_obj, 130, CO_NOFREE, mod_consts[218], mod_consts[329], NULL, 2, 0, 0);
    codeobj_6327dcec03d89d214a1d5d3dff13f8b3 = MAKE_CODEOBJECT(module_filename_obj, 133, CO_NOFREE, mod_consts[219], mod_consts[328], NULL, 1, 0, 0);
    codeobj_427150ca3a152c389c76aed9929f51a9 = MAKE_CODEOBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[222], mod_consts[330], NULL, 7, 0, 0);
    codeobj_1f6c870d28288ca3d6f815cc07cc1a2c = MAKE_CODEOBJECT(module_filename_obj, 139, CO_NOFREE, mod_consts[223], mod_consts[330], NULL, 7, 0, 0);
    codeobj_38ddb8944e715f0d52ea24836fd40e31 = MAKE_CODEOBJECT(module_filename_obj, 142, CO_NOFREE, mod_consts[224], mod_consts[331], NULL, 4, 0, 0);
    codeobj_c0adf79ee600149feefde67e856b3eea = MAKE_CODEOBJECT(module_filename_obj, 145, CO_NOFREE, mod_consts[226], mod_consts[332], NULL, 2, 0, 0);
    codeobj_93596fb417bb89394247e8f9d11c0216 = MAKE_CODEOBJECT(module_filename_obj, 148, CO_NOFREE, mod_consts[227], mod_consts[333], NULL, 4, 0, 0);
    codeobj_ebf955e121181b6ec9377476e6fb866b = MAKE_CODEOBJECT(module_filename_obj, 151, CO_NOFREE, mod_consts[228], mod_consts[334], NULL, 3, 0, 0);
    codeobj_86501ce2e251c0f1da8d7a3764b827ad = MAKE_CODEOBJECT(module_filename_obj, 154, CO_NOFREE, mod_consts[229], mod_consts[335], NULL, 4, 0, 0);
    codeobj_a99350508c9a650ea537bca55f2a67fd = MAKE_CODEOBJECT(module_filename_obj, 157, CO_NOFREE, mod_consts[230], mod_consts[336], NULL, 4, 0, 0);
    codeobj_70575edaa23b396dcf66b781507585c0 = MAKE_CODEOBJECT(module_filename_obj, 160, CO_NOFREE, mod_consts[231], mod_consts[337], NULL, 3, 0, 0);
    codeobj_919ba2ade033ff226a79601c7dbe308b = MAKE_CODEOBJECT(module_filename_obj, 163, CO_NOFREE, mod_consts[232], mod_consts[332], NULL, 2, 0, 0);
    codeobj_19498598bb6b20863edc4c38688a81ff = MAKE_CODEOBJECT(module_filename_obj, 166, CO_NOFREE, mod_consts[234], mod_consts[338], NULL, 3, 0, 0);
    codeobj_ed4f09e6a46c5f132b8e9b7e55ca04ab = MAKE_CODEOBJECT(module_filename_obj, 169, CO_NOFREE, mod_consts[235], mod_consts[338], NULL, 3, 0, 0);
    codeobj_0ef017ac764544b76b25129a6defd5c4 = MAKE_CODEOBJECT(module_filename_obj, 172, CO_NOFREE, mod_consts[237], mod_consts[339], NULL, 3, 0, 0);
    codeobj_7f098d7bf5bf1c9c563e4da0e9ff9860 = MAKE_CODEOBJECT(module_filename_obj, 175, CO_NOFREE, mod_consts[239], mod_consts[340], NULL, 3, 0, 0);
    codeobj_8cf820147dbc96eca1b1e38007bb3968 = MAKE_CODEOBJECT(module_filename_obj, 178, CO_NOFREE, mod_consts[240], mod_consts[340], NULL, 3, 0, 0);
    codeobj_1271d9fb43b5f1afe25fc7fad90bb7a0 = MAKE_CODEOBJECT(module_filename_obj, 181, CO_NOFREE, mod_consts[241], mod_consts[340], NULL, 3, 0, 0);
    codeobj_5762ce30392b28759feb9a3029807b3e = MAKE_CODEOBJECT(module_filename_obj, 184, CO_NOFREE, mod_consts[243], mod_consts[327], NULL, 1, 0, 0);
    codeobj_a9e4f0f5120070e055267891078665cf = MAKE_CODEOBJECT(module_filename_obj, 187, CO_NOFREE, mod_consts[244], mod_consts[325], NULL, 1, 0, 0);
    codeobj_ffebcd53af6fc4c8366687f66deae99c = MAKE_CODEOBJECT(module_filename_obj, 190, CO_NOFREE, mod_consts[245], mod_consts[327], NULL, 1, 0, 0);
    codeobj_dedbbce9d5d634e9ec88ac9d1559ee31 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_NOFREE, mod_consts[248], mod_consts[341], NULL, 4, 0, 0);
    codeobj_58323943808f4dba27017c7ed8c87686 = MAKE_CODEOBJECT(module_filename_obj, 196, CO_NOFREE, mod_consts[249], mod_consts[342], NULL, 4, 0, 0);
    codeobj_5438a4d38408505157d4d1e50100ba9e = MAKE_CODEOBJECT(module_filename_obj, 199, CO_NOFREE, mod_consts[250], mod_consts[343], NULL, 2, 0, 0);
    codeobj_f917b24b0b0b99eec6836a950a08291e = MAKE_CODEOBJECT(module_filename_obj, 202, CO_NOFREE, mod_consts[251], mod_consts[344], NULL, 4, 0, 0);
    codeobj_5c8dbcfce8011d6c9bb98f17f0480383 = MAKE_CODEOBJECT(module_filename_obj, 205, CO_NOFREE, mod_consts[253], mod_consts[345], NULL, 2, 0, 0);
    codeobj_cee007f9269ab7f444e61a42f7dd6307 = MAKE_CODEOBJECT(module_filename_obj, 208, CO_NOFREE, mod_consts[254], mod_consts[346], NULL, 3, 0, 0);
    codeobj_552a3ec465fa51e4a8a7d92ba4762674 = MAKE_CODEOBJECT(module_filename_obj, 211, CO_NOFREE, mod_consts[255], mod_consts[345], NULL, 2, 0, 0);
    codeobj_c6d70876057b26aa779c7a3c2c136078 = MAKE_CODEOBJECT(module_filename_obj, 214, CO_NOFREE, mod_consts[256], mod_consts[346], NULL, 3, 0, 0);
    codeobj_aeeebbd1029e5ea3594e60ce784b9a4e = MAKE_CODEOBJECT(module_filename_obj, 217, CO_NOFREE, mod_consts[257], mod_consts[347], NULL, 3, 0, 0);
    codeobj_2b04ff4df993324ed5971df1e64e26f2 = MAKE_CODEOBJECT(module_filename_obj, 220, CO_NOFREE, mod_consts[258], mod_consts[346], NULL, 3, 0, 0);
    codeobj_26c933283931a25dc707f2616395f7fc = MAKE_CODEOBJECT(module_filename_obj, 223, CO_NOFREE, mod_consts[259], mod_consts[347], NULL, 3, 0, 0);
    codeobj_5eeca0b075544eed3eb0ab404d6d1420 = MAKE_CODEOBJECT(module_filename_obj, 226, CO_NOFREE, mod_consts[260], mod_consts[346], NULL, 3, 0, 0);
    codeobj_dcdcc3e868b71dfd9d366809ae2ce168 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_NOFREE, mod_consts[261], mod_consts[348], NULL, 4, 0, 0);
    codeobj_c769bb9e072876570aad164de43bfd14 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_NOFREE, mod_consts[262], mod_consts[346], NULL, 3, 0, 0);
    codeobj_a5a4b131a029af55b670c47e921b7dac = MAKE_CODEOBJECT(module_filename_obj, 235, CO_NOFREE, mod_consts[263], mod_consts[348], NULL, 4, 0, 0);
    codeobj_9769bc2d35b3c9cf72f486f7fe03af04 = MAKE_CODEOBJECT(module_filename_obj, 238, CO_NOFREE, mod_consts[264], mod_consts[346], NULL, 3, 0, 0);
    codeobj_be10a012df439f1c0ac596aca01ef7d8 = MAKE_CODEOBJECT(module_filename_obj, 241, CO_NOFREE, mod_consts[265], mod_consts[349], NULL, 5, 0, 0);
    codeobj_52181a2886059c34b256826c70230338 = MAKE_CODEOBJECT(module_filename_obj, 244, CO_NOFREE, mod_consts[266], mod_consts[346], NULL, 3, 0, 0);
    codeobj_e9c21da2b78a138e47667c2dc1b7ebf4 = MAKE_CODEOBJECT(module_filename_obj, 247, CO_NOFREE, mod_consts[267], mod_consts[349], NULL, 5, 0, 0);
    codeobj_9709b08cb3f67c6037affe10ebe19865 = MAKE_CODEOBJECT(module_filename_obj, 250, CO_NOFREE, mod_consts[268], mod_consts[346], NULL, 3, 0, 0);
    codeobj_9312c1c8fe62ec0cd9260092b0b3a3fc = MAKE_CODEOBJECT(module_filename_obj, 253, CO_NOFREE, mod_consts[269], mod_consts[350], NULL, 4, 0, 0);
    codeobj_8d683224995c87f9c6d501a078cd4240 = MAKE_CODEOBJECT(module_filename_obj, 256, CO_NOFREE, mod_consts[270], mod_consts[350], NULL, 4, 0, 0);
    codeobj_fb87173bb8973ec3d04fc7c2d05bcc86 = MAKE_CODEOBJECT(module_filename_obj, 259, CO_NOFREE, mod_consts[271], mod_consts[350], NULL, 4, 0, 0);
    codeobj_5830ffe603a4581a28927522d93ad909 = MAKE_CODEOBJECT(module_filename_obj, 262, CO_NOFREE, mod_consts[272], mod_consts[327], NULL, 1, 0, 0);
    codeobj_07ed58f5ef8eb1a5fd27b4823b080c5c = MAKE_CODEOBJECT(module_filename_obj, 265, CO_NOFREE, mod_consts[273], mod_consts[327], NULL, 1, 0, 0);
    codeobj_d1b945d9219e4324a1539c0ac127a352 = MAKE_CODEOBJECT(module_filename_obj, 268, CO_NOFREE, mod_consts[275], mod_consts[351], NULL, 2, 0, 0);
    codeobj_30ac47b1f0dfb97f2a972952751cea23 = MAKE_CODEOBJECT(module_filename_obj, 271, CO_NOFREE, mod_consts[276], mod_consts[352], NULL, 2, 0, 0);
    codeobj_7204ea5b1bcea2ad015d008cc7d6979a = MAKE_CODEOBJECT(module_filename_obj, 274, CO_NOFREE, mod_consts[277], mod_consts[351], NULL, 2, 0, 0);
    codeobj_e6a20ed7200ae88ab485b23c039932b1 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_NOFREE, mod_consts[278], mod_consts[352], NULL, 2, 0, 0);
    codeobj_52ed856440fae67bbb45aa0d07f4d925 = MAKE_CODEOBJECT(module_filename_obj, 280, CO_NOFREE, mod_consts[280], mod_consts[351], NULL, 2, 0, 0);
    codeobj_ef2c1f33fa9fae4fd06484fcefc9de2c = MAKE_CODEOBJECT(module_filename_obj, 283, CO_NOFREE, mod_consts[282], mod_consts[352], NULL, 2, 0, 0);
    codeobj_f64b865b02bbd0939f4205e81d4ccced = MAKE_CODEOBJECT(module_filename_obj, 286, CO_NOFREE, mod_consts[283], mod_consts[353], NULL, 3, 0, 0);
    codeobj_d95f31c920ae8452233b8e42ccbf6d83 = MAKE_CODEOBJECT(module_filename_obj, 289, CO_NOFREE, mod_consts[284], mod_consts[352], NULL, 2, 0, 0);
    codeobj_291488757d6bf7b6a2bf56377ce58fbc = MAKE_CODEOBJECT(module_filename_obj, 292, CO_NOFREE, mod_consts[285], mod_consts[353], NULL, 3, 0, 0);
    codeobj_6c67d5c02636be599fbcdb79f35a0c19 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_NOFREE, mod_consts[286], mod_consts[352], NULL, 2, 0, 0);
    codeobj_1ce0e19b58eb4559be970d6e597b225b = MAKE_CODEOBJECT(module_filename_obj, 298, CO_NOFREE, mod_consts[287], mod_consts[353], NULL, 3, 0, 0);
    codeobj_07dc88751ce0a5ea152e5b920caa7060 = MAKE_CODEOBJECT(module_filename_obj, 301, CO_NOFREE, mod_consts[288], mod_consts[352], NULL, 2, 0, 0);
    codeobj_24acc8b390b1002d222a6b06f6c69cd4 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_NOFREE, mod_consts[289], mod_consts[354], NULL, 4, 0, 0);
    codeobj_931fc0cca226b34724225493e68682ab = MAKE_CODEOBJECT(module_filename_obj, 307, CO_NOFREE, mod_consts[290], mod_consts[352], NULL, 2, 0, 0);
    codeobj_2e35c1e463509981f0287e636f32a8a2 = MAKE_CODEOBJECT(module_filename_obj, 310, CO_NOFREE, mod_consts[291], mod_consts[354], NULL, 4, 0, 0);
    codeobj_38e35ef80759e8a8f913fc3497fcf935 = MAKE_CODEOBJECT(module_filename_obj, 313, CO_NOFREE, mod_consts[292], mod_consts[352], NULL, 2, 0, 0);
    codeobj_6508b19a8ac39644ab8047e703515150 = MAKE_CODEOBJECT(module_filename_obj, 316, CO_NOFREE, mod_consts[293], mod_consts[354], NULL, 4, 0, 0);
    codeobj_8ef5ca5367a3812a2ec9774cb22d99c7 = MAKE_CODEOBJECT(module_filename_obj, 319, CO_NOFREE, mod_consts[294], mod_consts[352], NULL, 2, 0, 0);
    codeobj_208cf2a1d0530748dead298bb13bb947 = MAKE_CODEOBJECT(module_filename_obj, 322, CO_NOFREE, mod_consts[296], mod_consts[352], NULL, 2, 0, 0);
    codeobj_0e371bdc79188c8f9424c710d14c9b6b = MAKE_CODEOBJECT(module_filename_obj, 325, CO_NOFREE, mod_consts[297], mod_consts[352], NULL, 2, 0, 0);
    codeobj_5deb8c0d8c85693ccbfe3ca66b5f5da3 = MAKE_CODEOBJECT(module_filename_obj, 328, CO_NOFREE, mod_consts[298], mod_consts[352], NULL, 2, 0, 0);
    codeobj_6d5d47bf6985dc936ad3af52221b1fa7 = MAKE_CODEOBJECT(module_filename_obj, 331, CO_NOFREE, mod_consts[300], mod_consts[355], NULL, 5, 0, 0);
    codeobj_87ad17acf0cf1f30e3ea9cc6512c09c9 = MAKE_CODEOBJECT(module_filename_obj, 334, CO_NOFREE, mod_consts[302], mod_consts[352], NULL, 2, 0, 0);
    codeobj_bf7105c8bf4cea1f3ef779136eaf6ee8 = MAKE_CODEOBJECT(module_filename_obj, 337, CO_NOFREE, mod_consts[303], mod_consts[352], NULL, 2, 0, 0);
    codeobj_be4bcc9b8d7f56dfb649f7d44519c630 = MAKE_CODEOBJECT(module_filename_obj, 340, CO_NOFREE, mod_consts[305], mod_consts[352], NULL, 2, 0, 0);
    codeobj_1925767693f3863ae124d415ed0670a7 = MAKE_CODEOBJECT(module_filename_obj, 343, CO_NOFREE, mod_consts[306], mod_consts[352], NULL, 2, 0, 0);
    codeobj_e253f4693688415e20032b94590a6fc0 = MAKE_CODEOBJECT(module_filename_obj, 346, CO_NOFREE, mod_consts[307], mod_consts[355], NULL, 5, 0, 0);
    codeobj_569b6f541ea57347de22322d3c24e222 = MAKE_CODEOBJECT(module_filename_obj, 349, CO_NOFREE, mod_consts[308], mod_consts[352], NULL, 2, 0, 0);
    codeobj_70254ec7ff7845ed449123b521eef635 = MAKE_CODEOBJECT(module_filename_obj, 352, CO_NOFREE, mod_consts[309], mod_consts[355], NULL, 5, 0, 0);
    codeobj_a86667676996b8c5bf4eaf1fc0f06cb2 = MAKE_CODEOBJECT(module_filename_obj, 355, CO_NOFREE, mod_consts[310], mod_consts[352], NULL, 2, 0, 0);
    codeobj_174ed9f38ceb695bb4b048a301a7c71e = MAKE_CODEOBJECT(module_filename_obj, 358, CO_NOFREE, mod_consts[311], mod_consts[352], NULL, 2, 0, 0);
    codeobj_2c5ee047b15d725555fc4db2ff0a7c6b = MAKE_CODEOBJECT(module_filename_obj, 361, CO_NOFREE, mod_consts[312], mod_consts[355], NULL, 5, 0, 0);
    codeobj_77b6bf01666613904f6e5a84c70cf849 = MAKE_CODEOBJECT(module_filename_obj, 364, CO_NOFREE, mod_consts[313], mod_consts[352], NULL, 2, 0, 0);
    codeobj_71da33d23d2f00aea421348006983e68 = MAKE_CODEOBJECT(module_filename_obj, 367, CO_NOFREE, mod_consts[314], mod_consts[352], NULL, 2, 0, 0);
    codeobj_6acec371f3bf88e178f5bcf32809030a = MAKE_CODEOBJECT(module_filename_obj, 370, CO_NOFREE, mod_consts[315], mod_consts[352], NULL, 2, 0, 0);
    codeobj_efa28192e66b0c1197572111e25ec738 = MAKE_CODEOBJECT(module_filename_obj, 373, CO_NOFREE, mod_consts[316], mod_consts[352], NULL, 2, 0, 0);
    codeobj_2f14906ac28c229d71f9a893519a008c = MAKE_CODEOBJECT(module_filename_obj, 376, CO_NOFREE, mod_consts[318], mod_consts[356], NULL, 6, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__10_glDetachShader();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__11_glDisableVertexAttribArray();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__12_glDrawBuffers();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__13_glEnableVertexAttribArray();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__14_glGetActiveAttrib();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__15_glGetActiveUniform();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__16_glGetAttachedShaders();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__17_glGetAttribLocation();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__18_glGetProgramInfoLog();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__19_glGetProgramiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__1__f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__20_glGetShaderInfoLog();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__21_glGetShaderSource();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__22_glGetShaderiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__23_glGetUniformLocation();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__24_glGetUniformfv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__25_glGetUniformiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__26_glGetVertexAttribPointerv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__27_glGetVertexAttribdv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__28_glGetVertexAttribfv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__29_glGetVertexAttribiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__2_glAttachShader();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__30_glIsProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__31_glIsShader();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__32_glLinkProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__33_glShaderSource();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__34_glStencilFuncSeparate();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__35_glStencilMaskSeparate();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__36_glStencilOpSeparate();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__37_glUniform1f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__38_glUniform1fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__39_glUniform1i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__3_glBindAttribLocation();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__40_glUniform1iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__41_glUniform2f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__42_glUniform2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__43_glUniform2i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__44_glUniform2iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__45_glUniform3f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__46_glUniform3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__47_glUniform3i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__48_glUniform3iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__49_glUniform4f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__4_glBlendEquationSeparate();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__50_glUniform4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__51_glUniform4i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__52_glUniform4iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__53_glUniformMatrix2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__54_glUniformMatrix3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__55_glUniformMatrix4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__56_glUseProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__57_glValidateProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__58_glVertexAttrib1d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__59_glVertexAttrib1dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__5_glCompileShader();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__60_glVertexAttrib1f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__61_glVertexAttrib1fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__62_glVertexAttrib1s();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__63_glVertexAttrib1sv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__64_glVertexAttrib2d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__65_glVertexAttrib2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__66_glVertexAttrib2f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__67_glVertexAttrib2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__68_glVertexAttrib2s();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__69_glVertexAttrib2sv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__6_glCreateProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__70_glVertexAttrib3d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__71_glVertexAttrib3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__72_glVertexAttrib3f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__73_glVertexAttrib3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__74_glVertexAttrib3s();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__75_glVertexAttrib3sv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__76_glVertexAttrib4Nbv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__77_glVertexAttrib4Niv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__78_glVertexAttrib4Nsv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__79_glVertexAttrib4Nub();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__7_glCreateShader();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__80_glVertexAttrib4Nubv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__81_glVertexAttrib4Nuiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__82_glVertexAttrib4Nusv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__83_glVertexAttrib4bv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__84_glVertexAttrib4d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__85_glVertexAttrib4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__86_glVertexAttrib4f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__87_glVertexAttrib4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__88_glVertexAttrib4iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__89_glVertexAttrib4s();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__8_glDeleteProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__90_glVertexAttrib4sv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__91_glVertexAttrib4ubv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__92_glVertexAttrib4uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__93_glVertexAttrib4usv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__94_glVertexAttribPointer();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__9_glDeleteShader();


// The module function definitions.
static PyObject *impl_OpenGL$raw$GL$VERSION$GL_2_0$$$function__1__f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[0];
    struct Nuitka_FrameObject *frame_0a614d8b29672287558c8cf3af3e562f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a614d8b29672287558c8cf3af3e562f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a614d8b29672287558c8cf3af3e562f)) {
        Py_XDECREF(cache_frame_0a614d8b29672287558c8cf3af3e562f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a614d8b29672287558c8cf3af3e562f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a614d8b29672287558c8cf3af3e562f = MAKE_FUNCTION_FRAME(codeobj_0a614d8b29672287558c8cf3af3e562f, module_OpenGL$raw$GL$VERSION$GL_2_0, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a614d8b29672287558c8cf3af3e562f->m_type_description == NULL);
    frame_0a614d8b29672287558c8cf3af3e562f = cache_frame_0a614d8b29672287558c8cf3af3e562f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a614d8b29672287558c8cf3af3e562f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a614d8b29672287558c8cf3af3e562f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_function);
        tmp_kw_call_arg_value_0_1 = par_function;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_1 = mod_consts[4];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0a614d8b29672287558c8cf3af3e562f->m_frame.f_lineno = 13;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a614d8b29672287558c8cf3af3e562f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a614d8b29672287558c8cf3af3e562f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a614d8b29672287558c8cf3af3e562f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a614d8b29672287558c8cf3af3e562f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a614d8b29672287558c8cf3af3e562f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a614d8b29672287558c8cf3af3e562f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a614d8b29672287558c8cf3af3e562f,
        type_description_1,
        par_function
    );


    // Release cached frame if used for exception.
    if (frame_0a614d8b29672287558c8cf3af3e562f == cache_frame_0a614d8b29672287558c8cf3af3e562f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a614d8b29672287558c8cf3af3e562f);
        cache_frame_0a614d8b29672287558c8cf3af3e562f = NULL;
    }

    assertFrameObject(frame_0a614d8b29672287558c8cf3af3e562f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_function);
    Py_DECREF(par_function);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_function);
    Py_DECREF(par_function);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__10_glDetachShader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1533894a8b70c135277d0b08c3655a09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__11_glDisableVertexAttribArray() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e965436de1efbdefa90084481e14ecce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__12_glDrawBuffers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_def688c0a3dd4ea1c799a7b5928197ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__13_glEnableVertexAttribArray() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[219],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6327dcec03d89d214a1d5d3dff13f8b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__14_glGetActiveAttrib() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_427150ca3a152c389c76aed9929f51a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__15_glGetActiveUniform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f6c870d28288ca3d6f815cc07cc1a2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__16_glGetAttachedShaders() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38ddb8944e715f0d52ea24836fd40e31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__17_glGetAttribLocation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c0adf79ee600149feefde67e856b3eea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__18_glGetProgramInfoLog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[227],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93596fb417bb89394247e8f9d11c0216,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__19_glGetProgramiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ebf955e121181b6ec9377476e6fb866b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__1__f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenGL$raw$GL$VERSION$GL_2_0$$$function__1__f,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a614d8b29672287558c8cf3af3e562f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__20_glGetShaderInfoLog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_86501ce2e251c0f1da8d7a3764b827ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__21_glGetShaderSource() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a99350508c9a650ea537bca55f2a67fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__22_glGetShaderiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70575edaa23b396dcf66b781507585c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__23_glGetUniformLocation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_919ba2ade033ff226a79601c7dbe308b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__24_glGetUniformfv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19498598bb6b20863edc4c38688a81ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__25_glGetUniformiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed4f09e6a46c5f132b8e9b7e55ca04ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__26_glGetVertexAttribPointerv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ef017ac764544b76b25129a6defd5c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__27_glGetVertexAttribdv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f098d7bf5bf1c9c563e4da0e9ff9860,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__28_glGetVertexAttribfv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8cf820147dbc96eca1b1e38007bb3968,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__29_glGetVertexAttribiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1271d9fb43b5f1afe25fc7fad90bb7a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__2_glAttachShader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dafa36f40b48a61d3dc1532f521156d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__30_glIsProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5762ce30392b28759feb9a3029807b3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__31_glIsShader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a9e4f0f5120070e055267891078665cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__32_glLinkProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[245],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ffebcd53af6fc4c8366687f66deae99c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__33_glShaderSource() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dedbbce9d5d634e9ec88ac9d1559ee31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__34_glStencilFuncSeparate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[249],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_58323943808f4dba27017c7ed8c87686,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__35_glStencilMaskSeparate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5438a4d38408505157d4d1e50100ba9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__36_glStencilOpSeparate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[251],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f917b24b0b0b99eec6836a950a08291e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__37_glUniform1f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[253],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c8dbcfce8011d6c9bb98f17f0480383,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__38_glUniform1fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cee007f9269ab7f444e61a42f7dd6307,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__39_glUniform1i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[255],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_552a3ec465fa51e4a8a7d92ba4762674,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__3_glBindAttribLocation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb6d83c2e2cc8a461a2e749a1c1277c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__40_glUniform1iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6d70876057b26aa779c7a3c2c136078,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__41_glUniform2f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aeeebbd1029e5ea3594e60ce784b9a4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__42_glUniform2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2b04ff4df993324ed5971df1e64e26f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__43_glUniform2i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[259],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26c933283931a25dc707f2616395f7fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__44_glUniform2iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5eeca0b075544eed3eb0ab404d6d1420,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__45_glUniform3f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dcdcc3e868b71dfd9d366809ae2ce168,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__46_glUniform3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c769bb9e072876570aad164de43bfd14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__47_glUniform3i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[263],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5a4b131a029af55b670c47e921b7dac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__48_glUniform3iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9769bc2d35b3c9cf72f486f7fe03af04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__49_glUniform4f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[265],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be10a012df439f1c0ac596aca01ef7d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__4_glBlendEquationSeparate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b84067eb94074d5ae80fccc9e92c348,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__50_glUniform4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52181a2886059c34b256826c70230338,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__51_glUniform4i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9c21da2b78a138e47667c2dc1b7ebf4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__52_glUniform4iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[268],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9709b08cb3f67c6037affe10ebe19865,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__53_glUniformMatrix2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[269],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9312c1c8fe62ec0cd9260092b0b3a3fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__54_glUniformMatrix3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[270],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8d683224995c87f9c6d501a078cd4240,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__55_glUniformMatrix4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[271],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb87173bb8973ec3d04fc7c2d05bcc86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__56_glUseProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[272],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5830ffe603a4581a28927522d93ad909,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__57_glValidateProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[273],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_07ed58f5ef8eb1a5fd27b4823b080c5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__58_glVertexAttrib1d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[275],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d1b945d9219e4324a1539c0ac127a352,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__59_glVertexAttrib1dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[276],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_30ac47b1f0dfb97f2a972952751cea23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__5_glCompileShader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77cba6ff91564cb7752cd5e14157c29c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__60_glVertexAttrib1f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[277],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7204ea5b1bcea2ad015d008cc7d6979a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__61_glVertexAttrib1fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[278],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6a20ed7200ae88ab485b23c039932b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__62_glVertexAttrib1s() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[280],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52ed856440fae67bbb45aa0d07f4d925,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__63_glVertexAttrib1sv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[282],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef2c1f33fa9fae4fd06484fcefc9de2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__64_glVertexAttrib2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[283],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f64b865b02bbd0939f4205e81d4ccced,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__65_glVertexAttrib2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[284],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d95f31c920ae8452233b8e42ccbf6d83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__66_glVertexAttrib2f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[285],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_291488757d6bf7b6a2bf56377ce58fbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__67_glVertexAttrib2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[286],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c67d5c02636be599fbcdb79f35a0c19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__68_glVertexAttrib2s() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[287],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1ce0e19b58eb4559be970d6e597b225b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__69_glVertexAttrib2sv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[288],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_07dc88751ce0a5ea152e5b920caa7060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__6_glCreateProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51f89ffce032947a3f8f1e1524fbba02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__70_glVertexAttrib3d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[289],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_24acc8b390b1002d222a6b06f6c69cd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__71_glVertexAttrib3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[290],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_931fc0cca226b34724225493e68682ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__72_glVertexAttrib3f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[291],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e35c1e463509981f0287e636f32a8a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__73_glVertexAttrib3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[292],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38e35ef80759e8a8f913fc3497fcf935,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__74_glVertexAttrib3s() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[293],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6508b19a8ac39644ab8047e703515150,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__75_glVertexAttrib3sv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[294],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ef5ca5367a3812a2ec9774cb22d99c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__76_glVertexAttrib4Nbv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[296],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_208cf2a1d0530748dead298bb13bb947,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__77_glVertexAttrib4Niv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[297],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e371bdc79188c8f9424c710d14c9b6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__78_glVertexAttrib4Nsv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[298],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5deb8c0d8c85693ccbfe3ca66b5f5da3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__79_glVertexAttrib4Nub() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[300],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d5d47bf6985dc936ad3af52221b1fa7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__7_glCreateShader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1528c21735a1c7537092691c45551e80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__80_glVertexAttrib4Nubv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[302],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_87ad17acf0cf1f30e3ea9cc6512c09c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__81_glVertexAttrib4Nuiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[303],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf7105c8bf4cea1f3ef779136eaf6ee8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__82_glVertexAttrib4Nusv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[305],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be4bcc9b8d7f56dfb649f7d44519c630,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__83_glVertexAttrib4bv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[306],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1925767693f3863ae124d415ed0670a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__84_glVertexAttrib4d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[307],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e253f4693688415e20032b94590a6fc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__85_glVertexAttrib4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[308],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_569b6f541ea57347de22322d3c24e222,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__86_glVertexAttrib4f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[309],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70254ec7ff7845ed449123b521eef635,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__87_glVertexAttrib4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[310],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a86667676996b8c5bf4eaf1fc0f06cb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__88_glVertexAttrib4iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[311],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_174ed9f38ceb695bb4b048a301a7c71e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__89_glVertexAttrib4s() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[312],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c5ee047b15d725555fc4db2ff0a7c6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__8_glDeleteProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb52912eb5ff9958c549ab85915ef8b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__90_glVertexAttrib4sv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[313],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77b6bf01666613904f6e5a84c70cf849,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__91_glVertexAttrib4ubv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[314],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_71da33d23d2f00aea421348006983e68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__92_glVertexAttrib4uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[315],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6acec371f3bf88e178f5bcf32809030a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__93_glVertexAttrib4usv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[316],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_efa28192e66b0c1197572111e25ec738,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__94_glVertexAttribPointer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[318],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f14906ac28c229d71f9a893519a008c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__9_glDeleteShader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4824734a706fdf8a8a32cad194233167,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_OpenGL$raw$GL$VERSION$GL_2_0[] = {
    impl_OpenGL$raw$GL$VERSION$GL_2_0$$$function__1__f,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_OpenGL$raw$GL$VERSION$GL_2_0;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_OpenGL$raw$GL$VERSION$GL_2_0) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_OpenGL$raw$GL$VERSION$GL_2_0[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_OpenGL$raw$GL$VERSION$GL_2_0,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_2_0(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GL.VERSION.GL_2_0");

    // Store the module for future use.
    module_OpenGL$raw$GL$VERSION$GL_2_0 = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_2_0: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_2_0: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_2_0: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GL$VERSION$GL_2_0\n");

    moduledict_OpenGL$raw$GL$VERSION$GL_2_0 = MODULE_DICT(module_OpenGL$raw$GL$VERSION$GL_2_0);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[357]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GL$VERSION$GL_2_0);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GL$VERSION$GL_2_0);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_fca64db5cb9ae9c9846166ae88bc4a65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_fca64db5cb9ae9c9846166ae88bc4a65 = MAKE_MODULE_FRAME(codeobj_fca64db5cb9ae9c9846166ae88bc4a65, module_OpenGL$raw$GL$VERSION$GL_2_0);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_fca64db5cb9ae9c9846166ae88bc4a65);
    assert(Py_REFCNT(frame_fca64db5cb9ae9c9846166ae88bc4a65) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                mod_consts[18],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[18]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                mod_consts[19],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[19]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[20];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                mod_consts[22],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[17];
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GL$VERSION$GL_2_0, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[20];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[26];
        tmp_level_value_4 = mod_consts[17];
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                mod_consts[5],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[27];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[28];
        tmp_level_value_5 = mod_consts[17];
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 8;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0,
                mod_consts[29],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_2_0;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[17];
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__1__f();

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 15;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[36]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 16;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[38]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[40]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 19;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[44]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[46]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[48]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 22;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[50]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 23;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[52]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 24;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[54]);

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 25;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[56]);

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 26;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[58]);

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 27;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[60]);

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[62]);

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 29;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[64]);

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 30;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[66]);

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 31;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[68]);

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 32;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[70]);

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 33;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[72]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 34;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[74]);

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 35;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[76]);

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 36;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[78]);

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 37;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[80]);

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 38;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[82]);

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 39;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[84]);

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 40;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[86]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 41;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[88]);

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 42;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[90]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 43;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[92]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 44;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[94]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 45;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[96]);

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 46;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[98]);

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 47;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[100]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 48;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[102]);

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 49;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[104]);

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 50;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[106]);

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 51;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_38, mod_consts[108]);

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 52;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[110]);

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 53;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_40, mod_consts[112]);

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 54;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[114]);

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 55;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[116]);

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 56;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[118]);

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 57;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_44, mod_consts[120]);

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 58;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[122]);

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 59;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_46, mod_consts[124]);

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 60;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_47, mod_consts[126]);

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 61;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[128]);

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 62;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[130]);

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 63;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[132]);

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 64;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[134]);

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_52;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 65;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_52, mod_consts[136]);

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 66;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[138]);

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_54;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 67;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_54, mod_consts[140]);

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_55;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 68;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[142]);

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 69;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_56, mod_consts[144]);

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 70;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_57, mod_consts[146]);

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_58;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 71;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_58, mod_consts[148]);

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 72;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_59, mod_consts[150]);

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 73;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_60, mod_consts[152]);

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_61;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 74;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_61, mod_consts[154]);

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 75;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_62, mod_consts[156]);

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 76;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_63, mod_consts[158]);

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_64;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 77;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_64, mod_consts[160]);

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 78;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_65, mod_consts[162]);

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 79;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_66, mod_consts[164]);

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_67;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 80;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[166]);

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_68;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 81;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_68, mod_consts[168]);

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_69;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 82;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_69, mod_consts[170]);

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_70;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 83;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_70, mod_consts[172]);

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_71;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 84;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[174]);

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_72;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 85;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_72, mod_consts[176]);

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_73;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 86;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_73, mod_consts[178]);

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_74;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 87;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_74, mod_consts[180]);

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_75;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 88;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_75, mod_consts[182]);

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_76;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 89;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_76, mod_consts[184]);

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_77;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 90;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_77, mod_consts[186]);

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_78;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 91;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_78, mod_consts[188]);

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_79;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 92;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[190]);

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_80;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 93;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_80, mod_consts[192]);

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_81;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 94;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_81, mod_consts[194]);

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_82;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 95;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_82, mod_consts[196]);

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_83;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 96;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_83, mod_consts[198]);

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_84;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 97;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_84, mod_consts[200]);

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_86;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[202]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[203]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[203]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_called_value_86 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_87, call_args);
        }

        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__2_glAttachShader();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 99;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 98;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_85, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_89;
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[202]);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = Py_None;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[203]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[203]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[205]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_called_value_89 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_90, call_args);
        }

        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_11 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__3_glBindAttribLocation();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 102;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 101;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_92;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[202]);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = Py_None;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[207]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[207]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_called_value_92 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_93, call_args);
        }

        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_16 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__4_glBlendEquationSeparate();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 105;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 104;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_91, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_95;
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[202]);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = Py_None;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[203]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_called_value_95 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_96, call_args);
        }

        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_20 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__5_glCompileShader();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 108;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 107;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_98;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[202]);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[203]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 111;
        tmp_called_value_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_99);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_23 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__6_glCreateProgram();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 111;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 110;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_97, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_100;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_101;
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[202]);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[203]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[207]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_called_value_101 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_102, call_args);
        }

        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_27 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__7_glCreateShader();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 114;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_101, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_101);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 113;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_104;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[202]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = Py_None;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[203]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_called_value_104 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_105, call_args);
        }

        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_31 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__8_glDeleteProgram();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 117;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 116;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_103, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_107;
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[202]);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = Py_None;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[203]);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_called_value_107 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_108, call_args);
        }

        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_35 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__9_glDeleteShader();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 120;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_107);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 119;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_110;
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[202]);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = Py_None;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_111);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[203]);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_111);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_111);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[203]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_111);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_called_value_110 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_111, call_args);
        }

        Py_DECREF(tmp_called_value_111);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_40 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__10_glDetachShader();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 123;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 122;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_109, tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_113;
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[202]);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = Py_None;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[203]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_called_value_113 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_114, call_args);
        }

        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_44 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__11_glDisableVertexAttribArray();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 126;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_113, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_113);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 125;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_112, tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_115;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_116;
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[202]);
        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = Py_None;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[216]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);
            Py_DECREF(tmp_args_element_value_47);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[217]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);
            Py_DECREF(tmp_args_element_value_47);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_called_value_116 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_117, call_args);
        }

        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_49 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__12_glDrawBuffers();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 129;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_116, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 128;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_115, tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_118;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_called_value_119;
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_53;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[202]);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = Py_None;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[203]);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_called_value_119 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_120, call_args);
        }

        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_53 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__13_glEnableVertexAttribArray();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 132;
        tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_119);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 131;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_121;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_122;
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[202]);
        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = Py_None;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[203]);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[203]);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[216]);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[220]);
        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[221]);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[217]);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[205]);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_called_value_122 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_123, call_args);
        }

        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        Py_DECREF(tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_63 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__14_glGetActiveAttrib();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 135;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_122, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 134;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_121, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_124;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_125;
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[202]);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = Py_None;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[203]);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[203]);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[216]);
        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[220]);
        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[221]);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[217]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_71);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[205]);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_71);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_called_value_125 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_126, call_args);
        }

        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_66);
        Py_DECREF(tmp_args_element_value_67);
        Py_DECREF(tmp_args_element_value_68);
        Py_DECREF(tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_71);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_73 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__15_glGetActiveUniform();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 138;
        tmp_args_element_value_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_125, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_125);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 137;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_124, tmp_args_element_value_64);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_called_value_128;
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[202]);
        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = Py_None;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[203]);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_76);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[216]);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_76);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[220]);
        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[217]);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_called_value_128 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_129, call_args);
        }

        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_element_value_76);
        Py_DECREF(tmp_args_element_value_77);
        Py_DECREF(tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_80 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__16_glGetAttachedShaders();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 141;
        tmp_args_element_value_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 140;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_127, tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_130;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_131;
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_85;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[202]);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[225]);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[203]);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_args_element_value_83);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[205]);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_args_element_value_83);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_called_value_131 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_132, call_args);
        }

        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_85 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__17_glGetAttribLocation();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 144;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_131, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_131);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 143;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_81);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_value_134;
        PyObject *tmp_called_value_135;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_92;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[202]);
        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = Py_None;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[203]);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_88);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[216]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_88);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[220]);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[205]);
        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_called_value_134 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_135, call_args);
        }

        Py_DECREF(tmp_called_value_135);
        Py_DECREF(tmp_args_element_value_88);
        Py_DECREF(tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_90);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_92 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__18_glGetProgramInfoLog();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 147;
        tmp_args_element_value_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_134, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 146;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_133, tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_136;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_137;
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[202]);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = Py_None;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[203]);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_95);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[207]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_95);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[221]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_called_value_137 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_138, call_args);
        }

        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_95);
        Py_DECREF(tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_98 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__19_glGetProgramiv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 150;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_137, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 149;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_136, tmp_args_element_value_93);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_140;
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_105;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[202]);
        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = Py_None;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[203]);
        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_101);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[216]);
        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_101);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[220]);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[205]);
        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_called_value_140 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_141, call_args);
        }

        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_args_element_value_101);
        Py_DECREF(tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_105 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__20_glGetShaderInfoLog();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 153;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_140, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 152;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_139, tmp_args_element_value_99);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_142;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_143;
        PyObject *tmp_called_value_144;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_element_value_112;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[202]);
        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = Py_None;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[203]);
        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_args_element_value_108);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[216]);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_args_element_value_108);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[220]);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[205]);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_called_value_143 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_144, call_args);
        }

        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_108);
        Py_DECREF(tmp_args_element_value_109);
        Py_DECREF(tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_112 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__21_glGetShaderSource();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 156;
        tmp_args_element_value_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_143, tmp_args_element_value_112);
        Py_DECREF(tmp_called_value_143);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 155;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_142, tmp_args_element_value_106);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_145;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_called_value_146;
        PyObject *tmp_called_value_147;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_118;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_called_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[202]);
        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = Py_None;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[203]);
        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[207]);
        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[221]);
        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_called_value_146 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_147, call_args);
        }

        Py_DECREF(tmp_called_value_147);
        Py_DECREF(tmp_args_element_value_115);
        Py_DECREF(tmp_args_element_value_116);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_118 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__22_glGetShaderiv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 159;
        tmp_args_element_value_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_146, tmp_args_element_value_118);
        Py_DECREF(tmp_called_value_146);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 158;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_145, tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_148;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_called_value_149;
        PyObject *tmp_called_value_150;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_123;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_called_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[202]);
        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[225]);
        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[203]);
        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[205]);
        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_called_value_149 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_150, call_args);
        }

        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_120);
        Py_DECREF(tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_123 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__23_glGetUniformLocation();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 162;
        tmp_args_element_value_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_149, tmp_args_element_value_123);
        Py_DECREF(tmp_called_value_149);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 161;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_148, tmp_args_element_value_119);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_151;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_called_value_152;
        PyObject *tmp_called_value_153;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_129;
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_called_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[202]);
        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = Py_None;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_153);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[203]);
        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_153);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_153);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[225]);
        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_153);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_153);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[233]);
        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_153);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_called_value_152 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_153, call_args);
        }

        Py_DECREF(tmp_called_value_153);
        Py_DECREF(tmp_args_element_value_126);
        Py_DECREF(tmp_args_element_value_127);
        Py_DECREF(tmp_args_element_value_128);
        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_129 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__24_glGetUniformfv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 165;
        tmp_args_element_value_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_152, tmp_args_element_value_129);
        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_args_element_value_129);
        if (tmp_args_element_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 164;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_151, tmp_args_element_value_124);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_154;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_called_value_155;
        PyObject *tmp_called_value_156;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_135;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_called_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[202]);
        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_131 = Py_None;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[203]);
        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[225]);
        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_args_element_value_132);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[221]);
        if (tmp_args_element_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_args_element_value_132);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132, tmp_args_element_value_133, tmp_args_element_value_134};
            tmp_called_value_155 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_156, call_args);
        }

        Py_DECREF(tmp_called_value_156);
        Py_DECREF(tmp_args_element_value_132);
        Py_DECREF(tmp_args_element_value_133);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_135 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__25_glGetUniformiv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 168;
        tmp_args_element_value_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_155, tmp_args_element_value_135);
        Py_DECREF(tmp_called_value_155);
        Py_DECREF(tmp_args_element_value_135);
        if (tmp_args_element_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 167;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_154, tmp_args_element_value_130);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_157;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_called_value_158;
        PyObject *tmp_called_value_159;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_141;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[202]);
        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_137 = Py_None;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[203]);
        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);
            Py_DECREF(tmp_args_element_value_138);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[207]);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);
            Py_DECREF(tmp_args_element_value_138);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);
            Py_DECREF(tmp_args_element_value_138);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[236]);
        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);
            Py_DECREF(tmp_args_element_value_138);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_137, tmp_args_element_value_138, tmp_args_element_value_139, tmp_args_element_value_140};
            tmp_called_value_158 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_159, call_args);
        }

        Py_DECREF(tmp_called_value_159);
        Py_DECREF(tmp_args_element_value_138);
        Py_DECREF(tmp_args_element_value_139);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_141 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__26_glGetVertexAttribPointerv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 171;
        tmp_args_element_value_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_158, tmp_args_element_value_141);
        Py_DECREF(tmp_called_value_158);
        Py_DECREF(tmp_args_element_value_141);
        if (tmp_args_element_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 170;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_157, tmp_args_element_value_136);
        Py_DECREF(tmp_args_element_value_136);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_160;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_called_value_161;
        PyObject *tmp_called_value_162;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_147;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[202]);
        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = Py_None;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[203]);
        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_args_element_value_144);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[207]);
        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_args_element_value_144);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_args_element_value_144);
            Py_DECREF(tmp_args_element_value_145);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[238]);
        if (tmp_args_element_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_args_element_value_144);
            Py_DECREF(tmp_args_element_value_145);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144, tmp_args_element_value_145, tmp_args_element_value_146};
            tmp_called_value_161 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_162, call_args);
        }

        Py_DECREF(tmp_called_value_162);
        Py_DECREF(tmp_args_element_value_144);
        Py_DECREF(tmp_args_element_value_145);
        Py_DECREF(tmp_args_element_value_146);
        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_147 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__27_glGetVertexAttribdv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 174;
        tmp_args_element_value_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_161, tmp_args_element_value_147);
        Py_DECREF(tmp_called_value_161);
        Py_DECREF(tmp_args_element_value_147);
        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 173;
        tmp_assign_source_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_160, tmp_args_element_value_142);
        Py_DECREF(tmp_args_element_value_142);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_163;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_called_value_164;
        PyObject *tmp_called_value_165;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_element_value_153;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_called_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[202]);
        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = Py_None;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[203]);
        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_args_element_value_150);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[207]);
        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_args_element_value_150);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_args_element_value_150);
            Py_DECREF(tmp_args_element_value_151);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[233]);
        if (tmp_args_element_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);
            Py_DECREF(tmp_args_element_value_150);
            Py_DECREF(tmp_args_element_value_151);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_149, tmp_args_element_value_150, tmp_args_element_value_151, tmp_args_element_value_152};
            tmp_called_value_164 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_165, call_args);
        }

        Py_DECREF(tmp_called_value_165);
        Py_DECREF(tmp_args_element_value_150);
        Py_DECREF(tmp_args_element_value_151);
        Py_DECREF(tmp_args_element_value_152);
        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_153 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__28_glGetVertexAttribfv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 177;
        tmp_args_element_value_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_164, tmp_args_element_value_153);
        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_element_value_153);
        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 176;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_163, tmp_args_element_value_148);
        Py_DECREF(tmp_args_element_value_148);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_166;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_called_value_167;
        PyObject *tmp_called_value_168;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_159;
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_called_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[202]);
        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = Py_None;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[203]);
        if (tmp_args_element_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_args_element_value_156);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[207]);
        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_args_element_value_156);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[221]);
        if (tmp_args_element_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_155, tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158};
            tmp_called_value_167 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_168, call_args);
        }

        Py_DECREF(tmp_called_value_168);
        Py_DECREF(tmp_args_element_value_156);
        Py_DECREF(tmp_args_element_value_157);
        Py_DECREF(tmp_args_element_value_158);
        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_159 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__29_glGetVertexAttribiv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 180;
        tmp_args_element_value_154 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_167, tmp_args_element_value_159);
        Py_DECREF(tmp_called_value_167);
        Py_DECREF(tmp_args_element_value_159);
        if (tmp_args_element_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 179;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_166, tmp_args_element_value_154);
        Py_DECREF(tmp_args_element_value_154);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_169;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_called_value_170;
        PyObject *tmp_called_value_171;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_163;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_called_value_171 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[202]);
        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_171);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[242]);
        if (tmp_args_element_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_171);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_171);
            Py_DECREF(tmp_args_element_value_161);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[203]);
        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_171);
            Py_DECREF(tmp_args_element_value_161);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_value_161, tmp_args_element_value_162};
            tmp_called_value_170 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_171, call_args);
        }

        Py_DECREF(tmp_called_value_171);
        Py_DECREF(tmp_args_element_value_161);
        Py_DECREF(tmp_args_element_value_162);
        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_163 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__30_glIsProgram();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 183;
        tmp_args_element_value_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_170, tmp_args_element_value_163);
        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_args_element_value_163);
        if (tmp_args_element_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 182;
        tmp_assign_source_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_169, tmp_args_element_value_160);
        Py_DECREF(tmp_args_element_value_160);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_172;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_called_value_173;
        PyObject *tmp_called_value_174;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_element_value_167;
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[202]);
        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[242]);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_args_element_value_165);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[203]);
        if (tmp_args_element_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_args_element_value_165);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_165, tmp_args_element_value_166};
            tmp_called_value_173 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_174, call_args);
        }

        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_165);
        Py_DECREF(tmp_args_element_value_166);
        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_167 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__31_glIsShader();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 186;
        tmp_args_element_value_164 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_173, tmp_args_element_value_167);
        Py_DECREF(tmp_called_value_173);
        Py_DECREF(tmp_args_element_value_167);
        if (tmp_args_element_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 185;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_172, tmp_args_element_value_164);
        Py_DECREF(tmp_args_element_value_164);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_called_value_176;
        PyObject *tmp_called_value_177;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_171;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_called_value_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[202]);
        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = Py_None;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[203]);
        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_169, tmp_args_element_value_170};
            tmp_called_value_176 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_177, call_args);
        }

        Py_DECREF(tmp_called_value_177);
        Py_DECREF(tmp_args_element_value_170);
        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_171 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__32_glLinkProgram();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 189;
        tmp_args_element_value_168 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_176, tmp_args_element_value_171);
        Py_DECREF(tmp_called_value_176);
        Py_DECREF(tmp_args_element_value_171);
        if (tmp_args_element_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 188;
        tmp_assign_source_127 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_175, tmp_args_element_value_168);
        Py_DECREF(tmp_args_element_value_168);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_178;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_called_value_179;
        PyObject *tmp_called_value_180;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_args_element_value_176;
        PyObject *tmp_called_value_181;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_args_element_value_180;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[202]);
        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = Py_None;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[203]);
        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[216]);
        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[246]);
        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[246]);
        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[247]);
        if (tmp_args_element_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 192;
        tmp_args_element_value_177 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_182, tmp_args_element_value_178);
        Py_DECREF(tmp_called_value_182);
        Py_DECREF(tmp_args_element_value_178);
        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 192;
        tmp_args_element_value_176 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_181, tmp_args_element_value_177);
        Py_DECREF(tmp_called_value_181);
        Py_DECREF(tmp_args_element_value_177);
        if (tmp_args_element_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_args_element_value_176);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[221]);
        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);
            Py_DECREF(tmp_args_element_value_174);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_args_element_value_176);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175, tmp_args_element_value_176, tmp_args_element_value_179};
            tmp_called_value_179 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_180, call_args);
        }

        Py_DECREF(tmp_called_value_180);
        Py_DECREF(tmp_args_element_value_174);
        Py_DECREF(tmp_args_element_value_175);
        Py_DECREF(tmp_args_element_value_176);
        Py_DECREF(tmp_args_element_value_179);
        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_180 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__33_glShaderSource();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 192;
        tmp_args_element_value_172 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_179, tmp_args_element_value_180);
        Py_DECREF(tmp_called_value_179);
        Py_DECREF(tmp_args_element_value_180);
        if (tmp_args_element_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 191;
        tmp_assign_source_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_178, tmp_args_element_value_172);
        Py_DECREF(tmp_args_element_value_172);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_183;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_called_value_184;
        PyObject *tmp_called_value_185;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_args_element_value_187;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[202]);
        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_182 = Py_None;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[207]);
        if (tmp_args_element_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_183);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[207]);
        if (tmp_args_element_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_183);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_183);
            Py_DECREF(tmp_args_element_value_184);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[225]);
        if (tmp_args_element_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_183);
            Py_DECREF(tmp_args_element_value_184);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_183);
            Py_DECREF(tmp_args_element_value_184);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[203]);
        if (tmp_args_element_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_183);
            Py_DECREF(tmp_args_element_value_184);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_182, tmp_args_element_value_183, tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186};
            tmp_called_value_184 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_185, call_args);
        }

        Py_DECREF(tmp_called_value_185);
        Py_DECREF(tmp_args_element_value_183);
        Py_DECREF(tmp_args_element_value_184);
        Py_DECREF(tmp_args_element_value_185);
        Py_DECREF(tmp_args_element_value_186);
        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_187 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__34_glStencilFuncSeparate();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 195;
        tmp_args_element_value_181 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_184, tmp_args_element_value_187);
        Py_DECREF(tmp_called_value_184);
        Py_DECREF(tmp_args_element_value_187);
        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 194;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_183, tmp_args_element_value_181);
        Py_DECREF(tmp_args_element_value_181);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_186;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_called_value_187;
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_element_value_192;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[202]);
        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_189 = Py_None;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[207]);
        if (tmp_args_element_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_190);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[203]);
        if (tmp_args_element_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_190);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_189, tmp_args_element_value_190, tmp_args_element_value_191};
            tmp_called_value_187 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_188, call_args);
        }

        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_args_element_value_190);
        Py_DECREF(tmp_args_element_value_191);
        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_192 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__35_glStencilMaskSeparate();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 198;
        tmp_args_element_value_188 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_187, tmp_args_element_value_192);
        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_args_element_value_192);
        if (tmp_args_element_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 197;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_186, tmp_args_element_value_188);
        Py_DECREF(tmp_args_element_value_188);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_189;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_called_value_190;
        PyObject *tmp_called_value_191;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_element_value_199;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[202]);
        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = Py_None;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[207]);
        if (tmp_args_element_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_195);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[207]);
        if (tmp_args_element_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_195);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_195);
            Py_DECREF(tmp_args_element_value_196);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_197 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[207]);
        if (tmp_args_element_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_195);
            Py_DECREF(tmp_args_element_value_196);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_195);
            Py_DECREF(tmp_args_element_value_196);
            Py_DECREF(tmp_args_element_value_197);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[207]);
        if (tmp_args_element_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_195);
            Py_DECREF(tmp_args_element_value_196);
            Py_DECREF(tmp_args_element_value_197);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_194, tmp_args_element_value_195, tmp_args_element_value_196, tmp_args_element_value_197, tmp_args_element_value_198};
            tmp_called_value_190 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_191, call_args);
        }

        Py_DECREF(tmp_called_value_191);
        Py_DECREF(tmp_args_element_value_195);
        Py_DECREF(tmp_args_element_value_196);
        Py_DECREF(tmp_args_element_value_197);
        Py_DECREF(tmp_args_element_value_198);
        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_199 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__36_glStencilOpSeparate();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 201;
        tmp_args_element_value_193 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_190, tmp_args_element_value_199);
        Py_DECREF(tmp_called_value_190);
        Py_DECREF(tmp_args_element_value_199);
        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 200;
        tmp_assign_source_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_189, tmp_args_element_value_193);
        Py_DECREF(tmp_args_element_value_193);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_192;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_called_value_193;
        PyObject *tmp_called_value_194;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_element_value_203;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_204;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[202]);
        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = Py_None;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[225]);
        if (tmp_args_element_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_202);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_203 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[252]);
        if (tmp_args_element_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_202);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_201, tmp_args_element_value_202, tmp_args_element_value_203};
            tmp_called_value_193 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_194, call_args);
        }

        Py_DECREF(tmp_called_value_194);
        Py_DECREF(tmp_args_element_value_202);
        Py_DECREF(tmp_args_element_value_203);
        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_204 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__37_glUniform1f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 204;
        tmp_args_element_value_200 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_193, tmp_args_element_value_204);
        Py_DECREF(tmp_called_value_193);
        Py_DECREF(tmp_args_element_value_204);
        if (tmp_args_element_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 203;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_192, tmp_args_element_value_200);
        Py_DECREF(tmp_args_element_value_200);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_195;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_called_value_196;
        PyObject *tmp_called_value_197;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_args_element_value_210;
        tmp_called_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_195 == NULL)) {
            tmp_called_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_called_value_197 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[202]);
        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = Py_None;
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[225]);
        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[216]);
        if (tmp_args_element_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[233]);
        if (tmp_args_element_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_206, tmp_args_element_value_207, tmp_args_element_value_208, tmp_args_element_value_209};
            tmp_called_value_196 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_197, call_args);
        }

        Py_DECREF(tmp_called_value_197);
        Py_DECREF(tmp_args_element_value_207);
        Py_DECREF(tmp_args_element_value_208);
        Py_DECREF(tmp_args_element_value_209);
        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_210 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__38_glUniform1fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 207;
        tmp_args_element_value_205 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_196, tmp_args_element_value_210);
        Py_DECREF(tmp_called_value_196);
        Py_DECREF(tmp_args_element_value_210);
        if (tmp_args_element_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 206;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_195, tmp_args_element_value_205);
        Py_DECREF(tmp_args_element_value_205);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_198;
        PyObject *tmp_args_element_value_211;
        PyObject *tmp_called_value_199;
        PyObject *tmp_called_value_200;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_element_value_214;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_element_value_215;
        tmp_called_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_198 == NULL)) {
            tmp_called_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_called_value_200 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[202]);
        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = Py_None;
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[225]);
        if (tmp_args_element_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_213);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[225]);
        if (tmp_args_element_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_213);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_212, tmp_args_element_value_213, tmp_args_element_value_214};
            tmp_called_value_199 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_200, call_args);
        }

        Py_DECREF(tmp_called_value_200);
        Py_DECREF(tmp_args_element_value_213);
        Py_DECREF(tmp_args_element_value_214);
        if (tmp_called_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_215 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__39_glUniform1i();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 210;
        tmp_args_element_value_211 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_199, tmp_args_element_value_215);
        Py_DECREF(tmp_called_value_199);
        Py_DECREF(tmp_args_element_value_215);
        if (tmp_args_element_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 209;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_198, tmp_args_element_value_211);
        Py_DECREF(tmp_args_element_value_211);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_201;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_called_value_202;
        PyObject *tmp_called_value_203;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_args_element_value_218;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_element_value_221;
        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_201 == NULL)) {
            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_called_value_203 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[202]);
        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = Py_None;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_218 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[225]);
        if (tmp_args_element_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_218);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_219 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[216]);
        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_218);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_218);
            Py_DECREF(tmp_args_element_value_219);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[221]);
        if (tmp_args_element_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_218);
            Py_DECREF(tmp_args_element_value_219);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_217, tmp_args_element_value_218, tmp_args_element_value_219, tmp_args_element_value_220};
            tmp_called_value_202 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_203, call_args);
        }

        Py_DECREF(tmp_called_value_203);
        Py_DECREF(tmp_args_element_value_218);
        Py_DECREF(tmp_args_element_value_219);
        Py_DECREF(tmp_args_element_value_220);
        if (tmp_called_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_221 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__40_glUniform1iv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 213;
        tmp_args_element_value_216 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_202, tmp_args_element_value_221);
        Py_DECREF(tmp_called_value_202);
        Py_DECREF(tmp_args_element_value_221);
        if (tmp_args_element_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 212;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_201, tmp_args_element_value_216);
        Py_DECREF(tmp_args_element_value_216);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_204;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_called_value_205;
        PyObject *tmp_called_value_206;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_element_value_227;
        tmp_called_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_204 == NULL)) {
            tmp_called_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_called_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[202]);
        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_223 = Py_None;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[225]);
        if (tmp_args_element_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_224);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_225 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[252]);
        if (tmp_args_element_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_224);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[252]);
        if (tmp_args_element_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_223, tmp_args_element_value_224, tmp_args_element_value_225, tmp_args_element_value_226};
            tmp_called_value_205 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_206, call_args);
        }

        Py_DECREF(tmp_called_value_206);
        Py_DECREF(tmp_args_element_value_224);
        Py_DECREF(tmp_args_element_value_225);
        Py_DECREF(tmp_args_element_value_226);
        if (tmp_called_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_227 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__41_glUniform2f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 216;
        tmp_args_element_value_222 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_205, tmp_args_element_value_227);
        Py_DECREF(tmp_called_value_205);
        Py_DECREF(tmp_args_element_value_227);
        if (tmp_args_element_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 215;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_204, tmp_args_element_value_222);
        Py_DECREF(tmp_args_element_value_222);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_207;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_called_value_208;
        PyObject *tmp_called_value_209;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_229;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_element_value_233;
        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_207 == NULL)) {
            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_called_value_209 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[202]);
        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_229 = Py_None;
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[225]);
        if (tmp_args_element_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_230);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[216]);
        if (tmp_args_element_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_230);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[233]);
        if (tmp_args_element_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_229, tmp_args_element_value_230, tmp_args_element_value_231, tmp_args_element_value_232};
            tmp_called_value_208 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_209, call_args);
        }

        Py_DECREF(tmp_called_value_209);
        Py_DECREF(tmp_args_element_value_230);
        Py_DECREF(tmp_args_element_value_231);
        Py_DECREF(tmp_args_element_value_232);
        if (tmp_called_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_233 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__42_glUniform2fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 219;
        tmp_args_element_value_228 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_208, tmp_args_element_value_233);
        Py_DECREF(tmp_called_value_208);
        Py_DECREF(tmp_args_element_value_233);
        if (tmp_args_element_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 218;
        tmp_assign_source_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_207, tmp_args_element_value_228);
        Py_DECREF(tmp_args_element_value_228);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_210;
        PyObject *tmp_args_element_value_234;
        PyObject *tmp_called_value_211;
        PyObject *tmp_called_value_212;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_args_element_value_237;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_args_element_value_239;
        tmp_called_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_210 == NULL)) {
            tmp_called_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_called_value_212 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[202]);
        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_235 = Py_None;
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[225]);
        if (tmp_args_element_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_236);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_237 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[225]);
        if (tmp_args_element_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_236);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_236);
            Py_DECREF(tmp_args_element_value_237);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[225]);
        if (tmp_args_element_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_236);
            Py_DECREF(tmp_args_element_value_237);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_235, tmp_args_element_value_236, tmp_args_element_value_237, tmp_args_element_value_238};
            tmp_called_value_211 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_212, call_args);
        }

        Py_DECREF(tmp_called_value_212);
        Py_DECREF(tmp_args_element_value_236);
        Py_DECREF(tmp_args_element_value_237);
        Py_DECREF(tmp_args_element_value_238);
        if (tmp_called_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_239 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__43_glUniform2i();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 222;
        tmp_args_element_value_234 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_211, tmp_args_element_value_239);
        Py_DECREF(tmp_called_value_211);
        Py_DECREF(tmp_args_element_value_239);
        if (tmp_args_element_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 221;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_210, tmp_args_element_value_234);
        Py_DECREF(tmp_args_element_value_234);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_213;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_called_value_214;
        PyObject *tmp_called_value_215;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_args_element_value_244;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_245;
        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_213 == NULL)) {
            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_called_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[202]);
        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_241 = Py_None;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[225]);
        if (tmp_args_element_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_242);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_243 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[216]);
        if (tmp_args_element_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_242);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_242);
            Py_DECREF(tmp_args_element_value_243);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_244 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[221]);
        if (tmp_args_element_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_242);
            Py_DECREF(tmp_args_element_value_243);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_241, tmp_args_element_value_242, tmp_args_element_value_243, tmp_args_element_value_244};
            tmp_called_value_214 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_215, call_args);
        }

        Py_DECREF(tmp_called_value_215);
        Py_DECREF(tmp_args_element_value_242);
        Py_DECREF(tmp_args_element_value_243);
        Py_DECREF(tmp_args_element_value_244);
        if (tmp_called_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_245 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__44_glUniform2iv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 225;
        tmp_args_element_value_240 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_214, tmp_args_element_value_245);
        Py_DECREF(tmp_called_value_214);
        Py_DECREF(tmp_args_element_value_245);
        if (tmp_args_element_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 224;
        tmp_assign_source_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_213, tmp_args_element_value_240);
        Py_DECREF(tmp_args_element_value_240);
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_value_216;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_called_value_217;
        PyObject *tmp_called_value_218;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_249;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_251;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_args_element_value_252;
        tmp_called_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_216 == NULL)) {
            tmp_called_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_called_value_218 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[202]);
        if (tmp_called_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_247 = Py_None;
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[225]);
        if (tmp_args_element_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_249 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[252]);
        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[252]);
        if (tmp_args_element_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);
            Py_DECREF(tmp_args_element_value_250);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_251 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[252]);
        if (tmp_args_element_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);
            Py_DECREF(tmp_args_element_value_250);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_247, tmp_args_element_value_248, tmp_args_element_value_249, tmp_args_element_value_250, tmp_args_element_value_251};
            tmp_called_value_217 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_218, call_args);
        }

        Py_DECREF(tmp_called_value_218);
        Py_DECREF(tmp_args_element_value_248);
        Py_DECREF(tmp_args_element_value_249);
        Py_DECREF(tmp_args_element_value_250);
        Py_DECREF(tmp_args_element_value_251);
        if (tmp_called_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_252 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__45_glUniform3f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 228;
        tmp_args_element_value_246 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_217, tmp_args_element_value_252);
        Py_DECREF(tmp_called_value_217);
        Py_DECREF(tmp_args_element_value_252);
        if (tmp_args_element_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 227;
        tmp_assign_source_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_216, tmp_args_element_value_246);
        Py_DECREF(tmp_args_element_value_246);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_219;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_called_value_220;
        PyObject *tmp_called_value_221;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_args_element_value_255;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_args_element_value_257;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_args_element_value_258;
        tmp_called_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_219 == NULL)) {
            tmp_called_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_called_value_221 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[202]);
        if (tmp_called_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = Py_None;
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[225]);
        if (tmp_args_element_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[216]);
        if (tmp_args_element_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_257 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[233]);
        if (tmp_args_element_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_254, tmp_args_element_value_255, tmp_args_element_value_256, tmp_args_element_value_257};
            tmp_called_value_220 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_221, call_args);
        }

        Py_DECREF(tmp_called_value_221);
        Py_DECREF(tmp_args_element_value_255);
        Py_DECREF(tmp_args_element_value_256);
        Py_DECREF(tmp_args_element_value_257);
        if (tmp_called_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_258 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__46_glUniform3fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 231;
        tmp_args_element_value_253 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_220, tmp_args_element_value_258);
        Py_DECREF(tmp_called_value_220);
        Py_DECREF(tmp_args_element_value_258);
        if (tmp_args_element_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 230;
        tmp_assign_source_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_219, tmp_args_element_value_253);
        Py_DECREF(tmp_args_element_value_253);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_222;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_called_value_223;
        PyObject *tmp_called_value_224;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_args_element_value_265;
        tmp_called_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_222 == NULL)) {
            tmp_called_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_called_value_224 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[202]);
        if (tmp_called_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = Py_None;
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_261 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[225]);
        if (tmp_args_element_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[225]);
        if (tmp_args_element_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_263 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[225]);
        if (tmp_args_element_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[225]);
        if (tmp_args_element_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_260, tmp_args_element_value_261, tmp_args_element_value_262, tmp_args_element_value_263, tmp_args_element_value_264};
            tmp_called_value_223 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_224, call_args);
        }

        Py_DECREF(tmp_called_value_224);
        Py_DECREF(tmp_args_element_value_261);
        Py_DECREF(tmp_args_element_value_262);
        Py_DECREF(tmp_args_element_value_263);
        Py_DECREF(tmp_args_element_value_264);
        if (tmp_called_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_265 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__47_glUniform3i();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 234;
        tmp_args_element_value_259 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_223, tmp_args_element_value_265);
        Py_DECREF(tmp_called_value_223);
        Py_DECREF(tmp_args_element_value_265);
        if (tmp_args_element_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 233;
        tmp_assign_source_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_222, tmp_args_element_value_259);
        Py_DECREF(tmp_args_element_value_259);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_225;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_called_value_226;
        PyObject *tmp_called_value_227;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_args_element_value_271;
        tmp_called_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_225 == NULL)) {
            tmp_called_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_called_value_227 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[202]);
        if (tmp_called_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_267 = Py_None;
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[225]);
        if (tmp_args_element_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[216]);
        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[221]);
        if (tmp_args_element_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_267, tmp_args_element_value_268, tmp_args_element_value_269, tmp_args_element_value_270};
            tmp_called_value_226 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_227, call_args);
        }

        Py_DECREF(tmp_called_value_227);
        Py_DECREF(tmp_args_element_value_268);
        Py_DECREF(tmp_args_element_value_269);
        Py_DECREF(tmp_args_element_value_270);
        if (tmp_called_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_271 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__48_glUniform3iv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 237;
        tmp_args_element_value_266 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_226, tmp_args_element_value_271);
        Py_DECREF(tmp_called_value_226);
        Py_DECREF(tmp_args_element_value_271);
        if (tmp_args_element_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 236;
        tmp_assign_source_143 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_225, tmp_args_element_value_266);
        Py_DECREF(tmp_args_element_value_266);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_228;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_called_value_229;
        PyObject *tmp_called_value_230;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_275;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_element_value_277;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_args_element_value_278;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_args_element_value_279;
        tmp_called_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_228 == NULL)) {
            tmp_called_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_called_value_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[202]);
        if (tmp_called_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_273 = Py_None;
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_274 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[225]);
        if (tmp_args_element_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_275 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[252]);
        if (tmp_args_element_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[252]);
        if (tmp_args_element_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[252]);
        if (tmp_args_element_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);
            Py_DECREF(tmp_args_element_value_277);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_278 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[252]);
        if (tmp_args_element_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);
            Py_DECREF(tmp_args_element_value_277);

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_273, tmp_args_element_value_274, tmp_args_element_value_275, tmp_args_element_value_276, tmp_args_element_value_277, tmp_args_element_value_278};
            tmp_called_value_229 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_230, call_args);
        }

        Py_DECREF(tmp_called_value_230);
        Py_DECREF(tmp_args_element_value_274);
        Py_DECREF(tmp_args_element_value_275);
        Py_DECREF(tmp_args_element_value_276);
        Py_DECREF(tmp_args_element_value_277);
        Py_DECREF(tmp_args_element_value_278);
        if (tmp_called_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_279 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__49_glUniform4f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 240;
        tmp_args_element_value_272 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_229, tmp_args_element_value_279);
        Py_DECREF(tmp_called_value_229);
        Py_DECREF(tmp_args_element_value_279);
        if (tmp_args_element_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 239;
        tmp_assign_source_144 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_228, tmp_args_element_value_272);
        Py_DECREF(tmp_args_element_value_272);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_231;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_called_value_232;
        PyObject *tmp_called_value_233;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_args_element_value_282;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_args_element_value_284;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_element_value_285;
        tmp_called_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_231 == NULL)) {
            tmp_called_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_called_value_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[202]);
        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_281 = Py_None;
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_282 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[225]);
        if (tmp_args_element_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);
            Py_DECREF(tmp_args_element_value_282);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_283 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[216]);
        if (tmp_args_element_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);
            Py_DECREF(tmp_args_element_value_282);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);
            Py_DECREF(tmp_args_element_value_282);
            Py_DECREF(tmp_args_element_value_283);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_284 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[233]);
        if (tmp_args_element_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);
            Py_DECREF(tmp_args_element_value_282);
            Py_DECREF(tmp_args_element_value_283);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_281, tmp_args_element_value_282, tmp_args_element_value_283, tmp_args_element_value_284};
            tmp_called_value_232 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_233, call_args);
        }

        Py_DECREF(tmp_called_value_233);
        Py_DECREF(tmp_args_element_value_282);
        Py_DECREF(tmp_args_element_value_283);
        Py_DECREF(tmp_args_element_value_284);
        if (tmp_called_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_285 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__50_glUniform4fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 243;
        tmp_args_element_value_280 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_232, tmp_args_element_value_285);
        Py_DECREF(tmp_called_value_232);
        Py_DECREF(tmp_args_element_value_285);
        if (tmp_args_element_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 242;
        tmp_assign_source_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_231, tmp_args_element_value_280);
        Py_DECREF(tmp_args_element_value_280);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_234;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_called_value_235;
        PyObject *tmp_called_value_236;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_args_element_value_288;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_args_element_value_290;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_args_element_value_293;
        tmp_called_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_234 == NULL)) {
            tmp_called_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_called_value_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[202]);
        if (tmp_called_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = Py_None;
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[225]);
        if (tmp_args_element_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_289 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[225]);
        if (tmp_args_element_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_290 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[225]);
        if (tmp_args_element_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_291 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[225]);
        if (tmp_args_element_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[225]);
        if (tmp_args_element_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_287, tmp_args_element_value_288, tmp_args_element_value_289, tmp_args_element_value_290, tmp_args_element_value_291, tmp_args_element_value_292};
            tmp_called_value_235 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_236, call_args);
        }

        Py_DECREF(tmp_called_value_236);
        Py_DECREF(tmp_args_element_value_288);
        Py_DECREF(tmp_args_element_value_289);
        Py_DECREF(tmp_args_element_value_290);
        Py_DECREF(tmp_args_element_value_291);
        Py_DECREF(tmp_args_element_value_292);
        if (tmp_called_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_293 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__51_glUniform4i();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 246;
        tmp_args_element_value_286 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_235, tmp_args_element_value_293);
        Py_DECREF(tmp_called_value_235);
        Py_DECREF(tmp_args_element_value_293);
        if (tmp_args_element_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 245;
        tmp_assign_source_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_234, tmp_args_element_value_286);
        Py_DECREF(tmp_args_element_value_286);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_237;
        PyObject *tmp_args_element_value_294;
        PyObject *tmp_called_value_238;
        PyObject *tmp_called_value_239;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_args_element_value_295;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_args_element_value_298;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_args_element_value_299;
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_called_value_239 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[202]);
        if (tmp_called_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_295 = Py_None;
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_239);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_296 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[225]);
        if (tmp_args_element_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_239);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_239);
            Py_DECREF(tmp_args_element_value_296);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[216]);
        if (tmp_args_element_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_239);
            Py_DECREF(tmp_args_element_value_296);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_239);
            Py_DECREF(tmp_args_element_value_296);
            Py_DECREF(tmp_args_element_value_297);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_298 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[221]);
        if (tmp_args_element_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_239);
            Py_DECREF(tmp_args_element_value_296);
            Py_DECREF(tmp_args_element_value_297);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_295, tmp_args_element_value_296, tmp_args_element_value_297, tmp_args_element_value_298};
            tmp_called_value_238 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_239, call_args);
        }

        Py_DECREF(tmp_called_value_239);
        Py_DECREF(tmp_args_element_value_296);
        Py_DECREF(tmp_args_element_value_297);
        Py_DECREF(tmp_args_element_value_298);
        if (tmp_called_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_299 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__52_glUniform4iv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 249;
        tmp_args_element_value_294 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_238, tmp_args_element_value_299);
        Py_DECREF(tmp_called_value_238);
        Py_DECREF(tmp_args_element_value_299);
        if (tmp_args_element_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 248;
        tmp_assign_source_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_237, tmp_args_element_value_294);
        Py_DECREF(tmp_args_element_value_294);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_called_value_240;
        PyObject *tmp_args_element_value_300;
        PyObject *tmp_called_value_241;
        PyObject *tmp_called_value_242;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_args_element_value_301;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_args_element_value_303;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_args_element_value_306;
        tmp_called_value_240 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_240 == NULL)) {
            tmp_called_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_called_value_242 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[202]);
        if (tmp_called_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_301 = Py_None;
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_302 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[225]);
        if (tmp_args_element_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_302);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[216]);
        if (tmp_args_element_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_302);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[242]);
        if (tmp_args_element_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_208 == NULL)) {
            tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_305 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[233]);
        if (tmp_args_element_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_301, tmp_args_element_value_302, tmp_args_element_value_303, tmp_args_element_value_304, tmp_args_element_value_305};
            tmp_called_value_241 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_242, call_args);
        }

        Py_DECREF(tmp_called_value_242);
        Py_DECREF(tmp_args_element_value_302);
        Py_DECREF(tmp_args_element_value_303);
        Py_DECREF(tmp_args_element_value_304);
        Py_DECREF(tmp_args_element_value_305);
        if (tmp_called_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_306 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__53_glUniformMatrix2fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 252;
        tmp_args_element_value_300 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_241, tmp_args_element_value_306);
        Py_DECREF(tmp_called_value_241);
        Py_DECREF(tmp_args_element_value_306);
        if (tmp_args_element_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 251;
        tmp_assign_source_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_240, tmp_args_element_value_300);
        Py_DECREF(tmp_args_element_value_300);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_243;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_called_value_244;
        PyObject *tmp_called_value_245;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_args_element_value_308;
        PyObject *tmp_args_element_value_309;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_args_element_value_313;
        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_243 == NULL)) {
            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_called_value_245 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[202]);
        if (tmp_called_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_308 = Py_None;
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_309 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[225]);
        if (tmp_args_element_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);
            Py_DECREF(tmp_args_element_value_309);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_310 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[216]);
        if (tmp_args_element_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);
            Py_DECREF(tmp_args_element_value_309);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_311 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[242]);
        if (tmp_args_element_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);
            Py_DECREF(tmp_args_element_value_311);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_312 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[233]);
        if (tmp_args_element_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);
            Py_DECREF(tmp_args_element_value_311);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_308, tmp_args_element_value_309, tmp_args_element_value_310, tmp_args_element_value_311, tmp_args_element_value_312};
            tmp_called_value_244 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_245, call_args);
        }

        Py_DECREF(tmp_called_value_245);
        Py_DECREF(tmp_args_element_value_309);
        Py_DECREF(tmp_args_element_value_310);
        Py_DECREF(tmp_args_element_value_311);
        Py_DECREF(tmp_args_element_value_312);
        if (tmp_called_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_313 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__54_glUniformMatrix3fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 255;
        tmp_args_element_value_307 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_244, tmp_args_element_value_313);
        Py_DECREF(tmp_called_value_244);
        Py_DECREF(tmp_args_element_value_313);
        if (tmp_args_element_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 254;
        tmp_assign_source_149 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_243, tmp_args_element_value_307);
        Py_DECREF(tmp_args_element_value_307);
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_value_246;
        PyObject *tmp_args_element_value_314;
        PyObject *tmp_called_value_247;
        PyObject *tmp_called_value_248;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_args_element_value_315;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_args_element_value_317;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_args_element_value_319;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_args_element_value_320;
        tmp_called_value_246 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_246 == NULL)) {
            tmp_called_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_called_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[202]);
        if (tmp_called_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_315 = Py_None;
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_316 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[225]);
        if (tmp_args_element_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_316);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_317 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[216]);
        if (tmp_args_element_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_316);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_316);
            Py_DECREF(tmp_args_element_value_317);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_318 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[242]);
        if (tmp_args_element_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_316);
            Py_DECREF(tmp_args_element_value_317);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_316);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[233]);
        if (tmp_args_element_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);
            Py_DECREF(tmp_args_element_value_316);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_315, tmp_args_element_value_316, tmp_args_element_value_317, tmp_args_element_value_318, tmp_args_element_value_319};
            tmp_called_value_247 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_248, call_args);
        }

        Py_DECREF(tmp_called_value_248);
        Py_DECREF(tmp_args_element_value_316);
        Py_DECREF(tmp_args_element_value_317);
        Py_DECREF(tmp_args_element_value_318);
        Py_DECREF(tmp_args_element_value_319);
        if (tmp_called_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_320 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__55_glUniformMatrix4fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 258;
        tmp_args_element_value_314 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_247, tmp_args_element_value_320);
        Py_DECREF(tmp_called_value_247);
        Py_DECREF(tmp_args_element_value_320);
        if (tmp_args_element_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 257;
        tmp_assign_source_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_246, tmp_args_element_value_314);
        Py_DECREF(tmp_args_element_value_314);
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_249;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_called_value_250;
        PyObject *tmp_called_value_251;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_args_element_value_322;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_args_element_value_324;
        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_249 == NULL)) {
            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_called_value_251 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[202]);
        if (tmp_called_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_322 = Py_None;
        tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_220 == NULL)) {
            tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_251);

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_323 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[203]);
        if (tmp_args_element_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_251);

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_322, tmp_args_element_value_323};
            tmp_called_value_250 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_251, call_args);
        }

        Py_DECREF(tmp_called_value_251);
        Py_DECREF(tmp_args_element_value_323);
        if (tmp_called_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_324 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__56_glUseProgram();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 261;
        tmp_args_element_value_321 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_250, tmp_args_element_value_324);
        Py_DECREF(tmp_called_value_250);
        Py_DECREF(tmp_args_element_value_324);
        if (tmp_args_element_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 260;
        tmp_assign_source_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_249, tmp_args_element_value_321);
        Py_DECREF(tmp_args_element_value_321);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_252;
        PyObject *tmp_args_element_value_325;
        PyObject *tmp_called_value_253;
        PyObject *tmp_called_value_254;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_args_element_value_327;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_args_element_value_328;
        tmp_called_value_252 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_252 == NULL)) {
            tmp_called_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_called_value_254 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[202]);
        if (tmp_called_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_326 = Py_None;
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_327 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[203]);
        if (tmp_args_element_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_value_326, tmp_args_element_value_327};
            tmp_called_value_253 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_254, call_args);
        }

        Py_DECREF(tmp_called_value_254);
        Py_DECREF(tmp_args_element_value_327);
        if (tmp_called_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_328 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__57_glValidateProgram();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 264;
        tmp_args_element_value_325 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_253, tmp_args_element_value_328);
        Py_DECREF(tmp_called_value_253);
        Py_DECREF(tmp_args_element_value_328);
        if (tmp_args_element_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 263;
        tmp_assign_source_152 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_252, tmp_args_element_value_325);
        Py_DECREF(tmp_args_element_value_325);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_255;
        PyObject *tmp_args_element_value_329;
        PyObject *tmp_called_value_256;
        PyObject *tmp_called_value_257;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_args_element_value_330;
        PyObject *tmp_args_element_value_331;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_args_element_value_333;
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_called_value_257 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[202]);
        if (tmp_called_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_330 = Py_None;
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_257);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_331 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[203]);
        if (tmp_args_element_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_257);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_257);
            Py_DECREF(tmp_args_element_value_331);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_332 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[274]);
        if (tmp_args_element_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_257);
            Py_DECREF(tmp_args_element_value_331);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_330, tmp_args_element_value_331, tmp_args_element_value_332};
            tmp_called_value_256 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_257, call_args);
        }

        Py_DECREF(tmp_called_value_257);
        Py_DECREF(tmp_args_element_value_331);
        Py_DECREF(tmp_args_element_value_332);
        if (tmp_called_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_333 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__58_glVertexAttrib1d();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 267;
        tmp_args_element_value_329 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_256, tmp_args_element_value_333);
        Py_DECREF(tmp_called_value_256);
        Py_DECREF(tmp_args_element_value_333);
        if (tmp_args_element_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 266;
        tmp_assign_source_153 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_255, tmp_args_element_value_329);
        Py_DECREF(tmp_args_element_value_329);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_value_258;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_called_value_259;
        PyObject *tmp_called_value_260;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_args_element_value_335;
        PyObject *tmp_args_element_value_336;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_args_element_value_337;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_args_element_value_338;
        tmp_called_value_258 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_258 == NULL)) {
            tmp_called_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_226 == NULL)) {
            tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_called_value_260 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[202]);
        if (tmp_called_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_335 = Py_None;
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_260);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_336 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[203]);
        if (tmp_args_element_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_260);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_228 == NULL)) {
            tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_260);
            Py_DECREF(tmp_args_element_value_336);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_337 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[238]);
        if (tmp_args_element_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_260);
            Py_DECREF(tmp_args_element_value_336);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_335, tmp_args_element_value_336, tmp_args_element_value_337};
            tmp_called_value_259 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_260, call_args);
        }

        Py_DECREF(tmp_called_value_260);
        Py_DECREF(tmp_args_element_value_336);
        Py_DECREF(tmp_args_element_value_337);
        if (tmp_called_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_338 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__59_glVertexAttrib1dv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 270;
        tmp_args_element_value_334 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_259, tmp_args_element_value_338);
        Py_DECREF(tmp_called_value_259);
        Py_DECREF(tmp_args_element_value_338);
        if (tmp_args_element_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 269;
        tmp_assign_source_154 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_258, tmp_args_element_value_334);
        Py_DECREF(tmp_args_element_value_334);
        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_261;
        PyObject *tmp_args_element_value_339;
        PyObject *tmp_called_value_262;
        PyObject *tmp_called_value_263;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_args_element_value_340;
        PyObject *tmp_args_element_value_341;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_args_element_value_342;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_args_element_value_343;
        tmp_called_value_261 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_261 == NULL)) {
            tmp_called_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_called_value_263 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[202]);
        if (tmp_called_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_340 = Py_None;
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_263);

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_341 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[203]);
        if (tmp_args_element_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_263);

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_263);
            Py_DECREF(tmp_args_element_value_341);

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_342 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[252]);
        if (tmp_args_element_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_263);
            Py_DECREF(tmp_args_element_value_341);

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_340, tmp_args_element_value_341, tmp_args_element_value_342};
            tmp_called_value_262 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_263, call_args);
        }

        Py_DECREF(tmp_called_value_263);
        Py_DECREF(tmp_args_element_value_341);
        Py_DECREF(tmp_args_element_value_342);
        if (tmp_called_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_343 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__60_glVertexAttrib1f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 273;
        tmp_args_element_value_339 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_262, tmp_args_element_value_343);
        Py_DECREF(tmp_called_value_262);
        Py_DECREF(tmp_args_element_value_343);
        if (tmp_args_element_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 272;
        tmp_assign_source_155 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_261, tmp_args_element_value_339);
        Py_DECREF(tmp_args_element_value_339);
        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_value_264;
        PyObject *tmp_args_element_value_344;
        PyObject *tmp_called_value_265;
        PyObject *tmp_called_value_266;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_args_element_value_345;
        PyObject *tmp_args_element_value_346;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_args_element_value_347;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_args_element_value_348;
        tmp_called_value_264 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_264 == NULL)) {
            tmp_called_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_called_value_266 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[202]);
        if (tmp_called_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_345 = Py_None;
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_266);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_346 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[203]);
        if (tmp_args_element_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_266);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_266);
            Py_DECREF(tmp_args_element_value_346);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_347 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[233]);
        if (tmp_args_element_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_266);
            Py_DECREF(tmp_args_element_value_346);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_345, tmp_args_element_value_346, tmp_args_element_value_347};
            tmp_called_value_265 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_266, call_args);
        }

        Py_DECREF(tmp_called_value_266);
        Py_DECREF(tmp_args_element_value_346);
        Py_DECREF(tmp_args_element_value_347);
        if (tmp_called_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_348 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__61_glVertexAttrib1fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 276;
        tmp_args_element_value_344 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_265, tmp_args_element_value_348);
        Py_DECREF(tmp_called_value_265);
        Py_DECREF(tmp_args_element_value_348);
        if (tmp_args_element_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 275;
        tmp_assign_source_156 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_264, tmp_args_element_value_344);
        Py_DECREF(tmp_args_element_value_344);
        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_267;
        PyObject *tmp_args_element_value_349;
        PyObject *tmp_called_value_268;
        PyObject *tmp_called_value_269;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_args_element_value_350;
        PyObject *tmp_args_element_value_351;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_args_element_value_352;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_args_element_value_353;
        tmp_called_value_267 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_267 == NULL)) {
            tmp_called_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_called_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[202]);
        if (tmp_called_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_350 = Py_None;
        tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_236 == NULL)) {
            tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_269);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_351 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[203]);
        if (tmp_args_element_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_269);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_269);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_352 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[279]);
        if (tmp_args_element_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_269);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_value_350, tmp_args_element_value_351, tmp_args_element_value_352};
            tmp_called_value_268 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_269, call_args);
        }

        Py_DECREF(tmp_called_value_269);
        Py_DECREF(tmp_args_element_value_351);
        Py_DECREF(tmp_args_element_value_352);
        if (tmp_called_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_353 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__62_glVertexAttrib1s();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 279;
        tmp_args_element_value_349 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_268, tmp_args_element_value_353);
        Py_DECREF(tmp_called_value_268);
        Py_DECREF(tmp_args_element_value_353);
        if (tmp_args_element_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 278;
        tmp_assign_source_157 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_267, tmp_args_element_value_349);
        Py_DECREF(tmp_args_element_value_349);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_270;
        PyObject *tmp_args_element_value_354;
        PyObject *tmp_called_value_271;
        PyObject *tmp_called_value_272;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_args_element_value_355;
        PyObject *tmp_args_element_value_356;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_args_element_value_357;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_args_element_value_358;
        tmp_called_value_270 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_270 == NULL)) {
            tmp_called_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_called_value_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[202]);
        if (tmp_called_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_355 = Py_None;
        tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_239 == NULL)) {
            tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_272);

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_356 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[203]);
        if (tmp_args_element_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_272);

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_240 == NULL)) {
            tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_272);
            Py_DECREF(tmp_args_element_value_356);

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_357 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[281]);
        if (tmp_args_element_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_272);
            Py_DECREF(tmp_args_element_value_356);

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_value_355, tmp_args_element_value_356, tmp_args_element_value_357};
            tmp_called_value_271 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_272, call_args);
        }

        Py_DECREF(tmp_called_value_272);
        Py_DECREF(tmp_args_element_value_356);
        Py_DECREF(tmp_args_element_value_357);
        if (tmp_called_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_358 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__63_glVertexAttrib1sv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 282;
        tmp_args_element_value_354 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_271, tmp_args_element_value_358);
        Py_DECREF(tmp_called_value_271);
        Py_DECREF(tmp_args_element_value_358);
        if (tmp_args_element_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 281;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_270, tmp_args_element_value_354);
        Py_DECREF(tmp_args_element_value_354);
        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_273;
        PyObject *tmp_args_element_value_359;
        PyObject *tmp_called_value_274;
        PyObject *tmp_called_value_275;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_args_element_value_360;
        PyObject *tmp_args_element_value_361;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_args_element_value_362;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_args_element_value_363;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_args_element_value_364;
        tmp_called_value_273 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_273 == NULL)) {
            tmp_called_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_called_value_275 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[202]);
        if (tmp_called_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_360 = Py_None;
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_275);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_361 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[203]);
        if (tmp_args_element_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_275);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_275);
            Py_DECREF(tmp_args_element_value_361);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_362 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[274]);
        if (tmp_args_element_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_275);
            Py_DECREF(tmp_args_element_value_361);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_244 == NULL)) {
            tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_275);
            Py_DECREF(tmp_args_element_value_361);
            Py_DECREF(tmp_args_element_value_362);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_363 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[274]);
        if (tmp_args_element_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_275);
            Py_DECREF(tmp_args_element_value_361);
            Py_DECREF(tmp_args_element_value_362);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_360, tmp_args_element_value_361, tmp_args_element_value_362, tmp_args_element_value_363};
            tmp_called_value_274 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_275, call_args);
        }

        Py_DECREF(tmp_called_value_275);
        Py_DECREF(tmp_args_element_value_361);
        Py_DECREF(tmp_args_element_value_362);
        Py_DECREF(tmp_args_element_value_363);
        if (tmp_called_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_364 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__64_glVertexAttrib2d();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 285;
        tmp_args_element_value_359 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_274, tmp_args_element_value_364);
        Py_DECREF(tmp_called_value_274);
        Py_DECREF(tmp_args_element_value_364);
        if (tmp_args_element_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 284;
        tmp_assign_source_159 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_273, tmp_args_element_value_359);
        Py_DECREF(tmp_args_element_value_359);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_276;
        PyObject *tmp_args_element_value_365;
        PyObject *tmp_called_value_277;
        PyObject *tmp_called_value_278;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_args_element_value_366;
        PyObject *tmp_args_element_value_367;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_args_element_value_368;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_args_element_value_369;
        tmp_called_value_276 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_276 == NULL)) {
            tmp_called_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_245 == NULL)) {
            tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_called_value_278 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[202]);
        if (tmp_called_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_366 = Py_None;
        tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_246 == NULL)) {
            tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_278);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_367 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[203]);
        if (tmp_args_element_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_278);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_247 == NULL)) {
            tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_278);
            Py_DECREF(tmp_args_element_value_367);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_368 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[238]);
        if (tmp_args_element_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_278);
            Py_DECREF(tmp_args_element_value_367);

            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_366, tmp_args_element_value_367, tmp_args_element_value_368};
            tmp_called_value_277 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_278, call_args);
        }

        Py_DECREF(tmp_called_value_278);
        Py_DECREF(tmp_args_element_value_367);
        Py_DECREF(tmp_args_element_value_368);
        if (tmp_called_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_369 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__65_glVertexAttrib2dv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 288;
        tmp_args_element_value_365 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_277, tmp_args_element_value_369);
        Py_DECREF(tmp_called_value_277);
        Py_DECREF(tmp_args_element_value_369);
        if (tmp_args_element_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 287;
        tmp_assign_source_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_276, tmp_args_element_value_365);
        Py_DECREF(tmp_args_element_value_365);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_279;
        PyObject *tmp_args_element_value_370;
        PyObject *tmp_called_value_280;
        PyObject *tmp_called_value_281;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_args_element_value_371;
        PyObject *tmp_args_element_value_372;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_args_element_value_373;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_args_element_value_374;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_args_element_value_375;
        tmp_called_value_279 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_279 == NULL)) {
            tmp_called_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_248 == NULL)) {
            tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_called_value_281 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[202]);
        if (tmp_called_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_371 = Py_None;
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_281);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_372 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[203]);
        if (tmp_args_element_value_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_281);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_250 == NULL)) {
            tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_281);
            Py_DECREF(tmp_args_element_value_372);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_373 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[252]);
        if (tmp_args_element_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_281);
            Py_DECREF(tmp_args_element_value_372);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_251 == NULL)) {
            tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_281);
            Py_DECREF(tmp_args_element_value_372);
            Py_DECREF(tmp_args_element_value_373);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_374 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[252]);
        if (tmp_args_element_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_281);
            Py_DECREF(tmp_args_element_value_372);
            Py_DECREF(tmp_args_element_value_373);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_371, tmp_args_element_value_372, tmp_args_element_value_373, tmp_args_element_value_374};
            tmp_called_value_280 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_281, call_args);
        }

        Py_DECREF(tmp_called_value_281);
        Py_DECREF(tmp_args_element_value_372);
        Py_DECREF(tmp_args_element_value_373);
        Py_DECREF(tmp_args_element_value_374);
        if (tmp_called_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_375 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__66_glVertexAttrib2f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 291;
        tmp_args_element_value_370 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_280, tmp_args_element_value_375);
        Py_DECREF(tmp_called_value_280);
        Py_DECREF(tmp_args_element_value_375);
        if (tmp_args_element_value_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 290;
        tmp_assign_source_161 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_279, tmp_args_element_value_370);
        Py_DECREF(tmp_args_element_value_370);
        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_282;
        PyObject *tmp_args_element_value_376;
        PyObject *tmp_called_value_283;
        PyObject *tmp_called_value_284;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_args_element_value_377;
        PyObject *tmp_args_element_value_378;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_args_element_value_379;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_args_element_value_380;
        tmp_called_value_282 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_282 == NULL)) {
            tmp_called_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_252 == NULL)) {
            tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_called_value_284 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[202]);
        if (tmp_called_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_377 = Py_None;
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_284);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_378 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[203]);
        if (tmp_args_element_value_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_284);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_254 == NULL)) {
            tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_284);
            Py_DECREF(tmp_args_element_value_378);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_379 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[233]);
        if (tmp_args_element_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_284);
            Py_DECREF(tmp_args_element_value_378);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_377, tmp_args_element_value_378, tmp_args_element_value_379};
            tmp_called_value_283 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_284, call_args);
        }

        Py_DECREF(tmp_called_value_284);
        Py_DECREF(tmp_args_element_value_378);
        Py_DECREF(tmp_args_element_value_379);
        if (tmp_called_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_380 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__67_glVertexAttrib2fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 294;
        tmp_args_element_value_376 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_283, tmp_args_element_value_380);
        Py_DECREF(tmp_called_value_283);
        Py_DECREF(tmp_args_element_value_380);
        if (tmp_args_element_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 293;
        tmp_assign_source_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_282, tmp_args_element_value_376);
        Py_DECREF(tmp_args_element_value_376);
        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_called_value_285;
        PyObject *tmp_args_element_value_381;
        PyObject *tmp_called_value_286;
        PyObject *tmp_called_value_287;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_args_element_value_382;
        PyObject *tmp_args_element_value_383;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_args_element_value_384;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_args_element_value_385;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_args_element_value_386;
        tmp_called_value_285 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_285 == NULL)) {
            tmp_called_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_255 == NULL)) {
            tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_called_value_287 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[202]);
        if (tmp_called_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_382 = Py_None;
        tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_256 == NULL)) {
            tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_287);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_383 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[203]);
        if (tmp_args_element_value_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_287);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_257 == NULL)) {
            tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_287);
            Py_DECREF(tmp_args_element_value_383);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_384 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[279]);
        if (tmp_args_element_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_287);
            Py_DECREF(tmp_args_element_value_383);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_258 == NULL)) {
            tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_287);
            Py_DECREF(tmp_args_element_value_383);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_385 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[279]);
        if (tmp_args_element_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_287);
            Py_DECREF(tmp_args_element_value_383);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_382, tmp_args_element_value_383, tmp_args_element_value_384, tmp_args_element_value_385};
            tmp_called_value_286 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_287, call_args);
        }

        Py_DECREF(tmp_called_value_287);
        Py_DECREF(tmp_args_element_value_383);
        Py_DECREF(tmp_args_element_value_384);
        Py_DECREF(tmp_args_element_value_385);
        if (tmp_called_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_386 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__68_glVertexAttrib2s();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 297;
        tmp_args_element_value_381 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_286, tmp_args_element_value_386);
        Py_DECREF(tmp_called_value_286);
        Py_DECREF(tmp_args_element_value_386);
        if (tmp_args_element_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 296;
        tmp_assign_source_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_285, tmp_args_element_value_381);
        Py_DECREF(tmp_args_element_value_381);
        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_288;
        PyObject *tmp_args_element_value_387;
        PyObject *tmp_called_value_289;
        PyObject *tmp_called_value_290;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_args_element_value_388;
        PyObject *tmp_args_element_value_389;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_args_element_value_390;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_args_element_value_391;
        tmp_called_value_288 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_288 == NULL)) {
            tmp_called_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_259 == NULL)) {
            tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_called_value_290 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[202]);
        if (tmp_called_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_388 = Py_None;
        tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_260 == NULL)) {
            tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_290);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_389 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[203]);
        if (tmp_args_element_value_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_290);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_261 == NULL)) {
            tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_290);
            Py_DECREF(tmp_args_element_value_389);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_390 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[281]);
        if (tmp_args_element_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_290);
            Py_DECREF(tmp_args_element_value_389);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 300;
        {
            PyObject *call_args[] = {tmp_args_element_value_388, tmp_args_element_value_389, tmp_args_element_value_390};
            tmp_called_value_289 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_290, call_args);
        }

        Py_DECREF(tmp_called_value_290);
        Py_DECREF(tmp_args_element_value_389);
        Py_DECREF(tmp_args_element_value_390);
        if (tmp_called_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_391 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__69_glVertexAttrib2sv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 300;
        tmp_args_element_value_387 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_289, tmp_args_element_value_391);
        Py_DECREF(tmp_called_value_289);
        Py_DECREF(tmp_args_element_value_391);
        if (tmp_args_element_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 299;
        tmp_assign_source_164 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_288, tmp_args_element_value_387);
        Py_DECREF(tmp_args_element_value_387);
        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_291;
        PyObject *tmp_args_element_value_392;
        PyObject *tmp_called_value_292;
        PyObject *tmp_called_value_293;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_args_element_value_393;
        PyObject *tmp_args_element_value_394;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_args_element_value_395;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_args_element_value_396;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_args_element_value_397;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_args_element_value_398;
        tmp_called_value_291 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_291 == NULL)) {
            tmp_called_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_262 == NULL)) {
            tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_called_value_293 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[202]);
        if (tmp_called_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_393 = Py_None;
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_394 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[203]);
        if (tmp_args_element_value_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_264 == NULL)) {
            tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);
            Py_DECREF(tmp_args_element_value_394);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_395 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[274]);
        if (tmp_args_element_value_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);
            Py_DECREF(tmp_args_element_value_394);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_265 == NULL)) {
            tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);
            Py_DECREF(tmp_args_element_value_394);
            Py_DECREF(tmp_args_element_value_395);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_396 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[274]);
        if (tmp_args_element_value_396 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);
            Py_DECREF(tmp_args_element_value_394);
            Py_DECREF(tmp_args_element_value_395);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);
            Py_DECREF(tmp_args_element_value_394);
            Py_DECREF(tmp_args_element_value_395);
            Py_DECREF(tmp_args_element_value_396);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_397 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[274]);
        if (tmp_args_element_value_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_293);
            Py_DECREF(tmp_args_element_value_394);
            Py_DECREF(tmp_args_element_value_395);
            Py_DECREF(tmp_args_element_value_396);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_393, tmp_args_element_value_394, tmp_args_element_value_395, tmp_args_element_value_396, tmp_args_element_value_397};
            tmp_called_value_292 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_293, call_args);
        }

        Py_DECREF(tmp_called_value_293);
        Py_DECREF(tmp_args_element_value_394);
        Py_DECREF(tmp_args_element_value_395);
        Py_DECREF(tmp_args_element_value_396);
        Py_DECREF(tmp_args_element_value_397);
        if (tmp_called_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_398 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__70_glVertexAttrib3d();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 303;
        tmp_args_element_value_392 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_292, tmp_args_element_value_398);
        Py_DECREF(tmp_called_value_292);
        Py_DECREF(tmp_args_element_value_398);
        if (tmp_args_element_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 302;
        tmp_assign_source_165 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_291, tmp_args_element_value_392);
        Py_DECREF(tmp_args_element_value_392);
        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_294;
        PyObject *tmp_args_element_value_399;
        PyObject *tmp_called_value_295;
        PyObject *tmp_called_value_296;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_args_element_value_400;
        PyObject *tmp_args_element_value_401;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_args_element_value_402;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_args_element_value_403;
        tmp_called_value_294 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_294 == NULL)) {
            tmp_called_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_267 == NULL)) {
            tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_called_value_296 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[202]);
        if (tmp_called_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_400 = Py_None;
        tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_268 == NULL)) {
            tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_296);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_401 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[203]);
        if (tmp_args_element_value_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_296);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_269 == NULL)) {
            tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_296);
            Py_DECREF(tmp_args_element_value_401);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_402 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[238]);
        if (tmp_args_element_value_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_296);
            Py_DECREF(tmp_args_element_value_401);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_value_400, tmp_args_element_value_401, tmp_args_element_value_402};
            tmp_called_value_295 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_296, call_args);
        }

        Py_DECREF(tmp_called_value_296);
        Py_DECREF(tmp_args_element_value_401);
        Py_DECREF(tmp_args_element_value_402);
        if (tmp_called_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_403 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__71_glVertexAttrib3dv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 306;
        tmp_args_element_value_399 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_295, tmp_args_element_value_403);
        Py_DECREF(tmp_called_value_295);
        Py_DECREF(tmp_args_element_value_403);
        if (tmp_args_element_value_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 305;
        tmp_assign_source_166 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_294, tmp_args_element_value_399);
        Py_DECREF(tmp_args_element_value_399);
        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_297;
        PyObject *tmp_args_element_value_404;
        PyObject *tmp_called_value_298;
        PyObject *tmp_called_value_299;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_args_element_value_405;
        PyObject *tmp_args_element_value_406;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_args_element_value_407;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_args_element_value_408;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_args_element_value_409;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_args_element_value_410;
        tmp_called_value_297 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_297 == NULL)) {
            tmp_called_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_270 == NULL)) {
            tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_called_value_299 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[202]);
        if (tmp_called_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_405 = Py_None;
        tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_271 == NULL)) {
            tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_406 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[203]);
        if (tmp_args_element_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_272 == NULL)) {
            tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);
            Py_DECREF(tmp_args_element_value_406);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_407 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[252]);
        if (tmp_args_element_value_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);
            Py_DECREF(tmp_args_element_value_406);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_273 == NULL)) {
            tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_408 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[252]);
        if (tmp_args_element_value_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);
            Py_DECREF(tmp_args_element_value_408);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_409 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[252]);
        if (tmp_args_element_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_299);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);
            Py_DECREF(tmp_args_element_value_408);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_405, tmp_args_element_value_406, tmp_args_element_value_407, tmp_args_element_value_408, tmp_args_element_value_409};
            tmp_called_value_298 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_299, call_args);
        }

        Py_DECREF(tmp_called_value_299);
        Py_DECREF(tmp_args_element_value_406);
        Py_DECREF(tmp_args_element_value_407);
        Py_DECREF(tmp_args_element_value_408);
        Py_DECREF(tmp_args_element_value_409);
        if (tmp_called_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_410 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__72_glVertexAttrib3f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 309;
        tmp_args_element_value_404 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_298, tmp_args_element_value_410);
        Py_DECREF(tmp_called_value_298);
        Py_DECREF(tmp_args_element_value_410);
        if (tmp_args_element_value_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 308;
        tmp_assign_source_167 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_297, tmp_args_element_value_404);
        Py_DECREF(tmp_args_element_value_404);
        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_value_300;
        PyObject *tmp_args_element_value_411;
        PyObject *tmp_called_value_301;
        PyObject *tmp_called_value_302;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_args_element_value_412;
        PyObject *tmp_args_element_value_413;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_args_element_value_414;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_args_element_value_415;
        tmp_called_value_300 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_300 == NULL)) {
            tmp_called_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_275 == NULL)) {
            tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_called_value_302 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[202]);
        if (tmp_called_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_412 = Py_None;
        tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_276 == NULL)) {
            tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_302);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_413 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[203]);
        if (tmp_args_element_value_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_302);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_277 == NULL)) {
            tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_302);
            Py_DECREF(tmp_args_element_value_413);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_414 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[233]);
        if (tmp_args_element_value_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_302);
            Py_DECREF(tmp_args_element_value_413);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_412, tmp_args_element_value_413, tmp_args_element_value_414};
            tmp_called_value_301 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_302, call_args);
        }

        Py_DECREF(tmp_called_value_302);
        Py_DECREF(tmp_args_element_value_413);
        Py_DECREF(tmp_args_element_value_414);
        if (tmp_called_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_415 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__73_glVertexAttrib3fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 312;
        tmp_args_element_value_411 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_301, tmp_args_element_value_415);
        Py_DECREF(tmp_called_value_301);
        Py_DECREF(tmp_args_element_value_415);
        if (tmp_args_element_value_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 311;
        tmp_assign_source_168 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_300, tmp_args_element_value_411);
        Py_DECREF(tmp_args_element_value_411);
        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_303;
        PyObject *tmp_args_element_value_416;
        PyObject *tmp_called_value_304;
        PyObject *tmp_called_value_305;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_args_element_value_417;
        PyObject *tmp_args_element_value_418;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_args_element_value_419;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_args_element_value_420;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_args_element_value_421;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_args_element_value_422;
        tmp_called_value_303 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_303 == NULL)) {
            tmp_called_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_called_value_305 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[202]);
        if (tmp_called_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_417 = Py_None;
        tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_279 == NULL)) {
            tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_418 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[203]);
        if (tmp_args_element_value_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_280 == NULL)) {
            tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);
            Py_DECREF(tmp_args_element_value_418);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_419 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[279]);
        if (tmp_args_element_value_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);
            Py_DECREF(tmp_args_element_value_418);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_281 == NULL)) {
            tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);
            Py_DECREF(tmp_args_element_value_418);
            Py_DECREF(tmp_args_element_value_419);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_420 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[279]);
        if (tmp_args_element_value_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);
            Py_DECREF(tmp_args_element_value_418);
            Py_DECREF(tmp_args_element_value_419);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_282 == NULL)) {
            tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);
            Py_DECREF(tmp_args_element_value_418);
            Py_DECREF(tmp_args_element_value_419);
            Py_DECREF(tmp_args_element_value_420);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_421 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[279]);
        if (tmp_args_element_value_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_305);
            Py_DECREF(tmp_args_element_value_418);
            Py_DECREF(tmp_args_element_value_419);
            Py_DECREF(tmp_args_element_value_420);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = {tmp_args_element_value_417, tmp_args_element_value_418, tmp_args_element_value_419, tmp_args_element_value_420, tmp_args_element_value_421};
            tmp_called_value_304 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_305, call_args);
        }

        Py_DECREF(tmp_called_value_305);
        Py_DECREF(tmp_args_element_value_418);
        Py_DECREF(tmp_args_element_value_419);
        Py_DECREF(tmp_args_element_value_420);
        Py_DECREF(tmp_args_element_value_421);
        if (tmp_called_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_422 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__74_glVertexAttrib3s();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 315;
        tmp_args_element_value_416 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_304, tmp_args_element_value_422);
        Py_DECREF(tmp_called_value_304);
        Py_DECREF(tmp_args_element_value_422);
        if (tmp_args_element_value_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 314;
        tmp_assign_source_169 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_303, tmp_args_element_value_416);
        Py_DECREF(tmp_args_element_value_416);
        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_306;
        PyObject *tmp_args_element_value_423;
        PyObject *tmp_called_value_307;
        PyObject *tmp_called_value_308;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_args_element_value_424;
        PyObject *tmp_args_element_value_425;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_args_element_value_426;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_args_element_value_427;
        tmp_called_value_306 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_306 == NULL)) {
            tmp_called_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_283 == NULL)) {
            tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_called_value_308 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[202]);
        if (tmp_called_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_424 = Py_None;
        tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_284 == NULL)) {
            tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_308);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_425 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[203]);
        if (tmp_args_element_value_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_308);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_285 == NULL)) {
            tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_308);
            Py_DECREF(tmp_args_element_value_425);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_426 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[281]);
        if (tmp_args_element_value_426 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_308);
            Py_DECREF(tmp_args_element_value_425);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_424, tmp_args_element_value_425, tmp_args_element_value_426};
            tmp_called_value_307 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_308, call_args);
        }

        Py_DECREF(tmp_called_value_308);
        Py_DECREF(tmp_args_element_value_425);
        Py_DECREF(tmp_args_element_value_426);
        if (tmp_called_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_427 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__75_glVertexAttrib3sv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 318;
        tmp_args_element_value_423 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_307, tmp_args_element_value_427);
        Py_DECREF(tmp_called_value_307);
        Py_DECREF(tmp_args_element_value_427);
        if (tmp_args_element_value_423 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 317;
        tmp_assign_source_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_306, tmp_args_element_value_423);
        Py_DECREF(tmp_args_element_value_423);
        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_called_value_309;
        PyObject *tmp_args_element_value_428;
        PyObject *tmp_called_value_310;
        PyObject *tmp_called_value_311;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_args_element_value_429;
        PyObject *tmp_args_element_value_430;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_args_element_value_431;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_args_element_value_432;
        tmp_called_value_309 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_309 == NULL)) {
            tmp_called_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_called_value_311 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[202]);
        if (tmp_called_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_429 = Py_None;
        tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_287 == NULL)) {
            tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_311);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_430 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[203]);
        if (tmp_args_element_value_430 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_311);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_288 == NULL)) {
            tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_311);
            Py_DECREF(tmp_args_element_value_430);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_431 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[295]);
        if (tmp_args_element_value_431 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_311);
            Py_DECREF(tmp_args_element_value_430);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 321;
        {
            PyObject *call_args[] = {tmp_args_element_value_429, tmp_args_element_value_430, tmp_args_element_value_431};
            tmp_called_value_310 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_311, call_args);
        }

        Py_DECREF(tmp_called_value_311);
        Py_DECREF(tmp_args_element_value_430);
        Py_DECREF(tmp_args_element_value_431);
        if (tmp_called_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_432 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__76_glVertexAttrib4Nbv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 321;
        tmp_args_element_value_428 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_310, tmp_args_element_value_432);
        Py_DECREF(tmp_called_value_310);
        Py_DECREF(tmp_args_element_value_432);
        if (tmp_args_element_value_428 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 320;
        tmp_assign_source_171 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_309, tmp_args_element_value_428);
        Py_DECREF(tmp_args_element_value_428);
        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_value_312;
        PyObject *tmp_args_element_value_433;
        PyObject *tmp_called_value_313;
        PyObject *tmp_called_value_314;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_args_element_value_434;
        PyObject *tmp_args_element_value_435;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_args_element_value_436;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_args_element_value_437;
        tmp_called_value_312 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_312 == NULL)) {
            tmp_called_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_called_value_314 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[202]);
        if (tmp_called_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_434 = Py_None;
        tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_290 == NULL)) {
            tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_314);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_435 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[203]);
        if (tmp_args_element_value_435 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_314);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_291 == NULL)) {
            tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_314);
            Py_DECREF(tmp_args_element_value_435);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_436 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[221]);
        if (tmp_args_element_value_436 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_314);
            Py_DECREF(tmp_args_element_value_435);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_434, tmp_args_element_value_435, tmp_args_element_value_436};
            tmp_called_value_313 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_314, call_args);
        }

        Py_DECREF(tmp_called_value_314);
        Py_DECREF(tmp_args_element_value_435);
        Py_DECREF(tmp_args_element_value_436);
        if (tmp_called_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_437 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__77_glVertexAttrib4Niv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 324;
        tmp_args_element_value_433 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_313, tmp_args_element_value_437);
        Py_DECREF(tmp_called_value_313);
        Py_DECREF(tmp_args_element_value_437);
        if (tmp_args_element_value_433 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 323;
        tmp_assign_source_172 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_312, tmp_args_element_value_433);
        Py_DECREF(tmp_args_element_value_433);
        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_315;
        PyObject *tmp_args_element_value_438;
        PyObject *tmp_called_value_316;
        PyObject *tmp_called_value_317;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_args_element_value_439;
        PyObject *tmp_args_element_value_440;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_args_element_value_441;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_args_element_value_442;
        tmp_called_value_315 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_315 == NULL)) {
            tmp_called_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_292 == NULL)) {
            tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_called_value_317 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[202]);
        if (tmp_called_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_439 = Py_None;
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_317);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_440 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[203]);
        if (tmp_args_element_value_440 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_317);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_294 == NULL)) {
            tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_317);
            Py_DECREF(tmp_args_element_value_440);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_441 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[281]);
        if (tmp_args_element_value_441 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_317);
            Py_DECREF(tmp_args_element_value_440);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_439, tmp_args_element_value_440, tmp_args_element_value_441};
            tmp_called_value_316 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_317, call_args);
        }

        Py_DECREF(tmp_called_value_317);
        Py_DECREF(tmp_args_element_value_440);
        Py_DECREF(tmp_args_element_value_441);
        if (tmp_called_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_442 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__78_glVertexAttrib4Nsv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 327;
        tmp_args_element_value_438 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_316, tmp_args_element_value_442);
        Py_DECREF(tmp_called_value_316);
        Py_DECREF(tmp_args_element_value_442);
        if (tmp_args_element_value_438 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 326;
        tmp_assign_source_173 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_315, tmp_args_element_value_438);
        Py_DECREF(tmp_args_element_value_438);
        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_318;
        PyObject *tmp_args_element_value_443;
        PyObject *tmp_called_value_319;
        PyObject *tmp_called_value_320;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_args_element_value_444;
        PyObject *tmp_args_element_value_445;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_args_element_value_446;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_args_element_value_447;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_args_element_value_448;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_args_element_value_449;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_args_element_value_450;
        tmp_called_value_318 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_318 == NULL)) {
            tmp_called_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_295 == NULL)) {
            tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_called_value_320 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[202]);
        if (tmp_called_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_444 = Py_None;
        tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_296 == NULL)) {
            tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_445 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[203]);
        if (tmp_args_element_value_445 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_446 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[299]);
        if (tmp_args_element_value_446 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);
            Py_DECREF(tmp_args_element_value_446);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_447 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[299]);
        if (tmp_args_element_value_447 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);
            Py_DECREF(tmp_args_element_value_446);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_299 == NULL)) {
            tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);
            Py_DECREF(tmp_args_element_value_446);
            Py_DECREF(tmp_args_element_value_447);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_448 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[299]);
        if (tmp_args_element_value_448 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);
            Py_DECREF(tmp_args_element_value_446);
            Py_DECREF(tmp_args_element_value_447);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_300 == NULL)) {
            tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);
            Py_DECREF(tmp_args_element_value_446);
            Py_DECREF(tmp_args_element_value_447);
            Py_DECREF(tmp_args_element_value_448);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_449 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[299]);
        if (tmp_args_element_value_449 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_320);
            Py_DECREF(tmp_args_element_value_445);
            Py_DECREF(tmp_args_element_value_446);
            Py_DECREF(tmp_args_element_value_447);
            Py_DECREF(tmp_args_element_value_448);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_444, tmp_args_element_value_445, tmp_args_element_value_446, tmp_args_element_value_447, tmp_args_element_value_448, tmp_args_element_value_449};
            tmp_called_value_319 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_320, call_args);
        }

        Py_DECREF(tmp_called_value_320);
        Py_DECREF(tmp_args_element_value_445);
        Py_DECREF(tmp_args_element_value_446);
        Py_DECREF(tmp_args_element_value_447);
        Py_DECREF(tmp_args_element_value_448);
        Py_DECREF(tmp_args_element_value_449);
        if (tmp_called_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_450 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__79_glVertexAttrib4Nub();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 330;
        tmp_args_element_value_443 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_319, tmp_args_element_value_450);
        Py_DECREF(tmp_called_value_319);
        Py_DECREF(tmp_args_element_value_450);
        if (tmp_args_element_value_443 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 329;
        tmp_assign_source_174 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_318, tmp_args_element_value_443);
        Py_DECREF(tmp_args_element_value_443);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_321;
        PyObject *tmp_args_element_value_451;
        PyObject *tmp_called_value_322;
        PyObject *tmp_called_value_323;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_args_element_value_452;
        PyObject *tmp_args_element_value_453;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_args_element_value_454;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_args_element_value_455;
        tmp_called_value_321 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_321 == NULL)) {
            tmp_called_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_called_value_323 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[202]);
        if (tmp_called_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_452 = Py_None;
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_323);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_453 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[203]);
        if (tmp_args_element_value_453 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_323);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_323);
            Py_DECREF(tmp_args_element_value_453);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_454 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[301]);
        if (tmp_args_element_value_454 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_323);
            Py_DECREF(tmp_args_element_value_453);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_452, tmp_args_element_value_453, tmp_args_element_value_454};
            tmp_called_value_322 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_323, call_args);
        }

        Py_DECREF(tmp_called_value_323);
        Py_DECREF(tmp_args_element_value_453);
        Py_DECREF(tmp_args_element_value_454);
        if (tmp_called_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_455 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__80_glVertexAttrib4Nubv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 333;
        tmp_args_element_value_451 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_322, tmp_args_element_value_455);
        Py_DECREF(tmp_called_value_322);
        Py_DECREF(tmp_args_element_value_455);
        if (tmp_args_element_value_451 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 332;
        tmp_assign_source_175 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_321, tmp_args_element_value_451);
        Py_DECREF(tmp_args_element_value_451);
        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_324;
        PyObject *tmp_args_element_value_456;
        PyObject *tmp_called_value_325;
        PyObject *tmp_called_value_326;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_args_element_value_457;
        PyObject *tmp_args_element_value_458;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_args_element_value_459;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_args_element_value_460;
        tmp_called_value_324 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_324 == NULL)) {
            tmp_called_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_304 == NULL)) {
            tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_called_value_326 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[202]);
        if (tmp_called_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_457 = Py_None;
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_326);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_458 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[203]);
        if (tmp_args_element_value_458 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_326);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_326);
            Py_DECREF(tmp_args_element_value_458);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_459 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[217]);
        if (tmp_args_element_value_459 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_326);
            Py_DECREF(tmp_args_element_value_458);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = {tmp_args_element_value_457, tmp_args_element_value_458, tmp_args_element_value_459};
            tmp_called_value_325 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_326, call_args);
        }

        Py_DECREF(tmp_called_value_326);
        Py_DECREF(tmp_args_element_value_458);
        Py_DECREF(tmp_args_element_value_459);
        if (tmp_called_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_460 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__81_glVertexAttrib4Nuiv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 336;
        tmp_args_element_value_456 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_325, tmp_args_element_value_460);
        Py_DECREF(tmp_called_value_325);
        Py_DECREF(tmp_args_element_value_460);
        if (tmp_args_element_value_456 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 335;
        tmp_assign_source_176 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_324, tmp_args_element_value_456);
        Py_DECREF(tmp_args_element_value_456);
        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_called_value_327;
        PyObject *tmp_args_element_value_461;
        PyObject *tmp_called_value_328;
        PyObject *tmp_called_value_329;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_args_element_value_462;
        PyObject *tmp_args_element_value_463;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_args_element_value_464;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_args_element_value_465;
        tmp_called_value_327 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_327 == NULL)) {
            tmp_called_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_307 == NULL)) {
            tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_called_value_329 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[202]);
        if (tmp_called_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_462 = Py_None;
        tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_308 == NULL)) {
            tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_329);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_463 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[203]);
        if (tmp_args_element_value_463 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_329);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_309 == NULL)) {
            tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_329);
            Py_DECREF(tmp_args_element_value_463);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_464 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[304]);
        if (tmp_args_element_value_464 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_329);
            Py_DECREF(tmp_args_element_value_463);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = {tmp_args_element_value_462, tmp_args_element_value_463, tmp_args_element_value_464};
            tmp_called_value_328 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_329, call_args);
        }

        Py_DECREF(tmp_called_value_329);
        Py_DECREF(tmp_args_element_value_463);
        Py_DECREF(tmp_args_element_value_464);
        if (tmp_called_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_465 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__82_glVertexAttrib4Nusv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 339;
        tmp_args_element_value_461 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_328, tmp_args_element_value_465);
        Py_DECREF(tmp_called_value_328);
        Py_DECREF(tmp_args_element_value_465);
        if (tmp_args_element_value_461 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 338;
        tmp_assign_source_177 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_327, tmp_args_element_value_461);
        Py_DECREF(tmp_args_element_value_461);
        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_called_value_330;
        PyObject *tmp_args_element_value_466;
        PyObject *tmp_called_value_331;
        PyObject *tmp_called_value_332;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_args_element_value_467;
        PyObject *tmp_args_element_value_468;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_args_element_value_469;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_args_element_value_470;
        tmp_called_value_330 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_330 == NULL)) {
            tmp_called_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_310 == NULL)) {
            tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_called_value_332 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[202]);
        if (tmp_called_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_467 = Py_None;
        tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_311 == NULL)) {
            tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_332);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_468 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[203]);
        if (tmp_args_element_value_468 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_332);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_312 == NULL)) {
            tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_332);
            Py_DECREF(tmp_args_element_value_468);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_469 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[295]);
        if (tmp_args_element_value_469 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_332);
            Py_DECREF(tmp_args_element_value_468);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_467, tmp_args_element_value_468, tmp_args_element_value_469};
            tmp_called_value_331 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_332, call_args);
        }

        Py_DECREF(tmp_called_value_332);
        Py_DECREF(tmp_args_element_value_468);
        Py_DECREF(tmp_args_element_value_469);
        if (tmp_called_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_470 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__83_glVertexAttrib4bv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 342;
        tmp_args_element_value_466 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_331, tmp_args_element_value_470);
        Py_DECREF(tmp_called_value_331);
        Py_DECREF(tmp_args_element_value_470);
        if (tmp_args_element_value_466 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 341;
        tmp_assign_source_178 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_330, tmp_args_element_value_466);
        Py_DECREF(tmp_args_element_value_466);
        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_value_333;
        PyObject *tmp_args_element_value_471;
        PyObject *tmp_called_value_334;
        PyObject *tmp_called_value_335;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_args_element_value_472;
        PyObject *tmp_args_element_value_473;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_args_element_value_474;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_args_element_value_475;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_args_element_value_476;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_args_element_value_477;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_args_element_value_478;
        tmp_called_value_333 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_333 == NULL)) {
            tmp_called_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_313 == NULL)) {
            tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_called_value_335 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[202]);
        if (tmp_called_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_472 = Py_None;
        tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_314 == NULL)) {
            tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_473 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[203]);
        if (tmp_args_element_value_473 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_315 == NULL)) {
            tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_474 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[274]);
        if (tmp_args_element_value_474 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_316 == NULL)) {
            tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_475 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[274]);
        if (tmp_args_element_value_475 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_317 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_317 == NULL)) {
            tmp_expression_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);
            Py_DECREF(tmp_args_element_value_475);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_476 = LOOKUP_ATTRIBUTE(tmp_expression_value_317, mod_consts[274]);
        if (tmp_args_element_value_476 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);
            Py_DECREF(tmp_args_element_value_475);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_318 == NULL)) {
            tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);
            Py_DECREF(tmp_args_element_value_475);
            Py_DECREF(tmp_args_element_value_476);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_477 = LOOKUP_ATTRIBUTE(tmp_expression_value_318, mod_consts[274]);
        if (tmp_args_element_value_477 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_335);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);
            Py_DECREF(tmp_args_element_value_475);
            Py_DECREF(tmp_args_element_value_476);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_value_472, tmp_args_element_value_473, tmp_args_element_value_474, tmp_args_element_value_475, tmp_args_element_value_476, tmp_args_element_value_477};
            tmp_called_value_334 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_335, call_args);
        }

        Py_DECREF(tmp_called_value_335);
        Py_DECREF(tmp_args_element_value_473);
        Py_DECREF(tmp_args_element_value_474);
        Py_DECREF(tmp_args_element_value_475);
        Py_DECREF(tmp_args_element_value_476);
        Py_DECREF(tmp_args_element_value_477);
        if (tmp_called_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_478 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__84_glVertexAttrib4d();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 345;
        tmp_args_element_value_471 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_334, tmp_args_element_value_478);
        Py_DECREF(tmp_called_value_334);
        Py_DECREF(tmp_args_element_value_478);
        if (tmp_args_element_value_471 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 344;
        tmp_assign_source_179 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_333, tmp_args_element_value_471);
        Py_DECREF(tmp_args_element_value_471);
        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_336;
        PyObject *tmp_args_element_value_479;
        PyObject *tmp_called_value_337;
        PyObject *tmp_called_value_338;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_args_element_value_480;
        PyObject *tmp_args_element_value_481;
        PyObject *tmp_expression_value_320;
        PyObject *tmp_args_element_value_482;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_args_element_value_483;
        tmp_called_value_336 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_336 == NULL)) {
            tmp_called_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_319 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_319 == NULL)) {
            tmp_expression_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_called_value_338 = LOOKUP_ATTRIBUTE(tmp_expression_value_319, mod_consts[202]);
        if (tmp_called_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_480 = Py_None;
        tmp_expression_value_320 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_320 == NULL)) {
            tmp_expression_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_338);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_481 = LOOKUP_ATTRIBUTE(tmp_expression_value_320, mod_consts[203]);
        if (tmp_args_element_value_481 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_338);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_321 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_321 == NULL)) {
            tmp_expression_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_338);
            Py_DECREF(tmp_args_element_value_481);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_482 = LOOKUP_ATTRIBUTE(tmp_expression_value_321, mod_consts[238]);
        if (tmp_args_element_value_482 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_338);
            Py_DECREF(tmp_args_element_value_481);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_args_element_value_480, tmp_args_element_value_481, tmp_args_element_value_482};
            tmp_called_value_337 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_338, call_args);
        }

        Py_DECREF(tmp_called_value_338);
        Py_DECREF(tmp_args_element_value_481);
        Py_DECREF(tmp_args_element_value_482);
        if (tmp_called_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_483 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__85_glVertexAttrib4dv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 348;
        tmp_args_element_value_479 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_337, tmp_args_element_value_483);
        Py_DECREF(tmp_called_value_337);
        Py_DECREF(tmp_args_element_value_483);
        if (tmp_args_element_value_479 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 347;
        tmp_assign_source_180 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_336, tmp_args_element_value_479);
        Py_DECREF(tmp_args_element_value_479);
        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_value_339;
        PyObject *tmp_args_element_value_484;
        PyObject *tmp_called_value_340;
        PyObject *tmp_called_value_341;
        PyObject *tmp_expression_value_322;
        PyObject *tmp_args_element_value_485;
        PyObject *tmp_args_element_value_486;
        PyObject *tmp_expression_value_323;
        PyObject *tmp_args_element_value_487;
        PyObject *tmp_expression_value_324;
        PyObject *tmp_args_element_value_488;
        PyObject *tmp_expression_value_325;
        PyObject *tmp_args_element_value_489;
        PyObject *tmp_expression_value_326;
        PyObject *tmp_args_element_value_490;
        PyObject *tmp_expression_value_327;
        PyObject *tmp_args_element_value_491;
        tmp_called_value_339 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_339 == NULL)) {
            tmp_called_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_322 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_322 == NULL)) {
            tmp_expression_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_called_value_341 = LOOKUP_ATTRIBUTE(tmp_expression_value_322, mod_consts[202]);
        if (tmp_called_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_485 = Py_None;
        tmp_expression_value_323 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_323 == NULL)) {
            tmp_expression_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_486 = LOOKUP_ATTRIBUTE(tmp_expression_value_323, mod_consts[203]);
        if (tmp_args_element_value_486 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_324 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_324 == NULL)) {
            tmp_expression_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_487 = LOOKUP_ATTRIBUTE(tmp_expression_value_324, mod_consts[252]);
        if (tmp_args_element_value_487 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_325 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_325 == NULL)) {
            tmp_expression_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);
            Py_DECREF(tmp_args_element_value_487);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_488 = LOOKUP_ATTRIBUTE(tmp_expression_value_325, mod_consts[252]);
        if (tmp_args_element_value_488 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);
            Py_DECREF(tmp_args_element_value_487);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_326 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_326 == NULL)) {
            tmp_expression_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);
            Py_DECREF(tmp_args_element_value_487);
            Py_DECREF(tmp_args_element_value_488);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_489 = LOOKUP_ATTRIBUTE(tmp_expression_value_326, mod_consts[252]);
        if (tmp_args_element_value_489 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);
            Py_DECREF(tmp_args_element_value_487);
            Py_DECREF(tmp_args_element_value_488);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_327 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_327 == NULL)) {
            tmp_expression_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);
            Py_DECREF(tmp_args_element_value_487);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_490 = LOOKUP_ATTRIBUTE(tmp_expression_value_327, mod_consts[252]);
        if (tmp_args_element_value_490 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_341);
            Py_DECREF(tmp_args_element_value_486);
            Py_DECREF(tmp_args_element_value_487);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_485, tmp_args_element_value_486, tmp_args_element_value_487, tmp_args_element_value_488, tmp_args_element_value_489, tmp_args_element_value_490};
            tmp_called_value_340 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_341, call_args);
        }

        Py_DECREF(tmp_called_value_341);
        Py_DECREF(tmp_args_element_value_486);
        Py_DECREF(tmp_args_element_value_487);
        Py_DECREF(tmp_args_element_value_488);
        Py_DECREF(tmp_args_element_value_489);
        Py_DECREF(tmp_args_element_value_490);
        if (tmp_called_value_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_491 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__86_glVertexAttrib4f();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 351;
        tmp_args_element_value_484 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_340, tmp_args_element_value_491);
        Py_DECREF(tmp_called_value_340);
        Py_DECREF(tmp_args_element_value_491);
        if (tmp_args_element_value_484 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 350;
        tmp_assign_source_181 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_339, tmp_args_element_value_484);
        Py_DECREF(tmp_args_element_value_484);
        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_value_342;
        PyObject *tmp_args_element_value_492;
        PyObject *tmp_called_value_343;
        PyObject *tmp_called_value_344;
        PyObject *tmp_expression_value_328;
        PyObject *tmp_args_element_value_493;
        PyObject *tmp_args_element_value_494;
        PyObject *tmp_expression_value_329;
        PyObject *tmp_args_element_value_495;
        PyObject *tmp_expression_value_330;
        PyObject *tmp_args_element_value_496;
        tmp_called_value_342 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_342 == NULL)) {
            tmp_called_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_328 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_328 == NULL)) {
            tmp_expression_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_called_value_344 = LOOKUP_ATTRIBUTE(tmp_expression_value_328, mod_consts[202]);
        if (tmp_called_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_493 = Py_None;
        tmp_expression_value_329 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_329 == NULL)) {
            tmp_expression_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_344);

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_494 = LOOKUP_ATTRIBUTE(tmp_expression_value_329, mod_consts[203]);
        if (tmp_args_element_value_494 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_344);

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_330 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_330 == NULL)) {
            tmp_expression_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_344);
            Py_DECREF(tmp_args_element_value_494);

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_495 = LOOKUP_ATTRIBUTE(tmp_expression_value_330, mod_consts[233]);
        if (tmp_args_element_value_495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_344);
            Py_DECREF(tmp_args_element_value_494);

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_493, tmp_args_element_value_494, tmp_args_element_value_495};
            tmp_called_value_343 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_344, call_args);
        }

        Py_DECREF(tmp_called_value_344);
        Py_DECREF(tmp_args_element_value_494);
        Py_DECREF(tmp_args_element_value_495);
        if (tmp_called_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_496 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__87_glVertexAttrib4fv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 354;
        tmp_args_element_value_492 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_343, tmp_args_element_value_496);
        Py_DECREF(tmp_called_value_343);
        Py_DECREF(tmp_args_element_value_496);
        if (tmp_args_element_value_492 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 353;
        tmp_assign_source_182 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_342, tmp_args_element_value_492);
        Py_DECREF(tmp_args_element_value_492);
        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_345;
        PyObject *tmp_args_element_value_497;
        PyObject *tmp_called_value_346;
        PyObject *tmp_called_value_347;
        PyObject *tmp_expression_value_331;
        PyObject *tmp_args_element_value_498;
        PyObject *tmp_args_element_value_499;
        PyObject *tmp_expression_value_332;
        PyObject *tmp_args_element_value_500;
        PyObject *tmp_expression_value_333;
        PyObject *tmp_args_element_value_501;
        tmp_called_value_345 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_345 == NULL)) {
            tmp_called_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_331 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_331 == NULL)) {
            tmp_expression_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_called_value_347 = LOOKUP_ATTRIBUTE(tmp_expression_value_331, mod_consts[202]);
        if (tmp_called_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_498 = Py_None;
        tmp_expression_value_332 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_332 == NULL)) {
            tmp_expression_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_347);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_499 = LOOKUP_ATTRIBUTE(tmp_expression_value_332, mod_consts[203]);
        if (tmp_args_element_value_499 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_347);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_333 == NULL)) {
            tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_347);
            Py_DECREF(tmp_args_element_value_499);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_500 = LOOKUP_ATTRIBUTE(tmp_expression_value_333, mod_consts[221]);
        if (tmp_args_element_value_500 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_347);
            Py_DECREF(tmp_args_element_value_499);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_498, tmp_args_element_value_499, tmp_args_element_value_500};
            tmp_called_value_346 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_347, call_args);
        }

        Py_DECREF(tmp_called_value_347);
        Py_DECREF(tmp_args_element_value_499);
        Py_DECREF(tmp_args_element_value_500);
        if (tmp_called_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_501 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__88_glVertexAttrib4iv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 357;
        tmp_args_element_value_497 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_346, tmp_args_element_value_501);
        Py_DECREF(tmp_called_value_346);
        Py_DECREF(tmp_args_element_value_501);
        if (tmp_args_element_value_497 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 356;
        tmp_assign_source_183 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_345, tmp_args_element_value_497);
        Py_DECREF(tmp_args_element_value_497);
        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_348;
        PyObject *tmp_args_element_value_502;
        PyObject *tmp_called_value_349;
        PyObject *tmp_called_value_350;
        PyObject *tmp_expression_value_334;
        PyObject *tmp_args_element_value_503;
        PyObject *tmp_args_element_value_504;
        PyObject *tmp_expression_value_335;
        PyObject *tmp_args_element_value_505;
        PyObject *tmp_expression_value_336;
        PyObject *tmp_args_element_value_506;
        PyObject *tmp_expression_value_337;
        PyObject *tmp_args_element_value_507;
        PyObject *tmp_expression_value_338;
        PyObject *tmp_args_element_value_508;
        PyObject *tmp_expression_value_339;
        PyObject *tmp_args_element_value_509;
        tmp_called_value_348 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_348 == NULL)) {
            tmp_called_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_334 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_334 == NULL)) {
            tmp_expression_value_334 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_called_value_350 = LOOKUP_ATTRIBUTE(tmp_expression_value_334, mod_consts[202]);
        if (tmp_called_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_503 = Py_None;
        tmp_expression_value_335 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_335 == NULL)) {
            tmp_expression_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_504 = LOOKUP_ATTRIBUTE(tmp_expression_value_335, mod_consts[203]);
        if (tmp_args_element_value_504 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_336 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_336 == NULL)) {
            tmp_expression_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_505 = LOOKUP_ATTRIBUTE(tmp_expression_value_336, mod_consts[279]);
        if (tmp_args_element_value_505 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_337 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_337 == NULL)) {
            tmp_expression_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_506 = LOOKUP_ATTRIBUTE(tmp_expression_value_337, mod_consts[279]);
        if (tmp_args_element_value_506 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_338 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_338 == NULL)) {
            tmp_expression_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_507 = LOOKUP_ATTRIBUTE(tmp_expression_value_338, mod_consts[279]);
        if (tmp_args_element_value_507 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_339 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_339 == NULL)) {
            tmp_expression_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);
            Py_DECREF(tmp_args_element_value_507);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_508 = LOOKUP_ATTRIBUTE(tmp_expression_value_339, mod_consts[279]);
        if (tmp_args_element_value_508 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_350);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);
            Py_DECREF(tmp_args_element_value_507);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = {tmp_args_element_value_503, tmp_args_element_value_504, tmp_args_element_value_505, tmp_args_element_value_506, tmp_args_element_value_507, tmp_args_element_value_508};
            tmp_called_value_349 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_350, call_args);
        }

        Py_DECREF(tmp_called_value_350);
        Py_DECREF(tmp_args_element_value_504);
        Py_DECREF(tmp_args_element_value_505);
        Py_DECREF(tmp_args_element_value_506);
        Py_DECREF(tmp_args_element_value_507);
        Py_DECREF(tmp_args_element_value_508);
        if (tmp_called_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_509 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__89_glVertexAttrib4s();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 360;
        tmp_args_element_value_502 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_349, tmp_args_element_value_509);
        Py_DECREF(tmp_called_value_349);
        Py_DECREF(tmp_args_element_value_509);
        if (tmp_args_element_value_502 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 359;
        tmp_assign_source_184 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_348, tmp_args_element_value_502);
        Py_DECREF(tmp_args_element_value_502);
        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_351;
        PyObject *tmp_args_element_value_510;
        PyObject *tmp_called_value_352;
        PyObject *tmp_called_value_353;
        PyObject *tmp_expression_value_340;
        PyObject *tmp_args_element_value_511;
        PyObject *tmp_args_element_value_512;
        PyObject *tmp_expression_value_341;
        PyObject *tmp_args_element_value_513;
        PyObject *tmp_expression_value_342;
        PyObject *tmp_args_element_value_514;
        tmp_called_value_351 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_351 == NULL)) {
            tmp_called_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_340 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_340 == NULL)) {
            tmp_expression_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_called_value_353 = LOOKUP_ATTRIBUTE(tmp_expression_value_340, mod_consts[202]);
        if (tmp_called_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_511 = Py_None;
        tmp_expression_value_341 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_341 == NULL)) {
            tmp_expression_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_353);

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_512 = LOOKUP_ATTRIBUTE(tmp_expression_value_341, mod_consts[203]);
        if (tmp_args_element_value_512 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_353);

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_342 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_342 == NULL)) {
            tmp_expression_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_353);
            Py_DECREF(tmp_args_element_value_512);

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_513 = LOOKUP_ATTRIBUTE(tmp_expression_value_342, mod_consts[281]);
        if (tmp_args_element_value_513 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_353);
            Py_DECREF(tmp_args_element_value_512);

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_511, tmp_args_element_value_512, tmp_args_element_value_513};
            tmp_called_value_352 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_353, call_args);
        }

        Py_DECREF(tmp_called_value_353);
        Py_DECREF(tmp_args_element_value_512);
        Py_DECREF(tmp_args_element_value_513);
        if (tmp_called_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_514 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__90_glVertexAttrib4sv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 363;
        tmp_args_element_value_510 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_352, tmp_args_element_value_514);
        Py_DECREF(tmp_called_value_352);
        Py_DECREF(tmp_args_element_value_514);
        if (tmp_args_element_value_510 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 362;
        tmp_assign_source_185 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_351, tmp_args_element_value_510);
        Py_DECREF(tmp_args_element_value_510);
        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_value_354;
        PyObject *tmp_args_element_value_515;
        PyObject *tmp_called_value_355;
        PyObject *tmp_called_value_356;
        PyObject *tmp_expression_value_343;
        PyObject *tmp_args_element_value_516;
        PyObject *tmp_args_element_value_517;
        PyObject *tmp_expression_value_344;
        PyObject *tmp_args_element_value_518;
        PyObject *tmp_expression_value_345;
        PyObject *tmp_args_element_value_519;
        tmp_called_value_354 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_354 == NULL)) {
            tmp_called_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_343 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_343 == NULL)) {
            tmp_expression_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_called_value_356 = LOOKUP_ATTRIBUTE(tmp_expression_value_343, mod_consts[202]);
        if (tmp_called_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_516 = Py_None;
        tmp_expression_value_344 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_344 == NULL)) {
            tmp_expression_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_356);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_517 = LOOKUP_ATTRIBUTE(tmp_expression_value_344, mod_consts[203]);
        if (tmp_args_element_value_517 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_356);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_345 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_345 == NULL)) {
            tmp_expression_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_356);
            Py_DECREF(tmp_args_element_value_517);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_518 = LOOKUP_ATTRIBUTE(tmp_expression_value_345, mod_consts[301]);
        if (tmp_args_element_value_518 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_356);
            Py_DECREF(tmp_args_element_value_517);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_516, tmp_args_element_value_517, tmp_args_element_value_518};
            tmp_called_value_355 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_356, call_args);
        }

        Py_DECREF(tmp_called_value_356);
        Py_DECREF(tmp_args_element_value_517);
        Py_DECREF(tmp_args_element_value_518);
        if (tmp_called_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_519 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__91_glVertexAttrib4ubv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 366;
        tmp_args_element_value_515 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_355, tmp_args_element_value_519);
        Py_DECREF(tmp_called_value_355);
        Py_DECREF(tmp_args_element_value_519);
        if (tmp_args_element_value_515 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 365;
        tmp_assign_source_186 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_354, tmp_args_element_value_515);
        Py_DECREF(tmp_args_element_value_515);
        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_called_value_357;
        PyObject *tmp_args_element_value_520;
        PyObject *tmp_called_value_358;
        PyObject *tmp_called_value_359;
        PyObject *tmp_expression_value_346;
        PyObject *tmp_args_element_value_521;
        PyObject *tmp_args_element_value_522;
        PyObject *tmp_expression_value_347;
        PyObject *tmp_args_element_value_523;
        PyObject *tmp_expression_value_348;
        PyObject *tmp_args_element_value_524;
        tmp_called_value_357 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_357 == NULL)) {
            tmp_called_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_346 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_346 == NULL)) {
            tmp_expression_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_called_value_359 = LOOKUP_ATTRIBUTE(tmp_expression_value_346, mod_consts[202]);
        if (tmp_called_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_521 = Py_None;
        tmp_expression_value_347 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_347 == NULL)) {
            tmp_expression_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_359);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_522 = LOOKUP_ATTRIBUTE(tmp_expression_value_347, mod_consts[203]);
        if (tmp_args_element_value_522 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_359);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_348 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_348 == NULL)) {
            tmp_expression_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_359);
            Py_DECREF(tmp_args_element_value_522);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_523 = LOOKUP_ATTRIBUTE(tmp_expression_value_348, mod_consts[217]);
        if (tmp_args_element_value_523 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_359);
            Py_DECREF(tmp_args_element_value_522);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_521, tmp_args_element_value_522, tmp_args_element_value_523};
            tmp_called_value_358 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_359, call_args);
        }

        Py_DECREF(tmp_called_value_359);
        Py_DECREF(tmp_args_element_value_522);
        Py_DECREF(tmp_args_element_value_523);
        if (tmp_called_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_524 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__92_glVertexAttrib4uiv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 369;
        tmp_args_element_value_520 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_358, tmp_args_element_value_524);
        Py_DECREF(tmp_called_value_358);
        Py_DECREF(tmp_args_element_value_524);
        if (tmp_args_element_value_520 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 368;
        tmp_assign_source_187 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_357, tmp_args_element_value_520);
        Py_DECREF(tmp_args_element_value_520);
        if (tmp_assign_source_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_360;
        PyObject *tmp_args_element_value_525;
        PyObject *tmp_called_value_361;
        PyObject *tmp_called_value_362;
        PyObject *tmp_expression_value_349;
        PyObject *tmp_args_element_value_526;
        PyObject *tmp_args_element_value_527;
        PyObject *tmp_expression_value_350;
        PyObject *tmp_args_element_value_528;
        PyObject *tmp_expression_value_351;
        PyObject *tmp_args_element_value_529;
        tmp_called_value_360 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_360 == NULL)) {
            tmp_called_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_349 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_349 == NULL)) {
            tmp_expression_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_called_value_362 = LOOKUP_ATTRIBUTE(tmp_expression_value_349, mod_consts[202]);
        if (tmp_called_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_526 = Py_None;
        tmp_expression_value_350 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_350 == NULL)) {
            tmp_expression_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_362);

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_527 = LOOKUP_ATTRIBUTE(tmp_expression_value_350, mod_consts[203]);
        if (tmp_args_element_value_527 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_362);

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_351 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_351 == NULL)) {
            tmp_expression_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_362);
            Py_DECREF(tmp_args_element_value_527);

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_528 = LOOKUP_ATTRIBUTE(tmp_expression_value_351, mod_consts[304]);
        if (tmp_args_element_value_528 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_362);
            Py_DECREF(tmp_args_element_value_527);

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = {tmp_args_element_value_526, tmp_args_element_value_527, tmp_args_element_value_528};
            tmp_called_value_361 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_362, call_args);
        }

        Py_DECREF(tmp_called_value_362);
        Py_DECREF(tmp_args_element_value_527);
        Py_DECREF(tmp_args_element_value_528);
        if (tmp_called_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_529 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__93_glVertexAttrib4usv();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 372;
        tmp_args_element_value_525 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_361, tmp_args_element_value_529);
        Py_DECREF(tmp_called_value_361);
        Py_DECREF(tmp_args_element_value_529);
        if (tmp_args_element_value_525 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 371;
        tmp_assign_source_188 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_360, tmp_args_element_value_525);
        Py_DECREF(tmp_args_element_value_525);
        if (tmp_assign_source_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_363;
        PyObject *tmp_args_element_value_530;
        PyObject *tmp_called_value_364;
        PyObject *tmp_called_value_365;
        PyObject *tmp_expression_value_352;
        PyObject *tmp_args_element_value_531;
        PyObject *tmp_args_element_value_532;
        PyObject *tmp_expression_value_353;
        PyObject *tmp_args_element_value_533;
        PyObject *tmp_expression_value_354;
        PyObject *tmp_args_element_value_534;
        PyObject *tmp_expression_value_355;
        PyObject *tmp_args_element_value_535;
        PyObject *tmp_expression_value_356;
        PyObject *tmp_args_element_value_536;
        PyObject *tmp_expression_value_357;
        PyObject *tmp_args_element_value_537;
        PyObject *tmp_expression_value_358;
        PyObject *tmp_args_element_value_538;
        tmp_called_value_363 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_363 == NULL)) {
            tmp_called_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_352 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_352 == NULL)) {
            tmp_expression_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_called_value_365 = LOOKUP_ATTRIBUTE(tmp_expression_value_352, mod_consts[202]);
        if (tmp_called_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_531 = Py_None;
        tmp_expression_value_353 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_353 == NULL)) {
            tmp_expression_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_532 = LOOKUP_ATTRIBUTE(tmp_expression_value_353, mod_consts[203]);
        if (tmp_args_element_value_532 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_354 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_354 == NULL)) {
            tmp_expression_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_533 = LOOKUP_ATTRIBUTE(tmp_expression_value_354, mod_consts[225]);
        if (tmp_args_element_value_533 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_355 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_355 == NULL)) {
            tmp_expression_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_534 = LOOKUP_ATTRIBUTE(tmp_expression_value_355, mod_consts[207]);
        if (tmp_args_element_value_534 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_356 == NULL)) {
            tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);
            Py_DECREF(tmp_args_element_value_534);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_535 = LOOKUP_ATTRIBUTE(tmp_expression_value_356, mod_consts[242]);
        if (tmp_args_element_value_535 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);
            Py_DECREF(tmp_args_element_value_534);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_357 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_357 == NULL)) {
            tmp_expression_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);
            Py_DECREF(tmp_args_element_value_534);
            Py_DECREF(tmp_args_element_value_535);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_536 = LOOKUP_ATTRIBUTE(tmp_expression_value_357, mod_consts[216]);
        if (tmp_args_element_value_536 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);
            Py_DECREF(tmp_args_element_value_534);
            Py_DECREF(tmp_args_element_value_535);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_358 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_358 == NULL)) {
            tmp_expression_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);
            Py_DECREF(tmp_args_element_value_534);
            Py_DECREF(tmp_args_element_value_535);
            Py_DECREF(tmp_args_element_value_536);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_537 = LOOKUP_ATTRIBUTE(tmp_expression_value_358, mod_consts[317]);
        if (tmp_args_element_value_537 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_365);
            Py_DECREF(tmp_args_element_value_532);
            Py_DECREF(tmp_args_element_value_533);
            Py_DECREF(tmp_args_element_value_534);
            Py_DECREF(tmp_args_element_value_535);
            Py_DECREF(tmp_args_element_value_536);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_531, tmp_args_element_value_532, tmp_args_element_value_533, tmp_args_element_value_534, tmp_args_element_value_535, tmp_args_element_value_536, tmp_args_element_value_537};
            tmp_called_value_364 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_365, call_args);
        }

        Py_DECREF(tmp_called_value_365);
        Py_DECREF(tmp_args_element_value_532);
        Py_DECREF(tmp_args_element_value_533);
        Py_DECREF(tmp_args_element_value_534);
        Py_DECREF(tmp_args_element_value_535);
        Py_DECREF(tmp_args_element_value_536);
        Py_DECREF(tmp_args_element_value_537);
        if (tmp_called_value_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_538 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_2_0$$$function__94_glVertexAttribPointer();

        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 375;
        tmp_args_element_value_530 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_364, tmp_args_element_value_538);
        Py_DECREF(tmp_called_value_364);
        Py_DECREF(tmp_args_element_value_538);
        if (tmp_args_element_value_530 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame.f_lineno = 374;
        tmp_assign_source_189 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_363, tmp_args_element_value_530);
        Py_DECREF(tmp_args_element_value_530);
        if (tmp_assign_source_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_189);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fca64db5cb9ae9c9846166ae88bc4a65);
#endif
    popFrameStack();

    assertFrameObject(frame_fca64db5cb9ae9c9846166ae88bc4a65);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fca64db5cb9ae9c9846166ae88bc4a65);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fca64db5cb9ae9c9846166ae88bc4a65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fca64db5cb9ae9c9846166ae88bc4a65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fca64db5cb9ae9c9846166ae88bc4a65, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GL.VERSION.GL_2_0", false);

    return module_OpenGL$raw$GL$VERSION$GL_2_0;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_2_0, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GL$VERSION$GL_2_0", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
