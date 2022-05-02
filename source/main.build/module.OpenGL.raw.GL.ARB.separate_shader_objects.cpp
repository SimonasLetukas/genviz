/* Generated code for Python module 'OpenGL.raw.GL.ARB.separate_shader_objects'
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

/* The "module_OpenGL$raw$GL$ARB$separate_shader_objects" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GL$ARB$separate_shader_objects;
PyDictObject *moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[148];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[148];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GL.ARB.separate_shader_objects"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 148; i++) {
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
void checkModuleConstants_OpenGL$raw$GL$ARB$separate_shader_objects(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 148; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f93463b27ae2cc3349887c6b879d1ada;
static PyCodeObject *codeobj_46e6a73f4d9a3fc020aee83fdc684588;
static PyCodeObject *codeobj_897941f6a593000b41c15ad180c9a55a;
static PyCodeObject *codeobj_929f8eef76b64a926eddaf9bcc353769;
static PyCodeObject *codeobj_dbb7c108254228deb789ab80303f9750;
static PyCodeObject *codeobj_23b64d3d81a9ebefa561c66d9a7c9580;
static PyCodeObject *codeobj_80b44f64086b1a45f966aa5c50ed7ab2;
static PyCodeObject *codeobj_ba3b9a1d770591ed1173e593b5699e8f;
static PyCodeObject *codeobj_e08a1707136b82fcf566ae0aaa6a3797;
static PyCodeObject *codeobj_132bdc69c2ebdce87709c279592b4cf3;
static PyCodeObject *codeobj_4648c87ebf202edaa9fc19b1f17f2808;
static PyCodeObject *codeobj_fac06d40ea91c8903f0c248f36c774fa;
static PyCodeObject *codeobj_c2565f159828f98a23941ef003ef5301;
static PyCodeObject *codeobj_26aa8f838596f28b4cddac29f92cc861;
static PyCodeObject *codeobj_3e7e0e29ff1faee3489471b2578af727;
static PyCodeObject *codeobj_34e6feb8a0a9ab0d62a848ab179c9575;
static PyCodeObject *codeobj_7ab585d5229cc8729936caddc20279a6;
static PyCodeObject *codeobj_57de9ed845cce95b73fa6b616ae643b0;
static PyCodeObject *codeobj_57a6dca7760fbc39d2aa7c6fbfbd8d6d;
static PyCodeObject *codeobj_14ea5569623f3929e330e460b2dafebb;
static PyCodeObject *codeobj_a728c6bbd7c44da908d363fcdad4e621;
static PyCodeObject *codeobj_b19f6bcef5001b9896b1270c15ae81de;
static PyCodeObject *codeobj_2b986a56d199a1c2faec685739e29b95;
static PyCodeObject *codeobj_e503836fdb77c9a3e577a5780567935b;
static PyCodeObject *codeobj_1455552aee98b0c598e47cf43f037849;
static PyCodeObject *codeobj_fad6e4b2bf17a3afce680d3c675a0800;
static PyCodeObject *codeobj_16d20bb82d8eba46fc5f79b7549c7831;
static PyCodeObject *codeobj_7f5882b18a30371ca238e8be73c650d4;
static PyCodeObject *codeobj_0ed752c875f5dc94bdb176f00928c414;
static PyCodeObject *codeobj_df7621be2744683d4456821bdfea6e09;
static PyCodeObject *codeobj_c8a6ba4d2ea810579549b025dc3c71bf;
static PyCodeObject *codeobj_2e459fb292ef2575d918dbe3c403a839;
static PyCodeObject *codeobj_74ba6972fc44cc7a48dfd93fb2930cd4;
static PyCodeObject *codeobj_6a52669e958146ccdefb2829d4df07f6;
static PyCodeObject *codeobj_ed9ce1af2edd3cfa979da8891197dba1;
static PyCodeObject *codeobj_901c26e47fa14f18758f7213dfb82d19;
static PyCodeObject *codeobj_ad3432f2c8ad10ac725afab615ef41c8;
static PyCodeObject *codeobj_0f06fe7ae341dbcfbe30f54a411d1409;
static PyCodeObject *codeobj_833d7f7273402765bb90078310ce8953;
static PyCodeObject *codeobj_1acc4f1fcba67a48504ffeccd6623609;
static PyCodeObject *codeobj_cb440cab2332db38890274868a31eb9e;
static PyCodeObject *codeobj_fbfb257b891d2b20a2b2625c93f572f9;
static PyCodeObject *codeobj_3b07da115f5b38e8b8498574942464bd;
static PyCodeObject *codeobj_c580ca63c7db9064517ae32cc85f2b32;
static PyCodeObject *codeobj_fb68e7a909d2a9f676dfc3eb18dd3349;
static PyCodeObject *codeobj_d49c7ed137d161a5fc6a799f3aae998c;
static PyCodeObject *codeobj_81fa28e1c61e3c21f2d66f0960c1a002;
static PyCodeObject *codeobj_594b5fdfa382ce333ea608712fab3287;
static PyCodeObject *codeobj_6790b041f772dba3f4db4307ecdacedd;
static PyCodeObject *codeobj_04d3a53a28cf7aa980b2f96fd6ecab7b;
static PyCodeObject *codeobj_f65d53e0bafe6243a6569c806870eb5a;
static PyCodeObject *codeobj_1211fe9a63ee3e6869f736d076d440c8;
static PyCodeObject *codeobj_6c79743584253288c2b9f665b6b7ac96;
static PyCodeObject *codeobj_0601c3d680199ded9cf877d318e40f8e;
static PyCodeObject *codeobj_9d59d2e4e7d937b1dc8bd91087d7a421;
static PyCodeObject *codeobj_74d31d4cfb0d527c4968fccf5e88f210;
static PyCodeObject *codeobj_b6f60f481d641fa1b360cfd706f97e0c;
static PyCodeObject *codeobj_8b846b12510ba860103af1b19c120c28;
static PyCodeObject *codeobj_d1d667477266ec1918cb39e2e8bc9562;
static PyCodeObject *codeobj_ca2bffde2a95e8238a87ebbf8e0d7250;
static PyCodeObject *codeobj_ff2e0acc2ce3a890835c8c248f18ba25;
static PyCodeObject *codeobj_1444b9c1dd37bc10978e3c1a78d72157;
static PyCodeObject *codeobj_b48dad9f555fa9c09c5179fe4f1e70fb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[130]); CHECK_OBJECT(module_filename_obj);
    codeobj_f93463b27ae2cc3349887c6b879d1ada = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_46e6a73f4d9a3fc020aee83fdc684588 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[132], NULL, 1, 0, 0);
    codeobj_897941f6a593000b41c15ad180c9a55a = MAKE_CODEOBJECT(module_filename_obj, 25, CO_NOFREE, mod_consts[54], mod_consts[133], NULL, 2, 0, 0);
    codeobj_929f8eef76b64a926eddaf9bcc353769 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_NOFREE, mod_consts[55], mod_consts[134], NULL, 1, 0, 0);
    codeobj_dbb7c108254228deb789ab80303f9750 = MAKE_CODEOBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[60], mod_consts[135], NULL, 3, 0, 0);
    codeobj_23b64d3d81a9ebefa561c66d9a7c9580 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[62], mod_consts[136], NULL, 2, 0, 0);
    codeobj_80b44f64086b1a45f966aa5c50ed7ab2 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_NOFREE, mod_consts[63], mod_consts[136], NULL, 2, 0, 0);
    codeobj_ba3b9a1d770591ed1173e593b5699e8f = MAKE_CODEOBJECT(module_filename_obj, 40, CO_NOFREE, mod_consts[66], mod_consts[137], NULL, 4, 0, 0);
    codeobj_e08a1707136b82fcf566ae0aaa6a3797 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_NOFREE, mod_consts[68], mod_consts[138], NULL, 3, 0, 0);
    codeobj_132bdc69c2ebdce87709c279592b4cf3 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_NOFREE, mod_consts[70], mod_consts[134], NULL, 1, 0, 0);
    codeobj_4648c87ebf202edaa9fc19b1f17f2808 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_NOFREE, mod_consts[72], mod_consts[139], NULL, 3, 0, 0);
    codeobj_fac06d40ea91c8903f0c248f36c774fa = MAKE_CODEOBJECT(module_filename_obj, 52, CO_NOFREE, mod_consts[74], mod_consts[140], NULL, 3, 0, 0);
    codeobj_c2565f159828f98a23941ef003ef5301 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NOFREE, mod_consts[76], mod_consts[141], NULL, 4, 0, 0);
    codeobj_26aa8f838596f28b4cddac29f92cc861 = MAKE_CODEOBJECT(module_filename_obj, 58, CO_NOFREE, mod_consts[78], mod_consts[140], NULL, 3, 0, 0);
    codeobj_3e7e0e29ff1faee3489471b2578af727 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_NOFREE, mod_consts[80], mod_consts[141], NULL, 4, 0, 0);
    codeobj_34e6feb8a0a9ab0d62a848ab179c9575 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_NOFREE, mod_consts[81], mod_consts[140], NULL, 3, 0, 0);
    codeobj_7ab585d5229cc8729936caddc20279a6 = MAKE_CODEOBJECT(module_filename_obj, 67, CO_NOFREE, mod_consts[82], mod_consts[141], NULL, 4, 0, 0);
    codeobj_57de9ed845cce95b73fa6b616ae643b0 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_NOFREE, mod_consts[83], mod_consts[140], NULL, 3, 0, 0);
    codeobj_57a6dca7760fbc39d2aa7c6fbfbd8d6d = MAKE_CODEOBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[84], mod_consts[141], NULL, 4, 0, 0);
    codeobj_14ea5569623f3929e330e460b2dafebb = MAKE_CODEOBJECT(module_filename_obj, 76, CO_NOFREE, mod_consts[85], mod_consts[142], NULL, 4, 0, 0);
    codeobj_a728c6bbd7c44da908d363fcdad4e621 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[86], mod_consts[141], NULL, 4, 0, 0);
    codeobj_b19f6bcef5001b9896b1270c15ae81de = MAKE_CODEOBJECT(module_filename_obj, 82, CO_NOFREE, mod_consts[87], mod_consts[142], NULL, 4, 0, 0);
    codeobj_2b986a56d199a1c2faec685739e29b95 = MAKE_CODEOBJECT(module_filename_obj, 85, CO_NOFREE, mod_consts[88], mod_consts[141], NULL, 4, 0, 0);
    codeobj_e503836fdb77c9a3e577a5780567935b = MAKE_CODEOBJECT(module_filename_obj, 88, CO_NOFREE, mod_consts[89], mod_consts[142], NULL, 4, 0, 0);
    codeobj_1455552aee98b0c598e47cf43f037849 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_NOFREE, mod_consts[90], mod_consts[141], NULL, 4, 0, 0);
    codeobj_fad6e4b2bf17a3afce680d3c675a0800 = MAKE_CODEOBJECT(module_filename_obj, 94, CO_NOFREE, mod_consts[91], mod_consts[142], NULL, 4, 0, 0);
    codeobj_16d20bb82d8eba46fc5f79b7549c7831 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_NOFREE, mod_consts[92], mod_consts[141], NULL, 4, 0, 0);
    codeobj_7f5882b18a30371ca238e8be73c650d4 = MAKE_CODEOBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[93], mod_consts[143], NULL, 5, 0, 0);
    codeobj_0ed752c875f5dc94bdb176f00928c414 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_NOFREE, mod_consts[94], mod_consts[141], NULL, 4, 0, 0);
    codeobj_df7621be2744683d4456821bdfea6e09 = MAKE_CODEOBJECT(module_filename_obj, 106, CO_NOFREE, mod_consts[95], mod_consts[143], NULL, 5, 0, 0);
    codeobj_c8a6ba4d2ea810579549b025dc3c71bf = MAKE_CODEOBJECT(module_filename_obj, 109, CO_NOFREE, mod_consts[96], mod_consts[141], NULL, 4, 0, 0);
    codeobj_2e459fb292ef2575d918dbe3c403a839 = MAKE_CODEOBJECT(module_filename_obj, 112, CO_NOFREE, mod_consts[97], mod_consts[143], NULL, 5, 0, 0);
    codeobj_74ba6972fc44cc7a48dfd93fb2930cd4 = MAKE_CODEOBJECT(module_filename_obj, 115, CO_NOFREE, mod_consts[98], mod_consts[141], NULL, 4, 0, 0);
    codeobj_6a52669e958146ccdefb2829d4df07f6 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_NOFREE, mod_consts[99], mod_consts[143], NULL, 5, 0, 0);
    codeobj_ed9ce1af2edd3cfa979da8891197dba1 = MAKE_CODEOBJECT(module_filename_obj, 121, CO_NOFREE, mod_consts[100], mod_consts[141], NULL, 4, 0, 0);
    codeobj_901c26e47fa14f18758f7213dfb82d19 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_NOFREE, mod_consts[101], mod_consts[144], NULL, 6, 0, 0);
    codeobj_ad3432f2c8ad10ac725afab615ef41c8 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_NOFREE, mod_consts[102], mod_consts[141], NULL, 4, 0, 0);
    codeobj_0f06fe7ae341dbcfbe30f54a411d1409 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_NOFREE, mod_consts[103], mod_consts[144], NULL, 6, 0, 0);
    codeobj_833d7f7273402765bb90078310ce8953 = MAKE_CODEOBJECT(module_filename_obj, 133, CO_NOFREE, mod_consts[104], mod_consts[141], NULL, 4, 0, 0);
    codeobj_1acc4f1fcba67a48504ffeccd6623609 = MAKE_CODEOBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[105], mod_consts[144], NULL, 6, 0, 0);
    codeobj_cb440cab2332db38890274868a31eb9e = MAKE_CODEOBJECT(module_filename_obj, 139, CO_NOFREE, mod_consts[106], mod_consts[141], NULL, 4, 0, 0);
    codeobj_fbfb257b891d2b20a2b2625c93f572f9 = MAKE_CODEOBJECT(module_filename_obj, 142, CO_NOFREE, mod_consts[107], mod_consts[144], NULL, 6, 0, 0);
    codeobj_3b07da115f5b38e8b8498574942464bd = MAKE_CODEOBJECT(module_filename_obj, 145, CO_NOFREE, mod_consts[108], mod_consts[141], NULL, 4, 0, 0);
    codeobj_c580ca63c7db9064517ae32cc85f2b32 = MAKE_CODEOBJECT(module_filename_obj, 148, CO_NOFREE, mod_consts[109], mod_consts[145], NULL, 5, 0, 0);
    codeobj_fb68e7a909d2a9f676dfc3eb18dd3349 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_NOFREE, mod_consts[110], mod_consts[145], NULL, 5, 0, 0);
    codeobj_d49c7ed137d161a5fc6a799f3aae998c = MAKE_CODEOBJECT(module_filename_obj, 154, CO_NOFREE, mod_consts[111], mod_consts[145], NULL, 5, 0, 0);
    codeobj_81fa28e1c61e3c21f2d66f0960c1a002 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_NOFREE, mod_consts[112], mod_consts[145], NULL, 5, 0, 0);
    codeobj_594b5fdfa382ce333ea608712fab3287 = MAKE_CODEOBJECT(module_filename_obj, 160, CO_NOFREE, mod_consts[113], mod_consts[145], NULL, 5, 0, 0);
    codeobj_6790b041f772dba3f4db4307ecdacedd = MAKE_CODEOBJECT(module_filename_obj, 163, CO_NOFREE, mod_consts[114], mod_consts[145], NULL, 5, 0, 0);
    codeobj_04d3a53a28cf7aa980b2f96fd6ecab7b = MAKE_CODEOBJECT(module_filename_obj, 166, CO_NOFREE, mod_consts[115], mod_consts[145], NULL, 5, 0, 0);
    codeobj_f65d53e0bafe6243a6569c806870eb5a = MAKE_CODEOBJECT(module_filename_obj, 169, CO_NOFREE, mod_consts[116], mod_consts[145], NULL, 5, 0, 0);
    codeobj_1211fe9a63ee3e6869f736d076d440c8 = MAKE_CODEOBJECT(module_filename_obj, 172, CO_NOFREE, mod_consts[117], mod_consts[145], NULL, 5, 0, 0);
    codeobj_6c79743584253288c2b9f665b6b7ac96 = MAKE_CODEOBJECT(module_filename_obj, 175, CO_NOFREE, mod_consts[118], mod_consts[145], NULL, 5, 0, 0);
    codeobj_0601c3d680199ded9cf877d318e40f8e = MAKE_CODEOBJECT(module_filename_obj, 178, CO_NOFREE, mod_consts[119], mod_consts[145], NULL, 5, 0, 0);
    codeobj_9d59d2e4e7d937b1dc8bd91087d7a421 = MAKE_CODEOBJECT(module_filename_obj, 181, CO_NOFREE, mod_consts[120], mod_consts[145], NULL, 5, 0, 0);
    codeobj_74d31d4cfb0d527c4968fccf5e88f210 = MAKE_CODEOBJECT(module_filename_obj, 184, CO_NOFREE, mod_consts[121], mod_consts[145], NULL, 5, 0, 0);
    codeobj_b6f60f481d641fa1b360cfd706f97e0c = MAKE_CODEOBJECT(module_filename_obj, 187, CO_NOFREE, mod_consts[122], mod_consts[145], NULL, 5, 0, 0);
    codeobj_8b846b12510ba860103af1b19c120c28 = MAKE_CODEOBJECT(module_filename_obj, 190, CO_NOFREE, mod_consts[123], mod_consts[145], NULL, 5, 0, 0);
    codeobj_d1d667477266ec1918cb39e2e8bc9562 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_NOFREE, mod_consts[124], mod_consts[145], NULL, 5, 0, 0);
    codeobj_ca2bffde2a95e8238a87ebbf8e0d7250 = MAKE_CODEOBJECT(module_filename_obj, 196, CO_NOFREE, mod_consts[125], mod_consts[145], NULL, 5, 0, 0);
    codeobj_ff2e0acc2ce3a890835c8c248f18ba25 = MAKE_CODEOBJECT(module_filename_obj, 199, CO_NOFREE, mod_consts[126], mod_consts[145], NULL, 5, 0, 0);
    codeobj_1444b9c1dd37bc10978e3c1a78d72157 = MAKE_CODEOBJECT(module_filename_obj, 202, CO_NOFREE, mod_consts[128], mod_consts[146], NULL, 3, 0, 0);
    codeobj_b48dad9f555fa9c09c5179fe4f1e70fb = MAKE_CODEOBJECT(module_filename_obj, 205, CO_NOFREE, mod_consts[129], mod_consts[134], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__10_glProgramParameteri();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__11_glProgramUniform1d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__12_glProgramUniform1dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__13_glProgramUniform1f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__14_glProgramUniform1fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__15_glProgramUniform1i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__16_glProgramUniform1iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__17_glProgramUniform1ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__18_glProgramUniform1uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__19_glProgramUniform2d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__1__f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__20_glProgramUniform2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__21_glProgramUniform2f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__22_glProgramUniform2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__23_glProgramUniform2i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__24_glProgramUniform2iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__25_glProgramUniform2ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__26_glProgramUniform2uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__27_glProgramUniform3d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__28_glProgramUniform3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__29_glProgramUniform3f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__2_glActiveShaderProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__30_glProgramUniform3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__31_glProgramUniform3i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__32_glProgramUniform3iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__33_glProgramUniform3ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__34_glProgramUniform3uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__35_glProgramUniform4d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__36_glProgramUniform4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__37_glProgramUniform4f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__38_glProgramUniform4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__39_glProgramUniform4i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__3_glBindProgramPipeline();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__40_glProgramUniform4iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__41_glProgramUniform4ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__42_glProgramUniform4uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__43_glProgramUniformMatrix2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__44_glProgramUniformMatrix2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__45_glProgramUniformMatrix2x3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__46_glProgramUniformMatrix2x3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__47_glProgramUniformMatrix2x4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__48_glProgramUniformMatrix2x4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__49_glProgramUniformMatrix3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__4_glCreateShaderProgramv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__50_glProgramUniformMatrix3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__51_glProgramUniformMatrix3x2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__52_glProgramUniformMatrix3x2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__53_glProgramUniformMatrix3x4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__54_glProgramUniformMatrix3x4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__55_glProgramUniformMatrix4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__56_glProgramUniformMatrix4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__57_glProgramUniformMatrix4x2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__58_glProgramUniformMatrix4x2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__59_glProgramUniformMatrix4x3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__5_glDeleteProgramPipelines();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__60_glProgramUniformMatrix4x3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__61_glUseProgramStages();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__62_glValidateProgramPipeline();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__6_glGenProgramPipelines();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__7_glGetProgramPipelineInfoLog();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__8_glGetProgramPipelineiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__9_glIsProgramPipeline();


// The module function definitions.
static PyObject *impl_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__1__f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[0];
    struct Nuitka_FrameObject *frame_46e6a73f4d9a3fc020aee83fdc684588;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_46e6a73f4d9a3fc020aee83fdc684588 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46e6a73f4d9a3fc020aee83fdc684588)) {
        Py_XDECREF(cache_frame_46e6a73f4d9a3fc020aee83fdc684588);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46e6a73f4d9a3fc020aee83fdc684588 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46e6a73f4d9a3fc020aee83fdc684588 = MAKE_FUNCTION_FRAME(codeobj_46e6a73f4d9a3fc020aee83fdc684588, module_OpenGL$raw$GL$ARB$separate_shader_objects, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_46e6a73f4d9a3fc020aee83fdc684588->m_type_description == NULL);
    frame_46e6a73f4d9a3fc020aee83fdc684588 = cache_frame_46e6a73f4d9a3fc020aee83fdc684588;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_46e6a73f4d9a3fc020aee83fdc684588);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_46e6a73f4d9a3fc020aee83fdc684588) == 2); // Frame stack

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[5]);

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
        frame_46e6a73f4d9a3fc020aee83fdc684588->m_frame.f_lineno = 13;
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
    RESTORE_FRAME_EXCEPTION(frame_46e6a73f4d9a3fc020aee83fdc684588);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_46e6a73f4d9a3fc020aee83fdc684588);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_46e6a73f4d9a3fc020aee83fdc684588);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46e6a73f4d9a3fc020aee83fdc684588, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46e6a73f4d9a3fc020aee83fdc684588->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46e6a73f4d9a3fc020aee83fdc684588, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46e6a73f4d9a3fc020aee83fdc684588,
        type_description_1,
        par_function
    );


    // Release cached frame if used for exception.
    if (frame_46e6a73f4d9a3fc020aee83fdc684588 == cache_frame_46e6a73f4d9a3fc020aee83fdc684588) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_46e6a73f4d9a3fc020aee83fdc684588);
        cache_frame_46e6a73f4d9a3fc020aee83fdc684588 = NULL;
    }

    assertFrameObject(frame_46e6a73f4d9a3fc020aee83fdc684588);

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



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__10_glProgramParameteri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4648c87ebf202edaa9fc19b1f17f2808,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__11_glProgramUniform1d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fac06d40ea91c8903f0c248f36c774fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__12_glProgramUniform1dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c2565f159828f98a23941ef003ef5301,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__13_glProgramUniform1f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26aa8f838596f28b4cddac29f92cc861,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__14_glProgramUniform1fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e7e0e29ff1faee3489471b2578af727,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__15_glProgramUniform1i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34e6feb8a0a9ab0d62a848ab179c9575,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__16_glProgramUniform1iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ab585d5229cc8729936caddc20279a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__17_glProgramUniform1ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57de9ed845cce95b73fa6b616ae643b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__18_glProgramUniform1uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57a6dca7760fbc39d2aa7c6fbfbd8d6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__19_glProgramUniform2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14ea5569623f3929e330e460b2dafebb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__1__f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__1__f,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46e6a73f4d9a3fc020aee83fdc684588,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__20_glProgramUniform2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a728c6bbd7c44da908d363fcdad4e621,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__21_glProgramUniform2f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b19f6bcef5001b9896b1270c15ae81de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__22_glProgramUniform2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2b986a56d199a1c2faec685739e29b95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__23_glProgramUniform2i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e503836fdb77c9a3e577a5780567935b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__24_glProgramUniform2iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1455552aee98b0c598e47cf43f037849,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__25_glProgramUniform2ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fad6e4b2bf17a3afce680d3c675a0800,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__26_glProgramUniform2uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_16d20bb82d8eba46fc5f79b7549c7831,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__27_glProgramUniform3d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f5882b18a30371ca238e8be73c650d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__28_glProgramUniform3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ed752c875f5dc94bdb176f00928c414,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__29_glProgramUniform3f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df7621be2744683d4456821bdfea6e09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__2_glActiveShaderProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_897941f6a593000b41c15ad180c9a55a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__30_glProgramUniform3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c8a6ba4d2ea810579549b025dc3c71bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__31_glProgramUniform3i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e459fb292ef2575d918dbe3c403a839,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__32_glProgramUniform3iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74ba6972fc44cc7a48dfd93fb2930cd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__33_glProgramUniform3ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a52669e958146ccdefb2829d4df07f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__34_glProgramUniform3uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed9ce1af2edd3cfa979da8891197dba1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__35_glProgramUniform4d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_901c26e47fa14f18758f7213dfb82d19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__36_glProgramUniform4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad3432f2c8ad10ac725afab615ef41c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__37_glProgramUniform4f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f06fe7ae341dbcfbe30f54a411d1409,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__38_glProgramUniform4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_833d7f7273402765bb90078310ce8953,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__39_glProgramUniform4i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1acc4f1fcba67a48504ffeccd6623609,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__3_glBindProgramPipeline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_929f8eef76b64a926eddaf9bcc353769,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__40_glProgramUniform4iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb440cab2332db38890274868a31eb9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__41_glProgramUniform4ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fbfb257b891d2b20a2b2625c93f572f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__42_glProgramUniform4uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b07da115f5b38e8b8498574942464bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__43_glProgramUniformMatrix2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c580ca63c7db9064517ae32cc85f2b32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__44_glProgramUniformMatrix2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb68e7a909d2a9f676dfc3eb18dd3349,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__45_glProgramUniformMatrix2x3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d49c7ed137d161a5fc6a799f3aae998c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__46_glProgramUniformMatrix2x3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81fa28e1c61e3c21f2d66f0960c1a002,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__47_glProgramUniformMatrix2x4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_594b5fdfa382ce333ea608712fab3287,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__48_glProgramUniformMatrix2x4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6790b041f772dba3f4db4307ecdacedd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__49_glProgramUniformMatrix3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04d3a53a28cf7aa980b2f96fd6ecab7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__4_glCreateShaderProgramv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dbb7c108254228deb789ab80303f9750,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__50_glProgramUniformMatrix3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f65d53e0bafe6243a6569c806870eb5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__51_glProgramUniformMatrix3x2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1211fe9a63ee3e6869f736d076d440c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__52_glProgramUniformMatrix3x2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c79743584253288c2b9f665b6b7ac96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__53_glProgramUniformMatrix3x4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0601c3d680199ded9cf877d318e40f8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__54_glProgramUniformMatrix3x4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d59d2e4e7d937b1dc8bd91087d7a421,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__55_glProgramUniformMatrix4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74d31d4cfb0d527c4968fccf5e88f210,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__56_glProgramUniformMatrix4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b6f60f481d641fa1b360cfd706f97e0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__57_glProgramUniformMatrix4x2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b846b12510ba860103af1b19c120c28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__58_glProgramUniformMatrix4x2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d1d667477266ec1918cb39e2e8bc9562,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__59_glProgramUniformMatrix4x3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca2bffde2a95e8238a87ebbf8e0d7250,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__5_glDeleteProgramPipelines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_23b64d3d81a9ebefa561c66d9a7c9580,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__60_glProgramUniformMatrix4x3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff2e0acc2ce3a890835c8c248f18ba25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__61_glUseProgramStages() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1444b9c1dd37bc10978e3c1a78d72157,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__62_glValidateProgramPipeline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b48dad9f555fa9c09c5179fe4f1e70fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__6_glGenProgramPipelines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_80b44f64086b1a45f966aa5c50ed7ab2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__7_glGetProgramPipelineInfoLog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba3b9a1d770591ed1173e593b5699e8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__8_glGetProgramPipelineiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e08a1707136b82fcf566ae0aaa6a3797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__9_glIsProgramPipeline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_132bdc69c2ebdce87709c279592b4cf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
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

function_impl_code functable_OpenGL$raw$GL$ARB$separate_shader_objects[] = {
    impl_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__1__f,
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

    function_impl_code *current = functable_OpenGL$raw$GL$ARB$separate_shader_objects;
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

    if (offset > sizeof(functable_OpenGL$raw$GL$ARB$separate_shader_objects) || offset < 0) {
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
        functable_OpenGL$raw$GL$ARB$separate_shader_objects[offset],
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
        module_OpenGL$raw$GL$ARB$separate_shader_objects,
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
PyObject *modulecode_OpenGL$raw$GL$ARB$separate_shader_objects(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GL.ARB.separate_shader_objects");

    // Store the module for future use.
    module_OpenGL$raw$GL$ARB$separate_shader_objects = module;

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
        PRINT_STRING("OpenGL.raw.GL.ARB.separate_shader_objects: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.ARB.separate_shader_objects: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.ARB.separate_shader_objects: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GL$ARB$separate_shader_objects\n");

    moduledict_OpenGL$raw$GL$ARB$separate_shader_objects = MODULE_DICT(module_OpenGL$raw$GL$ARB$separate_shader_objects);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[147]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GL$ARB$separate_shader_objects);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GL$ARB$separate_shader_objects);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f93463b27ae2cc3349887c6b879d1ada;
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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f93463b27ae2cc3349887c6b879d1ada = MAKE_MODULE_FRAME(codeobj_f93463b27ae2cc3349887c6b879d1ada, module_OpenGL$raw$GL$ARB$separate_shader_objects);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f93463b27ae2cc3349887c6b879d1ada);
    assert(Py_REFCNT(frame_f93463b27ae2cc3349887c6b879d1ada) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[11]);

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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[17];
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GL$ARB$separate_shader_objects, true, tmp_star_imported_1);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[26];
        tmp_level_value_4 = mod_consts[17];
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[28];
        tmp_level_value_5 = mod_consts[17];
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$separate_shader_objects;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[17];
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__1__f();

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 15;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[36]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 16;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[38]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[40]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 19;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[44]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[46]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[48]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 22;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[50]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[53]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[53]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_called_value_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__2_glActiveShaderProgram();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 24;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 23;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = Py_None;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[53]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_called_value_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_9 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__3_glBindProgramPipeline();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 27;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 26;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[52]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[53]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[56]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[57]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[58]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[58]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[59]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 30;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 30;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_called_value_17 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_17 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__4_glCreateShaderProgramv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 30;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 29;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[52]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = Py_None;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[57]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[61]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_called_value_22 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_22 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__5_glDeleteProgramPipelines();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 33;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 32;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[52]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = Py_None;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[57]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[61]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_called_value_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_27 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__6_glGenProgramPipelines();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 36;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 35;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[52]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = Py_None;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[53]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[57]);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[64]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[65]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_called_value_28 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_34 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__7_glGetProgramPipelineInfoLog();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 39;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 38;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[52]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = Py_None;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[53]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[56]);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[67]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_called_value_31 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_40 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__8_glGetProgramPipelineiv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 42;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 41;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[52]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[69]);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[53]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_called_value_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_44 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__9_glIsProgramPipeline();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 45;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 44;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[52]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = Py_None;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[53]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_47);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[56]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_47);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[71]);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_called_value_37 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_50 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__10_glProgramParameteri();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 48;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 47;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[52]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = Py_None;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[53]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_53);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[71]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_53);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[73]);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_called_value_40 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_56 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__11_glProgramUniform1d();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 51;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 50;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[52]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = Py_None;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[53]);
        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_59);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[71]);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_59);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[57]);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[75]);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_called_value_43 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_59);
        Py_DECREF(tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_63 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__12_glProgramUniform1dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 54;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 53;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_69;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[52]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = Py_None;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[53]);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[71]);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[77]);
        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_called_value_46 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_66);
        Py_DECREF(tmp_args_element_value_67);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_69 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__13_glProgramUniform1f();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 57;
        tmp_args_element_value_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_69);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 56;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_64);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[52]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = Py_None;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[53]);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_72);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[71]);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_72);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[57]);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[79]);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_called_value_49 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_50, call_args);
        }

        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_72);
        Py_DECREF(tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_76 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__14_glProgramUniform1fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 60;
        tmp_args_element_value_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 59;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[52]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = Py_None;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[53]);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[71]);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[71]);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_called_value_52 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_53, call_args);
        }

        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_80);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_82 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__15_glProgramUniform1i();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 63;
        tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 62;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_77);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_89;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[52]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = Py_None;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[53]);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[71]);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[57]);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[67]);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_called_value_55 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_56, call_args);
        }

        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_87);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_89 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__16_glProgramUniform1iv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 66;
        tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_89);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 65;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_95;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[52]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = Py_None;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[53]);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_92);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[71]);
        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_92);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_92);
            Py_DECREF(tmp_args_element_value_93);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[53]);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_92);
            Py_DECREF(tmp_args_element_value_93);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94};
            tmp_called_value_58 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_59, call_args);
        }

        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_92);
        Py_DECREF(tmp_args_element_value_93);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_95 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__17_glProgramUniform1ui();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 69;
        tmp_args_element_value_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_95);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 68;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_90);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_61;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_102;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[52]);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = Py_None;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[53]);
        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_98);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[71]);
        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_98);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[57]);
        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);
            Py_DECREF(tmp_args_element_value_100);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[61]);
        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);
            Py_DECREF(tmp_args_element_value_100);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101};
            tmp_called_value_61 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_62, call_args);
        }

        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_98);
        Py_DECREF(tmp_args_element_value_99);
        Py_DECREF(tmp_args_element_value_100);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_102 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__18_glProgramUniform1uiv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 72;
        tmp_args_element_value_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_102);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 71;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_element_value_109;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[52]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = Py_None;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[53]);
        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[71]);
        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_args_element_value_106);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[73]);
        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_args_element_value_106);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_args_element_value_106);
            Py_DECREF(tmp_args_element_value_107);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[73]);
        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_args_element_value_106);
            Py_DECREF(tmp_args_element_value_107);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_called_value_64 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_65, call_args);
        }

        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_element_value_105);
        Py_DECREF(tmp_args_element_value_106);
        Py_DECREF(tmp_args_element_value_107);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_109 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__19_glProgramUniform2d();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 75;
        tmp_args_element_value_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 74;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_called_value_67;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_116;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[52]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = Py_None;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[53]);
        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_112);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[71]);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_112);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[57]);
        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);
            Py_DECREF(tmp_args_element_value_114);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[75]);
        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);
            Py_DECREF(tmp_args_element_value_114);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115};
            tmp_called_value_67 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_68, call_args);
        }

        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_112);
        Py_DECREF(tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_114);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_116 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__20_glProgramUniform2dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 78;
        tmp_args_element_value_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_116);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 77;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_123;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[52]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = Py_None;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[53]);
        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[71]);
        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[77]);
        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[77]);
        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_called_value_70 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_71, call_args);
        }

        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_element_value_119);
        Py_DECREF(tmp_args_element_value_120);
        Py_DECREF(tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_123 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__21_glProgramUniform2f();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 81;
        tmp_args_element_value_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_123);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 80;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_117);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_72;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_called_value_73;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_130;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[52]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = Py_None;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[53]);
        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[71]);
        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[57]);
        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[79]);
        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_called_value_73 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_74, call_args);
        }

        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_126);
        Py_DECREF(tmp_args_element_value_127);
        Py_DECREF(tmp_args_element_value_128);
        Py_DECREF(tmp_args_element_value_129);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_130 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__22_glProgramUniform2fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 84;
        tmp_args_element_value_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_130);
        Py_DECREF(tmp_called_value_73);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_args_element_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 83;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_124);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_137;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[52]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = Py_None;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[53]);
        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[71]);
        if (tmp_args_element_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_133);
            Py_DECREF(tmp_args_element_value_134);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[71]);
        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_133);
            Py_DECREF(tmp_args_element_value_134);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_133);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_135);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[71]);
        if (tmp_args_element_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_133);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_135);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_132, tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_called_value_76 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_77, call_args);
        }

        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_args_element_value_133);
        Py_DECREF(tmp_args_element_value_134);
        Py_DECREF(tmp_args_element_value_135);
        Py_DECREF(tmp_args_element_value_136);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_137 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__23_glProgramUniform2i();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 87;
        tmp_args_element_value_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_137);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_137);
        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 86;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_75, tmp_args_element_value_131);
        Py_DECREF(tmp_args_element_value_131);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_called_value_79;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_144;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[52]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = Py_None;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[53]);
        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_140);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[71]);
        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_140);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_140);
            Py_DECREF(tmp_args_element_value_141);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[57]);
        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_140);
            Py_DECREF(tmp_args_element_value_141);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_140);
            Py_DECREF(tmp_args_element_value_141);
            Py_DECREF(tmp_args_element_value_142);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[67]);
        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_140);
            Py_DECREF(tmp_args_element_value_141);
            Py_DECREF(tmp_args_element_value_142);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140, tmp_args_element_value_141, tmp_args_element_value_142, tmp_args_element_value_143};
            tmp_called_value_79 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_140);
        Py_DECREF(tmp_args_element_value_141);
        Py_DECREF(tmp_args_element_value_142);
        Py_DECREF(tmp_args_element_value_143);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_144 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__24_glProgramUniform2iv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 90;
        tmp_args_element_value_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_144);
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 89;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_138);
        Py_DECREF(tmp_args_element_value_138);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_element_value_151;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[52]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_146 = Py_None;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[53]);
        if (tmp_args_element_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_147);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[71]);
        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_147);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_147);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[53]);
        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_147);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_147);
            Py_DECREF(tmp_args_element_value_148);
            Py_DECREF(tmp_args_element_value_149);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[53]);
        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_147);
            Py_DECREF(tmp_args_element_value_148);
            Py_DECREF(tmp_args_element_value_149);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_146, tmp_args_element_value_147, tmp_args_element_value_148, tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_called_value_82 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_83, call_args);
        }

        Py_DECREF(tmp_called_value_83);
        Py_DECREF(tmp_args_element_value_147);
        Py_DECREF(tmp_args_element_value_148);
        Py_DECREF(tmp_args_element_value_149);
        Py_DECREF(tmp_args_element_value_150);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_151 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__25_glProgramUniform2ui();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 93;
        tmp_args_element_value_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_151);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_151);
        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 92;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_145);
        Py_DECREF(tmp_args_element_value_145);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_84;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_called_value_85;
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_158;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[52]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = Py_None;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[53]);
        if (tmp_args_element_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_154);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[71]);
        if (tmp_args_element_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_154);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[57]);
        if (tmp_args_element_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[61]);
        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_153, tmp_args_element_value_154, tmp_args_element_value_155, tmp_args_element_value_156, tmp_args_element_value_157};
            tmp_called_value_85 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_86, call_args);
        }

        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_154);
        Py_DECREF(tmp_args_element_value_155);
        Py_DECREF(tmp_args_element_value_156);
        Py_DECREF(tmp_args_element_value_157);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_158 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__26_glProgramUniform2uiv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 96;
        tmp_args_element_value_152 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_85, tmp_args_element_value_158);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_158);
        if (tmp_args_element_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 95;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_152);
        Py_DECREF(tmp_args_element_value_152);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_args_element_value_166;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[52]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = Py_None;
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[53]);
        if (tmp_args_element_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[71]);
        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);
            Py_DECREF(tmp_args_element_value_162);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[73]);
        if (tmp_args_element_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);
            Py_DECREF(tmp_args_element_value_162);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);
            Py_DECREF(tmp_args_element_value_162);
            Py_DECREF(tmp_args_element_value_163);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[73]);
        if (tmp_args_element_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);
            Py_DECREF(tmp_args_element_value_162);
            Py_DECREF(tmp_args_element_value_163);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);
            Py_DECREF(tmp_args_element_value_162);
            Py_DECREF(tmp_args_element_value_163);
            Py_DECREF(tmp_args_element_value_164);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[73]);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_161);
            Py_DECREF(tmp_args_element_value_162);
            Py_DECREF(tmp_args_element_value_163);
            Py_DECREF(tmp_args_element_value_164);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161, tmp_args_element_value_162, tmp_args_element_value_163, tmp_args_element_value_164, tmp_args_element_value_165};
            tmp_called_value_88 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_89, call_args);
        }

        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_element_value_161);
        Py_DECREF(tmp_args_element_value_162);
        Py_DECREF(tmp_args_element_value_163);
        Py_DECREF(tmp_args_element_value_164);
        Py_DECREF(tmp_args_element_value_165);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_166 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__27_glProgramUniform3d();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 99;
        tmp_args_element_value_159 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_166);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_166);
        if (tmp_args_element_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 98;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_87, tmp_args_element_value_159);
        Py_DECREF(tmp_args_element_value_159);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_called_value_91;
        PyObject *tmp_called_value_92;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_173;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[52]);
        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = Py_None;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[53]);
        if (tmp_args_element_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_169);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[71]);
        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_169);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_169);
            Py_DECREF(tmp_args_element_value_170);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[57]);
        if (tmp_args_element_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_169);
            Py_DECREF(tmp_args_element_value_170);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_169);
            Py_DECREF(tmp_args_element_value_170);
            Py_DECREF(tmp_args_element_value_171);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[75]);
        if (tmp_args_element_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_169);
            Py_DECREF(tmp_args_element_value_170);
            Py_DECREF(tmp_args_element_value_171);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_168, tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171, tmp_args_element_value_172};
            tmp_called_value_91 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_92, call_args);
        }

        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_169);
        Py_DECREF(tmp_args_element_value_170);
        Py_DECREF(tmp_args_element_value_171);
        Py_DECREF(tmp_args_element_value_172);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_173 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__28_glProgramUniform3dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 102;
        tmp_args_element_value_167 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_91, tmp_args_element_value_173);
        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_args_element_value_173);
        if (tmp_args_element_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 101;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_167);
        Py_DECREF(tmp_args_element_value_167);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_args_element_value_176;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_args_element_value_181;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[52]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = Py_None;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[53]);
        if (tmp_args_element_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[71]);
        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[77]);
        if (tmp_args_element_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);
            Py_DECREF(tmp_args_element_value_178);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[77]);
        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);
            Py_DECREF(tmp_args_element_value_178);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);
            Py_DECREF(tmp_args_element_value_178);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[77]);
        if (tmp_args_element_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);
            Py_DECREF(tmp_args_element_value_178);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176, tmp_args_element_value_177, tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180};
            tmp_called_value_94 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_95, call_args);
        }

        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_args_element_value_176);
        Py_DECREF(tmp_args_element_value_177);
        Py_DECREF(tmp_args_element_value_178);
        Py_DECREF(tmp_args_element_value_179);
        Py_DECREF(tmp_args_element_value_180);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_181 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__29_glProgramUniform3f();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 105;
        tmp_args_element_value_174 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_181);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_181);
        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 104;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_93, tmp_args_element_value_174);
        Py_DECREF(tmp_args_element_value_174);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_96;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_called_value_97;
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_args_element_value_188;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[52]);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = Py_None;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[53]);
        if (tmp_args_element_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_184);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[71]);
        if (tmp_args_element_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_184);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_184);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[57]);
        if (tmp_args_element_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_184);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_184);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[79]);
        if (tmp_args_element_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_184);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_183, tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187};
            tmp_called_value_97 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_98, call_args);
        }

        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_184);
        Py_DECREF(tmp_args_element_value_185);
        Py_DECREF(tmp_args_element_value_186);
        Py_DECREF(tmp_args_element_value_187);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_188 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__30_glProgramUniform3fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 108;
        tmp_args_element_value_182 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_97, tmp_args_element_value_188);
        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_args_element_value_188);
        if (tmp_args_element_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 107;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_182);
        Py_DECREF(tmp_args_element_value_182);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_196;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[52]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = Py_None;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[53]);
        if (tmp_args_element_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[71]);
        if (tmp_args_element_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[71]);
        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[71]);
        if (tmp_args_element_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[71]);
        if (tmp_args_element_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_190, tmp_args_element_value_191, tmp_args_element_value_192, tmp_args_element_value_193, tmp_args_element_value_194, tmp_args_element_value_195};
            tmp_called_value_100 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_101, call_args);
        }

        Py_DECREF(tmp_called_value_101);
        Py_DECREF(tmp_args_element_value_191);
        Py_DECREF(tmp_args_element_value_192);
        Py_DECREF(tmp_args_element_value_193);
        Py_DECREF(tmp_args_element_value_194);
        Py_DECREF(tmp_args_element_value_195);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_196 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__31_glProgramUniform3i();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 111;
        tmp_args_element_value_189 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_196);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_196);
        if (tmp_args_element_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 110;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_189);
        Py_DECREF(tmp_args_element_value_189);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_called_value_103;
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_args_element_value_203;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[52]);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = Py_None;
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_199 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[53]);
        if (tmp_args_element_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_199);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[71]);
        if (tmp_args_element_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_199);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[57]);
        if (tmp_args_element_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[67]);
        if (tmp_args_element_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_198, tmp_args_element_value_199, tmp_args_element_value_200, tmp_args_element_value_201, tmp_args_element_value_202};
            tmp_called_value_103 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_104, call_args);
        }

        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_199);
        Py_DECREF(tmp_args_element_value_200);
        Py_DECREF(tmp_args_element_value_201);
        Py_DECREF(tmp_args_element_value_202);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_203 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__32_glProgramUniform3iv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 114;
        tmp_args_element_value_197 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_103, tmp_args_element_value_203);
        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_203);
        if (tmp_args_element_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 113;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_197);
        Py_DECREF(tmp_args_element_value_197);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_204;
        PyObject *tmp_called_value_106;
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_element_value_211;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[52]);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_205 = Py_None;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[53]);
        if (tmp_args_element_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[71]);
        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[53]);
        if (tmp_args_element_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[53]);
        if (tmp_args_element_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_210 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[53]);
        if (tmp_args_element_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_205, tmp_args_element_value_206, tmp_args_element_value_207, tmp_args_element_value_208, tmp_args_element_value_209, tmp_args_element_value_210};
            tmp_called_value_106 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_107, call_args);
        }

        Py_DECREF(tmp_called_value_107);
        Py_DECREF(tmp_args_element_value_206);
        Py_DECREF(tmp_args_element_value_207);
        Py_DECREF(tmp_args_element_value_208);
        Py_DECREF(tmp_args_element_value_209);
        Py_DECREF(tmp_args_element_value_210);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_211 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__33_glProgramUniform3ui();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 117;
        tmp_args_element_value_204 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_211);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_211);
        if (tmp_args_element_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 116;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_105, tmp_args_element_value_204);
        Py_DECREF(tmp_args_element_value_204);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_108;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_called_value_109;
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_args_element_value_214;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_218;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[52]);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = Py_None;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[53]);
        if (tmp_args_element_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[71]);
        if (tmp_args_element_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[57]);
        if (tmp_args_element_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);
            Py_DECREF(tmp_args_element_value_216);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[61]);
        if (tmp_args_element_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);
            Py_DECREF(tmp_args_element_value_216);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_213, tmp_args_element_value_214, tmp_args_element_value_215, tmp_args_element_value_216, tmp_args_element_value_217};
            tmp_called_value_109 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_110, call_args);
        }

        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_214);
        Py_DECREF(tmp_args_element_value_215);
        Py_DECREF(tmp_args_element_value_216);
        Py_DECREF(tmp_args_element_value_217);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_218 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__34_glProgramUniform3uiv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 120;
        tmp_args_element_value_212 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_109, tmp_args_element_value_218);
        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_element_value_218);
        if (tmp_args_element_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 119;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_212);
        Py_DECREF(tmp_args_element_value_212);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_called_value_112;
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_args_element_value_221;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_args_element_value_227;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[52]);
        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = Py_None;
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_221 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[53]);
        if (tmp_args_element_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_222 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[71]);
        if (tmp_args_element_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_223 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[73]);
        if (tmp_args_element_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[73]);
        if (tmp_args_element_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_224);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_225 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[73]);
        if (tmp_args_element_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_224);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[73]);
        if (tmp_args_element_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_220, tmp_args_element_value_221, tmp_args_element_value_222, tmp_args_element_value_223, tmp_args_element_value_224, tmp_args_element_value_225, tmp_args_element_value_226};
            tmp_called_value_112 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_113, call_args);
        }

        Py_DECREF(tmp_called_value_113);
        Py_DECREF(tmp_args_element_value_221);
        Py_DECREF(tmp_args_element_value_222);
        Py_DECREF(tmp_args_element_value_223);
        Py_DECREF(tmp_args_element_value_224);
        Py_DECREF(tmp_args_element_value_225);
        Py_DECREF(tmp_args_element_value_226);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_227 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__35_glProgramUniform4d();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 123;
        tmp_args_element_value_219 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_112, tmp_args_element_value_227);
        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_args_element_value_227);
        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 122;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_111, tmp_args_element_value_219);
        Py_DECREF(tmp_args_element_value_219);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_114;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_called_value_115;
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_229;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_233;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_234;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[52]);
        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_229 = Py_None;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[53]);
        if (tmp_args_element_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_args_element_value_230);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[71]);
        if (tmp_args_element_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_args_element_value_230);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[57]);
        if (tmp_args_element_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);
            Py_DECREF(tmp_args_element_value_232);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[75]);
        if (tmp_args_element_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);
            Py_DECREF(tmp_args_element_value_232);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_229, tmp_args_element_value_230, tmp_args_element_value_231, tmp_args_element_value_232, tmp_args_element_value_233};
            tmp_called_value_115 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_116, call_args);
        }

        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_args_element_value_230);
        Py_DECREF(tmp_args_element_value_231);
        Py_DECREF(tmp_args_element_value_232);
        Py_DECREF(tmp_args_element_value_233);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_234 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__36_glProgramUniform4dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 126;
        tmp_args_element_value_228 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_115, tmp_args_element_value_234);
        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_element_value_234);
        if (tmp_args_element_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 125;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_114, tmp_args_element_value_228);
        Py_DECREF(tmp_args_element_value_228);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_called_value_118;
        PyObject *tmp_called_value_119;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_args_element_value_237;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_args_element_value_243;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[52]);
        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_236 = Py_None;
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_237 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[53]);
        if (tmp_args_element_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[71]);
        if (tmp_args_element_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_239 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[77]);
        if (tmp_args_element_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);
            Py_DECREF(tmp_args_element_value_239);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_240 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[77]);
        if (tmp_args_element_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);
            Py_DECREF(tmp_args_element_value_239);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);
            Py_DECREF(tmp_args_element_value_239);
            Py_DECREF(tmp_args_element_value_240);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_241 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[77]);
        if (tmp_args_element_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);
            Py_DECREF(tmp_args_element_value_239);
            Py_DECREF(tmp_args_element_value_240);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);
            Py_DECREF(tmp_args_element_value_239);
            Py_DECREF(tmp_args_element_value_240);
            Py_DECREF(tmp_args_element_value_241);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[77]);
        if (tmp_args_element_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_119);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);
            Py_DECREF(tmp_args_element_value_239);
            Py_DECREF(tmp_args_element_value_240);
            Py_DECREF(tmp_args_element_value_241);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_236, tmp_args_element_value_237, tmp_args_element_value_238, tmp_args_element_value_239, tmp_args_element_value_240, tmp_args_element_value_241, tmp_args_element_value_242};
            tmp_called_value_118 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_119, call_args);
        }

        Py_DECREF(tmp_called_value_119);
        Py_DECREF(tmp_args_element_value_237);
        Py_DECREF(tmp_args_element_value_238);
        Py_DECREF(tmp_args_element_value_239);
        Py_DECREF(tmp_args_element_value_240);
        Py_DECREF(tmp_args_element_value_241);
        Py_DECREF(tmp_args_element_value_242);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_243 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__37_glProgramUniform4f();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 129;
        tmp_args_element_value_235 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_243);
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_243);
        if (tmp_args_element_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 128;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_235);
        Py_DECREF(tmp_args_element_value_235);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_120;
        PyObject *tmp_args_element_value_244;
        PyObject *tmp_called_value_121;
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_args_element_value_245;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_249;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_250;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[52]);
        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_245 = Py_None;
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[53]);
        if (tmp_args_element_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_element_value_246);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_247 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[71]);
        if (tmp_args_element_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_element_value_246);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_element_value_246);
            Py_DECREF(tmp_args_element_value_247);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[57]);
        if (tmp_args_element_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_element_value_246);
            Py_DECREF(tmp_args_element_value_247);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_element_value_246);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_249 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[79]);
        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_element_value_246);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_245, tmp_args_element_value_246, tmp_args_element_value_247, tmp_args_element_value_248, tmp_args_element_value_249};
            tmp_called_value_121 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_122, call_args);
        }

        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_246);
        Py_DECREF(tmp_args_element_value_247);
        Py_DECREF(tmp_args_element_value_248);
        Py_DECREF(tmp_args_element_value_249);
        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_250 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__38_glProgramUniform4fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 132;
        tmp_args_element_value_244 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_121, tmp_args_element_value_250);
        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_args_element_value_250);
        if (tmp_args_element_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 131;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_244);
        Py_DECREF(tmp_args_element_value_244);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_251;
        PyObject *tmp_called_value_124;
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_255;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_args_element_value_257;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_258;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_259;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_value_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[52]);
        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_252 = Py_None;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_253 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[53]);
        if (tmp_args_element_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[71]);
        if (tmp_args_element_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[71]);
        if (tmp_args_element_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[71]);
        if (tmp_args_element_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_257 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[71]);
        if (tmp_args_element_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);
            Py_DECREF(tmp_args_element_value_257);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_258 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[71]);
        if (tmp_args_element_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);
            Py_DECREF(tmp_args_element_value_253);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);
            Py_DECREF(tmp_args_element_value_257);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_252, tmp_args_element_value_253, tmp_args_element_value_254, tmp_args_element_value_255, tmp_args_element_value_256, tmp_args_element_value_257, tmp_args_element_value_258};
            tmp_called_value_124 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_125, call_args);
        }

        Py_DECREF(tmp_called_value_125);
        Py_DECREF(tmp_args_element_value_253);
        Py_DECREF(tmp_args_element_value_254);
        Py_DECREF(tmp_args_element_value_255);
        Py_DECREF(tmp_args_element_value_256);
        Py_DECREF(tmp_args_element_value_257);
        Py_DECREF(tmp_args_element_value_258);
        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_259 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__39_glProgramUniform4i();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 135;
        tmp_args_element_value_251 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_124, tmp_args_element_value_259);
        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_259);
        if (tmp_args_element_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 134;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_123, tmp_args_element_value_251);
        Py_DECREF(tmp_args_element_value_251);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_126;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_called_value_127;
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_args_element_value_265;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_args_element_value_266;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[52]);
        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_261 = Py_None;
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[53]);
        if (tmp_args_element_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_263 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[71]);
        if (tmp_args_element_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[57]);
        if (tmp_args_element_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);
            Py_DECREF(tmp_args_element_value_264);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_265 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[67]);
        if (tmp_args_element_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);
            Py_DECREF(tmp_args_element_value_264);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_261, tmp_args_element_value_262, tmp_args_element_value_263, tmp_args_element_value_264, tmp_args_element_value_265};
            tmp_called_value_127 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_128, call_args);
        }

        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_262);
        Py_DECREF(tmp_args_element_value_263);
        Py_DECREF(tmp_args_element_value_264);
        Py_DECREF(tmp_args_element_value_265);
        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_266 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__40_glProgramUniform4iv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 138;
        tmp_args_element_value_260 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_127, tmp_args_element_value_266);
        Py_DECREF(tmp_called_value_127);
        Py_DECREF(tmp_args_element_value_266);
        if (tmp_args_element_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 137;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_126, tmp_args_element_value_260);
        Py_DECREF(tmp_args_element_value_260);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_129;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_called_value_130;
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_element_value_271;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_275;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[52]);
        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = Py_None;
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[53]);
        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[71]);
        if (tmp_args_element_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_271 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[53]);
        if (tmp_args_element_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[53]);
        if (tmp_args_element_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);
            Py_DECREF(tmp_args_element_value_272);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_273 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[53]);
        if (tmp_args_element_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);
            Py_DECREF(tmp_args_element_value_272);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);
            Py_DECREF(tmp_args_element_value_272);
            Py_DECREF(tmp_args_element_value_273);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_274 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[53]);
        if (tmp_args_element_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);
            Py_DECREF(tmp_args_element_value_272);
            Py_DECREF(tmp_args_element_value_273);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_268, tmp_args_element_value_269, tmp_args_element_value_270, tmp_args_element_value_271, tmp_args_element_value_272, tmp_args_element_value_273, tmp_args_element_value_274};
            tmp_called_value_130 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_131, call_args);
        }

        Py_DECREF(tmp_called_value_131);
        Py_DECREF(tmp_args_element_value_269);
        Py_DECREF(tmp_args_element_value_270);
        Py_DECREF(tmp_args_element_value_271);
        Py_DECREF(tmp_args_element_value_272);
        Py_DECREF(tmp_args_element_value_273);
        Py_DECREF(tmp_args_element_value_274);
        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_275 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__41_glProgramUniform4ui();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 141;
        tmp_args_element_value_267 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_275);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_275);
        if (tmp_args_element_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 140;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_129, tmp_args_element_value_267);
        Py_DECREF(tmp_args_element_value_267);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_132;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_called_value_133;
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_args_element_value_277;
        PyObject *tmp_args_element_value_278;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_args_element_value_279;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_args_element_value_282;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[52]);
        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = Py_None;
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_278 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[53]);
        if (tmp_args_element_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_278);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_279 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[71]);
        if (tmp_args_element_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_278);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_280 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[57]);
        if (tmp_args_element_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_281 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[61]);
        if (tmp_args_element_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_277, tmp_args_element_value_278, tmp_args_element_value_279, tmp_args_element_value_280, tmp_args_element_value_281};
            tmp_called_value_133 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_134, call_args);
        }

        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_278);
        Py_DECREF(tmp_args_element_value_279);
        Py_DECREF(tmp_args_element_value_280);
        Py_DECREF(tmp_args_element_value_281);
        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_282 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__42_glProgramUniform4uiv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 144;
        tmp_args_element_value_276 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_133, tmp_args_element_value_282);
        Py_DECREF(tmp_called_value_133);
        Py_DECREF(tmp_args_element_value_282);
        if (tmp_args_element_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 143;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_132, tmp_args_element_value_276);
        Py_DECREF(tmp_args_element_value_276);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_called_value_136;
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_args_element_value_284;
        PyObject *tmp_args_element_value_285;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_args_element_value_288;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_args_element_value_290;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[52]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_284 = Py_None;
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_285 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[53]);
        if (tmp_args_element_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_286 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[71]);
        if (tmp_args_element_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);
            Py_DECREF(tmp_args_element_value_286);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[57]);
        if (tmp_args_element_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);
            Py_DECREF(tmp_args_element_value_286);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);
            Py_DECREF(tmp_args_element_value_286);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[69]);
        if (tmp_args_element_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);
            Py_DECREF(tmp_args_element_value_286);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_208 == NULL)) {
            tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);
            Py_DECREF(tmp_args_element_value_286);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_289 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[75]);
        if (tmp_args_element_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_285);
            Py_DECREF(tmp_args_element_value_286);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_284, tmp_args_element_value_285, tmp_args_element_value_286, tmp_args_element_value_287, tmp_args_element_value_288, tmp_args_element_value_289};
            tmp_called_value_136 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_137, call_args);
        }

        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_element_value_285);
        Py_DECREF(tmp_args_element_value_286);
        Py_DECREF(tmp_args_element_value_287);
        Py_DECREF(tmp_args_element_value_288);
        Py_DECREF(tmp_args_element_value_289);
        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_290 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__43_glProgramUniformMatrix2dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 147;
        tmp_args_element_value_283 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_136, tmp_args_element_value_290);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_290);
        if (tmp_args_element_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 146;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_135, tmp_args_element_value_283);
        Py_DECREF(tmp_args_element_value_283);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_138;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_called_value_139;
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_args_element_value_293;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_args_element_value_294;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_element_value_295;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_args_element_value_298;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_called_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[52]);
        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = Py_None;
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_293 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[53]);
        if (tmp_args_element_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_294 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[71]);
        if (tmp_args_element_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);
            Py_DECREF(tmp_args_element_value_294);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_295 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[57]);
        if (tmp_args_element_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);
            Py_DECREF(tmp_args_element_value_294);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);
            Py_DECREF(tmp_args_element_value_294);
            Py_DECREF(tmp_args_element_value_295);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_296 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[69]);
        if (tmp_args_element_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);
            Py_DECREF(tmp_args_element_value_294);
            Py_DECREF(tmp_args_element_value_295);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);
            Py_DECREF(tmp_args_element_value_294);
            Py_DECREF(tmp_args_element_value_295);
            Py_DECREF(tmp_args_element_value_296);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[79]);
        if (tmp_args_element_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_293);
            Py_DECREF(tmp_args_element_value_294);
            Py_DECREF(tmp_args_element_value_295);
            Py_DECREF(tmp_args_element_value_296);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_292, tmp_args_element_value_293, tmp_args_element_value_294, tmp_args_element_value_295, tmp_args_element_value_296, tmp_args_element_value_297};
            tmp_called_value_139 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_140, call_args);
        }

        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_293);
        Py_DECREF(tmp_args_element_value_294);
        Py_DECREF(tmp_args_element_value_295);
        Py_DECREF(tmp_args_element_value_296);
        Py_DECREF(tmp_args_element_value_297);
        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_298 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__44_glProgramUniformMatrix2fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 150;
        tmp_args_element_value_291 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_139, tmp_args_element_value_298);
        Py_DECREF(tmp_called_value_139);
        Py_DECREF(tmp_args_element_value_298);
        if (tmp_args_element_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 149;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_138, tmp_args_element_value_291);
        Py_DECREF(tmp_args_element_value_291);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_141;
        PyObject *tmp_args_element_value_299;
        PyObject *tmp_called_value_142;
        PyObject *tmp_called_value_143;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_args_element_value_300;
        PyObject *tmp_args_element_value_301;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_args_element_value_303;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_args_element_value_306;
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_called_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[52]);
        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_300 = Py_None;
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_301 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[53]);
        if (tmp_args_element_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_302 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[71]);
        if (tmp_args_element_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);
            Py_DECREF(tmp_args_element_value_302);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[57]);
        if (tmp_args_element_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);
            Py_DECREF(tmp_args_element_value_302);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[69]);
        if (tmp_args_element_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_220 == NULL)) {
            tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_305 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[75]);
        if (tmp_args_element_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_143);
            Py_DECREF(tmp_args_element_value_301);
            Py_DECREF(tmp_args_element_value_302);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_300, tmp_args_element_value_301, tmp_args_element_value_302, tmp_args_element_value_303, tmp_args_element_value_304, tmp_args_element_value_305};
            tmp_called_value_142 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_143, call_args);
        }

        Py_DECREF(tmp_called_value_143);
        Py_DECREF(tmp_args_element_value_301);
        Py_DECREF(tmp_args_element_value_302);
        Py_DECREF(tmp_args_element_value_303);
        Py_DECREF(tmp_args_element_value_304);
        Py_DECREF(tmp_args_element_value_305);
        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_306 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__45_glProgramUniformMatrix2x3dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 153;
        tmp_args_element_value_299 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_142, tmp_args_element_value_306);
        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_306);
        if (tmp_args_element_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 152;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_141, tmp_args_element_value_299);
        Py_DECREF(tmp_args_element_value_299);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_144;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_called_value_145;
        PyObject *tmp_called_value_146;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_args_element_value_308;
        PyObject *tmp_args_element_value_309;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_args_element_value_313;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_args_element_value_314;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[52]);
        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_308 = Py_None;
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_309 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[53]);
        if (tmp_args_element_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_310 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[71]);
        if (tmp_args_element_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_311 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[57]);
        if (tmp_args_element_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);
            Py_DECREF(tmp_args_element_value_311);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_312 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[69]);
        if (tmp_args_element_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);
            Py_DECREF(tmp_args_element_value_311);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_226 == NULL)) {
            tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);
            Py_DECREF(tmp_args_element_value_311);
            Py_DECREF(tmp_args_element_value_312);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_313 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[79]);
        if (tmp_args_element_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_args_element_value_309);
            Py_DECREF(tmp_args_element_value_310);
            Py_DECREF(tmp_args_element_value_311);
            Py_DECREF(tmp_args_element_value_312);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_308, tmp_args_element_value_309, tmp_args_element_value_310, tmp_args_element_value_311, tmp_args_element_value_312, tmp_args_element_value_313};
            tmp_called_value_145 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_146, call_args);
        }

        Py_DECREF(tmp_called_value_146);
        Py_DECREF(tmp_args_element_value_309);
        Py_DECREF(tmp_args_element_value_310);
        Py_DECREF(tmp_args_element_value_311);
        Py_DECREF(tmp_args_element_value_312);
        Py_DECREF(tmp_args_element_value_313);
        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_314 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__46_glProgramUniformMatrix2x3fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 156;
        tmp_args_element_value_307 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_145, tmp_args_element_value_314);
        Py_DECREF(tmp_called_value_145);
        Py_DECREF(tmp_args_element_value_314);
        if (tmp_args_element_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 155;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_144, tmp_args_element_value_307);
        Py_DECREF(tmp_args_element_value_307);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_element_value_315;
        PyObject *tmp_called_value_148;
        PyObject *tmp_called_value_149;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_args_element_value_317;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_args_element_value_319;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_args_element_value_322;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_called_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[52]);
        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_316 = Py_None;
        tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_228 == NULL)) {
            tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_317 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[53]);
        if (tmp_args_element_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_318 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[71]);
        if (tmp_args_element_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[57]);
        if (tmp_args_element_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_320 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[69]);
        if (tmp_args_element_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);
            Py_DECREF(tmp_args_element_value_320);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_321 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[75]);
        if (tmp_args_element_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_149);
            Py_DECREF(tmp_args_element_value_317);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);
            Py_DECREF(tmp_args_element_value_320);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_316, tmp_args_element_value_317, tmp_args_element_value_318, tmp_args_element_value_319, tmp_args_element_value_320, tmp_args_element_value_321};
            tmp_called_value_148 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_149, call_args);
        }

        Py_DECREF(tmp_called_value_149);
        Py_DECREF(tmp_args_element_value_317);
        Py_DECREF(tmp_args_element_value_318);
        Py_DECREF(tmp_args_element_value_319);
        Py_DECREF(tmp_args_element_value_320);
        Py_DECREF(tmp_args_element_value_321);
        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_322 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__47_glProgramUniformMatrix2x4dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 159;
        tmp_args_element_value_315 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_148, tmp_args_element_value_322);
        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_322);
        if (tmp_args_element_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 158;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_147, tmp_args_element_value_315);
        Py_DECREF(tmp_args_element_value_315);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_150;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_called_value_151;
        PyObject *tmp_called_value_152;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_args_element_value_325;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_args_element_value_327;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_args_element_value_328;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_args_element_value_329;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_args_element_value_330;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_called_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[52]);
        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_324 = Py_None;
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_325 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[53]);
        if (tmp_args_element_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_326 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[71]);
        if (tmp_args_element_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_236 == NULL)) {
            tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);
            Py_DECREF(tmp_args_element_value_326);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_327 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[57]);
        if (tmp_args_element_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);
            Py_DECREF(tmp_args_element_value_326);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);
            Py_DECREF(tmp_args_element_value_326);
            Py_DECREF(tmp_args_element_value_327);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_328 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[69]);
        if (tmp_args_element_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);
            Py_DECREF(tmp_args_element_value_326);
            Py_DECREF(tmp_args_element_value_327);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);
            Py_DECREF(tmp_args_element_value_326);
            Py_DECREF(tmp_args_element_value_327);
            Py_DECREF(tmp_args_element_value_328);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_329 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[79]);
        if (tmp_args_element_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_args_element_value_325);
            Py_DECREF(tmp_args_element_value_326);
            Py_DECREF(tmp_args_element_value_327);
            Py_DECREF(tmp_args_element_value_328);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_324, tmp_args_element_value_325, tmp_args_element_value_326, tmp_args_element_value_327, tmp_args_element_value_328, tmp_args_element_value_329};
            tmp_called_value_151 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_152, call_args);
        }

        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_args_element_value_325);
        Py_DECREF(tmp_args_element_value_326);
        Py_DECREF(tmp_args_element_value_327);
        Py_DECREF(tmp_args_element_value_328);
        Py_DECREF(tmp_args_element_value_329);
        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_330 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__48_glProgramUniformMatrix2x4fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 162;
        tmp_args_element_value_323 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_151, tmp_args_element_value_330);
        Py_DECREF(tmp_called_value_151);
        Py_DECREF(tmp_args_element_value_330);
        if (tmp_args_element_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 161;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_150, tmp_args_element_value_323);
        Py_DECREF(tmp_args_element_value_323);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_153;
        PyObject *tmp_args_element_value_331;
        PyObject *tmp_called_value_154;
        PyObject *tmp_called_value_155;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_args_element_value_333;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_args_element_value_335;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_args_element_value_336;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_args_element_value_337;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_args_element_value_338;
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_239 == NULL)) {
            tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_called_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[52]);
        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_332 = Py_None;
        tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_240 == NULL)) {
            tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_333 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[53]);
        if (tmp_args_element_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_334 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[71]);
        if (tmp_args_element_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);
            Py_DECREF(tmp_args_element_value_334);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_335 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[57]);
        if (tmp_args_element_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);
            Py_DECREF(tmp_args_element_value_334);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);
            Py_DECREF(tmp_args_element_value_334);
            Py_DECREF(tmp_args_element_value_335);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_336 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[69]);
        if (tmp_args_element_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);
            Py_DECREF(tmp_args_element_value_334);
            Py_DECREF(tmp_args_element_value_335);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_244 == NULL)) {
            tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);
            Py_DECREF(tmp_args_element_value_334);
            Py_DECREF(tmp_args_element_value_335);
            Py_DECREF(tmp_args_element_value_336);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_337 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[75]);
        if (tmp_args_element_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_155);
            Py_DECREF(tmp_args_element_value_333);
            Py_DECREF(tmp_args_element_value_334);
            Py_DECREF(tmp_args_element_value_335);
            Py_DECREF(tmp_args_element_value_336);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_332, tmp_args_element_value_333, tmp_args_element_value_334, tmp_args_element_value_335, tmp_args_element_value_336, tmp_args_element_value_337};
            tmp_called_value_154 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_155, call_args);
        }

        Py_DECREF(tmp_called_value_155);
        Py_DECREF(tmp_args_element_value_333);
        Py_DECREF(tmp_args_element_value_334);
        Py_DECREF(tmp_args_element_value_335);
        Py_DECREF(tmp_args_element_value_336);
        Py_DECREF(tmp_args_element_value_337);
        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_338 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__49_glProgramUniformMatrix3dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 165;
        tmp_args_element_value_331 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_154, tmp_args_element_value_338);
        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_338);
        if (tmp_args_element_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 164;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_153, tmp_args_element_value_331);
        Py_DECREF(tmp_args_element_value_331);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_156;
        PyObject *tmp_args_element_value_339;
        PyObject *tmp_called_value_157;
        PyObject *tmp_called_value_158;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_args_element_value_340;
        PyObject *tmp_args_element_value_341;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_args_element_value_342;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_args_element_value_343;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_args_element_value_344;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_args_element_value_345;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_args_element_value_346;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_245 == NULL)) {
            tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_called_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[52]);
        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_340 = Py_None;
        tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_246 == NULL)) {
            tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_341 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[53]);
        if (tmp_args_element_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_247 == NULL)) {
            tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_342 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[71]);
        if (tmp_args_element_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_248 == NULL)) {
            tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);
            Py_DECREF(tmp_args_element_value_342);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_343 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[57]);
        if (tmp_args_element_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);
            Py_DECREF(tmp_args_element_value_342);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_343);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_344 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[69]);
        if (tmp_args_element_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_343);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_250 == NULL)) {
            tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_343);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_345 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[79]);
        if (tmp_args_element_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_args_element_value_341);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_343);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_340, tmp_args_element_value_341, tmp_args_element_value_342, tmp_args_element_value_343, tmp_args_element_value_344, tmp_args_element_value_345};
            tmp_called_value_157 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_158, call_args);
        }

        Py_DECREF(tmp_called_value_158);
        Py_DECREF(tmp_args_element_value_341);
        Py_DECREF(tmp_args_element_value_342);
        Py_DECREF(tmp_args_element_value_343);
        Py_DECREF(tmp_args_element_value_344);
        Py_DECREF(tmp_args_element_value_345);
        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_346 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__50_glProgramUniformMatrix3fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 168;
        tmp_args_element_value_339 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_157, tmp_args_element_value_346);
        Py_DECREF(tmp_called_value_157);
        Py_DECREF(tmp_args_element_value_346);
        if (tmp_args_element_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 167;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_156, tmp_args_element_value_339);
        Py_DECREF(tmp_args_element_value_339);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_159;
        PyObject *tmp_args_element_value_347;
        PyObject *tmp_called_value_160;
        PyObject *tmp_called_value_161;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_args_element_value_348;
        PyObject *tmp_args_element_value_349;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_args_element_value_350;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_args_element_value_351;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_args_element_value_352;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_args_element_value_353;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_args_element_value_354;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_251 == NULL)) {
            tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[52]);
        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_348 = Py_None;
        tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_252 == NULL)) {
            tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_349 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[53]);
        if (tmp_args_element_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_350 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[71]);
        if (tmp_args_element_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_254 == NULL)) {
            tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);
            Py_DECREF(tmp_args_element_value_350);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_351 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[57]);
        if (tmp_args_element_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);
            Py_DECREF(tmp_args_element_value_350);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_255 == NULL)) {
            tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);
            Py_DECREF(tmp_args_element_value_350);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_352 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[69]);
        if (tmp_args_element_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);
            Py_DECREF(tmp_args_element_value_350);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_256 == NULL)) {
            tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);
            Py_DECREF(tmp_args_element_value_350);
            Py_DECREF(tmp_args_element_value_351);
            Py_DECREF(tmp_args_element_value_352);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_353 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[75]);
        if (tmp_args_element_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_161);
            Py_DECREF(tmp_args_element_value_349);
            Py_DECREF(tmp_args_element_value_350);
            Py_DECREF(tmp_args_element_value_351);
            Py_DECREF(tmp_args_element_value_352);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_348, tmp_args_element_value_349, tmp_args_element_value_350, tmp_args_element_value_351, tmp_args_element_value_352, tmp_args_element_value_353};
            tmp_called_value_160 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_161, call_args);
        }

        Py_DECREF(tmp_called_value_161);
        Py_DECREF(tmp_args_element_value_349);
        Py_DECREF(tmp_args_element_value_350);
        Py_DECREF(tmp_args_element_value_351);
        Py_DECREF(tmp_args_element_value_352);
        Py_DECREF(tmp_args_element_value_353);
        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_354 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__51_glProgramUniformMatrix3x2dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 171;
        tmp_args_element_value_347 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_160, tmp_args_element_value_354);
        Py_DECREF(tmp_called_value_160);
        Py_DECREF(tmp_args_element_value_354);
        if (tmp_args_element_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 170;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_159, tmp_args_element_value_347);
        Py_DECREF(tmp_args_element_value_347);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_162;
        PyObject *tmp_args_element_value_355;
        PyObject *tmp_called_value_163;
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_args_element_value_356;
        PyObject *tmp_args_element_value_357;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_args_element_value_358;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_args_element_value_359;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_args_element_value_360;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_args_element_value_361;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_args_element_value_362;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_257 == NULL)) {
            tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[52]);
        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_356 = Py_None;
        tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_258 == NULL)) {
            tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_357 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[53]);
        if (tmp_args_element_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_259 == NULL)) {
            tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_358 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[71]);
        if (tmp_args_element_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_260 == NULL)) {
            tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);
            Py_DECREF(tmp_args_element_value_358);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_359 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[57]);
        if (tmp_args_element_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);
            Py_DECREF(tmp_args_element_value_358);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_261 == NULL)) {
            tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);
            Py_DECREF(tmp_args_element_value_358);
            Py_DECREF(tmp_args_element_value_359);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_360 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[69]);
        if (tmp_args_element_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);
            Py_DECREF(tmp_args_element_value_358);
            Py_DECREF(tmp_args_element_value_359);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_262 == NULL)) {
            tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);
            Py_DECREF(tmp_args_element_value_358);
            Py_DECREF(tmp_args_element_value_359);
            Py_DECREF(tmp_args_element_value_360);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_361 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[79]);
        if (tmp_args_element_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_357);
            Py_DECREF(tmp_args_element_value_358);
            Py_DECREF(tmp_args_element_value_359);
            Py_DECREF(tmp_args_element_value_360);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_356, tmp_args_element_value_357, tmp_args_element_value_358, tmp_args_element_value_359, tmp_args_element_value_360, tmp_args_element_value_361};
            tmp_called_value_163 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_164, call_args);
        }

        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_element_value_357);
        Py_DECREF(tmp_args_element_value_358);
        Py_DECREF(tmp_args_element_value_359);
        Py_DECREF(tmp_args_element_value_360);
        Py_DECREF(tmp_args_element_value_361);
        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_362 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__52_glProgramUniformMatrix3x2fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 174;
        tmp_args_element_value_355 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_163, tmp_args_element_value_362);
        Py_DECREF(tmp_called_value_163);
        Py_DECREF(tmp_args_element_value_362);
        if (tmp_args_element_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 173;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_162, tmp_args_element_value_355);
        Py_DECREF(tmp_args_element_value_355);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_165;
        PyObject *tmp_args_element_value_363;
        PyObject *tmp_called_value_166;
        PyObject *tmp_called_value_167;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_args_element_value_364;
        PyObject *tmp_args_element_value_365;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_args_element_value_366;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_args_element_value_367;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_args_element_value_368;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_args_element_value_369;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_args_element_value_370;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_called_value_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[52]);
        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_364 = Py_None;
        tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_264 == NULL)) {
            tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_365 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[53]);
        if (tmp_args_element_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_265 == NULL)) {
            tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_366 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[71]);
        if (tmp_args_element_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);
            Py_DECREF(tmp_args_element_value_366);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_367 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[57]);
        if (tmp_args_element_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);
            Py_DECREF(tmp_args_element_value_366);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_267 == NULL)) {
            tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);
            Py_DECREF(tmp_args_element_value_366);
            Py_DECREF(tmp_args_element_value_367);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_368 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[69]);
        if (tmp_args_element_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);
            Py_DECREF(tmp_args_element_value_366);
            Py_DECREF(tmp_args_element_value_367);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_268 == NULL)) {
            tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);
            Py_DECREF(tmp_args_element_value_366);
            Py_DECREF(tmp_args_element_value_367);
            Py_DECREF(tmp_args_element_value_368);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_369 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[75]);
        if (tmp_args_element_value_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_365);
            Py_DECREF(tmp_args_element_value_366);
            Py_DECREF(tmp_args_element_value_367);
            Py_DECREF(tmp_args_element_value_368);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_364, tmp_args_element_value_365, tmp_args_element_value_366, tmp_args_element_value_367, tmp_args_element_value_368, tmp_args_element_value_369};
            tmp_called_value_166 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_167, call_args);
        }

        Py_DECREF(tmp_called_value_167);
        Py_DECREF(tmp_args_element_value_365);
        Py_DECREF(tmp_args_element_value_366);
        Py_DECREF(tmp_args_element_value_367);
        Py_DECREF(tmp_args_element_value_368);
        Py_DECREF(tmp_args_element_value_369);
        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_370 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__53_glProgramUniformMatrix3x4dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 177;
        tmp_args_element_value_363 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_166, tmp_args_element_value_370);
        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_args_element_value_370);
        if (tmp_args_element_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 176;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_165, tmp_args_element_value_363);
        Py_DECREF(tmp_args_element_value_363);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_168;
        PyObject *tmp_args_element_value_371;
        PyObject *tmp_called_value_169;
        PyObject *tmp_called_value_170;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_args_element_value_372;
        PyObject *tmp_args_element_value_373;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_args_element_value_374;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_args_element_value_375;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_args_element_value_376;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_args_element_value_377;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_args_element_value_378;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_269 == NULL)) {
            tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_called_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[52]);
        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_372 = Py_None;
        tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_270 == NULL)) {
            tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_373 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[53]);
        if (tmp_args_element_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_271 == NULL)) {
            tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_374 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[71]);
        if (tmp_args_element_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_272 == NULL)) {
            tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);
            Py_DECREF(tmp_args_element_value_374);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_375 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[57]);
        if (tmp_args_element_value_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);
            Py_DECREF(tmp_args_element_value_374);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_273 == NULL)) {
            tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);
            Py_DECREF(tmp_args_element_value_374);
            Py_DECREF(tmp_args_element_value_375);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_376 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[69]);
        if (tmp_args_element_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);
            Py_DECREF(tmp_args_element_value_374);
            Py_DECREF(tmp_args_element_value_375);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);
            Py_DECREF(tmp_args_element_value_374);
            Py_DECREF(tmp_args_element_value_375);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_377 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[79]);
        if (tmp_args_element_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_373);
            Py_DECREF(tmp_args_element_value_374);
            Py_DECREF(tmp_args_element_value_375);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_372, tmp_args_element_value_373, tmp_args_element_value_374, tmp_args_element_value_375, tmp_args_element_value_376, tmp_args_element_value_377};
            tmp_called_value_169 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_170, call_args);
        }

        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_args_element_value_373);
        Py_DECREF(tmp_args_element_value_374);
        Py_DECREF(tmp_args_element_value_375);
        Py_DECREF(tmp_args_element_value_376);
        Py_DECREF(tmp_args_element_value_377);
        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_378 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__54_glProgramUniformMatrix3x4fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 180;
        tmp_args_element_value_371 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_169, tmp_args_element_value_378);
        Py_DECREF(tmp_called_value_169);
        Py_DECREF(tmp_args_element_value_378);
        if (tmp_args_element_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 179;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_168, tmp_args_element_value_371);
        Py_DECREF(tmp_args_element_value_371);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_element_value_379;
        PyObject *tmp_called_value_172;
        PyObject *tmp_called_value_173;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_args_element_value_380;
        PyObject *tmp_args_element_value_381;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_args_element_value_382;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_args_element_value_383;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_args_element_value_384;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_args_element_value_385;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_args_element_value_386;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_275 == NULL)) {
            tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_called_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[52]);
        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_380 = Py_None;
        tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_276 == NULL)) {
            tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_381 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[53]);
        if (tmp_args_element_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_277 == NULL)) {
            tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_382 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[71]);
        if (tmp_args_element_value_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);
            Py_DECREF(tmp_args_element_value_382);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_383 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[57]);
        if (tmp_args_element_value_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);
            Py_DECREF(tmp_args_element_value_382);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_279 == NULL)) {
            tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);
            Py_DECREF(tmp_args_element_value_382);
            Py_DECREF(tmp_args_element_value_383);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_384 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[69]);
        if (tmp_args_element_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);
            Py_DECREF(tmp_args_element_value_382);
            Py_DECREF(tmp_args_element_value_383);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_280 == NULL)) {
            tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);
            Py_DECREF(tmp_args_element_value_382);
            Py_DECREF(tmp_args_element_value_383);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_385 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[75]);
        if (tmp_args_element_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_381);
            Py_DECREF(tmp_args_element_value_382);
            Py_DECREF(tmp_args_element_value_383);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_value_380, tmp_args_element_value_381, tmp_args_element_value_382, tmp_args_element_value_383, tmp_args_element_value_384, tmp_args_element_value_385};
            tmp_called_value_172 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_173, call_args);
        }

        Py_DECREF(tmp_called_value_173);
        Py_DECREF(tmp_args_element_value_381);
        Py_DECREF(tmp_args_element_value_382);
        Py_DECREF(tmp_args_element_value_383);
        Py_DECREF(tmp_args_element_value_384);
        Py_DECREF(tmp_args_element_value_385);
        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_386 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__55_glProgramUniformMatrix4dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 183;
        tmp_args_element_value_379 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_172, tmp_args_element_value_386);
        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_args_element_value_386);
        if (tmp_args_element_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 182;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_171, tmp_args_element_value_379);
        Py_DECREF(tmp_args_element_value_379);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_174;
        PyObject *tmp_args_element_value_387;
        PyObject *tmp_called_value_175;
        PyObject *tmp_called_value_176;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_args_element_value_388;
        PyObject *tmp_args_element_value_389;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_args_element_value_390;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_args_element_value_391;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_args_element_value_392;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_args_element_value_393;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_args_element_value_394;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_281 == NULL)) {
            tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[52]);
        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_388 = Py_None;
        tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_282 == NULL)) {
            tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_389 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[53]);
        if (tmp_args_element_value_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_283 == NULL)) {
            tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_390 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[71]);
        if (tmp_args_element_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_284 == NULL)) {
            tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);
            Py_DECREF(tmp_args_element_value_390);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_391 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[57]);
        if (tmp_args_element_value_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);
            Py_DECREF(tmp_args_element_value_390);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_285 == NULL)) {
            tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);
            Py_DECREF(tmp_args_element_value_390);
            Py_DECREF(tmp_args_element_value_391);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_392 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[69]);
        if (tmp_args_element_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);
            Py_DECREF(tmp_args_element_value_390);
            Py_DECREF(tmp_args_element_value_391);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);
            Py_DECREF(tmp_args_element_value_390);
            Py_DECREF(tmp_args_element_value_391);
            Py_DECREF(tmp_args_element_value_392);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_393 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[79]);
        if (tmp_args_element_value_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_389);
            Py_DECREF(tmp_args_element_value_390);
            Py_DECREF(tmp_args_element_value_391);
            Py_DECREF(tmp_args_element_value_392);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_388, tmp_args_element_value_389, tmp_args_element_value_390, tmp_args_element_value_391, tmp_args_element_value_392, tmp_args_element_value_393};
            tmp_called_value_175 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_176, call_args);
        }

        Py_DECREF(tmp_called_value_176);
        Py_DECREF(tmp_args_element_value_389);
        Py_DECREF(tmp_args_element_value_390);
        Py_DECREF(tmp_args_element_value_391);
        Py_DECREF(tmp_args_element_value_392);
        Py_DECREF(tmp_args_element_value_393);
        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_394 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__56_glProgramUniformMatrix4fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 186;
        tmp_args_element_value_387 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_175, tmp_args_element_value_394);
        Py_DECREF(tmp_called_value_175);
        Py_DECREF(tmp_args_element_value_394);
        if (tmp_args_element_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 185;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_174, tmp_args_element_value_387);
        Py_DECREF(tmp_args_element_value_387);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_177;
        PyObject *tmp_args_element_value_395;
        PyObject *tmp_called_value_178;
        PyObject *tmp_called_value_179;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_args_element_value_396;
        PyObject *tmp_args_element_value_397;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_args_element_value_398;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_args_element_value_399;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_args_element_value_400;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_args_element_value_401;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_args_element_value_402;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_287 == NULL)) {
            tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_called_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[52]);
        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_396 = Py_None;
        tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_288 == NULL)) {
            tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_397 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[53]);
        if (tmp_args_element_value_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_398 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[71]);
        if (tmp_args_element_value_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_290 == NULL)) {
            tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);
            Py_DECREF(tmp_args_element_value_398);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_399 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[57]);
        if (tmp_args_element_value_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);
            Py_DECREF(tmp_args_element_value_398);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_291 == NULL)) {
            tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);
            Py_DECREF(tmp_args_element_value_398);
            Py_DECREF(tmp_args_element_value_399);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_400 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[69]);
        if (tmp_args_element_value_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);
            Py_DECREF(tmp_args_element_value_398);
            Py_DECREF(tmp_args_element_value_399);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_292 == NULL)) {
            tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);
            Py_DECREF(tmp_args_element_value_398);
            Py_DECREF(tmp_args_element_value_399);
            Py_DECREF(tmp_args_element_value_400);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_401 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[75]);
        if (tmp_args_element_value_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_397);
            Py_DECREF(tmp_args_element_value_398);
            Py_DECREF(tmp_args_element_value_399);
            Py_DECREF(tmp_args_element_value_400);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_396, tmp_args_element_value_397, tmp_args_element_value_398, tmp_args_element_value_399, tmp_args_element_value_400, tmp_args_element_value_401};
            tmp_called_value_178 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_179, call_args);
        }

        Py_DECREF(tmp_called_value_179);
        Py_DECREF(tmp_args_element_value_397);
        Py_DECREF(tmp_args_element_value_398);
        Py_DECREF(tmp_args_element_value_399);
        Py_DECREF(tmp_args_element_value_400);
        Py_DECREF(tmp_args_element_value_401);
        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_402 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__57_glProgramUniformMatrix4x2dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 189;
        tmp_args_element_value_395 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_178, tmp_args_element_value_402);
        Py_DECREF(tmp_called_value_178);
        Py_DECREF(tmp_args_element_value_402);
        if (tmp_args_element_value_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 188;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_177, tmp_args_element_value_395);
        Py_DECREF(tmp_args_element_value_395);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_180;
        PyObject *tmp_args_element_value_403;
        PyObject *tmp_called_value_181;
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_args_element_value_404;
        PyObject *tmp_args_element_value_405;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_args_element_value_406;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_args_element_value_407;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_args_element_value_408;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_args_element_value_409;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_args_element_value_410;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[52]);
        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_404 = Py_None;
        tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_294 == NULL)) {
            tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_405 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[53]);
        if (tmp_args_element_value_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_295 == NULL)) {
            tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_406 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[71]);
        if (tmp_args_element_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_296 == NULL)) {
            tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);
            Py_DECREF(tmp_args_element_value_406);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_407 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[57]);
        if (tmp_args_element_value_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);
            Py_DECREF(tmp_args_element_value_406);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_408 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[69]);
        if (tmp_args_element_value_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);
            Py_DECREF(tmp_args_element_value_408);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_409 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[79]);
        if (tmp_args_element_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_405);
            Py_DECREF(tmp_args_element_value_406);
            Py_DECREF(tmp_args_element_value_407);
            Py_DECREF(tmp_args_element_value_408);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_404, tmp_args_element_value_405, tmp_args_element_value_406, tmp_args_element_value_407, tmp_args_element_value_408, tmp_args_element_value_409};
            tmp_called_value_181 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_182, call_args);
        }

        Py_DECREF(tmp_called_value_182);
        Py_DECREF(tmp_args_element_value_405);
        Py_DECREF(tmp_args_element_value_406);
        Py_DECREF(tmp_args_element_value_407);
        Py_DECREF(tmp_args_element_value_408);
        Py_DECREF(tmp_args_element_value_409);
        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_410 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__58_glProgramUniformMatrix4x2fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 192;
        tmp_args_element_value_403 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_181, tmp_args_element_value_410);
        Py_DECREF(tmp_called_value_181);
        Py_DECREF(tmp_args_element_value_410);
        if (tmp_args_element_value_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 191;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_180, tmp_args_element_value_403);
        Py_DECREF(tmp_args_element_value_403);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_183;
        PyObject *tmp_args_element_value_411;
        PyObject *tmp_called_value_184;
        PyObject *tmp_called_value_185;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_args_element_value_412;
        PyObject *tmp_args_element_value_413;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_args_element_value_414;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_args_element_value_415;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_args_element_value_416;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_args_element_value_417;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_args_element_value_418;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_299 == NULL)) {
            tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[52]);
        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_412 = Py_None;
        tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_300 == NULL)) {
            tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_413 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[53]);
        if (tmp_args_element_value_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_414 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[71]);
        if (tmp_args_element_value_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);
            Py_DECREF(tmp_args_element_value_414);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_415 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[57]);
        if (tmp_args_element_value_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);
            Py_DECREF(tmp_args_element_value_414);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);
            Py_DECREF(tmp_args_element_value_414);
            Py_DECREF(tmp_args_element_value_415);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_416 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[69]);
        if (tmp_args_element_value_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);
            Py_DECREF(tmp_args_element_value_414);
            Py_DECREF(tmp_args_element_value_415);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_304 == NULL)) {
            tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);
            Py_DECREF(tmp_args_element_value_414);
            Py_DECREF(tmp_args_element_value_415);
            Py_DECREF(tmp_args_element_value_416);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_417 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[75]);
        if (tmp_args_element_value_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_413);
            Py_DECREF(tmp_args_element_value_414);
            Py_DECREF(tmp_args_element_value_415);
            Py_DECREF(tmp_args_element_value_416);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_412, tmp_args_element_value_413, tmp_args_element_value_414, tmp_args_element_value_415, tmp_args_element_value_416, tmp_args_element_value_417};
            tmp_called_value_184 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_185, call_args);
        }

        Py_DECREF(tmp_called_value_185);
        Py_DECREF(tmp_args_element_value_413);
        Py_DECREF(tmp_args_element_value_414);
        Py_DECREF(tmp_args_element_value_415);
        Py_DECREF(tmp_args_element_value_416);
        Py_DECREF(tmp_args_element_value_417);
        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_418 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__59_glProgramUniformMatrix4x3dv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 195;
        tmp_args_element_value_411 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_184, tmp_args_element_value_418);
        Py_DECREF(tmp_called_value_184);
        Py_DECREF(tmp_args_element_value_418);
        if (tmp_args_element_value_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 194;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_183, tmp_args_element_value_411);
        Py_DECREF(tmp_args_element_value_411);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_186;
        PyObject *tmp_args_element_value_419;
        PyObject *tmp_called_value_187;
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_args_element_value_420;
        PyObject *tmp_args_element_value_421;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_args_element_value_422;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_args_element_value_423;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_args_element_value_424;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_args_element_value_425;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_args_element_value_426;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[52]);
        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_420 = Py_None;
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_421 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[53]);
        if (tmp_args_element_value_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_307 == NULL)) {
            tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_422 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[71]);
        if (tmp_args_element_value_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_308 == NULL)) {
            tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);
            Py_DECREF(tmp_args_element_value_422);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_423 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[57]);
        if (tmp_args_element_value_423 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);
            Py_DECREF(tmp_args_element_value_422);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_309 == NULL)) {
            tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);
            Py_DECREF(tmp_args_element_value_422);
            Py_DECREF(tmp_args_element_value_423);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_424 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[69]);
        if (tmp_args_element_value_424 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);
            Py_DECREF(tmp_args_element_value_422);
            Py_DECREF(tmp_args_element_value_423);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_310 == NULL)) {
            tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);
            Py_DECREF(tmp_args_element_value_422);
            Py_DECREF(tmp_args_element_value_423);
            Py_DECREF(tmp_args_element_value_424);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_425 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[79]);
        if (tmp_args_element_value_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_421);
            Py_DECREF(tmp_args_element_value_422);
            Py_DECREF(tmp_args_element_value_423);
            Py_DECREF(tmp_args_element_value_424);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_420, tmp_args_element_value_421, tmp_args_element_value_422, tmp_args_element_value_423, tmp_args_element_value_424, tmp_args_element_value_425};
            tmp_called_value_187 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_188, call_args);
        }

        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_args_element_value_421);
        Py_DECREF(tmp_args_element_value_422);
        Py_DECREF(tmp_args_element_value_423);
        Py_DECREF(tmp_args_element_value_424);
        Py_DECREF(tmp_args_element_value_425);
        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_426 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__60_glProgramUniformMatrix4x3fv();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 198;
        tmp_args_element_value_419 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_187, tmp_args_element_value_426);
        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_args_element_value_426);
        if (tmp_args_element_value_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 197;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_186, tmp_args_element_value_419);
        Py_DECREF(tmp_args_element_value_419);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_189;
        PyObject *tmp_args_element_value_427;
        PyObject *tmp_called_value_190;
        PyObject *tmp_called_value_191;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_args_element_value_428;
        PyObject *tmp_args_element_value_429;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_args_element_value_430;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_args_element_value_431;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_args_element_value_432;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_311 == NULL)) {
            tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[52]);
        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_428 = Py_None;
        tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_312 == NULL)) {
            tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_429 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[53]);
        if (tmp_args_element_value_429 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_313 == NULL)) {
            tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_429);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_430 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[127]);
        if (tmp_args_element_value_430 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_429);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_314 == NULL)) {
            tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_429);
            Py_DECREF(tmp_args_element_value_430);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_431 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[53]);
        if (tmp_args_element_value_431 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_429);
            Py_DECREF(tmp_args_element_value_430);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_428, tmp_args_element_value_429, tmp_args_element_value_430, tmp_args_element_value_431};
            tmp_called_value_190 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_191, call_args);
        }

        Py_DECREF(tmp_called_value_191);
        Py_DECREF(tmp_args_element_value_429);
        Py_DECREF(tmp_args_element_value_430);
        Py_DECREF(tmp_args_element_value_431);
        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_432 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__61_glUseProgramStages();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 201;
        tmp_args_element_value_427 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_190, tmp_args_element_value_432);
        Py_DECREF(tmp_called_value_190);
        Py_DECREF(tmp_args_element_value_432);
        if (tmp_args_element_value_427 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 200;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_189, tmp_args_element_value_427);
        Py_DECREF(tmp_args_element_value_427);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_192;
        PyObject *tmp_args_element_value_433;
        PyObject *tmp_called_value_193;
        PyObject *tmp_called_value_194;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_args_element_value_434;
        PyObject *tmp_args_element_value_435;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_args_element_value_436;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_315 == NULL)) {
            tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[52]);
        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_434 = Py_None;
        tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_316 == NULL)) {
            tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_435 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[53]);
        if (tmp_args_element_value_435 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_434, tmp_args_element_value_435};
            tmp_called_value_193 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_194, call_args);
        }

        Py_DECREF(tmp_called_value_194);
        Py_DECREF(tmp_args_element_value_435);
        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_436 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$separate_shader_objects$$$function__62_glValidateProgramPipeline();

        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 204;
        tmp_args_element_value_433 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_193, tmp_args_element_value_436);
        Py_DECREF(tmp_called_value_193);
        Py_DECREF(tmp_args_element_value_436);
        if (tmp_args_element_value_433 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_f93463b27ae2cc3349887c6b879d1ada->m_frame.f_lineno = 203;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_192, tmp_args_element_value_433);
        Py_DECREF(tmp_args_element_value_433);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_82);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f93463b27ae2cc3349887c6b879d1ada);
#endif
    popFrameStack();

    assertFrameObject(frame_f93463b27ae2cc3349887c6b879d1ada);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f93463b27ae2cc3349887c6b879d1ada);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f93463b27ae2cc3349887c6b879d1ada, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f93463b27ae2cc3349887c6b879d1ada->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f93463b27ae2cc3349887c6b879d1ada, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GL.ARB.separate_shader_objects", false);

    return module_OpenGL$raw$GL$ARB$separate_shader_objects;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$separate_shader_objects, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GL$ARB$separate_shader_objects", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
