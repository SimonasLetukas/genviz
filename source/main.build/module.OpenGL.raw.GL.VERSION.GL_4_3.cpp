/* Generated code for Python module 'OpenGL.raw.GL.VERSION.GL_4_3'
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

/* The "module_OpenGL$raw$GL$VERSION$GL_4_3" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GL$VERSION$GL_4_3;
PyDictObject *moduledict_OpenGL$raw$GL$VERSION$GL_4_3;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[663];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[663];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GL.VERSION.GL_4_3"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 663; i++) {
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
void checkModuleConstants_OpenGL$raw$GL$VERSION$GL_4_3(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 663; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9c6214796bc2dd83a42a9279097e1b23;
static PyCodeObject *codeobj_ddaf0227a32331b48ac3faea4c1c3dc0;
static PyCodeObject *codeobj_e91fea6c72c4ee0d396414162c06c950;
static PyCodeObject *codeobj_f4dfde893f2347dddd6bba4b8b06aeb4;
static PyCodeObject *codeobj_27637f7931072f38db75bccf6e54bd03;
static PyCodeObject *codeobj_6d6fdcca3ba7fd7e00fa98bacf357b7e;
static PyCodeObject *codeobj_a2e130f6e4e9e61e9db2dbafbcd4eb20;
static PyCodeObject *codeobj_3fafe08920a5069a0bd35501274cfe6a;
static PyCodeObject *codeobj_bc25fa8e25f1cefc779e13f3add6a0ec;
static PyCodeObject *codeobj_c5a9cc0453ce3d9548597dd7e2b79af9;
static PyCodeObject *codeobj_baa0918582876f457ddcfe6e5bb697a9;
static PyCodeObject *codeobj_427ddeb184dd68ac0b5f2dbf758da9a3;
static PyCodeObject *codeobj_e758ab119fe3b78b7270114fd8ae0e90;
static PyCodeObject *codeobj_22d576c989cb87dc78e6c191defc6f94;
static PyCodeObject *codeobj_8d92b961b2dcb10a011d23c9bb620034;
static PyCodeObject *codeobj_4b72c2d64e659645ba8e854046a19545;
static PyCodeObject *codeobj_537555eea2b0a0be2502802feaffe04b;
static PyCodeObject *codeobj_b922e0c9d47f5f061f3dea38d9337b4d;
static PyCodeObject *codeobj_85cc60c70ec5005ee59b303562d0d459;
static PyCodeObject *codeobj_1317169c37ffc55c24191dcd1890aa53;
static PyCodeObject *codeobj_17986ee6ec09958bcbd4ed7d26cce110;
static PyCodeObject *codeobj_fc2af17de48135908a287f0a054f2979;
static PyCodeObject *codeobj_2414bf4bead37408efb85d038efde546;
static PyCodeObject *codeobj_42166324d6d2ac1f3e18c61f5edbd199;
static PyCodeObject *codeobj_756c0d0286cbc64676f9eac851ef834e;
static PyCodeObject *codeobj_3c04fa4224d4ff4d1df5460becbc38d0;
static PyCodeObject *codeobj_d9f1a7730bed59941d137ff478cbe05f;
static PyCodeObject *codeobj_535ef215fa60288cef22a17879173437;
static PyCodeObject *codeobj_e4f772eb9cfb29bedbf9c691e3f762e1;
static PyCodeObject *codeobj_015e051c8ee902053b9e76c0df422941;
static PyCodeObject *codeobj_17b8da59ce5c325a1ecaf7b21d8612ac;
static PyCodeObject *codeobj_cee3f8f53cb170706c1417ca66a8b85c;
static PyCodeObject *codeobj_88983abeba03271b6fb0c36b01ed4c12;
static PyCodeObject *codeobj_48f48204a1e5c82f2e51dac1b3b08a29;
static PyCodeObject *codeobj_d2fcfe88a759ab91ab7abf85f5f50184;
static PyCodeObject *codeobj_de5a1f7dcd96211f7b19eafa0ed921a2;
static PyCodeObject *codeobj_afa58517333b1ba1c6bd4ef4f55a4cad;
static PyCodeObject *codeobj_d71b4b6699a14e152b31b16cd855de7a;
static PyCodeObject *codeobj_ec40c4a6ca5e8fa314955fd8fa146ef8;
static PyCodeObject *codeobj_014405485336c4eb8eb55fcbc0713e55;
static PyCodeObject *codeobj_b09b7981db3de9d5dcd3b6bcb7f17030;
static PyCodeObject *codeobj_ba9b74195f1571923ddf50fc2e432984;
static PyCodeObject *codeobj_27461ae1b0ad35d6da2e51f218d4318c;
static PyCodeObject *codeobj_ec3f73a55e25db13523ba23b5d67f024;
static PyCodeObject *codeobj_438217f4168c95aeed9c1f7ee388c0fd;
static PyCodeObject *codeobj_d4c7db5c0e202ac72108ae02fee23868;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[619]); CHECK_OBJECT(module_filename_obj);
    codeobj_9c6214796bc2dd83a42a9279097e1b23 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[620], NULL, NULL, 0, 0, 0);
    codeobj_ddaf0227a32331b48ac3faea4c1c3dc0 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[621], NULL, 1, 0, 0);
    codeobj_e91fea6c72c4ee0d396414162c06c950 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_NOFREE, mod_consts[562], mod_consts[622], NULL, 4, 0, 0);
    codeobj_f4dfde893f2347dddd6bba4b8b06aeb4 = MAKE_CODEOBJECT(module_filename_obj, 281, CO_NOFREE, mod_consts[565], mod_consts[623], NULL, 5, 0, 0);
    codeobj_27637f7931072f38db75bccf6e54bd03 = MAKE_CODEOBJECT(module_filename_obj, 284, CO_NOFREE, mod_consts[567], mod_consts[624], NULL, 7, 0, 0);
    codeobj_6d6fdcca3ba7fd7e00fa98bacf357b7e = MAKE_CODEOBJECT(module_filename_obj, 287, CO_NOFREE, mod_consts[569], mod_consts[625], NULL, 15, 0, 0);
    codeobj_a2e130f6e4e9e61e9db2dbafbcd4eb20 = MAKE_CODEOBJECT(module_filename_obj, 290, CO_NOFREE, mod_consts[571], mod_consts[626], NULL, 2, 0, 0);
    codeobj_3fafe08920a5069a0bd35501274cfe6a = MAKE_CODEOBJECT(module_filename_obj, 293, CO_NOFREE, mod_consts[574], mod_consts[627], NULL, 6, 0, 0);
    codeobj_bc25fa8e25f1cefc779e13f3add6a0ec = MAKE_CODEOBJECT(module_filename_obj, 296, CO_NOFREE, mod_consts[576], mod_consts[628], NULL, 6, 0, 0);
    codeobj_c5a9cc0453ce3d9548597dd7e2b79af9 = MAKE_CODEOBJECT(module_filename_obj, 299, CO_NOFREE, mod_consts[577], mod_consts[629], NULL, 3, 0, 0);
    codeobj_baa0918582876f457ddcfe6e5bb697a9 = MAKE_CODEOBJECT(module_filename_obj, 302, CO_NOFREE, mod_consts[578], mod_consts[630], NULL, 1, 0, 0);
    codeobj_427ddeb184dd68ac0b5f2dbf758da9a3 = MAKE_CODEOBJECT(module_filename_obj, 305, CO_NOFREE, mod_consts[579], mod_consts[631], NULL, 3, 0, 0);
    codeobj_e758ab119fe3b78b7270114fd8ae0e90 = MAKE_CODEOBJECT(module_filename_obj, 308, CO_NOFREE, mod_consts[581], mod_consts[632], NULL, 8, 0, 0);
    codeobj_22d576c989cb87dc78e6c191defc6f94 = MAKE_CODEOBJECT(module_filename_obj, 311, CO_NOFREE, mod_consts[583], mod_consts[633], NULL, 3, 0, 0);
    codeobj_8d92b961b2dcb10a011d23c9bb620034 = MAKE_CODEOBJECT(module_filename_obj, 314, CO_NOFREE, mod_consts[585], mod_consts[634], NULL, 5, 0, 0);
    codeobj_4b72c2d64e659645ba8e854046a19545 = MAKE_CODEOBJECT(module_filename_obj, 317, CO_NOFREE, mod_consts[586], mod_consts[635], NULL, 5, 0, 0);
    codeobj_537555eea2b0a0be2502802feaffe04b = MAKE_CODEOBJECT(module_filename_obj, 320, CO_NOFREE, mod_consts[587], mod_consts[636], NULL, 4, 0, 0);
    codeobj_b922e0c9d47f5f061f3dea38d9337b4d = MAKE_CODEOBJECT(module_filename_obj, 323, CO_NOFREE, mod_consts[589], mod_consts[637], NULL, 2, 0, 0);
    codeobj_85cc60c70ec5005ee59b303562d0d459 = MAKE_CODEOBJECT(module_filename_obj, 326, CO_NOFREE, mod_consts[590], mod_consts[638], NULL, 4, 0, 0);
    codeobj_1317169c37ffc55c24191dcd1890aa53 = MAKE_CODEOBJECT(module_filename_obj, 329, CO_NOFREE, mod_consts[591], mod_consts[639], NULL, 3, 0, 0);
    codeobj_17986ee6ec09958bcbd4ed7d26cce110 = MAKE_CODEOBJECT(module_filename_obj, 332, CO_NOFREE, mod_consts[592], mod_consts[639], NULL, 3, 0, 0);
    codeobj_fc2af17de48135908a287f0a054f2979 = MAKE_CODEOBJECT(module_filename_obj, 335, CO_NOFREE, mod_consts[593], mod_consts[639], NULL, 3, 0, 0);
    codeobj_2414bf4bead37408efb85d038efde546 = MAKE_CODEOBJECT(module_filename_obj, 338, CO_NOFREE, mod_consts[594], mod_consts[640], NULL, 6, 0, 0);
    codeobj_42166324d6d2ac1f3e18c61f5edbd199 = MAKE_CODEOBJECT(module_filename_obj, 341, CO_NOFREE, mod_consts[595], mod_consts[641], NULL, 8, 0, 0);
    codeobj_756c0d0286cbc64676f9eac851ef834e = MAKE_CODEOBJECT(module_filename_obj, 344, CO_NOFREE, mod_consts[596], mod_consts[642], NULL, 1, 0, 0);
    codeobj_3c04fa4224d4ff4d1df5460becbc38d0 = MAKE_CODEOBJECT(module_filename_obj, 347, CO_NOFREE, mod_consts[597], mod_consts[643], NULL, 3, 0, 0);
    codeobj_d9f1a7730bed59941d137ff478cbe05f = MAKE_CODEOBJECT(module_filename_obj, 350, CO_NOFREE, mod_consts[598], mod_consts[644], NULL, 3, 0, 0);
    codeobj_535ef215fa60288cef22a17879173437 = MAKE_CODEOBJECT(module_filename_obj, 353, CO_NOFREE, mod_consts[599], mod_consts[645], NULL, 7, 0, 0);
    codeobj_e4f772eb9cfb29bedbf9c691e3f762e1 = MAKE_CODEOBJECT(module_filename_obj, 356, CO_NOFREE, mod_consts[600], mod_consts[646], NULL, 2, 0, 0);
    codeobj_015e051c8ee902053b9e76c0df422941 = MAKE_CODEOBJECT(module_filename_obj, 359, CO_NOFREE, mod_consts[601], mod_consts[647], NULL, 8, 0, 0);
    codeobj_17b8da59ce5c325a1ecaf7b21d8612ac = MAKE_CODEOBJECT(module_filename_obj, 362, CO_NOFREE, mod_consts[602], mod_consts[648], NULL, 4, 0, 0);
    codeobj_cee3f8f53cb170706c1417ca66a8b85c = MAKE_CODEOBJECT(module_filename_obj, 365, CO_NOFREE, mod_consts[603], mod_consts[649], NULL, 5, 0, 0);
    codeobj_88983abeba03271b6fb0c36b01ed4c12 = MAKE_CODEOBJECT(module_filename_obj, 368, CO_NOFREE, mod_consts[604], mod_consts[650], NULL, 4, 0, 0);
    codeobj_48f48204a1e5c82f2e51dac1b3b08a29 = MAKE_CODEOBJECT(module_filename_obj, 371, CO_NOFREE, mod_consts[605], mod_consts[651], NULL, 3, 0, 0);
    codeobj_d2fcfe88a759ab91ab7abf85f5f50184 = MAKE_CODEOBJECT(module_filename_obj, 374, CO_NOFREE, mod_consts[607], NULL, NULL, 0, 0, 0);
    codeobj_de5a1f7dcd96211f7b19eafa0ed921a2 = MAKE_CODEOBJECT(module_filename_obj, 377, CO_NOFREE, mod_consts[608], mod_consts[652], NULL, 4, 0, 0);
    codeobj_afa58517333b1ba1c6bd4ef4f55a4cad = MAKE_CODEOBJECT(module_filename_obj, 380, CO_NOFREE, mod_consts[609], mod_consts[653], NULL, 3, 0, 0);
    codeobj_d71b4b6699a14e152b31b16cd855de7a = MAKE_CODEOBJECT(module_filename_obj, 383, CO_NOFREE, mod_consts[610], mod_consts[654], NULL, 5, 0, 0);
    codeobj_ec40c4a6ca5e8fa314955fd8fa146ef8 = MAKE_CODEOBJECT(module_filename_obj, 386, CO_NOFREE, mod_consts[611], mod_consts[655], NULL, 6, 0, 0);
    codeobj_014405485336c4eb8eb55fcbc0713e55 = MAKE_CODEOBJECT(module_filename_obj, 389, CO_NOFREE, mod_consts[612], mod_consts[656], NULL, 7, 0, 0);
    codeobj_b09b7981db3de9d5dcd3b6bcb7f17030 = MAKE_CODEOBJECT(module_filename_obj, 392, CO_NOFREE, mod_consts[613], mod_consts[657], NULL, 8, 0, 0);
    codeobj_ba9b74195f1571923ddf50fc2e432984 = MAKE_CODEOBJECT(module_filename_obj, 395, CO_NOFREE, mod_consts[614], mod_consts[658], NULL, 2, 0, 0);
    codeobj_27461ae1b0ad35d6da2e51f218d4318c = MAKE_CODEOBJECT(module_filename_obj, 398, CO_NOFREE, mod_consts[615], mod_consts[659], NULL, 5, 0, 0);
    codeobj_ec3f73a55e25db13523ba23b5d67f024 = MAKE_CODEOBJECT(module_filename_obj, 401, CO_NOFREE, mod_consts[616], mod_consts[660], NULL, 4, 0, 0);
    codeobj_438217f4168c95aeed9c1f7ee388c0fd = MAKE_CODEOBJECT(module_filename_obj, 404, CO_NOFREE, mod_consts[617], mod_consts[660], NULL, 4, 0, 0);
    codeobj_d4c7db5c0e202ac72108ae02fee23868 = MAKE_CODEOBJECT(module_filename_obj, 407, CO_NOFREE, mod_consts[618], mod_consts[661], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__10_glDispatchComputeIndirect();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__11_glFramebufferParameteri();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__12_glGetDebugMessageLog();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__13_glGetFramebufferParameteriv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__14_glGetInternalformati64v();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__15_glGetObjectLabel();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__16_glGetObjectPtrLabel();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__17_glGetPointerv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__18_glGetProgramInterfaceiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__19_glGetProgramResourceIndex();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__1__f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__20_glGetProgramResourceLocation();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__21_glGetProgramResourceLocationIndex();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__22_glGetProgramResourceName();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__23_glGetProgramResourceiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__24_glInvalidateBufferData();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__25_glInvalidateBufferSubData();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__26_glInvalidateFramebuffer();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__27_glInvalidateSubFramebuffer();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__28_glInvalidateTexImage();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__29_glInvalidateTexSubImage();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__2_glBindVertexBuffer();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__30_glMultiDrawArraysIndirect();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__31_glMultiDrawElementsIndirect();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__32_glObjectLabel();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__33_glObjectPtrLabel();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__34_glPopDebugGroup();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__35_glPushDebugGroup();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__36_glShaderStorageBlockBinding();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__37_glTexBufferRange();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__38_glTexStorage2DMultisample();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__39_glTexStorage3DMultisample();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__3_glClearBufferData();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__40_glTextureView();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__41_glVertexAttribBinding();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__42_glVertexAttribFormat();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__43_glVertexAttribIFormat();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__44_glVertexAttribLFormat();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__45_glVertexBindingDivisor();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__4_glClearBufferSubData();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__5_glCopyImageSubData();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__6_glDebugMessageCallback();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__7_glDebugMessageControl();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__8_glDebugMessageInsert();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__9_glDispatchCompute();


// The module function definitions.
static PyObject *impl_OpenGL$raw$GL$VERSION$GL_4_3$$$function__1__f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[0];
    struct Nuitka_FrameObject *frame_ddaf0227a32331b48ac3faea4c1c3dc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0)) {
        Py_XDECREF(cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0 = MAKE_FUNCTION_FRAME(codeobj_ddaf0227a32331b48ac3faea4c1c3dc0, module_OpenGL$raw$GL$VERSION$GL_4_3, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0->m_type_description == NULL);
    frame_ddaf0227a32331b48ac3faea4c1c3dc0 = cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ddaf0227a32331b48ac3faea4c1c3dc0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ddaf0227a32331b48ac3faea4c1c3dc0) == 2); // Frame stack

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[5]);

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
        frame_ddaf0227a32331b48ac3faea4c1c3dc0->m_frame.f_lineno = 13;
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
    RESTORE_FRAME_EXCEPTION(frame_ddaf0227a32331b48ac3faea4c1c3dc0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddaf0227a32331b48ac3faea4c1c3dc0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddaf0227a32331b48ac3faea4c1c3dc0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ddaf0227a32331b48ac3faea4c1c3dc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ddaf0227a32331b48ac3faea4c1c3dc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddaf0227a32331b48ac3faea4c1c3dc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ddaf0227a32331b48ac3faea4c1c3dc0,
        type_description_1,
        par_function
    );


    // Release cached frame if used for exception.
    if (frame_ddaf0227a32331b48ac3faea4c1c3dc0 == cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0);
        cache_frame_ddaf0227a32331b48ac3faea4c1c3dc0 = NULL;
    }

    assertFrameObject(frame_ddaf0227a32331b48ac3faea4c1c3dc0);

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



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__10_glDispatchComputeIndirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[578],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_baa0918582876f457ddcfe6e5bb697a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__11_glFramebufferParameteri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[579],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_427ddeb184dd68ac0b5f2dbf758da9a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__12_glGetDebugMessageLog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[581],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e758ab119fe3b78b7270114fd8ae0e90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__13_glGetFramebufferParameteriv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[583],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22d576c989cb87dc78e6c191defc6f94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__14_glGetInternalformati64v() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[585],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8d92b961b2dcb10a011d23c9bb620034,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__15_glGetObjectLabel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[586],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b72c2d64e659645ba8e854046a19545,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__16_glGetObjectPtrLabel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[587],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_537555eea2b0a0be2502802feaffe04b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__17_glGetPointerv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[589],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b922e0c9d47f5f061f3dea38d9337b4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__18_glGetProgramInterfaceiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[590],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_85cc60c70ec5005ee59b303562d0d459,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__19_glGetProgramResourceIndex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[591],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1317169c37ffc55c24191dcd1890aa53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__1__f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenGL$raw$GL$VERSION$GL_4_3$$$function__1__f,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ddaf0227a32331b48ac3faea4c1c3dc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__20_glGetProgramResourceLocation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[592],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_17986ee6ec09958bcbd4ed7d26cce110,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__21_glGetProgramResourceLocationIndex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[593],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc2af17de48135908a287f0a054f2979,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__22_glGetProgramResourceName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[594],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2414bf4bead37408efb85d038efde546,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__23_glGetProgramResourceiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[595],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_42166324d6d2ac1f3e18c61f5edbd199,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__24_glInvalidateBufferData() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[596],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_756c0d0286cbc64676f9eac851ef834e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__25_glInvalidateBufferSubData() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[597],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c04fa4224d4ff4d1df5460becbc38d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__26_glInvalidateFramebuffer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[598],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9f1a7730bed59941d137ff478cbe05f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__27_glInvalidateSubFramebuffer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[599],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_535ef215fa60288cef22a17879173437,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__28_glInvalidateTexImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[600],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e4f772eb9cfb29bedbf9c691e3f762e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__29_glInvalidateTexSubImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[601],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_015e051c8ee902053b9e76c0df422941,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__2_glBindVertexBuffer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[562],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e91fea6c72c4ee0d396414162c06c950,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__30_glMultiDrawArraysIndirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[602],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_17b8da59ce5c325a1ecaf7b21d8612ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__31_glMultiDrawElementsIndirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[603],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cee3f8f53cb170706c1417ca66a8b85c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__32_glObjectLabel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[604],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88983abeba03271b6fb0c36b01ed4c12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__33_glObjectPtrLabel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[605],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_48f48204a1e5c82f2e51dac1b3b08a29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__34_glPopDebugGroup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[607],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2fcfe88a759ab91ab7abf85f5f50184,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__35_glPushDebugGroup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[608],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de5a1f7dcd96211f7b19eafa0ed921a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__36_glShaderStorageBlockBinding() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[609],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_afa58517333b1ba1c6bd4ef4f55a4cad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__37_glTexBufferRange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[610],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d71b4b6699a14e152b31b16cd855de7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__38_glTexStorage2DMultisample() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[611],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec40c4a6ca5e8fa314955fd8fa146ef8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__39_glTexStorage3DMultisample() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[612],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_014405485336c4eb8eb55fcbc0713e55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__3_glClearBufferData() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[565],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4dfde893f2347dddd6bba4b8b06aeb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__40_glTextureView() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[613],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b09b7981db3de9d5dcd3b6bcb7f17030,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__41_glVertexAttribBinding() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[614],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba9b74195f1571923ddf50fc2e432984,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__42_glVertexAttribFormat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[615],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_27461ae1b0ad35d6da2e51f218d4318c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__43_glVertexAttribIFormat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[616],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec3f73a55e25db13523ba23b5d67f024,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__44_glVertexAttribLFormat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[617],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_438217f4168c95aeed9c1f7ee388c0fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__45_glVertexBindingDivisor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[618],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4c7db5c0e202ac72108ae02fee23868,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__4_glClearBufferSubData() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[567],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_27637f7931072f38db75bccf6e54bd03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__5_glCopyImageSubData() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[569],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d6fdcca3ba7fd7e00fa98bacf357b7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__6_glDebugMessageCallback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[571],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a2e130f6e4e9e61e9db2dbafbcd4eb20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__7_glDebugMessageControl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[574],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3fafe08920a5069a0bd35501274cfe6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__8_glDebugMessageInsert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[576],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc25fa8e25f1cefc779e13f3add6a0ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__9_glDispatchCompute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[577],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5a9cc0453ce3d9548597dd7e2b79af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_3,
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

function_impl_code functable_OpenGL$raw$GL$VERSION$GL_4_3[] = {
    impl_OpenGL$raw$GL$VERSION$GL_4_3$$$function__1__f,
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

    function_impl_code *current = functable_OpenGL$raw$GL$VERSION$GL_4_3;
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

    if (offset > sizeof(functable_OpenGL$raw$GL$VERSION$GL_4_3) || offset < 0) {
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
        functable_OpenGL$raw$GL$VERSION$GL_4_3[offset],
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
        module_OpenGL$raw$GL$VERSION$GL_4_3,
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
PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_3(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GL.VERSION.GL_4_3");

    // Store the module for future use.
    module_OpenGL$raw$GL$VERSION$GL_4_3 = module;

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
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_3: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_3: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_3: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GL$VERSION$GL_4_3\n");

    moduledict_OpenGL$raw$GL$VERSION$GL_4_3 = MODULE_DICT(module_OpenGL$raw$GL$VERSION$GL_4_3);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[662]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GL$VERSION$GL_4_3);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GL$VERSION$GL_4_3);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_9c6214796bc2dd83a42a9279097e1b23;
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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_9c6214796bc2dd83a42a9279097e1b23 = MAKE_MODULE_FRAME(codeobj_9c6214796bc2dd83a42a9279097e1b23, module_OpenGL$raw$GL$VERSION$GL_4_3);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9c6214796bc2dd83a42a9279097e1b23);
    assert(Py_REFCNT(frame_9c6214796bc2dd83a42a9279097e1b23) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[11]);

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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[17];
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GL$VERSION$GL_4_3, true, tmp_star_imported_1);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[26];
        tmp_level_value_4 = mod_consts[17];
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[28];
        tmp_level_value_5 = mod_consts[17];
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_3;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[17];
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__1__f();

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 15;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[36]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 16;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[38]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[40]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 19;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[44]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[46]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[48]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 22;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[50]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 23;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[52]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 24;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[54]);

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 25;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[56]);

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 26;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[58]);

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 27;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[60]);

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[62]);

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 29;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[64]);

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 30;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[66]);

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 31;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[68]);

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 32;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[70]);

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 33;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[72]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 34;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[74]);

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 35;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[76]);

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 36;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[78]);

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 37;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[80]);

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 38;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[82]);

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 39;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[84]);

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 40;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[86]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 41;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[88]);

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 42;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[90]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 43;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[92]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 44;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[94]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 45;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[96]);

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 46;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[98]);

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 47;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[100]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 48;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[102]);

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 49;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[104]);

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 50;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[106]);

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 51;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_38, mod_consts[108]);

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 52;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[110]);

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 53;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_40, mod_consts[112]);

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 54;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[114]);

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 55;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[116]);

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 56;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[118]);

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 57;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_44, mod_consts[120]);

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 58;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[122]);

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 59;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_46, mod_consts[124]);

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 60;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_47, mod_consts[126]);

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 61;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[128]);

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 62;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[130]);

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 63;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[132]);

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 64;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[134]);

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_52;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 65;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_52, mod_consts[136]);

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 66;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[138]);

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_54;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 67;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_54, mod_consts[140]);

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_55;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 68;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[142]);

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 69;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_56, mod_consts[144]);

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 70;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_57, mod_consts[146]);

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_58;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 71;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_58, mod_consts[148]);

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 72;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_59, mod_consts[150]);

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 73;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_60, mod_consts[152]);

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_61;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 74;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_61, mod_consts[154]);

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 75;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_62, mod_consts[156]);

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 76;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_63, mod_consts[158]);

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_64;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 77;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_64, mod_consts[160]);

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 78;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_65, mod_consts[162]);

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 79;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_66, mod_consts[164]);

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_67;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 80;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[166]);

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_68;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 81;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_68, mod_consts[168]);

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_69;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 82;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_69, mod_consts[170]);

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_70;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 83;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_70, mod_consts[172]);

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_71;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 84;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[174]);

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_72;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 85;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_72, mod_consts[176]);

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_73;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 86;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_73, mod_consts[178]);

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_74;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 87;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_74, mod_consts[180]);

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_75;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 88;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_75, mod_consts[182]);

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_76;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 89;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_76, mod_consts[184]);

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_77;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 90;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_77, mod_consts[186]);

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_78;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 91;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_78, mod_consts[188]);

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_79;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 92;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[190]);

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_80;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 93;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_80, mod_consts[192]);

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_81;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 94;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_81, mod_consts[194]);

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_82;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 95;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_82, mod_consts[196]);

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_83;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 96;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_83, mod_consts[198]);

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_84;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 97;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_84, mod_consts[200]);

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_85;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 98;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_85, mod_consts[202]);

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_86;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 99;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_86, mod_consts[204]);

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_87;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 100;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_87, mod_consts[206]);

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_88;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 101;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_88, mod_consts[208]);

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_89;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 102;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_89, mod_consts[210]);

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_90;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 103;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_90, mod_consts[212]);

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_91;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 104;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_91, mod_consts[214]);

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_92;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 105;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_92, mod_consts[216]);

        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_93;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 106;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_93, mod_consts[218]);

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_94;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 107;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_94, mod_consts[220]);

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_95;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 108;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_95, mod_consts[222]);

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_96;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 109;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_96, mod_consts[224]);

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_97;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 110;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_97, mod_consts[226]);

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_98;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 111;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_98, mod_consts[228]);

        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_99;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 112;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_99, mod_consts[230]);

        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_100;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 113;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_100, mod_consts[232]);

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_101;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 114;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_101, mod_consts[234]);

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_102;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 115;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_102, mod_consts[236]);

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_103;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 116;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_103, mod_consts[238]);

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_104;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 117;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_104, mod_consts[240]);

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_105;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 118;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_105, mod_consts[242]);

        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_106;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 119;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_106, mod_consts[244]);

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_107;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 120;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_107, mod_consts[246]);

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_108;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 121;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_108, mod_consts[248]);

        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_109;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 122;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_109, mod_consts[250]);

        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_110;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 123;
        tmp_assign_source_122 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_110, mod_consts[252]);

        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_111;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 124;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_111, mod_consts[254]);

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_112;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 125;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_112, mod_consts[256]);

        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_113;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 126;
        tmp_assign_source_125 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_113, mod_consts[258]);

        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_114;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 127;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_114, mod_consts[260]);

        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_115;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 128;
        tmp_assign_source_127 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_115, mod_consts[262]);

        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_116;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 129;
        tmp_assign_source_128 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_116, mod_consts[264]);

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_117;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 130;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_117, mod_consts[266]);

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_118;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 131;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_118, mod_consts[268]);

        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_119;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 132;
        tmp_assign_source_131 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_119, mod_consts[270]);

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_120;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 133;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_120, mod_consts[272]);

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_121;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 134;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_121, mod_consts[274]);

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_122;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 135;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_122, mod_consts[276]);

        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_123;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 136;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_123, mod_consts[278]);

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_124;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 137;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_124, mod_consts[280]);

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_125;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 138;
        tmp_assign_source_137 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_125, mod_consts[282]);

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_126;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 139;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_126, mod_consts[284]);

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_127;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 140;
        tmp_assign_source_139 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_127, mod_consts[286]);

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_value_128;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 141;
        tmp_assign_source_140 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_128, mod_consts[288]);

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_129;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 142;
        tmp_assign_source_141 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_129, mod_consts[290]);

        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_130;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 143;
        tmp_assign_source_142 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_130, mod_consts[292]);

        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_131;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 144;
        tmp_assign_source_143 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_131, mod_consts[294]);

        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_132;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 145;
        tmp_assign_source_144 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_132, mod_consts[296]);

        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_133;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 146;
        tmp_assign_source_145 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_133, mod_consts[298]);

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_134;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 147;
        tmp_assign_source_146 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_134, mod_consts[300]);

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_135;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 148;
        tmp_assign_source_147 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_135, mod_consts[302]);

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_called_value_136;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 149;
        tmp_assign_source_148 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_136, mod_consts[304]);

        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_137;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 150;
        tmp_assign_source_149 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_137, mod_consts[306]);

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_value_138;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 151;
        tmp_assign_source_150 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_138, mod_consts[308]);

        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_139;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 152;
        tmp_assign_source_151 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_139, mod_consts[310]);

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_140;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 153;
        tmp_assign_source_152 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_140, mod_consts[312]);

        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_141;
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 154;
        tmp_assign_source_153 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_141, mod_consts[314]);

        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_value_142;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 155;
        tmp_assign_source_154 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_142, mod_consts[316]);

        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_143;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 156;
        tmp_assign_source_155 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_143, mod_consts[318]);

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_value_144;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 157;
        tmp_assign_source_156 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_144, mod_consts[320]);

        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_145;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 158;
        tmp_assign_source_157 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_145, mod_consts[322]);

        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_146;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 159;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_146, mod_consts[324]);

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_147;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 160;
        tmp_assign_source_159 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_147, mod_consts[326]);

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_148;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 161;
        tmp_assign_source_160 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_148, mod_consts[328]);

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_149;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 162;
        tmp_assign_source_161 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_149, mod_consts[330]);

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_150;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 163;
        tmp_assign_source_162 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_150, mod_consts[332]);

        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_called_value_151;
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 164;
        tmp_assign_source_163 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_151, mod_consts[334]);

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_152;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 165;
        tmp_assign_source_164 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_152, mod_consts[336]);

        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_153;
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 166;
        tmp_assign_source_165 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_153, mod_consts[338]);

        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_154;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 167;
        tmp_assign_source_166 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_154, mod_consts[340]);

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_155;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 168;
        tmp_assign_source_167 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_155, mod_consts[342]);

        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_value_156;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 169;
        tmp_assign_source_168 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_156, mod_consts[344]);

        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_157;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 170;
        tmp_assign_source_169 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_157, mod_consts[346]);

        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_158;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 171;
        tmp_assign_source_170 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_158, mod_consts[348]);

        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_called_value_159;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 172;
        tmp_assign_source_171 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_159, mod_consts[350]);

        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_value_160;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 173;
        tmp_assign_source_172 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_160, mod_consts[352]);

        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_161;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 174;
        tmp_assign_source_173 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_161, mod_consts[354]);

        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_162;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 175;
        tmp_assign_source_174 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_162, mod_consts[356]);

        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_163;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 176;
        tmp_assign_source_175 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_163, mod_consts[358]);

        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_164;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 177;
        tmp_assign_source_176 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_164, mod_consts[360]);

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_called_value_165;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 178;
        tmp_assign_source_177 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_165, mod_consts[362]);

        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_called_value_166;
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 179;
        tmp_assign_source_178 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_166, mod_consts[364]);

        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_value_167;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 180;
        tmp_assign_source_179 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_167, mod_consts[366]);

        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_168;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 181;
        tmp_assign_source_180 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_168, mod_consts[368]);

        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_value_169;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 182;
        tmp_assign_source_181 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_169, mod_consts[370]);

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_value_170;
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 183;
        tmp_assign_source_182 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_170, mod_consts[372]);

        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_171;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 184;
        tmp_assign_source_183 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_171, mod_consts[374]);

        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_172;
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 185;
        tmp_assign_source_184 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_172, mod_consts[376]);

        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_173;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 186;
        tmp_assign_source_185 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_173, mod_consts[378]);

        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_value_174;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 187;
        tmp_assign_source_186 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_174, mod_consts[380]);

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_called_value_175;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 188;
        tmp_assign_source_187 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_175, mod_consts[382]);

        if (tmp_assign_source_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_176;
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 189;
        tmp_assign_source_188 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_176, mod_consts[384]);

        if (tmp_assign_source_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_177;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 190;
        tmp_assign_source_189 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_177, mod_consts[386]);

        if (tmp_assign_source_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_called_value_178;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 191;
        tmp_assign_source_190 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_178, mod_consts[388]);

        if (tmp_assign_source_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_called_value_179;
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 192;
        tmp_assign_source_191 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_179, mod_consts[390]);

        if (tmp_assign_source_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_called_value_180;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 193;
        tmp_assign_source_192 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_180, mod_consts[392]);

        if (tmp_assign_source_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_value_181;
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 194;
        tmp_assign_source_193 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_181, mod_consts[394]);

        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_182;
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 195;
        tmp_assign_source_194 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_182, mod_consts[396]);

        if (tmp_assign_source_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_called_value_183;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 196;
        tmp_assign_source_195 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_183, mod_consts[398]);

        if (tmp_assign_source_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_184;
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 197;
        tmp_assign_source_196 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_184, mod_consts[400]);

        if (tmp_assign_source_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_called_value_185;
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 198;
        tmp_assign_source_197 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_185, mod_consts[402]);

        if (tmp_assign_source_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_186;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 199;
        tmp_assign_source_198 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_186, mod_consts[404]);

        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_187;
        tmp_called_value_187 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_187 == NULL)) {
            tmp_called_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 200;
        tmp_assign_source_199 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_187, mod_consts[406]);

        if (tmp_assign_source_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_value_188;
        tmp_called_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_188 == NULL)) {
            tmp_called_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 201;
        tmp_assign_source_200 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_188, mod_consts[408]);

        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_value_189;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 202;
        tmp_assign_source_201 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_189, mod_consts[410]);

        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_called_value_190;
        tmp_called_value_190 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_190 == NULL)) {
            tmp_called_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 203;
        tmp_assign_source_202 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_190, mod_consts[412]);

        if (tmp_assign_source_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_called_value_191;
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 204;
        tmp_assign_source_203 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_191, mod_consts[414]);

        if (tmp_assign_source_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_192;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 205;
        tmp_assign_source_204 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_192, mod_consts[416]);

        if (tmp_assign_source_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_193;
        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_193 == NULL)) {
            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 206;
        tmp_assign_source_205 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_193, mod_consts[418]);

        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_194;
        tmp_called_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_194 == NULL)) {
            tmp_called_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 207;
        tmp_assign_source_206 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_194, mod_consts[420]);

        if (tmp_assign_source_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_called_value_195;
        tmp_called_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_195 == NULL)) {
            tmp_called_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 208;
        tmp_assign_source_207 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_195, mod_consts[422]);

        if (tmp_assign_source_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_called_value_196;
        tmp_called_value_196 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_196 == NULL)) {
            tmp_called_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 209;
        tmp_assign_source_208 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_196, mod_consts[424]);

        if (tmp_assign_source_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_called_value_197;
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 210;
        tmp_assign_source_209 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_197, mod_consts[426]);

        if (tmp_assign_source_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_called_value_198;
        tmp_called_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_198 == NULL)) {
            tmp_called_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 211;
        tmp_assign_source_210 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_198, mod_consts[428]);

        if (tmp_assign_source_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_called_value_199;
        tmp_called_value_199 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_199 == NULL)) {
            tmp_called_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 212;
        tmp_assign_source_211 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_199, mod_consts[430]);

        if (tmp_assign_source_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_called_value_200;
        tmp_called_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_200 == NULL)) {
            tmp_called_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 213;
        tmp_assign_source_212 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_200, mod_consts[432]);

        if (tmp_assign_source_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_called_value_201;
        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_201 == NULL)) {
            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 214;
        tmp_assign_source_213 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_201, mod_consts[434]);

        if (tmp_assign_source_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_202;
        tmp_called_value_202 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_202 == NULL)) {
            tmp_called_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 215;
        tmp_assign_source_214 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_202, mod_consts[436]);

        if (tmp_assign_source_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_called_value_203;
        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_203 == NULL)) {
            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 216;
        tmp_assign_source_215 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_203, mod_consts[438]);

        if (tmp_assign_source_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_called_value_204;
        tmp_called_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_204 == NULL)) {
            tmp_called_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 217;
        tmp_assign_source_216 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_204, mod_consts[440]);

        if (tmp_assign_source_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_called_value_205;
        tmp_called_value_205 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_205 == NULL)) {
            tmp_called_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 218;
        tmp_assign_source_217 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_205, mod_consts[442]);

        if (tmp_assign_source_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_called_value_206;
        tmp_called_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_206 == NULL)) {
            tmp_called_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 219;
        tmp_assign_source_218 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_206, mod_consts[444]);

        if (tmp_assign_source_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_called_value_207;
        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_207 == NULL)) {
            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 220;
        tmp_assign_source_219 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_207, mod_consts[446]);

        if (tmp_assign_source_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_called_value_208;
        tmp_called_value_208 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_208 == NULL)) {
            tmp_called_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 221;
        tmp_assign_source_220 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_208, mod_consts[448]);

        if (tmp_assign_source_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_called_value_209;
        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_209 == NULL)) {
            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 222;
        tmp_assign_source_221 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_209, mod_consts[450]);

        if (tmp_assign_source_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_called_value_210;
        tmp_called_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_210 == NULL)) {
            tmp_called_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 223;
        tmp_assign_source_222 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_210, mod_consts[452]);

        if (tmp_assign_source_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_called_value_211;
        tmp_called_value_211 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_211 == NULL)) {
            tmp_called_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 224;
        tmp_assign_source_223 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_211, mod_consts[454]);

        if (tmp_assign_source_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_called_value_212;
        tmp_called_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_212 == NULL)) {
            tmp_called_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 225;
        tmp_assign_source_224 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_212, mod_consts[456]);

        if (tmp_assign_source_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_called_value_213;
        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_213 == NULL)) {
            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 226;
        tmp_assign_source_225 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_213, mod_consts[458]);

        if (tmp_assign_source_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_called_value_214;
        tmp_called_value_214 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_214 == NULL)) {
            tmp_called_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 227;
        tmp_assign_source_226 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_214, mod_consts[460]);

        if (tmp_assign_source_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_called_value_215;
        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_215 == NULL)) {
            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 228;
        tmp_assign_source_227 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_215, mod_consts[462]);

        if (tmp_assign_source_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[463], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_called_value_216;
        tmp_called_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_216 == NULL)) {
            tmp_called_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 229;
        tmp_assign_source_228 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_216, mod_consts[464]);

        if (tmp_assign_source_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[465], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_called_value_217;
        tmp_called_value_217 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_217 == NULL)) {
            tmp_called_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 230;
        tmp_assign_source_229 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_217, mod_consts[466]);

        if (tmp_assign_source_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_called_value_218;
        tmp_called_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_218 == NULL)) {
            tmp_called_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 231;
        tmp_assign_source_230 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_218, mod_consts[468]);

        if (tmp_assign_source_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_called_value_219;
        tmp_called_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_219 == NULL)) {
            tmp_called_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 232;
        tmp_assign_source_231 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_219, mod_consts[470]);

        if (tmp_assign_source_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_called_value_220;
        tmp_called_value_220 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_220 == NULL)) {
            tmp_called_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 233;
        tmp_assign_source_232 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_220, mod_consts[472]);

        if (tmp_assign_source_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[473], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_called_value_221;
        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_221 == NULL)) {
            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 234;
        tmp_assign_source_233 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_221, mod_consts[474]);

        if (tmp_assign_source_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_called_value_222;
        tmp_called_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_222 == NULL)) {
            tmp_called_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 235;
        tmp_assign_source_234 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_222, mod_consts[476]);

        if (tmp_assign_source_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[477], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_called_value_223;
        tmp_called_value_223 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_223 == NULL)) {
            tmp_called_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 236;
        tmp_assign_source_235 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_223, mod_consts[478]);

        if (tmp_assign_source_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_called_value_224;
        tmp_called_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_224 == NULL)) {
            tmp_called_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 237;
        tmp_assign_source_236 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_224, mod_consts[480]);

        if (tmp_assign_source_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_called_value_225;
        tmp_called_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_225 == NULL)) {
            tmp_called_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 238;
        tmp_assign_source_237 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_225, mod_consts[482]);

        if (tmp_assign_source_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_called_value_226;
        tmp_called_value_226 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_226 == NULL)) {
            tmp_called_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 239;
        tmp_assign_source_238 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_226, mod_consts[484]);

        if (tmp_assign_source_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[485], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_called_value_227;
        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_227 == NULL)) {
            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 240;
        tmp_assign_source_239 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_227, mod_consts[486]);

        if (tmp_assign_source_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_called_value_228;
        tmp_called_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_228 == NULL)) {
            tmp_called_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 241;
        tmp_assign_source_240 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_228, mod_consts[488]);

        if (tmp_assign_source_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_called_value_229;
        tmp_called_value_229 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_229 == NULL)) {
            tmp_called_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 242;
        tmp_assign_source_241 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_229, mod_consts[490]);

        if (tmp_assign_source_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_called_value_230;
        tmp_called_value_230 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_230 == NULL)) {
            tmp_called_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 243;
        tmp_assign_source_242 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_230, mod_consts[492]);

        if (tmp_assign_source_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_called_value_231;
        tmp_called_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_231 == NULL)) {
            tmp_called_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 244;
        tmp_assign_source_243 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_231, mod_consts[494]);

        if (tmp_assign_source_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_called_value_232;
        tmp_called_value_232 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_232 == NULL)) {
            tmp_called_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 245;
        tmp_assign_source_244 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_232, mod_consts[496]);

        if (tmp_assign_source_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_called_value_233;
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 246;
        tmp_assign_source_245 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_233, mod_consts[498]);

        if (tmp_assign_source_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_called_value_234;
        tmp_called_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_234 == NULL)) {
            tmp_called_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 247;
        tmp_assign_source_246 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_234, mod_consts[500]);

        if (tmp_assign_source_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_called_value_235;
        tmp_called_value_235 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_235 == NULL)) {
            tmp_called_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 248;
        tmp_assign_source_247 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_235, mod_consts[502]);

        if (tmp_assign_source_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_called_value_236;
        tmp_called_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_236 == NULL)) {
            tmp_called_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 249;
        tmp_assign_source_248 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_236, mod_consts[504]);

        if (tmp_assign_source_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_called_value_237;
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 250;
        tmp_assign_source_249 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_237, mod_consts[506]);

        if (tmp_assign_source_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_called_value_238;
        tmp_called_value_238 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_238 == NULL)) {
            tmp_called_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 251;
        tmp_assign_source_250 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_238, mod_consts[508]);

        if (tmp_assign_source_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_called_value_239;
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 252;
        tmp_assign_source_251 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_239, mod_consts[510]);

        if (tmp_assign_source_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_called_value_240;
        tmp_called_value_240 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_240 == NULL)) {
            tmp_called_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 253;
        tmp_assign_source_252 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_240, mod_consts[512]);

        if (tmp_assign_source_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_called_value_241;
        tmp_called_value_241 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_241 == NULL)) {
            tmp_called_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 254;
        tmp_assign_source_253 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_241, mod_consts[514]);

        if (tmp_assign_source_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        PyObject *tmp_called_value_242;
        tmp_called_value_242 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_242 == NULL)) {
            tmp_called_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 255;
        tmp_assign_source_254 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_242, mod_consts[516]);

        if (tmp_assign_source_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_called_value_243;
        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_243 == NULL)) {
            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 256;
        tmp_assign_source_255 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_243, mod_consts[518]);

        if (tmp_assign_source_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_called_value_244;
        tmp_called_value_244 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_244 == NULL)) {
            tmp_called_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 257;
        tmp_assign_source_256 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_244, mod_consts[520]);

        if (tmp_assign_source_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_called_value_245;
        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_245 == NULL)) {
            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 258;
        tmp_assign_source_257 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_245, mod_consts[522]);

        if (tmp_assign_source_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_called_value_246;
        tmp_called_value_246 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_246 == NULL)) {
            tmp_called_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 259;
        tmp_assign_source_258 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_246, mod_consts[524]);

        if (tmp_assign_source_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_called_value_247;
        tmp_called_value_247 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_247 == NULL)) {
            tmp_called_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 260;
        tmp_assign_source_259 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_247, mod_consts[526]);

        if (tmp_assign_source_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_called_value_248;
        tmp_called_value_248 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_248 == NULL)) {
            tmp_called_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 261;
        tmp_assign_source_260 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_248, mod_consts[528]);

        if (tmp_assign_source_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_called_value_249;
        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_249 == NULL)) {
            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 262;
        tmp_assign_source_261 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_249, mod_consts[530]);

        if (tmp_assign_source_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_called_value_250;
        tmp_called_value_250 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_250 == NULL)) {
            tmp_called_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 263;
        tmp_assign_source_262 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_250, mod_consts[532]);

        if (tmp_assign_source_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_called_value_251;
        tmp_called_value_251 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_251 == NULL)) {
            tmp_called_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 264;
        tmp_assign_source_263 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_251, mod_consts[534]);

        if (tmp_assign_source_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_called_value_252;
        tmp_called_value_252 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_252 == NULL)) {
            tmp_called_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 265;
        tmp_assign_source_264 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_252, mod_consts[536]);

        if (tmp_assign_source_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_called_value_253;
        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_253 == NULL)) {
            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 266;
        tmp_assign_source_265 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_253, mod_consts[538]);

        if (tmp_assign_source_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_called_value_254;
        tmp_called_value_254 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_254 == NULL)) {
            tmp_called_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 267;
        tmp_assign_source_266 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_254, mod_consts[540]);

        if (tmp_assign_source_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_called_value_255;
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 268;
        tmp_assign_source_267 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_255, mod_consts[542]);

        if (tmp_assign_source_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_called_value_256;
        tmp_called_value_256 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_256 == NULL)) {
            tmp_called_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 269;
        tmp_assign_source_268 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_256, mod_consts[544]);

        if (tmp_assign_source_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_called_value_257;
        tmp_called_value_257 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_257 == NULL)) {
            tmp_called_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 270;
        tmp_assign_source_269 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_257, mod_consts[546]);

        if (tmp_assign_source_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_called_value_258;
        tmp_called_value_258 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_258 == NULL)) {
            tmp_called_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 271;
        tmp_assign_source_270 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_258, mod_consts[548]);

        if (tmp_assign_source_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_called_value_259;
        tmp_called_value_259 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_259 == NULL)) {
            tmp_called_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 272;
        tmp_assign_source_271 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_259, mod_consts[550]);

        if (tmp_assign_source_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_called_value_260;
        tmp_called_value_260 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_260 == NULL)) {
            tmp_called_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 273;
        tmp_assign_source_272 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_260, mod_consts[552]);

        if (tmp_assign_source_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_called_value_261;
        tmp_called_value_261 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_261 == NULL)) {
            tmp_called_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 274;
        tmp_assign_source_273 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_261, mod_consts[554]);

        if (tmp_assign_source_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_called_value_262;
        tmp_called_value_262 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_262 == NULL)) {
            tmp_called_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 275;
        tmp_assign_source_274 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_262, mod_consts[556]);

        if (tmp_assign_source_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_called_value_263;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_264;
        PyObject *tmp_called_value_265;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_263 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_263 == NULL)) {
            tmp_called_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_called_value_265 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[558]);
        if (tmp_called_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[559]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[559]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[560]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[561]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_265);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_called_value_264 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_265, call_args);
        }

        Py_DECREF(tmp_called_value_265);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_called_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_7 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__2_glBindVertexBuffer();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 277;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_264, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_264);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 276;
        tmp_assign_source_275 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_263, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_called_value_266;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_267;
        PyObject *tmp_called_value_268;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_266 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_266 == NULL)) {
            tmp_called_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_called_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[558]);
        if (tmp_called_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = Py_None;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[563]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[563]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[563]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[563]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[564]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_called_value_267 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_268, call_args);
        }

        Py_DECREF(tmp_called_value_268);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_called_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_15 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__3_glClearBufferData();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 280;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_267, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_267);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 279;
        tmp_assign_source_276 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_266, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_called_value_269;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_270;
        PyObject *tmp_called_value_271;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_269 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_269 == NULL)) {
            tmp_called_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_called_value_271 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[558]);
        if (tmp_called_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = Py_None;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[563]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[563]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[560]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[566]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[563]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[563]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[564]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_271);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_called_value_270 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_271, call_args);
        }

        Py_DECREF(tmp_called_value_271);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_called_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_25 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__4_glClearBufferSubData();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 283;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_270, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_270);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 282;
        tmp_assign_source_277 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_269, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_called_value_272;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_273;
        PyObject *tmp_called_value_274;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_43;
        tmp_called_value_272 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_272 == NULL)) {
            tmp_called_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_called_value_274 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[558]);
        if (tmp_called_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = Py_None;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[559]);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[563]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[568]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[568]);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[568]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[568]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[559]);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[563]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[568]);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[568]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[568]);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[568]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[561]);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[561]);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[561]);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_called_value_273 = CALL_FUNCTION_WITH_ARGS16(tmp_called_value_274, call_args);
        }

        Py_DECREF(tmp_called_value_274);
        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_40);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_called_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_43 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__5_glCopyImageSubData();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 286;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_273, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_273);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 285;
        tmp_assign_source_278 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_272, tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_called_value_275;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_276;
        PyObject *tmp_called_value_277;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_275 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_275 == NULL)) {
            tmp_called_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_called_value_277 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[558]);
        if (tmp_called_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = Py_None;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_277);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[570]);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_277);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_277);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[564]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_277);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_called_value_276 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_277, call_args);
        }

        Py_DECREF(tmp_called_value_277);
        Py_DECREF(tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_called_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_48 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__6_glDebugMessageCallback();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 289;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_276, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_276);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 288;
        tmp_assign_source_279 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_275, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_assign_source_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_called_value_278;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_279;
        PyObject *tmp_called_value_280;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_278 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_278 == NULL)) {
            tmp_called_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_called_value_280 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[558]);
        if (tmp_called_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = Py_None;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[563]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[563]);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[563]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[561]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[572]);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[573]);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_called_value_279 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_280, call_args);
        }

        Py_DECREF(tmp_called_value_280);
        Py_DECREF(tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_called_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_57 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__7_glDebugMessageControl();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 292;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_279, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_279);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 291;
        tmp_assign_source_280 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_278, tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_called_value_281;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_called_value_282;
        PyObject *tmp_called_value_283;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_281 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_281 == NULL)) {
            tmp_called_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_called_value_283 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[558]);
        if (tmp_called_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = Py_None;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[563]);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[563]);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[559]);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[563]);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[561]);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[575]);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_283);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_called_value_282 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_283, call_args);
        }

        Py_DECREF(tmp_called_value_283);
        Py_DECREF(tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        Py_DECREF(tmp_args_element_value_63);
        Py_DECREF(tmp_args_element_value_64);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_called_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_66 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__8_glDebugMessageInsert();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 295;
        tmp_args_element_value_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_282, tmp_args_element_value_66);
        Py_DECREF(tmp_called_value_282);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 294;
        tmp_assign_source_281 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_281, tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_assign_source_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_called_value_284;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_called_value_285;
        PyObject *tmp_called_value_286;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_284 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_284 == NULL)) {
            tmp_called_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_called_value_286 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[558]);
        if (tmp_called_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = Py_None;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[559]);
        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);
            Py_DECREF(tmp_args_element_value_69);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[559]);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);
            Py_DECREF(tmp_args_element_value_69);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[559]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_called_value_285 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_286, call_args);
        }

        Py_DECREF(tmp_called_value_286);
        Py_DECREF(tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_called_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_72 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__9_glDispatchCompute();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 298;
        tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_285, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_285);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 297;
        tmp_assign_source_282 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_284, tmp_args_element_value_67);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_assign_source_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_called_value_287;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_called_value_288;
        PyObject *tmp_called_value_289;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_287 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_287 == NULL)) {
            tmp_called_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_called_value_289 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[558]);
        if (tmp_called_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = Py_None;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_289);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[560]);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_289);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_called_value_288 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_289, call_args);
        }

        Py_DECREF(tmp_called_value_289);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_called_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_76 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__10_glDispatchComputeIndirect();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 301;
        tmp_args_element_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_288, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_288);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 300;
        tmp_assign_source_283 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_287, tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_assign_source_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_called_value_290;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_291;
        PyObject *tmp_called_value_292;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_290 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_290 == NULL)) {
            tmp_called_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_called_value_292 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[558]);
        if (tmp_called_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = Py_None;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[563]);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[563]);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[568]);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_called_value_291 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_292, call_args);
        }

        Py_DECREF(tmp_called_value_292);
        Py_DECREF(tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_80);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_called_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_82 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__11_glFramebufferParameteri();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 304;
        tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_291, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_291);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 303;
        tmp_assign_source_284 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_290, tmp_args_element_value_77);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_assign_source_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_called_value_293;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_294;
        PyObject *tmp_called_value_295;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_93;
        tmp_called_value_293 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_293 == NULL)) {
            tmp_called_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_called_value_295 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[558]);
        if (tmp_called_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[559]);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[559]);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[561]);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[572]);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[572]);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[572]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[572]);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[580]);
        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);
            Py_DECREF(tmp_args_element_value_91);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[575]);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_295);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);
            Py_DECREF(tmp_args_element_value_91);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92};
            tmp_called_value_294 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_295, call_args);
        }

        Py_DECREF(tmp_called_value_295);
        Py_DECREF(tmp_args_element_value_84);
        Py_DECREF(tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_87);
        Py_DECREF(tmp_args_element_value_88);
        Py_DECREF(tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_90);
        Py_DECREF(tmp_args_element_value_91);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_called_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_93 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__12_glGetDebugMessageLog();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 307;
        tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_294, tmp_args_element_value_93);
        Py_DECREF(tmp_called_value_294);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 306;
        tmp_assign_source_285 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_293, tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_assign_source_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_called_value_296;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_value_297;
        PyObject *tmp_called_value_298;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_99;
        tmp_called_value_296 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_296 == NULL)) {
            tmp_called_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_called_value_298 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[558]);
        if (tmp_called_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = Py_None;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_298);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[563]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_298);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_298);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[563]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_298);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_298);
            Py_DECREF(tmp_args_element_value_96);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[582]);
        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_298);
            Py_DECREF(tmp_args_element_value_96);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_called_value_297 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_298, call_args);
        }

        Py_DECREF(tmp_called_value_298);
        Py_DECREF(tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_called_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_99 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__13_glGetFramebufferParameteriv();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 310;
        tmp_args_element_value_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_297, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_297);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 309;
        tmp_assign_source_286 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_296, tmp_args_element_value_94);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_assign_source_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_called_value_299;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_called_value_300;
        PyObject *tmp_called_value_301;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_107;
        tmp_called_value_299 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_299 == NULL)) {
            tmp_called_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_called_value_301 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[558]);
        if (tmp_called_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = Py_None;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[563]);
        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[563]);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[563]);
        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[561]);
        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[584]);
        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_301);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_called_value_300 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_301, call_args);
        }

        Py_DECREF(tmp_called_value_301);
        Py_DECREF(tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_104);
        Py_DECREF(tmp_args_element_value_105);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_called_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_107 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__14_glGetInternalformati64v();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 313;
        tmp_args_element_value_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_300, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_300);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 312;
        tmp_assign_source_287 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_299, tmp_args_element_value_100);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_assign_source_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[585], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_called_value_302;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_called_value_303;
        PyObject *tmp_called_value_304;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_115;
        tmp_called_value_302 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_302 == NULL)) {
            tmp_called_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_called_value_304 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[558]);
        if (tmp_called_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = Py_None;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[563]);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[559]);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[561]);
        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);
            Py_DECREF(tmp_args_element_value_112);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[580]);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);
            Py_DECREF(tmp_args_element_value_112);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[575]);
        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_304);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_called_value_303 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_304, call_args);
        }

        Py_DECREF(tmp_called_value_304);
        Py_DECREF(tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_111);
        Py_DECREF(tmp_args_element_value_112);
        Py_DECREF(tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_called_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_115 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__15_glGetObjectLabel();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 316;
        tmp_args_element_value_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_303, tmp_args_element_value_115);
        Py_DECREF(tmp_called_value_303);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 315;
        tmp_assign_source_288 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_302, tmp_args_element_value_108);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_assign_source_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_called_value_305;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_called_value_306;
        PyObject *tmp_called_value_307;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_122;
        tmp_called_value_305 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_305 == NULL)) {
            tmp_called_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_called_value_307 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[558]);
        if (tmp_called_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = Py_None;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[564]);
        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);
            Py_DECREF(tmp_args_element_value_118);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[561]);
        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);
            Py_DECREF(tmp_args_element_value_118);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);
            Py_DECREF(tmp_args_element_value_118);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[580]);
        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);
            Py_DECREF(tmp_args_element_value_118);
            Py_DECREF(tmp_args_element_value_119);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);
            Py_DECREF(tmp_args_element_value_118);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[575]);
        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_307);
            Py_DECREF(tmp_args_element_value_118);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121};
            tmp_called_value_306 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_307, call_args);
        }

        Py_DECREF(tmp_called_value_307);
        Py_DECREF(tmp_args_element_value_118);
        Py_DECREF(tmp_args_element_value_119);
        Py_DECREF(tmp_args_element_value_120);
        Py_DECREF(tmp_args_element_value_121);
        if (tmp_called_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_122 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__16_glGetObjectPtrLabel();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 319;
        tmp_args_element_value_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_306, tmp_args_element_value_122);
        Py_DECREF(tmp_called_value_306);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 318;
        tmp_assign_source_289 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_305, tmp_args_element_value_116);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_assign_source_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_called_value_308;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_called_value_309;
        PyObject *tmp_called_value_310;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_127;
        tmp_called_value_308 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_308 == NULL)) {
            tmp_called_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_called_value_310 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[558]);
        if (tmp_called_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = Py_None;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_310);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[563]);
        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_310);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_310);
            Py_DECREF(tmp_args_element_value_125);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[588]);
        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_310);
            Py_DECREF(tmp_args_element_value_125);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_called_value_309 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_310, call_args);
        }

        Py_DECREF(tmp_called_value_310);
        Py_DECREF(tmp_args_element_value_125);
        Py_DECREF(tmp_args_element_value_126);
        if (tmp_called_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_127 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__17_glGetPointerv();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 322;
        tmp_args_element_value_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_309, tmp_args_element_value_127);
        Py_DECREF(tmp_called_value_309);
        Py_DECREF(tmp_args_element_value_127);
        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 321;
        tmp_assign_source_290 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_308, tmp_args_element_value_123);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_assign_source_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[589], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_called_value_311;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_called_value_312;
        PyObject *tmp_called_value_313;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_134;
        tmp_called_value_311 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_311 == NULL)) {
            tmp_called_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_called_value_313 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[558]);
        if (tmp_called_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = Py_None;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[559]);
        if (tmp_args_element_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);
            Py_DECREF(tmp_args_element_value_130);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[563]);
        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);
            Py_DECREF(tmp_args_element_value_130);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_131);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[563]);
        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_131);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_131);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[582]);
        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_313);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_131);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130, tmp_args_element_value_131, tmp_args_element_value_132, tmp_args_element_value_133};
            tmp_called_value_312 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_313, call_args);
        }

        Py_DECREF(tmp_called_value_313);
        Py_DECREF(tmp_args_element_value_130);
        Py_DECREF(tmp_args_element_value_131);
        Py_DECREF(tmp_args_element_value_132);
        Py_DECREF(tmp_args_element_value_133);
        if (tmp_called_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_134 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__18_glGetProgramInterfaceiv();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 325;
        tmp_args_element_value_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_312, tmp_args_element_value_134);
        Py_DECREF(tmp_called_value_312);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 324;
        tmp_assign_source_291 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_311, tmp_args_element_value_128);
        Py_DECREF(tmp_args_element_value_128);
        if (tmp_assign_source_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        PyObject *tmp_called_value_314;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_called_value_315;
        PyObject *tmp_called_value_316;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_args_element_value_140;
        tmp_called_value_314 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_314 == NULL)) {
            tmp_called_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_called_value_316 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[558]);
        if (tmp_called_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[559]);
        if (tmp_args_element_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);
            Py_DECREF(tmp_args_element_value_136);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[559]);
        if (tmp_args_element_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);
            Py_DECREF(tmp_args_element_value_136);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);
            Py_DECREF(tmp_args_element_value_136);
            Py_DECREF(tmp_args_element_value_137);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[563]);
        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);
            Py_DECREF(tmp_args_element_value_136);
            Py_DECREF(tmp_args_element_value_137);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);
            Py_DECREF(tmp_args_element_value_136);
            Py_DECREF(tmp_args_element_value_137);
            Py_DECREF(tmp_args_element_value_138);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[575]);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_316);
            Py_DECREF(tmp_args_element_value_136);
            Py_DECREF(tmp_args_element_value_137);
            Py_DECREF(tmp_args_element_value_138);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137, tmp_args_element_value_138, tmp_args_element_value_139};
            tmp_called_value_315 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_316, call_args);
        }

        Py_DECREF(tmp_called_value_316);
        Py_DECREF(tmp_args_element_value_136);
        Py_DECREF(tmp_args_element_value_137);
        Py_DECREF(tmp_args_element_value_138);
        Py_DECREF(tmp_args_element_value_139);
        if (tmp_called_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_140 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__19_glGetProgramResourceIndex();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 328;
        tmp_args_element_value_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_315, tmp_args_element_value_140);
        Py_DECREF(tmp_called_value_315);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 327;
        tmp_assign_source_292 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_314, tmp_args_element_value_135);
        Py_DECREF(tmp_args_element_value_135);
        if (tmp_assign_source_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[591], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        PyObject *tmp_called_value_317;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_called_value_318;
        PyObject *tmp_called_value_319;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_146;
        tmp_called_value_317 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_317 == NULL)) {
            tmp_called_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_called_value_319 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[558]);
        if (tmp_called_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[568]);
        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);
            Py_DECREF(tmp_args_element_value_142);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[559]);
        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);
            Py_DECREF(tmp_args_element_value_142);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);
            Py_DECREF(tmp_args_element_value_142);
            Py_DECREF(tmp_args_element_value_143);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[563]);
        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);
            Py_DECREF(tmp_args_element_value_142);
            Py_DECREF(tmp_args_element_value_143);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);
            Py_DECREF(tmp_args_element_value_142);
            Py_DECREF(tmp_args_element_value_143);
            Py_DECREF(tmp_args_element_value_144);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[575]);
        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_319);
            Py_DECREF(tmp_args_element_value_142);
            Py_DECREF(tmp_args_element_value_143);
            Py_DECREF(tmp_args_element_value_144);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143, tmp_args_element_value_144, tmp_args_element_value_145};
            tmp_called_value_318 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_319, call_args);
        }

        Py_DECREF(tmp_called_value_319);
        Py_DECREF(tmp_args_element_value_142);
        Py_DECREF(tmp_args_element_value_143);
        Py_DECREF(tmp_args_element_value_144);
        Py_DECREF(tmp_args_element_value_145);
        if (tmp_called_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_146 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__20_glGetProgramResourceLocation();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 331;
        tmp_args_element_value_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_318, tmp_args_element_value_146);
        Py_DECREF(tmp_called_value_318);
        Py_DECREF(tmp_args_element_value_146);
        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 330;
        tmp_assign_source_293 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_317, tmp_args_element_value_141);
        Py_DECREF(tmp_args_element_value_141);
        if (tmp_assign_source_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        PyObject *tmp_called_value_320;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_called_value_321;
        PyObject *tmp_called_value_322;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_args_element_value_152;
        tmp_called_value_320 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_320 == NULL)) {
            tmp_called_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_called_value_322 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[558]);
        if (tmp_called_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[568]);
        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[559]);
        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);
            Py_DECREF(tmp_args_element_value_148);
            Py_DECREF(tmp_args_element_value_149);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[563]);
        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);
            Py_DECREF(tmp_args_element_value_148);
            Py_DECREF(tmp_args_element_value_149);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);
            Py_DECREF(tmp_args_element_value_148);
            Py_DECREF(tmp_args_element_value_149);
            Py_DECREF(tmp_args_element_value_150);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[575]);
        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_322);
            Py_DECREF(tmp_args_element_value_148);
            Py_DECREF(tmp_args_element_value_149);
            Py_DECREF(tmp_args_element_value_150);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149, tmp_args_element_value_150, tmp_args_element_value_151};
            tmp_called_value_321 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_322, call_args);
        }

        Py_DECREF(tmp_called_value_322);
        Py_DECREF(tmp_args_element_value_148);
        Py_DECREF(tmp_args_element_value_149);
        Py_DECREF(tmp_args_element_value_150);
        Py_DECREF(tmp_args_element_value_151);
        if (tmp_called_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_152 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__21_glGetProgramResourceLocationIndex();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 334;
        tmp_args_element_value_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_321, tmp_args_element_value_152);
        Py_DECREF(tmp_called_value_321);
        Py_DECREF(tmp_args_element_value_152);
        if (tmp_args_element_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 333;
        tmp_assign_source_294 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_320, tmp_args_element_value_147);
        Py_DECREF(tmp_args_element_value_147);
        if (tmp_assign_source_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[593], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        PyObject *tmp_called_value_323;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_called_value_324;
        PyObject *tmp_called_value_325;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_element_value_161;
        tmp_called_value_323 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_323 == NULL)) {
            tmp_called_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_called_value_325 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[558]);
        if (tmp_called_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = Py_None;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[559]);
        if (tmp_args_element_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[563]);
        if (tmp_args_element_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[559]);
        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[561]);
        if (tmp_args_element_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);
            Py_DECREF(tmp_args_element_value_158);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[580]);
        if (tmp_args_element_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);
            Py_DECREF(tmp_args_element_value_158);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);
            Py_DECREF(tmp_args_element_value_158);
            Py_DECREF(tmp_args_element_value_159);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[575]);
        if (tmp_args_element_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_325);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_156);
            Py_DECREF(tmp_args_element_value_157);
            Py_DECREF(tmp_args_element_value_158);
            Py_DECREF(tmp_args_element_value_159);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155, tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158, tmp_args_element_value_159, tmp_args_element_value_160};
            tmp_called_value_324 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_325, call_args);
        }

        Py_DECREF(tmp_called_value_325);
        Py_DECREF(tmp_args_element_value_155);
        Py_DECREF(tmp_args_element_value_156);
        Py_DECREF(tmp_args_element_value_157);
        Py_DECREF(tmp_args_element_value_158);
        Py_DECREF(tmp_args_element_value_159);
        Py_DECREF(tmp_args_element_value_160);
        if (tmp_called_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_161 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__22_glGetProgramResourceName();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 337;
        tmp_args_element_value_153 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_324, tmp_args_element_value_161);
        Py_DECREF(tmp_called_value_324);
        Py_DECREF(tmp_args_element_value_161);
        if (tmp_args_element_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 336;
        tmp_assign_source_295 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_323, tmp_args_element_value_153);
        Py_DECREF(tmp_args_element_value_153);
        if (tmp_assign_source_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        PyObject *tmp_called_value_326;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_called_value_327;
        PyObject *tmp_called_value_328;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_args_element_value_172;
        tmp_called_value_326 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_326 == NULL)) {
            tmp_called_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_called_value_328 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[558]);
        if (tmp_called_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = Py_None;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[559]);
        if (tmp_args_element_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[563]);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[559]);
        if (tmp_args_element_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[561]);
        if (tmp_args_element_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[572]);
        if (tmp_args_element_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[561]);
        if (tmp_args_element_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);
            Py_DECREF(tmp_args_element_value_169);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[580]);
        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);
            Py_DECREF(tmp_args_element_value_169);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);
            Py_DECREF(tmp_args_element_value_169);
            Py_DECREF(tmp_args_element_value_170);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[582]);
        if (tmp_args_element_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_328);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);
            Py_DECREF(tmp_args_element_value_169);
            Py_DECREF(tmp_args_element_value_170);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164, tmp_args_element_value_165, tmp_args_element_value_166, tmp_args_element_value_167, tmp_args_element_value_168, tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171};
            tmp_called_value_327 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_328, call_args);
        }

        Py_DECREF(tmp_called_value_328);
        Py_DECREF(tmp_args_element_value_164);
        Py_DECREF(tmp_args_element_value_165);
        Py_DECREF(tmp_args_element_value_166);
        Py_DECREF(tmp_args_element_value_167);
        Py_DECREF(tmp_args_element_value_168);
        Py_DECREF(tmp_args_element_value_169);
        Py_DECREF(tmp_args_element_value_170);
        Py_DECREF(tmp_args_element_value_171);
        if (tmp_called_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_172 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__23_glGetProgramResourceiv();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 340;
        tmp_args_element_value_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_327, tmp_args_element_value_172);
        Py_DECREF(tmp_called_value_327);
        Py_DECREF(tmp_args_element_value_172);
        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 339;
        tmp_assign_source_296 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_326, tmp_args_element_value_162);
        Py_DECREF(tmp_args_element_value_162);
        if (tmp_assign_source_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        PyObject *tmp_called_value_329;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_called_value_330;
        PyObject *tmp_called_value_331;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_args_element_value_176;
        tmp_called_value_329 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_329 == NULL)) {
            tmp_called_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_called_value_331 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[558]);
        if (tmp_called_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = Py_None;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_331);

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[559]);
        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_331);

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_called_value_330 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_331, call_args);
        }

        Py_DECREF(tmp_called_value_331);
        Py_DECREF(tmp_args_element_value_175);
        if (tmp_called_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_176 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__24_glInvalidateBufferData();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 343;
        tmp_args_element_value_173 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_330, tmp_args_element_value_176);
        Py_DECREF(tmp_called_value_330);
        Py_DECREF(tmp_args_element_value_176);
        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 342;
        tmp_assign_source_297 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_329, tmp_args_element_value_173);
        Py_DECREF(tmp_args_element_value_173);
        if (tmp_assign_source_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        PyObject *tmp_called_value_332;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_called_value_333;
        PyObject *tmp_called_value_334;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_182;
        tmp_called_value_332 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_332 == NULL)) {
            tmp_called_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_called_value_334 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[558]);
        if (tmp_called_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = Py_None;
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_334);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[559]);
        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_334);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_334);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[560]);
        if (tmp_args_element_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_334);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_334);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[566]);
        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_334);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181};
            tmp_called_value_333 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_334, call_args);
        }

        Py_DECREF(tmp_called_value_334);
        Py_DECREF(tmp_args_element_value_179);
        Py_DECREF(tmp_args_element_value_180);
        Py_DECREF(tmp_args_element_value_181);
        if (tmp_called_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_182 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__25_glInvalidateBufferSubData();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 346;
        tmp_args_element_value_177 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_333, tmp_args_element_value_182);
        Py_DECREF(tmp_called_value_333);
        Py_DECREF(tmp_args_element_value_182);
        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 345;
        tmp_assign_source_298 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_332, tmp_args_element_value_177);
        Py_DECREF(tmp_args_element_value_177);
        if (tmp_assign_source_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[597], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        PyObject *tmp_called_value_335;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_called_value_336;
        PyObject *tmp_called_value_337;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_args_element_value_188;
        tmp_called_value_335 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_335 == NULL)) {
            tmp_called_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_called_value_337 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[558]);
        if (tmp_called_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = Py_None;
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_337);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[563]);
        if (tmp_args_element_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_337);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_337);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[561]);
        if (tmp_args_element_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_337);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_337);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[572]);
        if (tmp_args_element_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_337);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = {tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187};
            tmp_called_value_336 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_337, call_args);
        }

        Py_DECREF(tmp_called_value_337);
        Py_DECREF(tmp_args_element_value_185);
        Py_DECREF(tmp_args_element_value_186);
        Py_DECREF(tmp_args_element_value_187);
        if (tmp_called_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_188 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__26_glInvalidateFramebuffer();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 349;
        tmp_args_element_value_183 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_336, tmp_args_element_value_188);
        Py_DECREF(tmp_called_value_336);
        Py_DECREF(tmp_args_element_value_188);
        if (tmp_args_element_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 348;
        tmp_assign_source_299 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_335, tmp_args_element_value_183);
        Py_DECREF(tmp_args_element_value_183);
        if (tmp_assign_source_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[598], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        PyObject *tmp_called_value_338;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_called_value_339;
        PyObject *tmp_called_value_340;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_198;
        tmp_called_value_338 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_338 == NULL)) {
            tmp_called_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_called_value_340 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[558]);
        if (tmp_called_value_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = Py_None;
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[563]);
        if (tmp_args_element_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[561]);
        if (tmp_args_element_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[572]);
        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[568]);
        if (tmp_args_element_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[568]);
        if (tmp_args_element_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);
            Py_DECREF(tmp_args_element_value_195);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[561]);
        if (tmp_args_element_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);
            Py_DECREF(tmp_args_element_value_195);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);
            Py_DECREF(tmp_args_element_value_195);
            Py_DECREF(tmp_args_element_value_196);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_197 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[561]);
        if (tmp_args_element_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_340);
            Py_DECREF(tmp_args_element_value_191);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);
            Py_DECREF(tmp_args_element_value_195);
            Py_DECREF(tmp_args_element_value_196);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_190, tmp_args_element_value_191, tmp_args_element_value_192, tmp_args_element_value_193, tmp_args_element_value_194, tmp_args_element_value_195, tmp_args_element_value_196, tmp_args_element_value_197};
            tmp_called_value_339 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_340, call_args);
        }

        Py_DECREF(tmp_called_value_340);
        Py_DECREF(tmp_args_element_value_191);
        Py_DECREF(tmp_args_element_value_192);
        Py_DECREF(tmp_args_element_value_193);
        Py_DECREF(tmp_args_element_value_194);
        Py_DECREF(tmp_args_element_value_195);
        Py_DECREF(tmp_args_element_value_196);
        Py_DECREF(tmp_args_element_value_197);
        if (tmp_called_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_198 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__27_glInvalidateSubFramebuffer();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 352;
        tmp_args_element_value_189 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_339, tmp_args_element_value_198);
        Py_DECREF(tmp_called_value_339);
        Py_DECREF(tmp_args_element_value_198);
        if (tmp_args_element_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 351;
        tmp_assign_source_300 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_338, tmp_args_element_value_189);
        Py_DECREF(tmp_args_element_value_189);
        if (tmp_assign_source_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        PyObject *tmp_called_value_341;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_called_value_342;
        PyObject *tmp_called_value_343;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_element_value_203;
        tmp_called_value_341 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_341 == NULL)) {
            tmp_called_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_called_value_343 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[558]);
        if (tmp_called_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = Py_None;
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_343);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[559]);
        if (tmp_args_element_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_343);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_343);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[568]);
        if (tmp_args_element_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_343);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_200, tmp_args_element_value_201, tmp_args_element_value_202};
            tmp_called_value_342 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_343, call_args);
        }

        Py_DECREF(tmp_called_value_343);
        Py_DECREF(tmp_args_element_value_201);
        Py_DECREF(tmp_args_element_value_202);
        if (tmp_called_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_203 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__28_glInvalidateTexImage();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 355;
        tmp_args_element_value_199 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_342, tmp_args_element_value_203);
        Py_DECREF(tmp_called_value_342);
        Py_DECREF(tmp_args_element_value_203);
        if (tmp_args_element_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 354;
        tmp_assign_source_301 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_341, tmp_args_element_value_199);
        Py_DECREF(tmp_args_element_value_199);
        if (tmp_assign_source_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        PyObject *tmp_called_value_344;
        PyObject *tmp_args_element_value_204;
        PyObject *tmp_called_value_345;
        PyObject *tmp_called_value_346;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_args_element_value_211;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_214;
        tmp_called_value_344 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_344 == NULL)) {
            tmp_called_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_called_value_346 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[558]);
        if (tmp_called_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_205 = Py_None;
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[559]);
        if (tmp_args_element_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[568]);
        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[568]);
        if (tmp_args_element_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[568]);
        if (tmp_args_element_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_210 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[568]);
        if (tmp_args_element_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);
            Py_DECREF(tmp_args_element_value_210);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_211 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[561]);
        if (tmp_args_element_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);
            Py_DECREF(tmp_args_element_value_210);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);
            Py_DECREF(tmp_args_element_value_210);
            Py_DECREF(tmp_args_element_value_211);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[561]);
        if (tmp_args_element_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);
            Py_DECREF(tmp_args_element_value_210);
            Py_DECREF(tmp_args_element_value_211);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);
            Py_DECREF(tmp_args_element_value_210);
            Py_DECREF(tmp_args_element_value_211);
            Py_DECREF(tmp_args_element_value_212);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[561]);
        if (tmp_args_element_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_346);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);
            Py_DECREF(tmp_args_element_value_210);
            Py_DECREF(tmp_args_element_value_211);
            Py_DECREF(tmp_args_element_value_212);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_205, tmp_args_element_value_206, tmp_args_element_value_207, tmp_args_element_value_208, tmp_args_element_value_209, tmp_args_element_value_210, tmp_args_element_value_211, tmp_args_element_value_212, tmp_args_element_value_213};
            tmp_called_value_345 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_346, call_args);
        }

        Py_DECREF(tmp_called_value_346);
        Py_DECREF(tmp_args_element_value_206);
        Py_DECREF(tmp_args_element_value_207);
        Py_DECREF(tmp_args_element_value_208);
        Py_DECREF(tmp_args_element_value_209);
        Py_DECREF(tmp_args_element_value_210);
        Py_DECREF(tmp_args_element_value_211);
        Py_DECREF(tmp_args_element_value_212);
        Py_DECREF(tmp_args_element_value_213);
        if (tmp_called_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_214 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__29_glInvalidateTexSubImage();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 358;
        tmp_args_element_value_204 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_345, tmp_args_element_value_214);
        Py_DECREF(tmp_called_value_345);
        Py_DECREF(tmp_args_element_value_214);
        if (tmp_args_element_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 357;
        tmp_assign_source_302 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_344, tmp_args_element_value_204);
        Py_DECREF(tmp_args_element_value_204);
        if (tmp_assign_source_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        PyObject *tmp_called_value_347;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_called_value_348;
        PyObject *tmp_called_value_349;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_args_element_value_218;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_221;
        tmp_called_value_347 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_347 == NULL)) {
            tmp_called_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_called_value_349 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[558]);
        if (tmp_called_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_216 = Py_None;
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[563]);
        if (tmp_args_element_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);
            Py_DECREF(tmp_args_element_value_217);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_218 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[564]);
        if (tmp_args_element_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);
            Py_DECREF(tmp_args_element_value_217);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);
            Py_DECREF(tmp_args_element_value_217);
            Py_DECREF(tmp_args_element_value_218);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_219 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[561]);
        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);
            Py_DECREF(tmp_args_element_value_217);
            Py_DECREF(tmp_args_element_value_218);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);
            Py_DECREF(tmp_args_element_value_217);
            Py_DECREF(tmp_args_element_value_218);
            Py_DECREF(tmp_args_element_value_219);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[561]);
        if (tmp_args_element_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_349);
            Py_DECREF(tmp_args_element_value_217);
            Py_DECREF(tmp_args_element_value_218);
            Py_DECREF(tmp_args_element_value_219);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_216, tmp_args_element_value_217, tmp_args_element_value_218, tmp_args_element_value_219, tmp_args_element_value_220};
            tmp_called_value_348 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_349, call_args);
        }

        Py_DECREF(tmp_called_value_349);
        Py_DECREF(tmp_args_element_value_217);
        Py_DECREF(tmp_args_element_value_218);
        Py_DECREF(tmp_args_element_value_219);
        Py_DECREF(tmp_args_element_value_220);
        if (tmp_called_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_221 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__30_glMultiDrawArraysIndirect();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 361;
        tmp_args_element_value_215 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_348, tmp_args_element_value_221);
        Py_DECREF(tmp_called_value_348);
        Py_DECREF(tmp_args_element_value_221);
        if (tmp_args_element_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 360;
        tmp_assign_source_303 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_347, tmp_args_element_value_215);
        Py_DECREF(tmp_args_element_value_215);
        if (tmp_assign_source_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[602], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        PyObject *tmp_called_value_350;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_called_value_351;
        PyObject *tmp_called_value_352;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_227;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_args_element_value_229;
        tmp_called_value_350 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_350 == NULL)) {
            tmp_called_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_called_value_352 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[558]);
        if (tmp_called_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_223 = Py_None;
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[563]);
        if (tmp_args_element_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_225 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[563]);
        if (tmp_args_element_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[564]);
        if (tmp_args_element_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);
            Py_DECREF(tmp_args_element_value_226);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_227 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[561]);
        if (tmp_args_element_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);
            Py_DECREF(tmp_args_element_value_226);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);
            Py_DECREF(tmp_args_element_value_226);
            Py_DECREF(tmp_args_element_value_227);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_228 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[561]);
        if (tmp_args_element_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_352);
            Py_DECREF(tmp_args_element_value_224);
            Py_DECREF(tmp_args_element_value_225);
            Py_DECREF(tmp_args_element_value_226);
            Py_DECREF(tmp_args_element_value_227);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_223, tmp_args_element_value_224, tmp_args_element_value_225, tmp_args_element_value_226, tmp_args_element_value_227, tmp_args_element_value_228};
            tmp_called_value_351 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_352, call_args);
        }

        Py_DECREF(tmp_called_value_352);
        Py_DECREF(tmp_args_element_value_224);
        Py_DECREF(tmp_args_element_value_225);
        Py_DECREF(tmp_args_element_value_226);
        Py_DECREF(tmp_args_element_value_227);
        Py_DECREF(tmp_args_element_value_228);
        if (tmp_called_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_229 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__31_glMultiDrawElementsIndirect();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 364;
        tmp_args_element_value_222 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_351, tmp_args_element_value_229);
        Py_DECREF(tmp_called_value_351);
        Py_DECREF(tmp_args_element_value_229);
        if (tmp_args_element_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 363;
        tmp_assign_source_304 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_350, tmp_args_element_value_222);
        Py_DECREF(tmp_args_element_value_222);
        if (tmp_assign_source_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        PyObject *tmp_called_value_353;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_called_value_354;
        PyObject *tmp_called_value_355;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_233;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_args_element_value_234;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_236;
        tmp_called_value_353 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_353 == NULL)) {
            tmp_called_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_called_value_355 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[558]);
        if (tmp_called_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = Py_None;
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[563]);
        if (tmp_args_element_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);
            Py_DECREF(tmp_args_element_value_232);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[559]);
        if (tmp_args_element_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);
            Py_DECREF(tmp_args_element_value_232);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);
            Py_DECREF(tmp_args_element_value_232);
            Py_DECREF(tmp_args_element_value_233);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_234 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[561]);
        if (tmp_args_element_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);
            Py_DECREF(tmp_args_element_value_232);
            Py_DECREF(tmp_args_element_value_233);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);
            Py_DECREF(tmp_args_element_value_232);
            Py_DECREF(tmp_args_element_value_233);
            Py_DECREF(tmp_args_element_value_234);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_235 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[575]);
        if (tmp_args_element_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_355);
            Py_DECREF(tmp_args_element_value_232);
            Py_DECREF(tmp_args_element_value_233);
            Py_DECREF(tmp_args_element_value_234);

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_231, tmp_args_element_value_232, tmp_args_element_value_233, tmp_args_element_value_234, tmp_args_element_value_235};
            tmp_called_value_354 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_355, call_args);
        }

        Py_DECREF(tmp_called_value_355);
        Py_DECREF(tmp_args_element_value_232);
        Py_DECREF(tmp_args_element_value_233);
        Py_DECREF(tmp_args_element_value_234);
        Py_DECREF(tmp_args_element_value_235);
        if (tmp_called_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_236 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__32_glObjectLabel();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 367;
        tmp_args_element_value_230 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_354, tmp_args_element_value_236);
        Py_DECREF(tmp_called_value_354);
        Py_DECREF(tmp_args_element_value_236);
        if (tmp_args_element_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 366;
        tmp_assign_source_305 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_353, tmp_args_element_value_230);
        Py_DECREF(tmp_args_element_value_230);
        if (tmp_assign_source_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[604], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        PyObject *tmp_called_value_356;
        PyObject *tmp_args_element_value_237;
        PyObject *tmp_called_value_357;
        PyObject *tmp_called_value_358;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_242;
        tmp_called_value_356 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_356 == NULL)) {
            tmp_called_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_called_value_358 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[558]);
        if (tmp_called_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = Py_None;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_358);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_239 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[564]);
        if (tmp_args_element_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_358);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_358);
            Py_DECREF(tmp_args_element_value_239);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_240 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[561]);
        if (tmp_args_element_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_358);
            Py_DECREF(tmp_args_element_value_239);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_358);
            Py_DECREF(tmp_args_element_value_239);
            Py_DECREF(tmp_args_element_value_240);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_241 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[575]);
        if (tmp_args_element_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_358);
            Py_DECREF(tmp_args_element_value_239);
            Py_DECREF(tmp_args_element_value_240);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_value_238, tmp_args_element_value_239, tmp_args_element_value_240, tmp_args_element_value_241};
            tmp_called_value_357 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_358, call_args);
        }

        Py_DECREF(tmp_called_value_358);
        Py_DECREF(tmp_args_element_value_239);
        Py_DECREF(tmp_args_element_value_240);
        Py_DECREF(tmp_args_element_value_241);
        if (tmp_called_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_242 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__33_glObjectPtrLabel();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 370;
        tmp_args_element_value_237 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_357, tmp_args_element_value_242);
        Py_DECREF(tmp_called_value_357);
        Py_DECREF(tmp_args_element_value_242);
        if (tmp_args_element_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 369;
        tmp_assign_source_306 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_356, tmp_args_element_value_237);
        Py_DECREF(tmp_args_element_value_237);
        if (tmp_assign_source_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        PyObject *tmp_called_value_359;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_called_value_360;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_244;
        tmp_called_value_359 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_359 == NULL)) {
            tmp_called_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 373;
        tmp_called_value_360 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[558],
            PyTuple_GET_ITEM(mod_consts[606], 0)
        );

        if (tmp_called_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_244 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__34_glPopDebugGroup();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 373;
        tmp_args_element_value_243 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_360, tmp_args_element_value_244);
        Py_DECREF(tmp_called_value_360);
        Py_DECREF(tmp_args_element_value_244);
        if (tmp_args_element_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 372;
        tmp_assign_source_307 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_359, tmp_args_element_value_243);
        Py_DECREF(tmp_args_element_value_243);
        if (tmp_assign_source_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        PyObject *tmp_called_value_361;
        PyObject *tmp_args_element_value_245;
        PyObject *tmp_called_value_362;
        PyObject *tmp_called_value_363;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_249;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_element_value_251;
        tmp_called_value_361 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_361 == NULL)) {
            tmp_called_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_called_value_363 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[558]);
        if (tmp_called_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = Py_None;
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_247 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[563]);
        if (tmp_args_element_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);
            Py_DECREF(tmp_args_element_value_247);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[559]);
        if (tmp_args_element_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);
            Py_DECREF(tmp_args_element_value_247);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_249 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[561]);
        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[575]);
        if (tmp_args_element_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_363);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = {tmp_args_element_value_246, tmp_args_element_value_247, tmp_args_element_value_248, tmp_args_element_value_249, tmp_args_element_value_250};
            tmp_called_value_362 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_363, call_args);
        }

        Py_DECREF(tmp_called_value_363);
        Py_DECREF(tmp_args_element_value_247);
        Py_DECREF(tmp_args_element_value_248);
        Py_DECREF(tmp_args_element_value_249);
        Py_DECREF(tmp_args_element_value_250);
        if (tmp_called_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_251 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__35_glPushDebugGroup();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 376;
        tmp_args_element_value_245 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_362, tmp_args_element_value_251);
        Py_DECREF(tmp_called_value_362);
        Py_DECREF(tmp_args_element_value_251);
        if (tmp_args_element_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 375;
        tmp_assign_source_308 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_361, tmp_args_element_value_245);
        Py_DECREF(tmp_args_element_value_245);
        if (tmp_assign_source_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        PyObject *tmp_called_value_364;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_called_value_365;
        PyObject *tmp_called_value_366;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_args_element_value_255;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_args_element_value_257;
        tmp_called_value_364 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_364 == NULL)) {
            tmp_called_value_364 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_called_value_366 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[558]);
        if (tmp_called_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_253 = Py_None;
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_366);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[559]);
        if (tmp_args_element_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_366);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_366);
            Py_DECREF(tmp_args_element_value_254);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[559]);
        if (tmp_args_element_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_366);
            Py_DECREF(tmp_args_element_value_254);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_366);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[559]);
        if (tmp_args_element_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_366);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = {tmp_args_element_value_253, tmp_args_element_value_254, tmp_args_element_value_255, tmp_args_element_value_256};
            tmp_called_value_365 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_366, call_args);
        }

        Py_DECREF(tmp_called_value_366);
        Py_DECREF(tmp_args_element_value_254);
        Py_DECREF(tmp_args_element_value_255);
        Py_DECREF(tmp_args_element_value_256);
        if (tmp_called_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_257 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__36_glShaderStorageBlockBinding();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 379;
        tmp_args_element_value_252 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_365, tmp_args_element_value_257);
        Py_DECREF(tmp_called_value_365);
        Py_DECREF(tmp_args_element_value_257);
        if (tmp_args_element_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 378;
        tmp_assign_source_309 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_364, tmp_args_element_value_252);
        Py_DECREF(tmp_args_element_value_252);
        if (tmp_assign_source_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        PyObject *tmp_called_value_367;
        PyObject *tmp_args_element_value_258;
        PyObject *tmp_called_value_368;
        PyObject *tmp_called_value_369;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_265;
        tmp_called_value_367 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_367 == NULL)) {
            tmp_called_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_called_value_369 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[558]);
        if (tmp_called_value_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_259 = Py_None;
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[563]);
        if (tmp_args_element_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_261 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[563]);
        if (tmp_args_element_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[559]);
        if (tmp_args_element_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_263 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[560]);
        if (tmp_args_element_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[566]);
        if (tmp_args_element_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_369);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 382;
        {
            PyObject *call_args[] = {tmp_args_element_value_259, tmp_args_element_value_260, tmp_args_element_value_261, tmp_args_element_value_262, tmp_args_element_value_263, tmp_args_element_value_264};
            tmp_called_value_368 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_369, call_args);
        }

        Py_DECREF(tmp_called_value_369);
        Py_DECREF(tmp_args_element_value_260);
        Py_DECREF(tmp_args_element_value_261);
        Py_DECREF(tmp_args_element_value_262);
        Py_DECREF(tmp_args_element_value_263);
        Py_DECREF(tmp_args_element_value_264);
        if (tmp_called_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_265 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__37_glTexBufferRange();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 382;
        tmp_args_element_value_258 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_368, tmp_args_element_value_265);
        Py_DECREF(tmp_called_value_368);
        Py_DECREF(tmp_args_element_value_265);
        if (tmp_args_element_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 381;
        tmp_assign_source_310 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_367, tmp_args_element_value_258);
        Py_DECREF(tmp_args_element_value_258);
        if (tmp_assign_source_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        PyObject *tmp_called_value_370;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_called_value_371;
        PyObject *tmp_called_value_372;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_args_element_value_271;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_args_element_value_274;
        tmp_called_value_370 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_370 == NULL)) {
            tmp_called_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_called_value_372 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[558]);
        if (tmp_called_value_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_267 = Py_None;
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[563]);
        if (tmp_args_element_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[561]);
        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[563]);
        if (tmp_args_element_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_271 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[561]);
        if (tmp_args_element_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[561]);
        if (tmp_args_element_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);
            Py_DECREF(tmp_args_element_value_272);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_273 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[573]);
        if (tmp_args_element_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_372);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);
            Py_DECREF(tmp_args_element_value_271);
            Py_DECREF(tmp_args_element_value_272);

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_267, tmp_args_element_value_268, tmp_args_element_value_269, tmp_args_element_value_270, tmp_args_element_value_271, tmp_args_element_value_272, tmp_args_element_value_273};
            tmp_called_value_371 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_372, call_args);
        }

        Py_DECREF(tmp_called_value_372);
        Py_DECREF(tmp_args_element_value_268);
        Py_DECREF(tmp_args_element_value_269);
        Py_DECREF(tmp_args_element_value_270);
        Py_DECREF(tmp_args_element_value_271);
        Py_DECREF(tmp_args_element_value_272);
        Py_DECREF(tmp_args_element_value_273);
        if (tmp_called_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_274 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__38_glTexStorage2DMultisample();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 385;
        tmp_args_element_value_266 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_371, tmp_args_element_value_274);
        Py_DECREF(tmp_called_value_371);
        Py_DECREF(tmp_args_element_value_274);
        if (tmp_args_element_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 384;
        tmp_assign_source_311 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_370, tmp_args_element_value_266);
        Py_DECREF(tmp_args_element_value_266);
        if (tmp_assign_source_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        PyObject *tmp_called_value_373;
        PyObject *tmp_args_element_value_275;
        PyObject *tmp_called_value_374;
        PyObject *tmp_called_value_375;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_args_element_value_277;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_args_element_value_278;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_args_element_value_279;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_args_element_value_282;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_args_element_value_284;
        tmp_called_value_373 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_373 == NULL)) {
            tmp_called_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_called_value_375 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[558]);
        if (tmp_called_value_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = Py_None;
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[563]);
        if (tmp_args_element_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_278 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[561]);
        if (tmp_args_element_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_208 == NULL)) {
            tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_279 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[563]);
        if (tmp_args_element_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_280 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[561]);
        if (tmp_args_element_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_281 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[561]);
        if (tmp_args_element_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);
            Py_DECREF(tmp_args_element_value_281);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_282 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[561]);
        if (tmp_args_element_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);
            Py_DECREF(tmp_args_element_value_281);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);
            Py_DECREF(tmp_args_element_value_281);
            Py_DECREF(tmp_args_element_value_282);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_283 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[573]);
        if (tmp_args_element_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_375);
            Py_DECREF(tmp_args_element_value_277);
            Py_DECREF(tmp_args_element_value_278);
            Py_DECREF(tmp_args_element_value_279);
            Py_DECREF(tmp_args_element_value_280);
            Py_DECREF(tmp_args_element_value_281);
            Py_DECREF(tmp_args_element_value_282);

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_value_276, tmp_args_element_value_277, tmp_args_element_value_278, tmp_args_element_value_279, tmp_args_element_value_280, tmp_args_element_value_281, tmp_args_element_value_282, tmp_args_element_value_283};
            tmp_called_value_374 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_375, call_args);
        }

        Py_DECREF(tmp_called_value_375);
        Py_DECREF(tmp_args_element_value_277);
        Py_DECREF(tmp_args_element_value_278);
        Py_DECREF(tmp_args_element_value_279);
        Py_DECREF(tmp_args_element_value_280);
        Py_DECREF(tmp_args_element_value_281);
        Py_DECREF(tmp_args_element_value_282);
        Py_DECREF(tmp_args_element_value_283);
        if (tmp_called_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_284 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__39_glTexStorage3DMultisample();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 388;
        tmp_args_element_value_275 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_374, tmp_args_element_value_284);
        Py_DECREF(tmp_called_value_374);
        Py_DECREF(tmp_args_element_value_284);
        if (tmp_args_element_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 387;
        tmp_assign_source_312 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_373, tmp_args_element_value_275);
        Py_DECREF(tmp_args_element_value_275);
        if (tmp_assign_source_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        PyObject *tmp_called_value_376;
        PyObject *tmp_args_element_value_285;
        PyObject *tmp_called_value_377;
        PyObject *tmp_called_value_378;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_args_element_value_288;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_args_element_value_290;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_args_element_value_293;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_args_element_value_294;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_args_element_value_295;
        tmp_called_value_376 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_376 == NULL)) {
            tmp_called_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_called_value_378 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[558]);
        if (tmp_called_value_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_286 = Py_None;
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[559]);
        if (tmp_args_element_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[563]);
        if (tmp_args_element_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_289 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[559]);
        if (tmp_args_element_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_290 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[563]);
        if (tmp_args_element_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_291 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[559]);
        if (tmp_args_element_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[559]);
        if (tmp_args_element_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_220 == NULL)) {
            tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);
            Py_DECREF(tmp_args_element_value_292);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_293 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[559]);
        if (tmp_args_element_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);
            Py_DECREF(tmp_args_element_value_292);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);
            Py_DECREF(tmp_args_element_value_292);
            Py_DECREF(tmp_args_element_value_293);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_294 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[559]);
        if (tmp_args_element_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_378);
            Py_DECREF(tmp_args_element_value_287);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);
            Py_DECREF(tmp_args_element_value_292);
            Py_DECREF(tmp_args_element_value_293);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = {tmp_args_element_value_286, tmp_args_element_value_287, tmp_args_element_value_288, tmp_args_element_value_289, tmp_args_element_value_290, tmp_args_element_value_291, tmp_args_element_value_292, tmp_args_element_value_293, tmp_args_element_value_294};
            tmp_called_value_377 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_378, call_args);
        }

        Py_DECREF(tmp_called_value_378);
        Py_DECREF(tmp_args_element_value_287);
        Py_DECREF(tmp_args_element_value_288);
        Py_DECREF(tmp_args_element_value_289);
        Py_DECREF(tmp_args_element_value_290);
        Py_DECREF(tmp_args_element_value_291);
        Py_DECREF(tmp_args_element_value_292);
        Py_DECREF(tmp_args_element_value_293);
        Py_DECREF(tmp_args_element_value_294);
        if (tmp_called_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_295 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__40_glTextureView();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 391;
        tmp_args_element_value_285 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_377, tmp_args_element_value_295);
        Py_DECREF(tmp_called_value_377);
        Py_DECREF(tmp_args_element_value_295);
        if (tmp_args_element_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 390;
        tmp_assign_source_313 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_376, tmp_args_element_value_285);
        Py_DECREF(tmp_args_element_value_285);
        if (tmp_assign_source_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        PyObject *tmp_called_value_379;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_called_value_380;
        PyObject *tmp_called_value_381;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_args_element_value_298;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_args_element_value_299;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_args_element_value_300;
        tmp_called_value_379 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_379 == NULL)) {
            tmp_called_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_called_value_381 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[558]);
        if (tmp_called_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = Py_None;
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_381);

            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_298 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[559]);
        if (tmp_args_element_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_381);

            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_381);
            Py_DECREF(tmp_args_element_value_298);

            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_299 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[559]);
        if (tmp_args_element_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_381);
            Py_DECREF(tmp_args_element_value_298);

            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_value_297, tmp_args_element_value_298, tmp_args_element_value_299};
            tmp_called_value_380 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_381, call_args);
        }

        Py_DECREF(tmp_called_value_381);
        Py_DECREF(tmp_args_element_value_298);
        Py_DECREF(tmp_args_element_value_299);
        if (tmp_called_value_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_300 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__41_glVertexAttribBinding();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 394;
        tmp_args_element_value_296 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_380, tmp_args_element_value_300);
        Py_DECREF(tmp_called_value_380);
        Py_DECREF(tmp_args_element_value_300);
        if (tmp_args_element_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 393;
        tmp_assign_source_314 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_379, tmp_args_element_value_296);
        Py_DECREF(tmp_args_element_value_296);
        if (tmp_assign_source_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[614], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        PyObject *tmp_called_value_382;
        PyObject *tmp_args_element_value_301;
        PyObject *tmp_called_value_383;
        PyObject *tmp_called_value_384;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_args_element_value_303;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_args_element_value_306;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_args_element_value_308;
        tmp_called_value_382 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_382 == NULL)) {
            tmp_called_value_382 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_called_value_384 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[558]);
        if (tmp_called_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_302 = Py_None;
        tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_226 == NULL)) {
            tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[559]);
        if (tmp_args_element_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[568]);
        if (tmp_args_element_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_228 == NULL)) {
            tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_305 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[563]);
        if (tmp_args_element_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_306 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[573]);
        if (tmp_args_element_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_307 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[559]);
        if (tmp_args_element_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_384);
            Py_DECREF(tmp_args_element_value_303);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_302, tmp_args_element_value_303, tmp_args_element_value_304, tmp_args_element_value_305, tmp_args_element_value_306, tmp_args_element_value_307};
            tmp_called_value_383 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_384, call_args);
        }

        Py_DECREF(tmp_called_value_384);
        Py_DECREF(tmp_args_element_value_303);
        Py_DECREF(tmp_args_element_value_304);
        Py_DECREF(tmp_args_element_value_305);
        Py_DECREF(tmp_args_element_value_306);
        Py_DECREF(tmp_args_element_value_307);
        if (tmp_called_value_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_308 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__42_glVertexAttribFormat();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 397;
        tmp_args_element_value_301 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_383, tmp_args_element_value_308);
        Py_DECREF(tmp_called_value_383);
        Py_DECREF(tmp_args_element_value_308);
        if (tmp_args_element_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 396;
        tmp_assign_source_315 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_382, tmp_args_element_value_301);
        Py_DECREF(tmp_args_element_value_301);
        if (tmp_assign_source_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        PyObject *tmp_called_value_385;
        PyObject *tmp_args_element_value_309;
        PyObject *tmp_called_value_386;
        PyObject *tmp_called_value_387;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_args_element_value_313;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_args_element_value_314;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_args_element_value_315;
        tmp_called_value_385 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_385 == NULL)) {
            tmp_called_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_called_value_387 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[558]);
        if (tmp_called_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_310 = Py_None;
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_311 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[559]);
        if (tmp_args_element_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);
            Py_DECREF(tmp_args_element_value_311);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_312 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[568]);
        if (tmp_args_element_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);
            Py_DECREF(tmp_args_element_value_311);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);
            Py_DECREF(tmp_args_element_value_311);
            Py_DECREF(tmp_args_element_value_312);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_313 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[563]);
        if (tmp_args_element_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);
            Py_DECREF(tmp_args_element_value_311);
            Py_DECREF(tmp_args_element_value_312);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);
            Py_DECREF(tmp_args_element_value_311);
            Py_DECREF(tmp_args_element_value_312);
            Py_DECREF(tmp_args_element_value_313);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_314 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[559]);
        if (tmp_args_element_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_387);
            Py_DECREF(tmp_args_element_value_311);
            Py_DECREF(tmp_args_element_value_312);
            Py_DECREF(tmp_args_element_value_313);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_310, tmp_args_element_value_311, tmp_args_element_value_312, tmp_args_element_value_313, tmp_args_element_value_314};
            tmp_called_value_386 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_387, call_args);
        }

        Py_DECREF(tmp_called_value_387);
        Py_DECREF(tmp_args_element_value_311);
        Py_DECREF(tmp_args_element_value_312);
        Py_DECREF(tmp_args_element_value_313);
        Py_DECREF(tmp_args_element_value_314);
        if (tmp_called_value_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_315 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__43_glVertexAttribIFormat();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 400;
        tmp_args_element_value_309 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_386, tmp_args_element_value_315);
        Py_DECREF(tmp_called_value_386);
        Py_DECREF(tmp_args_element_value_315);
        if (tmp_args_element_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 399;
        tmp_assign_source_316 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_385, tmp_args_element_value_309);
        Py_DECREF(tmp_args_element_value_309);
        if (tmp_assign_source_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        PyObject *tmp_called_value_388;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_called_value_389;
        PyObject *tmp_called_value_390;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_args_element_value_317;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_args_element_value_319;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_args_element_value_322;
        tmp_called_value_388 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_388 == NULL)) {
            tmp_called_value_388 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_236 == NULL)) {
            tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_called_value_390 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[558]);
        if (tmp_called_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_317 = Py_None;
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_318 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[559]);
        if (tmp_args_element_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);
            Py_DECREF(tmp_args_element_value_318);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[568]);
        if (tmp_args_element_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);
            Py_DECREF(tmp_args_element_value_318);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_239 == NULL)) {
            tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_320 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[563]);
        if (tmp_args_element_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_240 == NULL)) {
            tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);
            Py_DECREF(tmp_args_element_value_320);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_321 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[559]);
        if (tmp_args_element_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_390);
            Py_DECREF(tmp_args_element_value_318);
            Py_DECREF(tmp_args_element_value_319);
            Py_DECREF(tmp_args_element_value_320);

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_317, tmp_args_element_value_318, tmp_args_element_value_319, tmp_args_element_value_320, tmp_args_element_value_321};
            tmp_called_value_389 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_390, call_args);
        }

        Py_DECREF(tmp_called_value_390);
        Py_DECREF(tmp_args_element_value_318);
        Py_DECREF(tmp_args_element_value_319);
        Py_DECREF(tmp_args_element_value_320);
        Py_DECREF(tmp_args_element_value_321);
        if (tmp_called_value_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_322 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__44_glVertexAttribLFormat();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 403;
        tmp_args_element_value_316 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_389, tmp_args_element_value_322);
        Py_DECREF(tmp_called_value_389);
        Py_DECREF(tmp_args_element_value_322);
        if (tmp_args_element_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 402;
        tmp_assign_source_317 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_388, tmp_args_element_value_316);
        Py_DECREF(tmp_args_element_value_316);
        if (tmp_assign_source_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        PyObject *tmp_called_value_391;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_called_value_392;
        PyObject *tmp_called_value_393;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_args_element_value_325;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_args_element_value_327;
        tmp_called_value_391 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_391 == NULL)) {
            tmp_called_value_391 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_called_value_393 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[558]);
        if (tmp_called_value_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_324 = Py_None;
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_393);

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_325 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[559]);
        if (tmp_args_element_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_393);

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_393);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_326 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[559]);
        if (tmp_args_element_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_393);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_324, tmp_args_element_value_325, tmp_args_element_value_326};
            tmp_called_value_392 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_393, call_args);
        }

        Py_DECREF(tmp_called_value_393);
        Py_DECREF(tmp_args_element_value_325);
        Py_DECREF(tmp_args_element_value_326);
        if (tmp_called_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_327 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_3$$$function__45_glVertexBindingDivisor();

        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 406;
        tmp_args_element_value_323 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_392, tmp_args_element_value_327);
        Py_DECREF(tmp_called_value_392);
        Py_DECREF(tmp_args_element_value_327);
        if (tmp_args_element_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        frame_9c6214796bc2dd83a42a9279097e1b23->m_frame.f_lineno = 405;
        tmp_assign_source_318 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_391, tmp_args_element_value_323);
        Py_DECREF(tmp_args_element_value_323);
        if (tmp_assign_source_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_318);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c6214796bc2dd83a42a9279097e1b23);
#endif
    popFrameStack();

    assertFrameObject(frame_9c6214796bc2dd83a42a9279097e1b23);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c6214796bc2dd83a42a9279097e1b23);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c6214796bc2dd83a42a9279097e1b23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c6214796bc2dd83a42a9279097e1b23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c6214796bc2dd83a42a9279097e1b23, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GL.VERSION.GL_4_3", false);

    return module_OpenGL$raw$GL$VERSION$GL_4_3;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_3, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GL$VERSION$GL_4_3", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
