/* Generated code for Python module 'OpenGL.raw.GL.VERSION.GL_4_0'
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

/* The "module_OpenGL$raw$GL$VERSION$GL_4_0" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GL$VERSION$GL_4_0;
PyDictObject *moduledict_OpenGL$raw$GL$VERSION$GL_4_0;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[286];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[286];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GL.VERSION.GL_4_0"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 286; i++) {
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
void checkModuleConstants_OpenGL$raw$GL$VERSION$GL_4_0(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 286; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_027986846714becc0cdcc332dc20cb37;
static PyCodeObject *codeobj_e252989265d6a668750bcf9464793081;
static PyCodeObject *codeobj_d08b746ca22dbc2e7093d794b744b8db;
static PyCodeObject *codeobj_266d67ca4845304fb5da3926aff8a425;
static PyCodeObject *codeobj_71099181bed7d489caa425a17ec805f5;
static PyCodeObject *codeobj_0a726da35b4f04d570e036ee7a1370ea;
static PyCodeObject *codeobj_250cbb180b052cb95ffbadf325a6e1e0;
static PyCodeObject *codeobj_f1ef7e5af22a6f58566319398668403a;
static PyCodeObject *codeobj_7f8fa59bed390e1526f2a27e7c26c69e;
static PyCodeObject *codeobj_21a19e18012d16749fc99ba53b42dd3a;
static PyCodeObject *codeobj_933e36ef279ce71289d8e1ac003747b1;
static PyCodeObject *codeobj_e8fbbf1137bf1859d75cbaa1bee0ab6d;
static PyCodeObject *codeobj_8cd6796af265d11348fae262de047916;
static PyCodeObject *codeobj_eef2a974aff226e8447911716ef96e42;
static PyCodeObject *codeobj_7f0fc58b87e5a6648a7972b3e6859cec;
static PyCodeObject *codeobj_7414525f6c26290d47bb2cad755a2657;
static PyCodeObject *codeobj_c6adaa788f1a211b93a539b14454fb48;
static PyCodeObject *codeobj_3358005f5f250f48463158f197fd9c9f;
static PyCodeObject *codeobj_99b778b1f973a26df29f58acb4eb0575;
static PyCodeObject *codeobj_fb0b32ea3e5d24b224ea55401c9ce096;
static PyCodeObject *codeobj_f1144e9b5f6e90dff29cdd32d2bcc307;
static PyCodeObject *codeobj_4c41ca3c889b4dd370ebe7bb0ae34152;
static PyCodeObject *codeobj_5e3a65bbd81dde72a240ef447ace4a29;
static PyCodeObject *codeobj_1b25c81a3b2a3089775d3193a5781566;
static PyCodeObject *codeobj_c23198c981e8cc6c15367d005d9e5483;
static PyCodeObject *codeobj_872f10e0e0932887493fa2c4bc4a2fc1;
static PyCodeObject *codeobj_7af833d73fcc88d4edac8b0a2f56572c;
static PyCodeObject *codeobj_067015bbe6b5cab0e737cb1abcad1b99;
static PyCodeObject *codeobj_cc613a0017d448c904ce5a6338218d4d;
static PyCodeObject *codeobj_e409ff47f7ba19f5cff5262d282bfb37;
static PyCodeObject *codeobj_504b81c50b24505c7403209432e7a55c;
static PyCodeObject *codeobj_43b030742899ec19f84a6682c73182c9;
static PyCodeObject *codeobj_cdf0d6cd7d9402b7aa32cd8830e767ed;
static PyCodeObject *codeobj_9e590c2d8a3ab05173249a7b113795b1;
static PyCodeObject *codeobj_e64d50149c2433f3bf6e690e47fe3c17;
static PyCodeObject *codeobj_140b781d4b74dd2fa1e4ce6fc630a53e;
static PyCodeObject *codeobj_ec2e49a04683ef7be4be2b309bb80181;
static PyCodeObject *codeobj_5899b2887a0e0fec218075fd7151ecce;
static PyCodeObject *codeobj_825405c64de1f1d0d5d37d9f3520e515;
static PyCodeObject *codeobj_c84534ab22b9c3b91c46d0b0338297b6;
static PyCodeObject *codeobj_883dbcc87beefcf0b27cb0ac94247e84;
static PyCodeObject *codeobj_f98dc920c45567d3dbce678d4f1f4fe5;
static PyCodeObject *codeobj_4f041606fc2594d48df570b97a0d9126;
static PyCodeObject *codeobj_85b677e27d76c6c92c7ecfb985598f77;
static PyCodeObject *codeobj_07389f13621248278e8b74833382dd60;
static PyCodeObject *codeobj_0e23591247d27cc4fdd3e4f50140d11f;
static PyCodeObject *codeobj_3f1527adc3a383bcd4c3dcf7ed392c71;
static PyCodeObject *codeobj_0c34a9c49bd29dad629fde9cd4076c5f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[252]); CHECK_OBJECT(module_filename_obj);
    codeobj_027986846714becc0cdcc332dc20cb37 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[253], NULL, NULL, 0, 0, 0);
    codeobj_e252989265d6a668750bcf9464793081 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[254], NULL, 1, 0, 0);
    codeobj_d08b746ca22dbc2e7093d794b744b8db = MAKE_CODEOBJECT(module_filename_obj, 95, CO_NOFREE, mod_consts[193], mod_consts[255], NULL, 3, 0, 0);
    codeobj_266d67ca4845304fb5da3926aff8a425 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_NOFREE, mod_consts[194], mod_consts[256], NULL, 2, 0, 0);
    codeobj_71099181bed7d489caa425a17ec805f5 = MAKE_CODEOBJECT(module_filename_obj, 101, CO_NOFREE, mod_consts[195], mod_consts[257], NULL, 3, 0, 0);
    codeobj_0a726da35b4f04d570e036ee7a1370ea = MAKE_CODEOBJECT(module_filename_obj, 104, CO_NOFREE, mod_consts[196], mod_consts[258], NULL, 2, 0, 0);
    codeobj_250cbb180b052cb95ffbadf325a6e1e0 = MAKE_CODEOBJECT(module_filename_obj, 107, CO_NOFREE, mod_consts[197], mod_consts[259], NULL, 5, 0, 0);
    codeobj_f1ef7e5af22a6f58566319398668403a = MAKE_CODEOBJECT(module_filename_obj, 110, CO_NOFREE, mod_consts[198], mod_consts[260], NULL, 3, 0, 0);
    codeobj_7f8fa59bed390e1526f2a27e7c26c69e = MAKE_CODEOBJECT(module_filename_obj, 113, CO_NOFREE, mod_consts[201], mod_consts[261], NULL, 2, 0, 0);
    codeobj_21a19e18012d16749fc99ba53b42dd3a = MAKE_CODEOBJECT(module_filename_obj, 116, CO_NOFREE, mod_consts[203], mod_consts[262], NULL, 2, 0, 0);
    codeobj_933e36ef279ce71289d8e1ac003747b1 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_NOFREE, mod_consts[204], mod_consts[263], NULL, 3, 0, 0);
    codeobj_e8fbbf1137bf1859d75cbaa1bee0ab6d = MAKE_CODEOBJECT(module_filename_obj, 122, CO_NOFREE, mod_consts[205], mod_consts[264], NULL, 2, 0, 0);
    codeobj_8cd6796af265d11348fae262de047916 = MAKE_CODEOBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[206], mod_consts[265], NULL, 3, 0, 0);
    codeobj_eef2a974aff226e8447911716ef96e42 = MAKE_CODEOBJECT(module_filename_obj, 128, CO_NOFREE, mod_consts[207], mod_consts[266], NULL, 2, 0, 0);
    codeobj_7f0fc58b87e5a6648a7972b3e6859cec = MAKE_CODEOBJECT(module_filename_obj, 131, CO_NOFREE, mod_consts[208], mod_consts[261], NULL, 2, 0, 0);
    codeobj_7414525f6c26290d47bb2cad755a2657 = MAKE_CODEOBJECT(module_filename_obj, 134, CO_NOFREE, mod_consts[211], mod_consts[267], NULL, 6, 0, 0);
    codeobj_c6adaa788f1a211b93a539b14454fb48 = MAKE_CODEOBJECT(module_filename_obj, 137, CO_NOFREE, mod_consts[212], mod_consts[267], NULL, 6, 0, 0);
    codeobj_3358005f5f250f48463158f197fd9c9f = MAKE_CODEOBJECT(module_filename_obj, 140, CO_NOFREE, mod_consts[214], mod_consts[268], NULL, 5, 0, 0);
    codeobj_99b778b1f973a26df29f58acb4eb0575 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_NOFREE, mod_consts[215], mod_consts[269], NULL, 4, 0, 0);
    codeobj_fb0b32ea3e5d24b224ea55401c9ce096 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_NOFREE, mod_consts[216], mod_consts[270], NULL, 4, 0, 0);
    codeobj_f1144e9b5f6e90dff29cdd32d2bcc307 = MAKE_CODEOBJECT(module_filename_obj, 149, CO_NOFREE, mod_consts[217], mod_consts[271], NULL, 3, 0, 0);
    codeobj_4c41ca3c889b4dd370ebe7bb0ae34152 = MAKE_CODEOBJECT(module_filename_obj, 152, CO_NOFREE, mod_consts[219], mod_consts[271], NULL, 3, 0, 0);
    codeobj_5e3a65bbd81dde72a240ef447ace4a29 = MAKE_CODEOBJECT(module_filename_obj, 155, CO_NOFREE, mod_consts[220], mod_consts[272], NULL, 3, 0, 0);
    codeobj_1b25c81a3b2a3089775d3193a5781566 = MAKE_CODEOBJECT(module_filename_obj, 158, CO_NOFREE, mod_consts[222], mod_consts[273], NULL, 3, 0, 0);
    codeobj_c23198c981e8cc6c15367d005d9e5483 = MAKE_CODEOBJECT(module_filename_obj, 161, CO_NOFREE, mod_consts[224], mod_consts[274], NULL, 1, 0, 0);
    codeobj_872f10e0e0932887493fa2c4bc4a2fc1 = MAKE_CODEOBJECT(module_filename_obj, 164, CO_NOFREE, mod_consts[226], mod_consts[275], NULL, 1, 0, 0);
    codeobj_7af833d73fcc88d4edac8b0a2f56572c = MAKE_CODEOBJECT(module_filename_obj, 167, CO_NOFREE, mod_consts[228], mod_consts[276], NULL, 2, 0, 0);
    codeobj_067015bbe6b5cab0e737cb1abcad1b99 = MAKE_CODEOBJECT(module_filename_obj, 170, CO_NOFREE, mod_consts[229], mod_consts[277], NULL, 2, 0, 0);
    codeobj_cc613a0017d448c904ce5a6338218d4d = MAKE_CODEOBJECT(module_filename_obj, 173, CO_NOFREE, mod_consts[231], NULL, NULL, 0, 0, 0);
    codeobj_e409ff47f7ba19f5cff5262d282bfb37 = MAKE_CODEOBJECT(module_filename_obj, 176, CO_NOFREE, mod_consts[232], NULL, NULL, 0, 0, 0);
    codeobj_504b81c50b24505c7403209432e7a55c = MAKE_CODEOBJECT(module_filename_obj, 179, CO_NOFREE, mod_consts[234], mod_consts[278], NULL, 2, 0, 0);
    codeobj_43b030742899ec19f84a6682c73182c9 = MAKE_CODEOBJECT(module_filename_obj, 182, CO_NOFREE, mod_consts[235], mod_consts[279], NULL, 3, 0, 0);
    codeobj_cdf0d6cd7d9402b7aa32cd8830e767ed = MAKE_CODEOBJECT(module_filename_obj, 185, CO_NOFREE, mod_consts[236], mod_consts[280], NULL, 3, 0, 0);
    codeobj_9e590c2d8a3ab05173249a7b113795b1 = MAKE_CODEOBJECT(module_filename_obj, 188, CO_NOFREE, mod_consts[237], mod_consts[279], NULL, 3, 0, 0);
    codeobj_e64d50149c2433f3bf6e690e47fe3c17 = MAKE_CODEOBJECT(module_filename_obj, 191, CO_NOFREE, mod_consts[238], mod_consts[281], NULL, 4, 0, 0);
    codeobj_140b781d4b74dd2fa1e4ce6fc630a53e = MAKE_CODEOBJECT(module_filename_obj, 194, CO_NOFREE, mod_consts[239], mod_consts[279], NULL, 3, 0, 0);
    codeobj_ec2e49a04683ef7be4be2b309bb80181 = MAKE_CODEOBJECT(module_filename_obj, 197, CO_NOFREE, mod_consts[240], mod_consts[282], NULL, 5, 0, 0);
    codeobj_5899b2887a0e0fec218075fd7151ecce = MAKE_CODEOBJECT(module_filename_obj, 200, CO_NOFREE, mod_consts[241], mod_consts[279], NULL, 3, 0, 0);
    codeobj_825405c64de1f1d0d5d37d9f3520e515 = MAKE_CODEOBJECT(module_filename_obj, 203, CO_NOFREE, mod_consts[242], mod_consts[283], NULL, 4, 0, 0);
    codeobj_c84534ab22b9c3b91c46d0b0338297b6 = MAKE_CODEOBJECT(module_filename_obj, 206, CO_NOFREE, mod_consts[243], mod_consts[283], NULL, 4, 0, 0);
    codeobj_883dbcc87beefcf0b27cb0ac94247e84 = MAKE_CODEOBJECT(module_filename_obj, 209, CO_NOFREE, mod_consts[244], mod_consts[283], NULL, 4, 0, 0);
    codeobj_f98dc920c45567d3dbce678d4f1f4fe5 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_NOFREE, mod_consts[245], mod_consts[283], NULL, 4, 0, 0);
    codeobj_4f041606fc2594d48df570b97a0d9126 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_NOFREE, mod_consts[246], mod_consts[283], NULL, 4, 0, 0);
    codeobj_85b677e27d76c6c92c7ecfb985598f77 = MAKE_CODEOBJECT(module_filename_obj, 218, CO_NOFREE, mod_consts[247], mod_consts[283], NULL, 4, 0, 0);
    codeobj_07389f13621248278e8b74833382dd60 = MAKE_CODEOBJECT(module_filename_obj, 221, CO_NOFREE, mod_consts[248], mod_consts[283], NULL, 4, 0, 0);
    codeobj_0e23591247d27cc4fdd3e4f50140d11f = MAKE_CODEOBJECT(module_filename_obj, 224, CO_NOFREE, mod_consts[249], mod_consts[283], NULL, 4, 0, 0);
    codeobj_3f1527adc3a383bcd4c3dcf7ed392c71 = MAKE_CODEOBJECT(module_filename_obj, 227, CO_NOFREE, mod_consts[250], mod_consts[283], NULL, 4, 0, 0);
    codeobj_0c34a9c49bd29dad629fde9cd4076c5f = MAKE_CODEOBJECT(module_filename_obj, 230, CO_NOFREE, mod_consts[251], mod_consts[284], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__10_glDrawElementsIndirect();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__11_glDrawTransformFeedback();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__12_glDrawTransformFeedbackStream();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__13_glEndQueryIndexed();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__14_glGenTransformFeedbacks();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__15_glGetActiveSubroutineName();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__16_glGetActiveSubroutineUniformName();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__17_glGetActiveSubroutineUniformiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__18_glGetProgramStageiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__19_glGetQueryIndexediv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__1__f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__20_glGetSubroutineIndex();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__21_glGetSubroutineUniformLocation();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__22_glGetUniformSubroutineuiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__23_glGetUniformdv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__24_glIsTransformFeedback();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__25_glMinSampleShading();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__26_glPatchParameterfv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__27_glPatchParameteri();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__28_glPauseTransformFeedback();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__29_glResumeTransformFeedback();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__2_glBeginQueryIndexed();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__30_glUniform1d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__31_glUniform1dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__32_glUniform2d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__33_glUniform2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__34_glUniform3d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__35_glUniform3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__36_glUniform4d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__37_glUniform4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__38_glUniformMatrix2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__39_glUniformMatrix2x3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__3_glBindTransformFeedback();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__40_glUniformMatrix2x4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__41_glUniformMatrix3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__42_glUniformMatrix3x2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__43_glUniformMatrix3x4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__44_glUniformMatrix4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__45_glUniformMatrix4x2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__46_glUniformMatrix4x3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__47_glUniformSubroutinesuiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__4_glBlendEquationSeparatei();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__5_glBlendEquationi();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__6_glBlendFuncSeparatei();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__7_glBlendFunci();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__8_glDeleteTransformFeedbacks();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__9_glDrawArraysIndirect();


// The module function definitions.
static PyObject *impl_OpenGL$raw$GL$VERSION$GL_4_0$$$function__1__f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[0];
    struct Nuitka_FrameObject *frame_e252989265d6a668750bcf9464793081;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e252989265d6a668750bcf9464793081 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e252989265d6a668750bcf9464793081)) {
        Py_XDECREF(cache_frame_e252989265d6a668750bcf9464793081);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e252989265d6a668750bcf9464793081 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e252989265d6a668750bcf9464793081 = MAKE_FUNCTION_FRAME(codeobj_e252989265d6a668750bcf9464793081, module_OpenGL$raw$GL$VERSION$GL_4_0, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e252989265d6a668750bcf9464793081->m_type_description == NULL);
    frame_e252989265d6a668750bcf9464793081 = cache_frame_e252989265d6a668750bcf9464793081;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e252989265d6a668750bcf9464793081);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e252989265d6a668750bcf9464793081) == 2); // Frame stack

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[5]);

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
        frame_e252989265d6a668750bcf9464793081->m_frame.f_lineno = 13;
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
    RESTORE_FRAME_EXCEPTION(frame_e252989265d6a668750bcf9464793081);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e252989265d6a668750bcf9464793081);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e252989265d6a668750bcf9464793081);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e252989265d6a668750bcf9464793081, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e252989265d6a668750bcf9464793081->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e252989265d6a668750bcf9464793081, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e252989265d6a668750bcf9464793081,
        type_description_1,
        par_function
    );


    // Release cached frame if used for exception.
    if (frame_e252989265d6a668750bcf9464793081 == cache_frame_e252989265d6a668750bcf9464793081) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e252989265d6a668750bcf9464793081);
        cache_frame_e252989265d6a668750bcf9464793081 = NULL;
    }

    assertFrameObject(frame_e252989265d6a668750bcf9464793081);

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



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__10_glDrawElementsIndirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_933e36ef279ce71289d8e1ac003747b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__11_glDrawTransformFeedback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e8fbbf1137bf1859d75cbaa1bee0ab6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__12_glDrawTransformFeedbackStream() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8cd6796af265d11348fae262de047916,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__13_glEndQueryIndexed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eef2a974aff226e8447911716ef96e42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__14_glGenTransformFeedbacks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f0fc58b87e5a6648a7972b3e6859cec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__15_glGetActiveSubroutineName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7414525f6c26290d47bb2cad755a2657,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__16_glGetActiveSubroutineUniformName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6adaa788f1a211b93a539b14454fb48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__17_glGetActiveSubroutineUniformiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3358005f5f250f48463158f197fd9c9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__18_glGetProgramStageiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_99b778b1f973a26df29f58acb4eb0575,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__19_glGetQueryIndexediv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb0b32ea3e5d24b224ea55401c9ce096,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__1__f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenGL$raw$GL$VERSION$GL_4_0$$$function__1__f,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e252989265d6a668750bcf9464793081,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__20_glGetSubroutineIndex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[217],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1144e9b5f6e90dff29cdd32d2bcc307,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__21_glGetSubroutineUniformLocation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[219],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c41ca3c889b4dd370ebe7bb0ae34152,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__22_glGetUniformSubroutineuiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e3a65bbd81dde72a240ef447ace4a29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__23_glGetUniformdv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b25c81a3b2a3089775d3193a5781566,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__24_glIsTransformFeedback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c23198c981e8cc6c15367d005d9e5483,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__25_glMinSampleShading() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_872f10e0e0932887493fa2c4bc4a2fc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__26_glPatchParameterfv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7af833d73fcc88d4edac8b0a2f56572c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__27_glPatchParameteri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_067015bbe6b5cab0e737cb1abcad1b99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__28_glPauseTransformFeedback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc613a0017d448c904ce5a6338218d4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__29_glResumeTransformFeedback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e409ff47f7ba19f5cff5262d282bfb37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__2_glBeginQueryIndexed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d08b746ca22dbc2e7093d794b744b8db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__30_glUniform1d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_504b81c50b24505c7403209432e7a55c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__31_glUniform1dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43b030742899ec19f84a6682c73182c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__32_glUniform2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdf0d6cd7d9402b7aa32cd8830e767ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__33_glUniform2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e590c2d8a3ab05173249a7b113795b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__34_glUniform3d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e64d50149c2433f3bf6e690e47fe3c17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__35_glUniform3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_140b781d4b74dd2fa1e4ce6fc630a53e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__36_glUniform4d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec2e49a04683ef7be4be2b309bb80181,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__37_glUniform4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5899b2887a0e0fec218075fd7151ecce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__38_glUniformMatrix2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_825405c64de1f1d0d5d37d9f3520e515,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__39_glUniformMatrix2x3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c84534ab22b9c3b91c46d0b0338297b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__3_glBindTransformFeedback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_266d67ca4845304fb5da3926aff8a425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__40_glUniformMatrix2x4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_883dbcc87beefcf0b27cb0ac94247e84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__41_glUniformMatrix3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[245],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f98dc920c45567d3dbce678d4f1f4fe5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__42_glUniformMatrix3x2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[246],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f041606fc2594d48df570b97a0d9126,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__43_glUniformMatrix3x4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[247],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_85b677e27d76c6c92c7ecfb985598f77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__44_glUniformMatrix4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_07389f13621248278e8b74833382dd60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__45_glUniformMatrix4x2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[249],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e23591247d27cc4fdd3e4f50140d11f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__46_glUniformMatrix4x3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f1527adc3a383bcd4c3dcf7ed392c71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__47_glUniformSubroutinesuiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[251],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c34a9c49bd29dad629fde9cd4076c5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__4_glBlendEquationSeparatei() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_71099181bed7d489caa425a17ec805f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__5_glBlendEquationi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a726da35b4f04d570e036ee7a1370ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__6_glBlendFuncSeparatei() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_250cbb180b052cb95ffbadf325a6e1e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__7_glBlendFunci() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1ef7e5af22a6f58566319398668403a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__8_glDeleteTransformFeedbacks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f8fa59bed390e1526f2a27e7c26c69e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__9_glDrawArraysIndirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_21a19e18012d16749fc99ba53b42dd3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_0,
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

function_impl_code functable_OpenGL$raw$GL$VERSION$GL_4_0[] = {
    impl_OpenGL$raw$GL$VERSION$GL_4_0$$$function__1__f,
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

    function_impl_code *current = functable_OpenGL$raw$GL$VERSION$GL_4_0;
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

    if (offset > sizeof(functable_OpenGL$raw$GL$VERSION$GL_4_0) || offset < 0) {
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
        functable_OpenGL$raw$GL$VERSION$GL_4_0[offset],
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
        module_OpenGL$raw$GL$VERSION$GL_4_0,
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
PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_0(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GL.VERSION.GL_4_0");

    // Store the module for future use.
    module_OpenGL$raw$GL$VERSION$GL_4_0 = module;

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
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_0: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_0: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_0: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GL$VERSION$GL_4_0\n");

    moduledict_OpenGL$raw$GL$VERSION$GL_4_0 = MODULE_DICT(module_OpenGL$raw$GL$VERSION$GL_4_0);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[285]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GL$VERSION$GL_4_0);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GL$VERSION$GL_4_0);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_027986846714becc0cdcc332dc20cb37;
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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_027986846714becc0cdcc332dc20cb37 = MAKE_MODULE_FRAME(codeobj_027986846714becc0cdcc332dc20cb37, module_OpenGL$raw$GL$VERSION$GL_4_0);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_027986846714becc0cdcc332dc20cb37);
    assert(Py_REFCNT(frame_027986846714becc0cdcc332dc20cb37) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[11]);

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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[17];
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GL$VERSION$GL_4_0, true, tmp_star_imported_1);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[26];
        tmp_level_value_4 = mod_consts[17];
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[28];
        tmp_level_value_5 = mod_consts[17];
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_0;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[17];
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__1__f();

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 15;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[36]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 16;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[38]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[40]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 19;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[44]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[46]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[48]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 22;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[50]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 23;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[52]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 24;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[54]);

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 25;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[56]);

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 26;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[58]);

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 27;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[60]);

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[62]);

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 29;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[64]);

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 30;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[66]);

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 31;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[68]);

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 32;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[70]);

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 33;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[72]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 34;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[74]);

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 35;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[76]);

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 36;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[78]);

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 37;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[80]);

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 38;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[82]);

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 39;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[84]);

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 40;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[86]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 41;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[88]);

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 42;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[90]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 43;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[92]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 44;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[94]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 45;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[96]);

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 46;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[98]);

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 47;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[100]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 48;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[102]);

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 49;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[104]);

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 50;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[106]);

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 51;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_38, mod_consts[108]);

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 52;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[110]);

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 53;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_40, mod_consts[112]);

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 54;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[114]);

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 55;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[116]);

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 56;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[118]);

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 57;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_44, mod_consts[120]);

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 58;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[122]);

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 59;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_46, mod_consts[124]);

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 60;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_47, mod_consts[126]);

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 61;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[128]);

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 62;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[130]);

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 63;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[130]);

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 64;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[132]);

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_52;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 65;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_52, mod_consts[134]);

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 66;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[136]);

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_54;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 67;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_54, mod_consts[138]);

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_55;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 68;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[140]);

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 69;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_56, mod_consts[142]);

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 70;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_57, mod_consts[144]);

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_58;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 71;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_58, mod_consts[146]);

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 72;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_59, mod_consts[148]);

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 73;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_60, mod_consts[150]);

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_61;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 74;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_61, mod_consts[152]);

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 75;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_62, mod_consts[154]);

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 76;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_63, mod_consts[156]);

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_64;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 77;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_64, mod_consts[158]);

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 78;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_65, mod_consts[160]);

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 79;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_66, mod_consts[162]);

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_67;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 80;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[164]);

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_68;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 81;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_68, mod_consts[166]);

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_69;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 82;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_69, mod_consts[168]);

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_70;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 83;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_70, mod_consts[170]);

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_71;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 84;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[172]);

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_72;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 85;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_72, mod_consts[174]);

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_73;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 86;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_73, mod_consts[176]);

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_74;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 87;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_74, mod_consts[178]);

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_75;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 88;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_75, mod_consts[180]);

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_76;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 89;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_76, mod_consts[182]);

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_77;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 90;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_77, mod_consts[184]);

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_78;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 91;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_78, mod_consts[186]);

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_79;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 92;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[188]);

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_81;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[190]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[191]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[192]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[192]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_called_value_81 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_82, call_args);
        }

        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_6 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__2_glBeginQueryIndexed();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 94;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 93;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_84;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[190]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = Py_None;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[191]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[192]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_called_value_84 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_85, call_args);
        }

        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_11 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__3_glBindTransformFeedback();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 97;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 96;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_87;
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[190]);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = Py_None;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[192]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[191]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[191]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_called_value_87 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_88, call_args);
        }

        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_17 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__4_glBlendEquationSeparatei();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 100;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_87, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 99;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_90;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[190]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = Py_None;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[192]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[191]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_called_value_90 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_91, call_args);
        }

        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_22 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__5_glBlendEquationi();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 103;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 102;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_93;
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[190]);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = Py_None;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[192]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[191]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[191]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[191]);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[191]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_called_value_93 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_94, call_args);
        }

        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_30 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__6_glBlendFuncSeparatei();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 106;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_93, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 105;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[190]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = Py_None;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[192]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[191]);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[191]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_called_value_96 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_97, call_args);
        }

        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_36 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__7_glBlendFunci();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 109;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 108;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_99;
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_41;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[190]);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = Py_None;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[199]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[200]);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_called_value_99 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_100, call_args);
        }

        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_41 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__8_glDeleteTransformFeedbacks();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 112;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_99);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 111;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_102;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_46;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[190]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = Py_None;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[191]);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[202]);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_called_value_102 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_103, call_args);
        }

        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_46 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__9_glDrawArraysIndirect();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 115;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 114;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_101, tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_105;
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_52;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[190]);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = Py_None;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[191]);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_49);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[191]);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_49);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[202]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_called_value_105 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_106, call_args);
        }

        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_52 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__10_glDrawElementsIndirect();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 118;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_105, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 117;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_108;
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[190]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = Py_None;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[191]);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[192]);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_called_value_108 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_109, call_args);
        }

        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_57 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__11_glDrawTransformFeedback();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 121;
        tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 120;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_called_value_111;
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[190]);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = Py_None;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[191]);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[192]);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[192]);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_called_value_111 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_112, call_args);
        }

        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_63 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__12_glDrawTransformFeedbackStream();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 124;
        tmp_args_element_value_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_111, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_111);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 123;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_114;
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[190]);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = Py_None;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[191]);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[192]);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_called_value_114 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_115, call_args);
        }

        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_element_value_66);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_68 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__13_glEndQueryIndexed();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 127;
        tmp_args_element_value_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_114, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 126;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_113, tmp_args_element_value_64);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_117;
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[190]);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = Py_None;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[199]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_71);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[200]);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_71);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_called_value_117 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_118, call_args);
        }

        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_71);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_73 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__14_glGenTransformFeedbacks();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 130;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 129;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_116, tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_called_value_120;
        PyObject *tmp_called_value_121;
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
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[190]);
        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = Py_None;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[192]);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[191]);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[192]);
        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[199]);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[209]);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[210]);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_called_value_120 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_121, call_args);
        }

        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_args_element_value_76);
        Py_DECREF(tmp_args_element_value_77);
        Py_DECREF(tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_80);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_82 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__15_glGetActiveSubroutineName();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 133;
        tmp_args_element_value_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 132;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_122;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_123;
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_91;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[190]);
        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = Py_None;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[192]);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[191]);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[192]);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[199]);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[209]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[210]);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_called_value_123 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_124, call_args);
        }

        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_87);
        Py_DECREF(tmp_args_element_value_88);
        Py_DECREF(tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_91 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__16_glGetActiveSubroutineUniformName();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 136;
        tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_123, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 135;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_122, tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_called_value_126;
        PyObject *tmp_called_value_127;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_99;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_called_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[190]);
        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = Py_None;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[192]);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[191]);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[192]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[191]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[213]);
        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);
            Py_DECREF(tmp_args_element_value_97);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_called_value_126 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_127, call_args);
        }

        Py_DECREF(tmp_called_value_127);
        Py_DECREF(tmp_args_element_value_94);
        Py_DECREF(tmp_args_element_value_95);
        Py_DECREF(tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_99 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__17_glGetActiveSubroutineUniformiv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 139;
        tmp_args_element_value_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_126, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 138;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_125, tmp_args_element_value_92);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_128;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_called_value_129;
        PyObject *tmp_called_value_130;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_106;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_called_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[190]);
        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = Py_None;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[192]);
        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[191]);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[191]);
        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[213]);
        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_called_value_129 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_130, call_args);
        }

        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_104);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_106 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__18_glGetProgramStageiv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 142;
        tmp_args_element_value_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_129, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 141;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_100);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_called_value_132;
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_113;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[190]);
        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = Py_None;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[191]);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[192]);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[191]);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[213]);
        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111, tmp_args_element_value_112};
            tmp_called_value_132 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_133, call_args);
        }

        Py_DECREF(tmp_called_value_133);
        Py_DECREF(tmp_args_element_value_109);
        Py_DECREF(tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_111);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_113 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__19_glGetQueryIndexediv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 145;
        tmp_args_element_value_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_132, tmp_args_element_value_113);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 144;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_131, tmp_args_element_value_107);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_134;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_called_value_135;
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_119;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[190]);
        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[192]);
        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[192]);
        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[191]);
        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[210]);
        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_called_value_135 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_136, call_args);
        }

        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_115);
        Py_DECREF(tmp_args_element_value_116);
        Py_DECREF(tmp_args_element_value_117);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_119 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__20_glGetSubroutineIndex();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 148;
        tmp_args_element_value_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_135, tmp_args_element_value_119);
        Py_DECREF(tmp_called_value_135);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 147;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_134, tmp_args_element_value_114);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_called_value_138;
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_125;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[190]);
        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[218]);
        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[192]);
        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_121);
            Py_DECREF(tmp_args_element_value_122);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[191]);
        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_121);
            Py_DECREF(tmp_args_element_value_122);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_121);
            Py_DECREF(tmp_args_element_value_122);
            Py_DECREF(tmp_args_element_value_123);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[210]);
        if (tmp_args_element_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_121);
            Py_DECREF(tmp_args_element_value_122);
            Py_DECREF(tmp_args_element_value_123);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_called_value_138 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_139, call_args);
        }

        Py_DECREF(tmp_called_value_139);
        Py_DECREF(tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_122);
        Py_DECREF(tmp_args_element_value_123);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_125 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__21_glGetSubroutineUniformLocation();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 151;
        tmp_args_element_value_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_138, tmp_args_element_value_125);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_125);
        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 150;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_137, tmp_args_element_value_120);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_140;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_called_value_141;
        PyObject *tmp_called_value_142;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_131;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[190]);
        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = Py_None;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[191]);
        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[218]);
        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_128);
            Py_DECREF(tmp_args_element_value_129);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[200]);
        if (tmp_args_element_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_128);
            Py_DECREF(tmp_args_element_value_129);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128, tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_called_value_141 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_142, call_args);
        }

        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_128);
        Py_DECREF(tmp_args_element_value_129);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_131 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__22_glGetUniformSubroutineuiv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 154;
        tmp_args_element_value_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_141, tmp_args_element_value_131);
        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_args_element_value_131);
        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 153;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_140, tmp_args_element_value_126);
        Py_DECREF(tmp_args_element_value_126);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_value_144;
        PyObject *tmp_called_value_145;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_137;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[190]);
        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = Py_None;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[192]);
        if (tmp_args_element_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_134);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[218]);
        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_134);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_135);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[221]);
        if (tmp_args_element_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_135);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_called_value_144 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_145, call_args);
        }

        Py_DECREF(tmp_called_value_145);
        Py_DECREF(tmp_args_element_value_134);
        Py_DECREF(tmp_args_element_value_135);
        Py_DECREF(tmp_args_element_value_136);
        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_137 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__23_glGetUniformdv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 157;
        tmp_args_element_value_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_144, tmp_args_element_value_137);
        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_137);
        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 156;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_143, tmp_args_element_value_132);
        Py_DECREF(tmp_args_element_value_132);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_146;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_called_value_147;
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_141;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[190]);
        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[223]);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[192]);
        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140};
            tmp_called_value_147 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_148, call_args);
        }

        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_139);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_141 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__24_glIsTransformFeedback();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 160;
        tmp_args_element_value_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_147, tmp_args_element_value_141);
        Py_DECREF(tmp_called_value_147);
        Py_DECREF(tmp_args_element_value_141);
        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 159;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_146, tmp_args_element_value_138);
        Py_DECREF(tmp_args_element_value_138);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_called_value_150;
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_145;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_called_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[190]);
        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = Py_None;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[225]);
        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_called_value_150 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_151, call_args);
        }

        Py_DECREF(tmp_called_value_151);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_145 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__25_glMinSampleShading();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 163;
        tmp_args_element_value_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_150, tmp_args_element_value_145);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_145);
        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 162;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_149, tmp_args_element_value_142);
        Py_DECREF(tmp_args_element_value_142);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_152;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_called_value_153;
        PyObject *tmp_called_value_154;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_element_value_150;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_called_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[190]);
        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = Py_None;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[191]);
        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[227]);
        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_147, tmp_args_element_value_148, tmp_args_element_value_149};
            tmp_called_value_153 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_154, call_args);
        }

        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_148);
        Py_DECREF(tmp_args_element_value_149);
        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_150 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__26_glPatchParameterfv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 166;
        tmp_args_element_value_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_153, tmp_args_element_value_150);
        Py_DECREF(tmp_called_value_153);
        Py_DECREF(tmp_args_element_value_150);
        if (tmp_args_element_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 165;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_152, tmp_args_element_value_146);
        Py_DECREF(tmp_args_element_value_146);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_155;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_called_value_156;
        PyObject *tmp_called_value_157;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_args_element_value_155;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_called_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[190]);
        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = Py_None;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[191]);
        if (tmp_args_element_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_153);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[218]);
        if (tmp_args_element_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_153);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153, tmp_args_element_value_154};
            tmp_called_value_156 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_157, call_args);
        }

        Py_DECREF(tmp_called_value_157);
        Py_DECREF(tmp_args_element_value_153);
        Py_DECREF(tmp_args_element_value_154);
        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_155 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__27_glPatchParameteri();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 169;
        tmp_args_element_value_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_156, tmp_args_element_value_155);
        Py_DECREF(tmp_called_value_156);
        Py_DECREF(tmp_args_element_value_155);
        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 168;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_155, tmp_args_element_value_151);
        Py_DECREF(tmp_args_element_value_151);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_158;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_called_value_159;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_157;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 172;
        tmp_called_value_159 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[190],
            PyTuple_GET_ITEM(mod_consts[230], 0)
        );

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_157 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__28_glPauseTransformFeedback();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 172;
        tmp_args_element_value_156 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_159, tmp_args_element_value_157);
        Py_DECREF(tmp_called_value_159);
        Py_DECREF(tmp_args_element_value_157);
        if (tmp_args_element_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 171;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_158, tmp_args_element_value_156);
        Py_DECREF(tmp_args_element_value_156);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_160;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_called_value_161;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_159;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 175;
        tmp_called_value_161 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[190],
            PyTuple_GET_ITEM(mod_consts[230], 0)
        );

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_159 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__29_glResumeTransformFeedback();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 175;
        tmp_args_element_value_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_161, tmp_args_element_value_159);
        Py_DECREF(tmp_called_value_161);
        Py_DECREF(tmp_args_element_value_159);
        if (tmp_args_element_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 174;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_160, tmp_args_element_value_158);
        Py_DECREF(tmp_args_element_value_158);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_162;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_called_value_163;
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_164;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[190]);
        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = Py_None;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[218]);
        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_162);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[233]);
        if (tmp_args_element_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_args_element_value_162);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_161, tmp_args_element_value_162, tmp_args_element_value_163};
            tmp_called_value_163 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_164, call_args);
        }

        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_element_value_162);
        Py_DECREF(tmp_args_element_value_163);
        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_164 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__30_glUniform1d();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 178;
        tmp_args_element_value_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_163, tmp_args_element_value_164);
        Py_DECREF(tmp_called_value_163);
        Py_DECREF(tmp_args_element_value_164);
        if (tmp_args_element_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 177;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_162, tmp_args_element_value_160);
        Py_DECREF(tmp_args_element_value_160);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_165;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_called_value_166;
        PyObject *tmp_called_value_167;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_element_value_170;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_called_value_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[190]);
        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = Py_None;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[218]);
        if (tmp_args_element_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_167);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[199]);
        if (tmp_args_element_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_167);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[221]);
        if (tmp_args_element_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_168);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_166, tmp_args_element_value_167, tmp_args_element_value_168, tmp_args_element_value_169};
            tmp_called_value_166 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_167, call_args);
        }

        Py_DECREF(tmp_called_value_167);
        Py_DECREF(tmp_args_element_value_167);
        Py_DECREF(tmp_args_element_value_168);
        Py_DECREF(tmp_args_element_value_169);
        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_170 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__31_glUniform1dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 181;
        tmp_args_element_value_165 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_166, tmp_args_element_value_170);
        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_args_element_value_170);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 180;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_165, tmp_args_element_value_165);
        Py_DECREF(tmp_args_element_value_165);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_168;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_called_value_169;
        PyObject *tmp_called_value_170;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_176;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_called_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[190]);
        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = Py_None;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[218]);
        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_173);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[233]);
        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_173);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_173);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[233]);
        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_args_element_value_173);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_called_value_169 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_170, call_args);
        }

        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_args_element_value_173);
        Py_DECREF(tmp_args_element_value_174);
        Py_DECREF(tmp_args_element_value_175);
        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_176 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__32_glUniform2d();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 184;
        tmp_args_element_value_171 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_169, tmp_args_element_value_176);
        Py_DECREF(tmp_called_value_169);
        Py_DECREF(tmp_args_element_value_176);
        if (tmp_args_element_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 183;
        tmp_assign_source_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_168, tmp_args_element_value_171);
        Py_DECREF(tmp_args_element_value_171);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_called_value_172;
        PyObject *tmp_called_value_173;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_182;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_called_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[190]);
        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = Py_None;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[218]);
        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[199]);
        if (tmp_args_element_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[221]);
        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_173);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181};
            tmp_called_value_172 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_173, call_args);
        }

        Py_DECREF(tmp_called_value_173);
        Py_DECREF(tmp_args_element_value_179);
        Py_DECREF(tmp_args_element_value_180);
        Py_DECREF(tmp_args_element_value_181);
        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_182 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__33_glUniform2dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 187;
        tmp_args_element_value_177 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_172, tmp_args_element_value_182);
        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_args_element_value_182);
        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 186;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_171, tmp_args_element_value_177);
        Py_DECREF(tmp_args_element_value_177);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_174;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_called_value_175;
        PyObject *tmp_called_value_176;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_args_element_value_189;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_called_value_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[190]);
        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = Py_None;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[218]);
        if (tmp_args_element_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[233]);
        if (tmp_args_element_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_185);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[233]);
        if (tmp_args_element_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);
            Py_DECREF(tmp_args_element_value_187);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[233]);
        if (tmp_args_element_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_args_element_value_185);
            Py_DECREF(tmp_args_element_value_186);
            Py_DECREF(tmp_args_element_value_187);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187, tmp_args_element_value_188};
            tmp_called_value_175 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_176, call_args);
        }

        Py_DECREF(tmp_called_value_176);
        Py_DECREF(tmp_args_element_value_185);
        Py_DECREF(tmp_args_element_value_186);
        Py_DECREF(tmp_args_element_value_187);
        Py_DECREF(tmp_args_element_value_188);
        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_189 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__34_glUniform3d();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 190;
        tmp_args_element_value_183 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_175, tmp_args_element_value_189);
        Py_DECREF(tmp_called_value_175);
        Py_DECREF(tmp_args_element_value_189);
        if (tmp_args_element_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 189;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_174, tmp_args_element_value_183);
        Py_DECREF(tmp_args_element_value_183);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_177;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_called_value_178;
        PyObject *tmp_called_value_179;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_element_value_195;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_called_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[190]);
        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = Py_None;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[218]);
        if (tmp_args_element_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_192);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[199]);
        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_192);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[221]);
        if (tmp_args_element_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);
            Py_DECREF(tmp_args_element_value_192);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_191, tmp_args_element_value_192, tmp_args_element_value_193, tmp_args_element_value_194};
            tmp_called_value_178 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_179, call_args);
        }

        Py_DECREF(tmp_called_value_179);
        Py_DECREF(tmp_args_element_value_192);
        Py_DECREF(tmp_args_element_value_193);
        Py_DECREF(tmp_args_element_value_194);
        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_195 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__35_glUniform3dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 193;
        tmp_args_element_value_190 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_178, tmp_args_element_value_195);
        Py_DECREF(tmp_called_value_178);
        Py_DECREF(tmp_args_element_value_195);
        if (tmp_args_element_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 192;
        tmp_assign_source_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_177, tmp_args_element_value_190);
        Py_DECREF(tmp_args_element_value_190);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_180;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_called_value_181;
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_args_element_value_203;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[190]);
        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_197 = Py_None;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[218]);
        if (tmp_args_element_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_199 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[233]);
        if (tmp_args_element_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);
            Py_DECREF(tmp_args_element_value_199);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[233]);
        if (tmp_args_element_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);
            Py_DECREF(tmp_args_element_value_199);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[233]);
        if (tmp_args_element_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[233]);
        if (tmp_args_element_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);
            Py_DECREF(tmp_args_element_value_198);
            Py_DECREF(tmp_args_element_value_199);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_197, tmp_args_element_value_198, tmp_args_element_value_199, tmp_args_element_value_200, tmp_args_element_value_201, tmp_args_element_value_202};
            tmp_called_value_181 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_182, call_args);
        }

        Py_DECREF(tmp_called_value_182);
        Py_DECREF(tmp_args_element_value_198);
        Py_DECREF(tmp_args_element_value_199);
        Py_DECREF(tmp_args_element_value_200);
        Py_DECREF(tmp_args_element_value_201);
        Py_DECREF(tmp_args_element_value_202);
        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_203 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__36_glUniform4d();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 196;
        tmp_args_element_value_196 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_181, tmp_args_element_value_203);
        Py_DECREF(tmp_called_value_181);
        Py_DECREF(tmp_args_element_value_203);
        if (tmp_args_element_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 195;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_180, tmp_args_element_value_196);
        Py_DECREF(tmp_args_element_value_196);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_183;
        PyObject *tmp_args_element_value_204;
        PyObject *tmp_called_value_184;
        PyObject *tmp_called_value_185;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_args_element_value_209;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[190]);
        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_205 = Py_None;
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[218]);
        if (tmp_args_element_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[199]);
        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[221]);
        if (tmp_args_element_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);
            Py_DECREF(tmp_args_element_value_206);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_205, tmp_args_element_value_206, tmp_args_element_value_207, tmp_args_element_value_208};
            tmp_called_value_184 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_185, call_args);
        }

        Py_DECREF(tmp_called_value_185);
        Py_DECREF(tmp_args_element_value_206);
        Py_DECREF(tmp_args_element_value_207);
        Py_DECREF(tmp_args_element_value_208);
        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_209 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__37_glUniform4dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 199;
        tmp_args_element_value_204 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_184, tmp_args_element_value_209);
        Py_DECREF(tmp_called_value_184);
        Py_DECREF(tmp_args_element_value_209);
        if (tmp_args_element_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 198;
        tmp_assign_source_127 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_183, tmp_args_element_value_204);
        Py_DECREF(tmp_args_element_value_204);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_186;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_called_value_187;
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_element_value_211;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_args_element_value_214;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_element_value_216;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[190]);
        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_211 = Py_None;
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[218]);
        if (tmp_args_element_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_212);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[199]);
        if (tmp_args_element_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_212);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_212);
            Py_DECREF(tmp_args_element_value_213);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[223]);
        if (tmp_args_element_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_212);
            Py_DECREF(tmp_args_element_value_213);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_212);
            Py_DECREF(tmp_args_element_value_213);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[221]);
        if (tmp_args_element_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);
            Py_DECREF(tmp_args_element_value_212);
            Py_DECREF(tmp_args_element_value_213);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_211, tmp_args_element_value_212, tmp_args_element_value_213, tmp_args_element_value_214, tmp_args_element_value_215};
            tmp_called_value_187 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_188, call_args);
        }

        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_args_element_value_212);
        Py_DECREF(tmp_args_element_value_213);
        Py_DECREF(tmp_args_element_value_214);
        Py_DECREF(tmp_args_element_value_215);
        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_216 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__38_glUniformMatrix2dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 202;
        tmp_args_element_value_210 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_187, tmp_args_element_value_216);
        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_args_element_value_216);
        if (tmp_args_element_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 201;
        tmp_assign_source_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_186, tmp_args_element_value_210);
        Py_DECREF(tmp_args_element_value_210);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_189;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_called_value_190;
        PyObject *tmp_called_value_191;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_218;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_221;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_223;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_called_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[190]);
        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_218 = Py_None;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_219 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[218]);
        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_219);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[199]);
        if (tmp_args_element_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_219);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_219);
            Py_DECREF(tmp_args_element_value_220);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_221 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[223]);
        if (tmp_args_element_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_219);
            Py_DECREF(tmp_args_element_value_220);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_219);
            Py_DECREF(tmp_args_element_value_220);
            Py_DECREF(tmp_args_element_value_221);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_222 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[221]);
        if (tmp_args_element_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);
            Py_DECREF(tmp_args_element_value_219);
            Py_DECREF(tmp_args_element_value_220);
            Py_DECREF(tmp_args_element_value_221);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_218, tmp_args_element_value_219, tmp_args_element_value_220, tmp_args_element_value_221, tmp_args_element_value_222};
            tmp_called_value_190 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_191, call_args);
        }

        Py_DECREF(tmp_called_value_191);
        Py_DECREF(tmp_args_element_value_219);
        Py_DECREF(tmp_args_element_value_220);
        Py_DECREF(tmp_args_element_value_221);
        Py_DECREF(tmp_args_element_value_222);
        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_223 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__39_glUniformMatrix2x3dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 205;
        tmp_args_element_value_217 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_190, tmp_args_element_value_223);
        Py_DECREF(tmp_called_value_190);
        Py_DECREF(tmp_args_element_value_223);
        if (tmp_args_element_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 204;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_189, tmp_args_element_value_217);
        Py_DECREF(tmp_args_element_value_217);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_192;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_called_value_193;
        PyObject *tmp_called_value_194;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_args_element_value_227;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_229;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_element_value_230;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_called_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[190]);
        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_225 = Py_None;
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[218]);
        if (tmp_args_element_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_226);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_227 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[199]);
        if (tmp_args_element_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_226);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_226);
            Py_DECREF(tmp_args_element_value_227);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_228 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[223]);
        if (tmp_args_element_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_226);
            Py_DECREF(tmp_args_element_value_227);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_226);
            Py_DECREF(tmp_args_element_value_227);
            Py_DECREF(tmp_args_element_value_228);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_229 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[221]);
        if (tmp_args_element_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);
            Py_DECREF(tmp_args_element_value_226);
            Py_DECREF(tmp_args_element_value_227);
            Py_DECREF(tmp_args_element_value_228);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_225, tmp_args_element_value_226, tmp_args_element_value_227, tmp_args_element_value_228, tmp_args_element_value_229};
            tmp_called_value_193 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_194, call_args);
        }

        Py_DECREF(tmp_called_value_194);
        Py_DECREF(tmp_args_element_value_226);
        Py_DECREF(tmp_args_element_value_227);
        Py_DECREF(tmp_args_element_value_228);
        Py_DECREF(tmp_args_element_value_229);
        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_230 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__40_glUniformMatrix2x4dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 208;
        tmp_args_element_value_224 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_193, tmp_args_element_value_230);
        Py_DECREF(tmp_called_value_193);
        Py_DECREF(tmp_args_element_value_230);
        if (tmp_args_element_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 207;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_192, tmp_args_element_value_224);
        Py_DECREF(tmp_args_element_value_224);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_195;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_called_value_196;
        PyObject *tmp_called_value_197;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_args_element_value_233;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_element_value_234;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_args_element_value_237;
        tmp_called_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_195 == NULL)) {
            tmp_called_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_called_value_197 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[190]);
        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = Py_None;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[218]);
        if (tmp_args_element_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_233);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_234 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[199]);
        if (tmp_args_element_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_233);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_233);
            Py_DECREF(tmp_args_element_value_234);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_235 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[223]);
        if (tmp_args_element_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_233);
            Py_DECREF(tmp_args_element_value_234);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_233);
            Py_DECREF(tmp_args_element_value_234);
            Py_DECREF(tmp_args_element_value_235);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[221]);
        if (tmp_args_element_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);
            Py_DECREF(tmp_args_element_value_233);
            Py_DECREF(tmp_args_element_value_234);
            Py_DECREF(tmp_args_element_value_235);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_232, tmp_args_element_value_233, tmp_args_element_value_234, tmp_args_element_value_235, tmp_args_element_value_236};
            tmp_called_value_196 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_197, call_args);
        }

        Py_DECREF(tmp_called_value_197);
        Py_DECREF(tmp_args_element_value_233);
        Py_DECREF(tmp_args_element_value_234);
        Py_DECREF(tmp_args_element_value_235);
        Py_DECREF(tmp_args_element_value_236);
        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_237 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__41_glUniformMatrix3dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 211;
        tmp_args_element_value_231 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_196, tmp_args_element_value_237);
        Py_DECREF(tmp_called_value_196);
        Py_DECREF(tmp_args_element_value_237);
        if (tmp_args_element_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 210;
        tmp_assign_source_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_195, tmp_args_element_value_231);
        Py_DECREF(tmp_args_element_value_231);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_198;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_called_value_199;
        PyObject *tmp_called_value_200;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_244;
        tmp_called_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_198 == NULL)) {
            tmp_called_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_called_value_200 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[190]);
        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_239 = Py_None;
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_240 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[218]);
        if (tmp_args_element_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_240);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_241 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[199]);
        if (tmp_args_element_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_240);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_240);
            Py_DECREF(tmp_args_element_value_241);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[223]);
        if (tmp_args_element_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_240);
            Py_DECREF(tmp_args_element_value_241);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_240);
            Py_DECREF(tmp_args_element_value_241);
            Py_DECREF(tmp_args_element_value_242);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_243 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[221]);
        if (tmp_args_element_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);
            Py_DECREF(tmp_args_element_value_240);
            Py_DECREF(tmp_args_element_value_241);
            Py_DECREF(tmp_args_element_value_242);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_239, tmp_args_element_value_240, tmp_args_element_value_241, tmp_args_element_value_242, tmp_args_element_value_243};
            tmp_called_value_199 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_200, call_args);
        }

        Py_DECREF(tmp_called_value_200);
        Py_DECREF(tmp_args_element_value_240);
        Py_DECREF(tmp_args_element_value_241);
        Py_DECREF(tmp_args_element_value_242);
        Py_DECREF(tmp_args_element_value_243);
        if (tmp_called_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_244 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__42_glUniformMatrix3x2dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 214;
        tmp_args_element_value_238 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_199, tmp_args_element_value_244);
        Py_DECREF(tmp_called_value_199);
        Py_DECREF(tmp_args_element_value_244);
        if (tmp_args_element_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 213;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_198, tmp_args_element_value_238);
        Py_DECREF(tmp_args_element_value_238);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_201;
        PyObject *tmp_args_element_value_245;
        PyObject *tmp_called_value_202;
        PyObject *tmp_called_value_203;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_249;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_args_element_value_251;
        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_201 == NULL)) {
            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_called_value_203 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[190]);
        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = Py_None;
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_247 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[218]);
        if (tmp_args_element_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_247);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[199]);
        if (tmp_args_element_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_247);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_249 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[223]);
        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[221]);
        if (tmp_args_element_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);
            Py_DECREF(tmp_args_element_value_247);
            Py_DECREF(tmp_args_element_value_248);
            Py_DECREF(tmp_args_element_value_249);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_246, tmp_args_element_value_247, tmp_args_element_value_248, tmp_args_element_value_249, tmp_args_element_value_250};
            tmp_called_value_202 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_203, call_args);
        }

        Py_DECREF(tmp_called_value_203);
        Py_DECREF(tmp_args_element_value_247);
        Py_DECREF(tmp_args_element_value_248);
        Py_DECREF(tmp_args_element_value_249);
        Py_DECREF(tmp_args_element_value_250);
        if (tmp_called_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_251 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__43_glUniformMatrix3x4dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 217;
        tmp_args_element_value_245 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_202, tmp_args_element_value_251);
        Py_DECREF(tmp_called_value_202);
        Py_DECREF(tmp_args_element_value_251);
        if (tmp_args_element_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 216;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_201, tmp_args_element_value_245);
        Py_DECREF(tmp_args_element_value_245);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_204;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_called_value_205;
        PyObject *tmp_called_value_206;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_args_element_value_255;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_args_element_value_257;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_258;
        tmp_called_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_204 == NULL)) {
            tmp_called_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_called_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[190]);
        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_253 = Py_None;
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[218]);
        if (tmp_args_element_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_254);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[199]);
        if (tmp_args_element_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_254);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[223]);
        if (tmp_args_element_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_257 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[221]);
        if (tmp_args_element_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);
            Py_DECREF(tmp_args_element_value_254);
            Py_DECREF(tmp_args_element_value_255);
            Py_DECREF(tmp_args_element_value_256);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_253, tmp_args_element_value_254, tmp_args_element_value_255, tmp_args_element_value_256, tmp_args_element_value_257};
            tmp_called_value_205 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_206, call_args);
        }

        Py_DECREF(tmp_called_value_206);
        Py_DECREF(tmp_args_element_value_254);
        Py_DECREF(tmp_args_element_value_255);
        Py_DECREF(tmp_args_element_value_256);
        Py_DECREF(tmp_args_element_value_257);
        if (tmp_called_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_258 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__44_glUniformMatrix4dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 220;
        tmp_args_element_value_252 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_205, tmp_args_element_value_258);
        Py_DECREF(tmp_called_value_205);
        Py_DECREF(tmp_args_element_value_258);
        if (tmp_args_element_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 219;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_204, tmp_args_element_value_252);
        Py_DECREF(tmp_args_element_value_252);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_207;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_called_value_208;
        PyObject *tmp_called_value_209;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_265;
        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_207 == NULL)) {
            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_called_value_209 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[190]);
        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = Py_None;
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_261 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[218]);
        if (tmp_args_element_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[199]);
        if (tmp_args_element_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_263 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[223]);
        if (tmp_args_element_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[221]);
        if (tmp_args_element_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);
            Py_DECREF(tmp_args_element_value_261);
            Py_DECREF(tmp_args_element_value_262);
            Py_DECREF(tmp_args_element_value_263);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_260, tmp_args_element_value_261, tmp_args_element_value_262, tmp_args_element_value_263, tmp_args_element_value_264};
            tmp_called_value_208 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_209, call_args);
        }

        Py_DECREF(tmp_called_value_209);
        Py_DECREF(tmp_args_element_value_261);
        Py_DECREF(tmp_args_element_value_262);
        Py_DECREF(tmp_args_element_value_263);
        Py_DECREF(tmp_args_element_value_264);
        if (tmp_called_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_265 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__45_glUniformMatrix4x2dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 223;
        tmp_args_element_value_259 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_208, tmp_args_element_value_265);
        Py_DECREF(tmp_called_value_208);
        Py_DECREF(tmp_args_element_value_265);
        if (tmp_args_element_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 222;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_207, tmp_args_element_value_259);
        Py_DECREF(tmp_args_element_value_259);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_210;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_called_value_211;
        PyObject *tmp_called_value_212;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_271;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_272;
        tmp_called_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_210 == NULL)) {
            tmp_called_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_called_value_212 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[190]);
        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_267 = Py_None;
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[218]);
        if (tmp_args_element_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[199]);
        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[223]);
        if (tmp_args_element_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_271 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[221]);
        if (tmp_args_element_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);
            Py_DECREF(tmp_args_element_value_268);
            Py_DECREF(tmp_args_element_value_269);
            Py_DECREF(tmp_args_element_value_270);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_267, tmp_args_element_value_268, tmp_args_element_value_269, tmp_args_element_value_270, tmp_args_element_value_271};
            tmp_called_value_211 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_212, call_args);
        }

        Py_DECREF(tmp_called_value_212);
        Py_DECREF(tmp_args_element_value_268);
        Py_DECREF(tmp_args_element_value_269);
        Py_DECREF(tmp_args_element_value_270);
        Py_DECREF(tmp_args_element_value_271);
        if (tmp_called_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_272 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__46_glUniformMatrix4x3dv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 226;
        tmp_args_element_value_266 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_211, tmp_args_element_value_272);
        Py_DECREF(tmp_called_value_211);
        Py_DECREF(tmp_args_element_value_272);
        if (tmp_args_element_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 225;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_210, tmp_args_element_value_266);
        Py_DECREF(tmp_args_element_value_266);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_213;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_called_value_214;
        PyObject *tmp_called_value_215;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_args_element_value_275;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_args_element_value_277;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_args_element_value_278;
        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_213 == NULL)) {
            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_called_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[190]);
        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_274 = Py_None;
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_275 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[191]);
        if (tmp_args_element_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_275);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[199]);
        if (tmp_args_element_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_275);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[200]);
        if (tmp_args_element_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_274, tmp_args_element_value_275, tmp_args_element_value_276, tmp_args_element_value_277};
            tmp_called_value_214 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_215, call_args);
        }

        Py_DECREF(tmp_called_value_215);
        Py_DECREF(tmp_args_element_value_275);
        Py_DECREF(tmp_args_element_value_276);
        Py_DECREF(tmp_args_element_value_277);
        if (tmp_called_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_278 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_0$$$function__47_glUniformSubroutinesuiv();

        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 229;
        tmp_args_element_value_273 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_214, tmp_args_element_value_278);
        Py_DECREF(tmp_called_value_214);
        Py_DECREF(tmp_args_element_value_278);
        if (tmp_args_element_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_027986846714becc0cdcc332dc20cb37->m_frame.f_lineno = 228;
        tmp_assign_source_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_213, tmp_args_element_value_273);
        Py_DECREF(tmp_args_element_value_273);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_137);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_027986846714becc0cdcc332dc20cb37);
#endif
    popFrameStack();

    assertFrameObject(frame_027986846714becc0cdcc332dc20cb37);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_027986846714becc0cdcc332dc20cb37);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_027986846714becc0cdcc332dc20cb37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_027986846714becc0cdcc332dc20cb37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_027986846714becc0cdcc332dc20cb37, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GL.VERSION.GL_4_0", false);

    return module_OpenGL$raw$GL$VERSION$GL_4_0;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_0, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GL$VERSION$GL_4_0", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
