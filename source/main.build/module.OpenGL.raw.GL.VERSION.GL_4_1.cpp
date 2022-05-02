/* Generated code for Python module 'OpenGL.raw.GL.VERSION.GL_4_1'
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

/* The "module_OpenGL$raw$GL$VERSION$GL_4_1" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GL$VERSION$GL_4_1;
PyDictObject *moduledict_OpenGL$raw$GL$VERSION$GL_4_1;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[247];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[247];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GL.VERSION.GL_4_1"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 247; i++) {
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
void checkModuleConstants_OpenGL$raw$GL$VERSION$GL_4_1(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 247; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6e8fc9ca7b511e0c715d11206ad4414c;
static PyCodeObject *codeobj_ac8aa3f18b131ea30bc8eb9df539da13;
static PyCodeObject *codeobj_5bd08053e5603694e98af6da33f557f4;
static PyCodeObject *codeobj_b3bda0936c0060f557f636e4a772ad20;
static PyCodeObject *codeobj_b11d50062508958f34ff808b36bfe56b;
static PyCodeObject *codeobj_6df885735344806953084981b6001040;
static PyCodeObject *codeobj_55f739a3f6d586c9814c7fcd5c7b4519;
static PyCodeObject *codeobj_2a2433c519662789b481c2997a16b224;
static PyCodeObject *codeobj_93f4afd33dab60faec4045350bbbfb78;
static PyCodeObject *codeobj_014251cd2efef2a7600df7d3bff49a54;
static PyCodeObject *codeobj_053d51b26be64ec22422ff8234a47c73;
static PyCodeObject *codeobj_74d9cf1ead9f233d309b069c6083a04d;
static PyCodeObject *codeobj_3f127cb6379dab52fec1d7d43d4b3ca5;
static PyCodeObject *codeobj_a477d057b4776258e457b16b911254cb;
static PyCodeObject *codeobj_f537b74ca996e4f6f741dae543284406;
static PyCodeObject *codeobj_fbef0e5b4431dcff44b8268fe16440b7;
static PyCodeObject *codeobj_63d7ab5c00f063f14508c62f6bf6fc36;
static PyCodeObject *codeobj_329dfab82f7049d6a3ca4d257c017487;
static PyCodeObject *codeobj_c6511365f12ca783f682ea4252992ac6;
static PyCodeObject *codeobj_92ef5cf25d16c61784a1a955eb5bc9db;
static PyCodeObject *codeobj_d77bf2a64ce847800d3fc3bcaa146d90;
static PyCodeObject *codeobj_20f4ac33cc315abb08347473185e3fc7;
static PyCodeObject *codeobj_13e60d71681a6f4a979f12b2cc8b88dc;
static PyCodeObject *codeobj_dd8602fe218c896af60f935fe9a4ff92;
static PyCodeObject *codeobj_02ecbdc18aa33e8a16e2a2ea9579ca0b;
static PyCodeObject *codeobj_8e12f9747f9ca120bbd0c58ae3b33599;
static PyCodeObject *codeobj_54518f24f150f27773cce834e7f91f56;
static PyCodeObject *codeobj_cb8ab6317c87e4926078bd1671e73555;
static PyCodeObject *codeobj_43dc58db308514b3f851c86826cd0df9;
static PyCodeObject *codeobj_917079386ae5094ec49745f0b6b19fac;
static PyCodeObject *codeobj_82e220f002654294a944e9a8dea5c056;
static PyCodeObject *codeobj_9fcd92850de0f7a25c2b93a89c942d7a;
static PyCodeObject *codeobj_169febfa1ccf76abae1557dfea6a8b0b;
static PyCodeObject *codeobj_5affcbf68071e21610be306f3422550e;
static PyCodeObject *codeobj_ca41187a9135d848dff342299853bebe;
static PyCodeObject *codeobj_f6984935ae5a9e8fb3906d762272921c;
static PyCodeObject *codeobj_716e03069809ec2ee0bf1210a5437c7c;
static PyCodeObject *codeobj_0b74c8330171c3d259b6afc38cc4c7f0;
static PyCodeObject *codeobj_650633c12aaee1a16686704d3e37ec8d;
static PyCodeObject *codeobj_7aa12e1f97c8338eba5dd12c11dfbec9;
static PyCodeObject *codeobj_25cdfc22a98e1d540a0097575b717c75;
static PyCodeObject *codeobj_33eeb45e272e99282b459c02734a00e6;
static PyCodeObject *codeobj_7d0eb2bba6852dc6dd22902347e97f27;
static PyCodeObject *codeobj_73efe50532c4f52527551bc8dcb04708;
static PyCodeObject *codeobj_1bb889ce5983c6342a74e971162ada9f;
static PyCodeObject *codeobj_bda7f684aa7eb61b90fa4a796ce71e30;
static PyCodeObject *codeobj_629f3b2ea84bffc05c7fa67620d78b1f;
static PyCodeObject *codeobj_9acf01709abb7249ee71ed7c671ce796;
static PyCodeObject *codeobj_2720533e528ee341034faecfbbbf9049;
static PyCodeObject *codeobj_345e4828c4e222c853d6bf809b2dc2b8;
static PyCodeObject *codeobj_3c3b68ecd03b26480dca65cca3d98275;
static PyCodeObject *codeobj_ad64681c237a9514d8b42dc6816e7d75;
static PyCodeObject *codeobj_a5e73a5e76074d96f17c40e339e18a76;
static PyCodeObject *codeobj_1a0fe350cdf1e4579b5bbf8da1c028a6;
static PyCodeObject *codeobj_0f1a9ac20d6d0030a79777409eef4550;
static PyCodeObject *codeobj_4d002637b28ba265bfa10dbcfa52e566;
static PyCodeObject *codeobj_0727b4f6a7f5c6d78cd59643eb38a3b5;
static PyCodeObject *codeobj_04ff23cdfda0d412456a6f522b7868d6;
static PyCodeObject *codeobj_67bd453c164082fb76e9897cf3ded619;
static PyCodeObject *codeobj_24b1df9911e4ae9fb6c3603c59ee7cf6;
static PyCodeObject *codeobj_5039647d61702f60d34bb3a15aab5ff4;
static PyCodeObject *codeobj_b89c1e1dc9df50c854c93a1a5bcc2379;
static PyCodeObject *codeobj_d17a75bf09fa245733a067fc93463645;
static PyCodeObject *codeobj_cad25c866c948cd10eaace3d72041fb7;
static PyCodeObject *codeobj_db73e87312d8ab4eea663a985f69120b;
static PyCodeObject *codeobj_e25307cbf241ba047aac59c7187ea6d0;
static PyCodeObject *codeobj_5f4c63518bcb925fbaddb9400381633c;
static PyCodeObject *codeobj_27200a51344c0544bc767a4405e60c98;
static PyCodeObject *codeobj_271e2e2d7b6f9487be1b4846dd72221d;
static PyCodeObject *codeobj_22c199348a0bcbd28fc35dce268c1baf;
static PyCodeObject *codeobj_59fedc9deb23888f21b7ddce870c950f;
static PyCodeObject *codeobj_db52307ececeb94720f46596c79cca25;
static PyCodeObject *codeobj_ba2073b31c6836d20ef6f000d01267d0;
static PyCodeObject *codeobj_a67baff205bcc7aef2dbe5e0b9695370;
static PyCodeObject *codeobj_6501dfed477ecee58c00afb6d48024f5;
static PyCodeObject *codeobj_9db4860a272cd91afa427fa891fc504a;
static PyCodeObject *codeobj_1f24a9a9d751cf6895dc81f03053e2c8;
static PyCodeObject *codeobj_3203cf0bcf2bd5245d78ab7609e53bd1;
static PyCodeObject *codeobj_26d0e688e0e1b03858e37998f7e07e9a;
static PyCodeObject *codeobj_a15a7ee1fb26a9e1f9440f7f4a7db96d;
static PyCodeObject *codeobj_d20203dbebf8d4743e395736d4774ee7;
static PyCodeObject *codeobj_98bff49b50d8c2a46bb397c2efeab3ef;
static PyCodeObject *codeobj_66157d7bf447e9e2c24cca5e6296aab6;
static PyCodeObject *codeobj_99a1c370b4a6f154dee185d211779545;
static PyCodeObject *codeobj_0be676d95414411bc8fdf3eb0b51cf01;
static PyCodeObject *codeobj_d2077acb1366437d189666f3bacd96fe;
static PyCodeObject *codeobj_f2fce4685dca9933a211e97841002757;
static PyCodeObject *codeobj_83c2250a351fa11778844176e9d6962f;
static PyCodeObject *codeobj_95d22d704e5596516830053f7f8bfd8e;
static PyCodeObject *codeobj_60b7968cf70979084c59483a25954e54;
static PyCodeObject *codeobj_77440c24d58f45c049118af65a908445;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[211]); CHECK_OBJECT(module_filename_obj);
    codeobj_6e8fc9ca7b511e0c715d11206ad4414c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[212], NULL, NULL, 0, 0, 0);
    codeobj_ac8aa3f18b131ea30bc8eb9df539da13 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[213], NULL, 1, 0, 0);
    codeobj_5bd08053e5603694e98af6da33f557f4 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_NOFREE, mod_consts[106], mod_consts[214], NULL, 2, 0, 0);
    codeobj_b3bda0936c0060f557f636e4a772ad20 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_NOFREE, mod_consts[107], mod_consts[215], NULL, 1, 0, 0);
    codeobj_b11d50062508958f34ff808b36bfe56b = MAKE_CODEOBJECT(module_filename_obj, 57, CO_NOFREE, mod_consts[109], mod_consts[216], NULL, 1, 0, 0);
    codeobj_6df885735344806953084981b6001040 = MAKE_CODEOBJECT(module_filename_obj, 60, CO_NOFREE, mod_consts[114], mod_consts[217], NULL, 3, 0, 0);
    codeobj_55f739a3f6d586c9814c7fcd5c7b4519 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_NOFREE, mod_consts[116], mod_consts[218], NULL, 2, 0, 0);
    codeobj_2a2433c519662789b481c2997a16b224 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_NOFREE, mod_consts[118], mod_consts[219], NULL, 3, 0, 0);
    codeobj_93f4afd33dab60faec4045350bbbfb78 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_NOFREE, mod_consts[120], mod_consts[220], NULL, 3, 0, 0);
    codeobj_014251cd2efef2a7600df7d3bff49a54 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE, mod_consts[121], mod_consts[221], NULL, 2, 0, 0);
    codeobj_053d51b26be64ec22422ff8234a47c73 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_NOFREE, mod_consts[122], mod_consts[218], NULL, 2, 0, 0);
    codeobj_74d9cf1ead9f233d309b069c6083a04d = MAKE_CODEOBJECT(module_filename_obj, 78, CO_NOFREE, mod_consts[123], mod_consts[222], NULL, 3, 0, 0);
    codeobj_3f127cb6379dab52fec1d7d43d4b3ca5 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_NOFREE, mod_consts[125], mod_consts[222], NULL, 3, 0, 0);
    codeobj_a477d057b4776258e457b16b911254cb = MAKE_CODEOBJECT(module_filename_obj, 84, CO_NOFREE, mod_consts[128], mod_consts[223], NULL, 5, 0, 0);
    codeobj_f537b74ca996e4f6f741dae543284406 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[130], mod_consts[224], NULL, 4, 0, 0);
    codeobj_fbef0e5b4431dcff44b8268fe16440b7 = MAKE_CODEOBJECT(module_filename_obj, 90, CO_NOFREE, mod_consts[132], mod_consts[225], NULL, 3, 0, 0);
    codeobj_63d7ab5c00f063f14508c62f6bf6fc36 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_NOFREE, mod_consts[133], mod_consts[226], NULL, 4, 0, 0);
    codeobj_329dfab82f7049d6a3ca4d257c017487 = MAKE_CODEOBJECT(module_filename_obj, 96, CO_NOFREE, mod_consts[134], mod_consts[227], NULL, 3, 0, 0);
    codeobj_c6511365f12ca783f682ea4252992ac6 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_NOFREE, mod_consts[136], mod_consts[215], NULL, 1, 0, 0);
    codeobj_92ef5cf25d16c61784a1a955eb5bc9db = MAKE_CODEOBJECT(module_filename_obj, 102, CO_NOFREE, mod_consts[137], mod_consts[228], NULL, 4, 0, 0);
    codeobj_d77bf2a64ce847800d3fc3bcaa146d90 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_NOFREE, mod_consts[139], mod_consts[229], NULL, 3, 0, 0);
    codeobj_20f4ac33cc315abb08347473185e3fc7 = MAKE_CODEOBJECT(module_filename_obj, 108, CO_NOFREE, mod_consts[139], mod_consts[229], NULL, 3, 0, 0);
    codeobj_13e60d71681a6f4a979f12b2cc8b88dc = MAKE_CODEOBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[140], mod_consts[230], NULL, 3, 0, 0);
    codeobj_dd8602fe218c896af60f935fe9a4ff92 = MAKE_CODEOBJECT(module_filename_obj, 114, CO_NOFREE, mod_consts[141], mod_consts[231], NULL, 4, 0, 0);
    codeobj_02ecbdc18aa33e8a16e2a2ea9579ca0b = MAKE_CODEOBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[142], mod_consts[230], NULL, 3, 0, 0);
    codeobj_8e12f9747f9ca120bbd0c58ae3b33599 = MAKE_CODEOBJECT(module_filename_obj, 120, CO_NOFREE, mod_consts[143], mod_consts[231], NULL, 4, 0, 0);
    codeobj_54518f24f150f27773cce834e7f91f56 = MAKE_CODEOBJECT(module_filename_obj, 123, CO_NOFREE, mod_consts[144], mod_consts[230], NULL, 3, 0, 0);
    codeobj_cb8ab6317c87e4926078bd1671e73555 = MAKE_CODEOBJECT(module_filename_obj, 126, CO_NOFREE, mod_consts[145], mod_consts[231], NULL, 4, 0, 0);
    codeobj_43dc58db308514b3f851c86826cd0df9 = MAKE_CODEOBJECT(module_filename_obj, 129, CO_NOFREE, mod_consts[146], mod_consts[230], NULL, 3, 0, 0);
    codeobj_917079386ae5094ec49745f0b6b19fac = MAKE_CODEOBJECT(module_filename_obj, 132, CO_NOFREE, mod_consts[147], mod_consts[231], NULL, 4, 0, 0);
    codeobj_82e220f002654294a944e9a8dea5c056 = MAKE_CODEOBJECT(module_filename_obj, 135, CO_NOFREE, mod_consts[148], mod_consts[232], NULL, 4, 0, 0);
    codeobj_9fcd92850de0f7a25c2b93a89c942d7a = MAKE_CODEOBJECT(module_filename_obj, 138, CO_NOFREE, mod_consts[149], mod_consts[231], NULL, 4, 0, 0);
    codeobj_169febfa1ccf76abae1557dfea6a8b0b = MAKE_CODEOBJECT(module_filename_obj, 141, CO_NOFREE, mod_consts[150], mod_consts[232], NULL, 4, 0, 0);
    codeobj_5affcbf68071e21610be306f3422550e = MAKE_CODEOBJECT(module_filename_obj, 144, CO_NOFREE, mod_consts[151], mod_consts[231], NULL, 4, 0, 0);
    codeobj_ca41187a9135d848dff342299853bebe = MAKE_CODEOBJECT(module_filename_obj, 147, CO_NOFREE, mod_consts[152], mod_consts[232], NULL, 4, 0, 0);
    codeobj_f6984935ae5a9e8fb3906d762272921c = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[153], mod_consts[231], NULL, 4, 0, 0);
    codeobj_716e03069809ec2ee0bf1210a5437c7c = MAKE_CODEOBJECT(module_filename_obj, 153, CO_NOFREE, mod_consts[154], mod_consts[232], NULL, 4, 0, 0);
    codeobj_0b74c8330171c3d259b6afc38cc4c7f0 = MAKE_CODEOBJECT(module_filename_obj, 156, CO_NOFREE, mod_consts[155], mod_consts[231], NULL, 4, 0, 0);
    codeobj_650633c12aaee1a16686704d3e37ec8d = MAKE_CODEOBJECT(module_filename_obj, 159, CO_NOFREE, mod_consts[156], mod_consts[233], NULL, 5, 0, 0);
    codeobj_7aa12e1f97c8338eba5dd12c11dfbec9 = MAKE_CODEOBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[157], mod_consts[231], NULL, 4, 0, 0);
    codeobj_25cdfc22a98e1d540a0097575b717c75 = MAKE_CODEOBJECT(module_filename_obj, 165, CO_NOFREE, mod_consts[158], mod_consts[233], NULL, 5, 0, 0);
    codeobj_33eeb45e272e99282b459c02734a00e6 = MAKE_CODEOBJECT(module_filename_obj, 168, CO_NOFREE, mod_consts[159], mod_consts[231], NULL, 4, 0, 0);
    codeobj_7d0eb2bba6852dc6dd22902347e97f27 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_NOFREE, mod_consts[160], mod_consts[233], NULL, 5, 0, 0);
    codeobj_73efe50532c4f52527551bc8dcb04708 = MAKE_CODEOBJECT(module_filename_obj, 174, CO_NOFREE, mod_consts[161], mod_consts[231], NULL, 4, 0, 0);
    codeobj_1bb889ce5983c6342a74e971162ada9f = MAKE_CODEOBJECT(module_filename_obj, 177, CO_NOFREE, mod_consts[162], mod_consts[233], NULL, 5, 0, 0);
    codeobj_bda7f684aa7eb61b90fa4a796ce71e30 = MAKE_CODEOBJECT(module_filename_obj, 180, CO_NOFREE, mod_consts[163], mod_consts[231], NULL, 4, 0, 0);
    codeobj_629f3b2ea84bffc05c7fa67620d78b1f = MAKE_CODEOBJECT(module_filename_obj, 183, CO_NOFREE, mod_consts[164], mod_consts[234], NULL, 6, 0, 0);
    codeobj_9acf01709abb7249ee71ed7c671ce796 = MAKE_CODEOBJECT(module_filename_obj, 186, CO_NOFREE, mod_consts[165], mod_consts[231], NULL, 4, 0, 0);
    codeobj_2720533e528ee341034faecfbbbf9049 = MAKE_CODEOBJECT(module_filename_obj, 189, CO_NOFREE, mod_consts[166], mod_consts[234], NULL, 6, 0, 0);
    codeobj_345e4828c4e222c853d6bf809b2dc2b8 = MAKE_CODEOBJECT(module_filename_obj, 192, CO_NOFREE, mod_consts[167], mod_consts[231], NULL, 4, 0, 0);
    codeobj_3c3b68ecd03b26480dca65cca3d98275 = MAKE_CODEOBJECT(module_filename_obj, 195, CO_NOFREE, mod_consts[168], mod_consts[234], NULL, 6, 0, 0);
    codeobj_ad64681c237a9514d8b42dc6816e7d75 = MAKE_CODEOBJECT(module_filename_obj, 198, CO_NOFREE, mod_consts[169], mod_consts[231], NULL, 4, 0, 0);
    codeobj_a5e73a5e76074d96f17c40e339e18a76 = MAKE_CODEOBJECT(module_filename_obj, 201, CO_NOFREE, mod_consts[170], mod_consts[234], NULL, 6, 0, 0);
    codeobj_1a0fe350cdf1e4579b5bbf8da1c028a6 = MAKE_CODEOBJECT(module_filename_obj, 204, CO_NOFREE, mod_consts[171], mod_consts[231], NULL, 4, 0, 0);
    codeobj_0f1a9ac20d6d0030a79777409eef4550 = MAKE_CODEOBJECT(module_filename_obj, 207, CO_NOFREE, mod_consts[172], mod_consts[235], NULL, 5, 0, 0);
    codeobj_4d002637b28ba265bfa10dbcfa52e566 = MAKE_CODEOBJECT(module_filename_obj, 210, CO_NOFREE, mod_consts[173], mod_consts[235], NULL, 5, 0, 0);
    codeobj_0727b4f6a7f5c6d78cd59643eb38a3b5 = MAKE_CODEOBJECT(module_filename_obj, 213, CO_NOFREE, mod_consts[174], mod_consts[235], NULL, 5, 0, 0);
    codeobj_04ff23cdfda0d412456a6f522b7868d6 = MAKE_CODEOBJECT(module_filename_obj, 216, CO_NOFREE, mod_consts[175], mod_consts[235], NULL, 5, 0, 0);
    codeobj_67bd453c164082fb76e9897cf3ded619 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_NOFREE, mod_consts[176], mod_consts[235], NULL, 5, 0, 0);
    codeobj_24b1df9911e4ae9fb6c3603c59ee7cf6 = MAKE_CODEOBJECT(module_filename_obj, 222, CO_NOFREE, mod_consts[177], mod_consts[235], NULL, 5, 0, 0);
    codeobj_5039647d61702f60d34bb3a15aab5ff4 = MAKE_CODEOBJECT(module_filename_obj, 225, CO_NOFREE, mod_consts[178], mod_consts[235], NULL, 5, 0, 0);
    codeobj_b89c1e1dc9df50c854c93a1a5bcc2379 = MAKE_CODEOBJECT(module_filename_obj, 228, CO_NOFREE, mod_consts[179], mod_consts[235], NULL, 5, 0, 0);
    codeobj_d17a75bf09fa245733a067fc93463645 = MAKE_CODEOBJECT(module_filename_obj, 231, CO_NOFREE, mod_consts[180], mod_consts[235], NULL, 5, 0, 0);
    codeobj_cad25c866c948cd10eaace3d72041fb7 = MAKE_CODEOBJECT(module_filename_obj, 234, CO_NOFREE, mod_consts[181], mod_consts[235], NULL, 5, 0, 0);
    codeobj_db73e87312d8ab4eea663a985f69120b = MAKE_CODEOBJECT(module_filename_obj, 237, CO_NOFREE, mod_consts[182], mod_consts[235], NULL, 5, 0, 0);
    codeobj_e25307cbf241ba047aac59c7187ea6d0 = MAKE_CODEOBJECT(module_filename_obj, 240, CO_NOFREE, mod_consts[183], mod_consts[235], NULL, 5, 0, 0);
    codeobj_5f4c63518bcb925fbaddb9400381633c = MAKE_CODEOBJECT(module_filename_obj, 243, CO_NOFREE, mod_consts[184], mod_consts[235], NULL, 5, 0, 0);
    codeobj_27200a51344c0544bc767a4405e60c98 = MAKE_CODEOBJECT(module_filename_obj, 246, CO_NOFREE, mod_consts[185], mod_consts[235], NULL, 5, 0, 0);
    codeobj_271e2e2d7b6f9487be1b4846dd72221d = MAKE_CODEOBJECT(module_filename_obj, 249, CO_NOFREE, mod_consts[186], mod_consts[235], NULL, 5, 0, 0);
    codeobj_22c199348a0bcbd28fc35dce268c1baf = MAKE_CODEOBJECT(module_filename_obj, 252, CO_NOFREE, mod_consts[187], mod_consts[235], NULL, 5, 0, 0);
    codeobj_59fedc9deb23888f21b7ddce870c950f = MAKE_CODEOBJECT(module_filename_obj, 255, CO_NOFREE, mod_consts[188], mod_consts[235], NULL, 5, 0, 0);
    codeobj_db52307ececeb94720f46596c79cca25 = MAKE_CODEOBJECT(module_filename_obj, 258, CO_NOFREE, mod_consts[189], mod_consts[235], NULL, 5, 0, 0);
    codeobj_ba2073b31c6836d20ef6f000d01267d0 = MAKE_CODEOBJECT(module_filename_obj, 261, CO_NOFREE, mod_consts[191], NULL, NULL, 0, 0, 0);
    codeobj_a67baff205bcc7aef2dbe5e0b9695370 = MAKE_CODEOBJECT(module_filename_obj, 264, CO_NOFREE, mod_consts[192], mod_consts[219], NULL, 3, 0, 0);
    codeobj_6501dfed477ecee58c00afb6d48024f5 = MAKE_CODEOBJECT(module_filename_obj, 267, CO_NOFREE, mod_consts[193], mod_consts[236], NULL, 5, 0, 0);
    codeobj_9db4860a272cd91afa427fa891fc504a = MAKE_CODEOBJECT(module_filename_obj, 270, CO_NOFREE, mod_consts[194], mod_consts[237], NULL, 2, 0, 0);
    codeobj_1f24a9a9d751cf6895dc81f03053e2c8 = MAKE_CODEOBJECT(module_filename_obj, 273, CO_NOFREE, mod_consts[195], mod_consts[238], NULL, 5, 0, 0);
    codeobj_3203cf0bcf2bd5245d78ab7609e53bd1 = MAKE_CODEOBJECT(module_filename_obj, 276, CO_NOFREE, mod_consts[197], mod_consts[239], NULL, 3, 0, 0);
    codeobj_26d0e688e0e1b03858e37998f7e07e9a = MAKE_CODEOBJECT(module_filename_obj, 279, CO_NOFREE, mod_consts[198], mod_consts[215], NULL, 1, 0, 0);
    codeobj_a15a7ee1fb26a9e1f9440f7f4a7db96d = MAKE_CODEOBJECT(module_filename_obj, 282, CO_NOFREE, mod_consts[199], mod_consts[240], NULL, 2, 0, 0);
    codeobj_d20203dbebf8d4743e395736d4774ee7 = MAKE_CODEOBJECT(module_filename_obj, 285, CO_NOFREE, mod_consts[200], mod_consts[237], NULL, 2, 0, 0);
    codeobj_98bff49b50d8c2a46bb397c2efeab3ef = MAKE_CODEOBJECT(module_filename_obj, 288, CO_NOFREE, mod_consts[201], mod_consts[241], NULL, 3, 0, 0);
    codeobj_66157d7bf447e9e2c24cca5e6296aab6 = MAKE_CODEOBJECT(module_filename_obj, 291, CO_NOFREE, mod_consts[202], mod_consts[237], NULL, 2, 0, 0);
    codeobj_99a1c370b4a6f154dee185d211779545 = MAKE_CODEOBJECT(module_filename_obj, 294, CO_NOFREE, mod_consts[203], mod_consts[242], NULL, 4, 0, 0);
    codeobj_0be676d95414411bc8fdf3eb0b51cf01 = MAKE_CODEOBJECT(module_filename_obj, 297, CO_NOFREE, mod_consts[204], mod_consts[237], NULL, 2, 0, 0);
    codeobj_d2077acb1366437d189666f3bacd96fe = MAKE_CODEOBJECT(module_filename_obj, 300, CO_NOFREE, mod_consts[205], mod_consts[243], NULL, 5, 0, 0);
    codeobj_f2fce4685dca9933a211e97841002757 = MAKE_CODEOBJECT(module_filename_obj, 303, CO_NOFREE, mod_consts[206], mod_consts[237], NULL, 2, 0, 0);
    codeobj_83c2250a351fa11778844176e9d6962f = MAKE_CODEOBJECT(module_filename_obj, 306, CO_NOFREE, mod_consts[207], mod_consts[244], NULL, 5, 0, 0);
    codeobj_95d22d704e5596516830053f7f8bfd8e = MAKE_CODEOBJECT(module_filename_obj, 309, CO_NOFREE, mod_consts[208], mod_consts[219], NULL, 3, 0, 0);
    codeobj_60b7968cf70979084c59483a25954e54 = MAKE_CODEOBJECT(module_filename_obj, 312, CO_NOFREE, mod_consts[209], mod_consts[245], NULL, 5, 0, 0);
    codeobj_77440c24d58f45c049118af65a908445 = MAKE_CODEOBJECT(module_filename_obj, 315, CO_NOFREE, mod_consts[210], mod_consts[237], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__10_glGenProgramPipelines();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__11_glGetDoublei_v();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__12_glGetFloati_v();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__13_glGetProgramBinary();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__14_glGetProgramPipelineInfoLog();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__15_glGetProgramPipelineiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__16_glGetShaderPrecisionFormat();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__17_glGetVertexAttribLdv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__18_glIsProgramPipeline();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__19_glProgramBinary();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__1__f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__20_glProgramParameteri();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__21_glProgramParameteri();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__22_glProgramUniform1d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__23_glProgramUniform1dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__24_glProgramUniform1f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__25_glProgramUniform1fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__26_glProgramUniform1i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__27_glProgramUniform1iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__28_glProgramUniform1ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__29_glProgramUniform1uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__2_glActiveShaderProgram();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__30_glProgramUniform2d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__31_glProgramUniform2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__32_glProgramUniform2f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__33_glProgramUniform2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__34_glProgramUniform2i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__35_glProgramUniform2iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__36_glProgramUniform2ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__37_glProgramUniform2uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__38_glProgramUniform3d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__39_glProgramUniform3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__3_glBindProgramPipeline();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__40_glProgramUniform3f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__41_glProgramUniform3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__42_glProgramUniform3i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__43_glProgramUniform3iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__44_glProgramUniform3ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__45_glProgramUniform3uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__46_glProgramUniform4d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__47_glProgramUniform4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__48_glProgramUniform4f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__49_glProgramUniform4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__4_glClearDepthf();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__50_glProgramUniform4i();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__51_glProgramUniform4iv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__52_glProgramUniform4ui();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__53_glProgramUniform4uiv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__54_glProgramUniformMatrix2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__55_glProgramUniformMatrix2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__56_glProgramUniformMatrix2x3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__57_glProgramUniformMatrix2x3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__58_glProgramUniformMatrix2x4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__59_glProgramUniformMatrix2x4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__5_glCreateShaderProgramv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__60_glProgramUniformMatrix3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__61_glProgramUniformMatrix3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__62_glProgramUniformMatrix3x2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__63_glProgramUniformMatrix3x2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__64_glProgramUniformMatrix3x4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__65_glProgramUniformMatrix3x4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__66_glProgramUniformMatrix4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__67_glProgramUniformMatrix4fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__68_glProgramUniformMatrix4x2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__69_glProgramUniformMatrix4x2fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__6_glDeleteProgramPipelines();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__70_glProgramUniformMatrix4x3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__71_glProgramUniformMatrix4x3fv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__72_glReleaseShaderCompiler();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__73_glScissorArrayv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__74_glScissorIndexed();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__75_glScissorIndexedv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__76_glShaderBinary();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__77_glUseProgramStages();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__78_glValidateProgramPipeline();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__79_glVertexAttribL1d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__7_glDepthRangeArrayv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__80_glVertexAttribL1dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__81_glVertexAttribL2d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__82_glVertexAttribL2dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__83_glVertexAttribL3d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__84_glVertexAttribL3dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__85_glVertexAttribL4d();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__86_glVertexAttribL4dv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__87_glVertexAttribLPointer();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__88_glViewportArrayv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__89_glViewportIndexedf();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__8_glDepthRangeIndexed();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__90_glViewportIndexedfv();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__9_glDepthRangef();


// The module function definitions.
static PyObject *impl_OpenGL$raw$GL$VERSION$GL_4_1$$$function__1__f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[0];
    struct Nuitka_FrameObject *frame_ac8aa3f18b131ea30bc8eb9df539da13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ac8aa3f18b131ea30bc8eb9df539da13 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac8aa3f18b131ea30bc8eb9df539da13)) {
        Py_XDECREF(cache_frame_ac8aa3f18b131ea30bc8eb9df539da13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac8aa3f18b131ea30bc8eb9df539da13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac8aa3f18b131ea30bc8eb9df539da13 = MAKE_FUNCTION_FRAME(codeobj_ac8aa3f18b131ea30bc8eb9df539da13, module_OpenGL$raw$GL$VERSION$GL_4_1, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ac8aa3f18b131ea30bc8eb9df539da13->m_type_description == NULL);
    frame_ac8aa3f18b131ea30bc8eb9df539da13 = cache_frame_ac8aa3f18b131ea30bc8eb9df539da13;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ac8aa3f18b131ea30bc8eb9df539da13);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ac8aa3f18b131ea30bc8eb9df539da13) == 2); // Frame stack

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[5]);

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
        frame_ac8aa3f18b131ea30bc8eb9df539da13->m_frame.f_lineno = 13;
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
    RESTORE_FRAME_EXCEPTION(frame_ac8aa3f18b131ea30bc8eb9df539da13);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8aa3f18b131ea30bc8eb9df539da13);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8aa3f18b131ea30bc8eb9df539da13);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac8aa3f18b131ea30bc8eb9df539da13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac8aa3f18b131ea30bc8eb9df539da13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac8aa3f18b131ea30bc8eb9df539da13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac8aa3f18b131ea30bc8eb9df539da13,
        type_description_1,
        par_function
    );


    // Release cached frame if used for exception.
    if (frame_ac8aa3f18b131ea30bc8eb9df539da13 == cache_frame_ac8aa3f18b131ea30bc8eb9df539da13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ac8aa3f18b131ea30bc8eb9df539da13);
        cache_frame_ac8aa3f18b131ea30bc8eb9df539da13 = NULL;
    }

    assertFrameObject(frame_ac8aa3f18b131ea30bc8eb9df539da13);

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



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__10_glGenProgramPipelines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_053d51b26be64ec22422ff8234a47c73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__11_glGetDoublei_v() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74d9cf1ead9f233d309b069c6083a04d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__12_glGetFloati_v() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f127cb6379dab52fec1d7d43d4b3ca5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__13_glGetProgramBinary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a477d057b4776258e457b16b911254cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__14_glGetProgramPipelineInfoLog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f537b74ca996e4f6f741dae543284406,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__15_glGetProgramPipelineiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fbef0e5b4431dcff44b8268fe16440b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__16_glGetShaderPrecisionFormat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_63d7ab5c00f063f14508c62f6bf6fc36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__17_glGetVertexAttribLdv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_329dfab82f7049d6a3ca4d257c017487,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__18_glIsProgramPipeline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6511365f12ca783f682ea4252992ac6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__19_glProgramBinary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92ef5cf25d16c61784a1a955eb5bc9db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__1__f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenGL$raw$GL$VERSION$GL_4_1$$$function__1__f,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac8aa3f18b131ea30bc8eb9df539da13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__20_glProgramParameteri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d77bf2a64ce847800d3fc3bcaa146d90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__21_glProgramParameteri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_20f4ac33cc315abb08347473185e3fc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__22_glProgramUniform1d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13e60d71681a6f4a979f12b2cc8b88dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__23_glProgramUniform1dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd8602fe218c896af60f935fe9a4ff92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__24_glProgramUniform1f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_02ecbdc18aa33e8a16e2a2ea9579ca0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__25_glProgramUniform1fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8e12f9747f9ca120bbd0c58ae3b33599,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__26_glProgramUniform1i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_54518f24f150f27773cce834e7f91f56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__27_glProgramUniform1iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb8ab6317c87e4926078bd1671e73555,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__28_glProgramUniform1ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43dc58db308514b3f851c86826cd0df9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__29_glProgramUniform1uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_917079386ae5094ec49745f0b6b19fac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__2_glActiveShaderProgram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5bd08053e5603694e98af6da33f557f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__30_glProgramUniform2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_82e220f002654294a944e9a8dea5c056,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__31_glProgramUniform2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fcd92850de0f7a25c2b93a89c942d7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__32_glProgramUniform2f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_169febfa1ccf76abae1557dfea6a8b0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__33_glProgramUniform2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5affcbf68071e21610be306f3422550e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__34_glProgramUniform2i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca41187a9135d848dff342299853bebe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__35_glProgramUniform2iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6984935ae5a9e8fb3906d762272921c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__36_glProgramUniform2ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_716e03069809ec2ee0bf1210a5437c7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__37_glProgramUniform2uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b74c8330171c3d259b6afc38cc4c7f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__38_glProgramUniform3d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_650633c12aaee1a16686704d3e37ec8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__39_glProgramUniform3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7aa12e1f97c8338eba5dd12c11dfbec9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__3_glBindProgramPipeline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b3bda0936c0060f557f636e4a772ad20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__40_glProgramUniform3f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25cdfc22a98e1d540a0097575b717c75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__41_glProgramUniform3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33eeb45e272e99282b459c02734a00e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__42_glProgramUniform3i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d0eb2bba6852dc6dd22902347e97f27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__43_glProgramUniform3iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73efe50532c4f52527551bc8dcb04708,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__44_glProgramUniform3ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1bb889ce5983c6342a74e971162ada9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__45_glProgramUniform3uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bda7f684aa7eb61b90fa4a796ce71e30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__46_glProgramUniform4d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_629f3b2ea84bffc05c7fa67620d78b1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__47_glProgramUniform4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9acf01709abb7249ee71ed7c671ce796,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__48_glProgramUniform4f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2720533e528ee341034faecfbbbf9049,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__49_glProgramUniform4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_345e4828c4e222c853d6bf809b2dc2b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__4_glClearDepthf() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b11d50062508958f34ff808b36bfe56b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__50_glProgramUniform4i() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c3b68ecd03b26480dca65cca3d98275,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__51_glProgramUniform4iv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad64681c237a9514d8b42dc6816e7d75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__52_glProgramUniform4ui() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5e73a5e76074d96f17c40e339e18a76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__53_glProgramUniform4uiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a0fe350cdf1e4579b5bbf8da1c028a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__54_glProgramUniformMatrix2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f1a9ac20d6d0030a79777409eef4550,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__55_glProgramUniformMatrix2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d002637b28ba265bfa10dbcfa52e566,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__56_glProgramUniformMatrix2x3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0727b4f6a7f5c6d78cd59643eb38a3b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__57_glProgramUniformMatrix2x3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04ff23cdfda0d412456a6f522b7868d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__58_glProgramUniformMatrix2x4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_67bd453c164082fb76e9897cf3ded619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__59_glProgramUniformMatrix2x4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_24b1df9911e4ae9fb6c3603c59ee7cf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__5_glCreateShaderProgramv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6df885735344806953084981b6001040,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__60_glProgramUniformMatrix3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5039647d61702f60d34bb3a15aab5ff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__61_glProgramUniformMatrix3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b89c1e1dc9df50c854c93a1a5bcc2379,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__62_glProgramUniformMatrix3x2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d17a75bf09fa245733a067fc93463645,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__63_glProgramUniformMatrix3x2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cad25c866c948cd10eaace3d72041fb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__64_glProgramUniformMatrix3x4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_db73e87312d8ab4eea663a985f69120b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__65_glProgramUniformMatrix3x4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e25307cbf241ba047aac59c7187ea6d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__66_glProgramUniformMatrix4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f4c63518bcb925fbaddb9400381633c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__67_glProgramUniformMatrix4fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_27200a51344c0544bc767a4405e60c98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__68_glProgramUniformMatrix4x2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_271e2e2d7b6f9487be1b4846dd72221d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__69_glProgramUniformMatrix4x2fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22c199348a0bcbd28fc35dce268c1baf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__6_glDeleteProgramPipelines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_55f739a3f6d586c9814c7fcd5c7b4519,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__70_glProgramUniformMatrix4x3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_59fedc9deb23888f21b7ddce870c950f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__71_glProgramUniformMatrix4x3fv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_db52307ececeb94720f46596c79cca25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__72_glReleaseShaderCompiler() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba2073b31c6836d20ef6f000d01267d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__73_glScissorArrayv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a67baff205bcc7aef2dbe5e0b9695370,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__74_glScissorIndexed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6501dfed477ecee58c00afb6d48024f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__75_glScissorIndexedv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9db4860a272cd91afa427fa891fc504a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__76_glShaderBinary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f24a9a9d751cf6895dc81f03053e2c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__77_glUseProgramStages() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3203cf0bcf2bd5245d78ab7609e53bd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__78_glValidateProgramPipeline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26d0e688e0e1b03858e37998f7e07e9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__79_glVertexAttribL1d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a15a7ee1fb26a9e1f9440f7f4a7db96d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__7_glDepthRangeArrayv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a2433c519662789b481c2997a16b224,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__80_glVertexAttribL1dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d20203dbebf8d4743e395736d4774ee7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__81_glVertexAttribL2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_98bff49b50d8c2a46bb397c2efeab3ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__82_glVertexAttribL2dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_66157d7bf447e9e2c24cca5e6296aab6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__83_glVertexAttribL3d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_99a1c370b4a6f154dee185d211779545,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__84_glVertexAttribL3dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0be676d95414411bc8fdf3eb0b51cf01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__85_glVertexAttribL4d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2077acb1366437d189666f3bacd96fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__86_glVertexAttribL4dv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f2fce4685dca9933a211e97841002757,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__87_glVertexAttribLPointer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83c2250a351fa11778844176e9d6962f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__88_glViewportArrayv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_95d22d704e5596516830053f7f8bfd8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__89_glViewportIndexedf() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60b7968cf70979084c59483a25954e54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__8_glDepthRangeIndexed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93f4afd33dab60faec4045350bbbfb78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__90_glViewportIndexedfv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77440c24d58f45c049118af65a908445,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__9_glDepthRangef() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_014251cd2efef2a7600df7d3bff49a54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$VERSION$GL_4_1,
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

function_impl_code functable_OpenGL$raw$GL$VERSION$GL_4_1[] = {
    impl_OpenGL$raw$GL$VERSION$GL_4_1$$$function__1__f,
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

    function_impl_code *current = functable_OpenGL$raw$GL$VERSION$GL_4_1;
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

    if (offset > sizeof(functable_OpenGL$raw$GL$VERSION$GL_4_1) || offset < 0) {
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
        functable_OpenGL$raw$GL$VERSION$GL_4_1[offset],
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
        module_OpenGL$raw$GL$VERSION$GL_4_1,
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
PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_1(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GL.VERSION.GL_4_1");

    // Store the module for future use.
    module_OpenGL$raw$GL$VERSION$GL_4_1 = module;

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
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_1: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_1: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.VERSION.GL_4_1: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GL$VERSION$GL_4_1\n");

    moduledict_OpenGL$raw$GL$VERSION$GL_4_1 = MODULE_DICT(module_OpenGL$raw$GL$VERSION$GL_4_1);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[246]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GL$VERSION$GL_4_1);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GL$VERSION$GL_4_1);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6e8fc9ca7b511e0c715d11206ad4414c;
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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_6e8fc9ca7b511e0c715d11206ad4414c = MAKE_MODULE_FRAME(codeobj_6e8fc9ca7b511e0c715d11206ad4414c, module_OpenGL$raw$GL$VERSION$GL_4_1);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6e8fc9ca7b511e0c715d11206ad4414c);
    assert(Py_REFCNT(frame_6e8fc9ca7b511e0c715d11206ad4414c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[11]);

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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[17];
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GL$VERSION$GL_4_1, true, tmp_star_imported_1);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[26];
        tmp_level_value_4 = mod_consts[17];
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[28];
        tmp_level_value_5 = mod_consts[17];
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GL$VERSION$GL_4_1;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[17];
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__1__f();

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 15;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[36]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 16;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[38]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[40]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 19;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[44]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[46]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[48]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 22;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[50]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 23;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[52]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 24;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[54]);

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 25;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[56]);

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 26;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[58]);

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 27;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[60]);

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[62]);

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 29;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[64]);

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 30;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[66]);

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 31;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[68]);

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 32;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[70]);

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 33;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[72]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 34;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[74]);

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 35;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[76]);

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 36;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[78]);

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 37;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[80]);

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 38;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[82]);

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 39;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[84]);

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 40;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[86]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 41;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[88]);

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 42;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[90]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 43;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[92]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 44;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[94]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 45;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[96]);

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 46;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[98]);

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 47;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[100]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 48;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[102]);

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[104]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[105]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[105]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_called_value_37 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__2_glActiveShaderProgram();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 50;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 49;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[104]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = Py_None;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[105]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_called_value_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_9 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__3_glBindProgramPipeline();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 53;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 52;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[104]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = Py_None;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[108]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_called_value_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_13 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__4_glClearDepthf();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 56;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 55;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[104]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[105]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[110]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[111]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[112]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[112]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[113]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 59;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 59;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_called_value_46 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_21 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__5_glCreateShaderProgramv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 59;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 58;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[104]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = Py_None;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[111]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[115]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_called_value_51 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_26 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__6_glDeleteProgramPipelines();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 62;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 61;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[104]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = Py_None;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[105]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[111]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[117]);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_called_value_54 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_55, call_args);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_32 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__7_glDepthRangeArrayv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 65;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 64;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[104]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = Py_None;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[105]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[119]);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[119]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_called_value_57 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_58, call_args);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_38 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__8_glDepthRangeIndexed();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 68;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 67;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_43;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[104]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = Py_None;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[108]);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[108]);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_called_value_60 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_61, call_args);
        }

        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_43 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__9_glDepthRangef();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 71;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 70;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_63;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[104]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = Py_None;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[111]);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[115]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_called_value_63 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_64, call_args);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_48 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__10_glGenProgramPipelines();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 74;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 73;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_54;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[104]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = Py_None;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[110]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[105]);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[117]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_called_value_66 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_67, call_args);
        }

        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_54 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__11_glGetDoublei_v();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 77;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 76;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_69;
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_60;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[104]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = Py_None;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[110]);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_57);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[105]);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_57);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[124]);
        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_called_value_69 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_70, call_args);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_60 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__12_glGetFloati_v();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 80;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 79;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[104]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = Py_None;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[105]);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[111]);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[126]);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[115]);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[127]);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_called_value_72 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_73, call_args);
        }

        Py_DECREF(tmp_called_value_73);
        Py_DECREF(tmp_args_element_value_63);
        Py_DECREF(tmp_args_element_value_64);
        Py_DECREF(tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_66);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_68 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__13_glGetProgramBinary();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 83;
        tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 82;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_74;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_75;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_75;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[104]);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = Py_None;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[105]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_71);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[111]);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_71);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[126]);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[129]);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_called_value_75 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_76, call_args);
        }

        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_71);
        Py_DECREF(tmp_args_element_value_72);
        Py_DECREF(tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_75 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__14_glGetProgramPipelineInfoLog();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 86;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_75, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 85;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_81;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[104]);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = Py_None;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[105]);
        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[110]);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[131]);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_called_value_78 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_79, call_args);
        }

        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_81 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__15_glGetProgramPipelineiv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 89;
        tmp_args_element_value_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_81);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 88;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_76);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_value_81;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_88;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[104]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = Py_None;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[110]);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_84);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[110]);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_84);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[131]);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[131]);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_called_value_81 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_82, call_args);
        }

        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_84);
        Py_DECREF(tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_88 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__16_glGetShaderPrecisionFormat();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 92;
        tmp_args_element_value_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_88);
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 91;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_called_value_84;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_94;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[104]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = Py_None;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[105]);
        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_91);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[110]);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_91);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_92);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[117]);
        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_92);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_called_value_84 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_85, call_args);
        }

        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_91);
        Py_DECREF(tmp_args_element_value_92);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_94 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__17_glGetVertexAttribLdv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 95;
        tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_94);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 94;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_87;
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[104]);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[135]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[105]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_called_value_87 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_88, call_args);
        }

        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_98 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__18_glIsProgramPipeline();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 98;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_87, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 97;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_95);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_90;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_105;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[104]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = Py_None;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[105]);
        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_101);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[110]);
        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_101);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[127]);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[111]);
        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_called_value_90 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_91, call_args);
        }

        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_args_element_value_101);
        Py_DECREF(tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_105 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__19_glProgramBinary();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 101;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 100;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_99);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_93;
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_element_value_111;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[104]);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = Py_None;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[105]);
        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_108);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[110]);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_108);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[138]);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110};
            tmp_called_value_93 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_94, call_args);
        }

        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_108);
        Py_DECREF(tmp_args_element_value_109);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_111 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__20_glProgramParameteri();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 104;
        tmp_args_element_value_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_93, tmp_args_element_value_111);
        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 103;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_106);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_117;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[104]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = Py_None;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[105]);
        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_114);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[110]);
        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_114);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_114);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[138]);
        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_114);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_called_value_96 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_97, call_args);
        }

        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_args_element_value_114);
        Py_DECREF(tmp_args_element_value_115);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_117 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__21_glProgramParameteri();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 107;
        tmp_args_element_value_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_117);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 106;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_112);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_called_value_99;
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_123;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[104]);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = Py_None;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[105]);
        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[138]);
        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_120);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[119]);
        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_called_value_99 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_100, call_args);
        }

        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_120);
        Py_DECREF(tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_123 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__22_glProgramUniform1d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 110;
        tmp_args_element_value_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_123);
        Py_DECREF(tmp_called_value_99);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 109;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_118);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_called_value_102;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_130;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[104]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = Py_None;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[105]);
        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[138]);
        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_126);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[111]);
        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[117]);
        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_126);
            Py_DECREF(tmp_args_element_value_127);
            Py_DECREF(tmp_args_element_value_128);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_called_value_102 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_103, call_args);
        }

        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_126);
        Py_DECREF(tmp_args_element_value_127);
        Py_DECREF(tmp_args_element_value_128);
        Py_DECREF(tmp_args_element_value_129);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_130 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__23_glProgramUniform1dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 113;
        tmp_args_element_value_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_130);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_args_element_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 112;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_101, tmp_args_element_value_124);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_called_value_105;
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_136;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[104]);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = Py_None;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[105]);
        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[138]);
        if (tmp_args_element_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_133);
            Py_DECREF(tmp_args_element_value_134);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[108]);
        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_133);
            Py_DECREF(tmp_args_element_value_134);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_132, tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135};
            tmp_called_value_105 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_106, call_args);
        }

        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_133);
        Py_DECREF(tmp_args_element_value_134);
        Py_DECREF(tmp_args_element_value_135);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_136 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__24_glProgramUniform1f();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 116;
        tmp_args_element_value_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_105, tmp_args_element_value_136);
        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_args_element_value_136);
        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 115;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_131);
        Py_DECREF(tmp_args_element_value_131);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_called_value_108;
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_143;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[104]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_138 = Py_None;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[105]);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[138]);
        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_139);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_139);
            Py_DECREF(tmp_args_element_value_140);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[111]);
        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_139);
            Py_DECREF(tmp_args_element_value_140);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_139);
            Py_DECREF(tmp_args_element_value_140);
            Py_DECREF(tmp_args_element_value_141);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[124]);
        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_139);
            Py_DECREF(tmp_args_element_value_140);
            Py_DECREF(tmp_args_element_value_141);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_138, tmp_args_element_value_139, tmp_args_element_value_140, tmp_args_element_value_141, tmp_args_element_value_142};
            tmp_called_value_108 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_109, call_args);
        }

        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_element_value_139);
        Py_DECREF(tmp_args_element_value_140);
        Py_DECREF(tmp_args_element_value_141);
        Py_DECREF(tmp_args_element_value_142);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_143 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__25_glProgramUniform1fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 119;
        tmp_args_element_value_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_143);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_143);
        if (tmp_args_element_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 118;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_137);
        Py_DECREF(tmp_args_element_value_137);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_called_value_111;
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_149;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[104]);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = Py_None;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[105]);
        if (tmp_args_element_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_146);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[138]);
        if (tmp_args_element_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_146);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_146);
            Py_DECREF(tmp_args_element_value_147);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[138]);
        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_146);
            Py_DECREF(tmp_args_element_value_147);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_147, tmp_args_element_value_148};
            tmp_called_value_111 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_112, call_args);
        }

        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_args_element_value_146);
        Py_DECREF(tmp_args_element_value_147);
        Py_DECREF(tmp_args_element_value_148);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_149 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__26_glProgramUniform1i();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 122;
        tmp_args_element_value_144 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_111, tmp_args_element_value_149);
        Py_DECREF(tmp_called_value_111);
        Py_DECREF(tmp_args_element_value_149);
        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 121;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_144);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_called_value_114;
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_args_element_value_156;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[104]);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = Py_None;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[105]);
        if (tmp_args_element_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_152);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[138]);
        if (tmp_args_element_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_152);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_152);
            Py_DECREF(tmp_args_element_value_153);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[111]);
        if (tmp_args_element_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_152);
            Py_DECREF(tmp_args_element_value_153);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_152);
            Py_DECREF(tmp_args_element_value_153);
            Py_DECREF(tmp_args_element_value_154);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[131]);
        if (tmp_args_element_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_152);
            Py_DECREF(tmp_args_element_value_153);
            Py_DECREF(tmp_args_element_value_154);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152, tmp_args_element_value_153, tmp_args_element_value_154, tmp_args_element_value_155};
            tmp_called_value_114 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_115, call_args);
        }

        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_element_value_152);
        Py_DECREF(tmp_args_element_value_153);
        Py_DECREF(tmp_args_element_value_154);
        Py_DECREF(tmp_args_element_value_155);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_156 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__27_glProgramUniform1iv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 125;
        tmp_args_element_value_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_114, tmp_args_element_value_156);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_156);
        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 124;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_113, tmp_args_element_value_150);
        Py_DECREF(tmp_args_element_value_150);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_called_value_117;
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_162;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[104]);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = Py_None;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[105]);
        if (tmp_args_element_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_159);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[138]);
        if (tmp_args_element_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_159);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_159);
            Py_DECREF(tmp_args_element_value_160);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[105]);
        if (tmp_args_element_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_159);
            Py_DECREF(tmp_args_element_value_160);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_158, tmp_args_element_value_159, tmp_args_element_value_160, tmp_args_element_value_161};
            tmp_called_value_117 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_118, call_args);
        }

        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_159);
        Py_DECREF(tmp_args_element_value_160);
        Py_DECREF(tmp_args_element_value_161);
        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_162 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__28_glProgramUniform1ui();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 128;
        tmp_args_element_value_157 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_162);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_162);
        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 127;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_116, tmp_args_element_value_157);
        Py_DECREF(tmp_args_element_value_157);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_called_value_120;
        PyObject *tmp_called_value_121;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_169;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[104]);
        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = Py_None;
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[105]);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_165);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[138]);
        if (tmp_args_element_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_165);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[111]);
        if (tmp_args_element_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[115]);
        if (tmp_args_element_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_165);
            Py_DECREF(tmp_args_element_value_166);
            Py_DECREF(tmp_args_element_value_167);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165, tmp_args_element_value_166, tmp_args_element_value_167, tmp_args_element_value_168};
            tmp_called_value_120 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_121, call_args);
        }

        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_args_element_value_165);
        Py_DECREF(tmp_args_element_value_166);
        Py_DECREF(tmp_args_element_value_167);
        Py_DECREF(tmp_args_element_value_168);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_169 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__29_glProgramUniform1uiv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 131;
        tmp_args_element_value_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_169);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_169);
        if (tmp_args_element_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 130;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_163);
        Py_DECREF(tmp_args_element_value_163);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_122;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_called_value_123;
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_args_element_value_176;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[104]);
        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = Py_None;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[105]);
        if (tmp_args_element_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_172);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[138]);
        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_172);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_172);
            Py_DECREF(tmp_args_element_value_173);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[119]);
        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_172);
            Py_DECREF(tmp_args_element_value_173);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_172);
            Py_DECREF(tmp_args_element_value_173);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[119]);
        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_172);
            Py_DECREF(tmp_args_element_value_173);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_171, tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_called_value_123 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_124, call_args);
        }

        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_172);
        Py_DECREF(tmp_args_element_value_173);
        Py_DECREF(tmp_args_element_value_174);
        Py_DECREF(tmp_args_element_value_175);
        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_176 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__30_glProgramUniform2d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 134;
        tmp_args_element_value_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_123, tmp_args_element_value_176);
        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_element_value_176);
        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 133;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_122, tmp_args_element_value_170);
        Py_DECREF(tmp_args_element_value_170);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_called_value_126;
        PyObject *tmp_called_value_127;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_element_value_183;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_called_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[104]);
        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = Py_None;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[105]);
        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[138]);
        if (tmp_args_element_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_179);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[111]);
        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);
            Py_DECREF(tmp_args_element_value_181);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_182 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[117]);
        if (tmp_args_element_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);
            Py_DECREF(tmp_args_element_value_179);
            Py_DECREF(tmp_args_element_value_180);
            Py_DECREF(tmp_args_element_value_181);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181, tmp_args_element_value_182};
            tmp_called_value_126 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_127, call_args);
        }

        Py_DECREF(tmp_called_value_127);
        Py_DECREF(tmp_args_element_value_179);
        Py_DECREF(tmp_args_element_value_180);
        Py_DECREF(tmp_args_element_value_181);
        Py_DECREF(tmp_args_element_value_182);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_183 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__31_glProgramUniform2dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 137;
        tmp_args_element_value_177 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_126, tmp_args_element_value_183);
        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_183);
        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 136;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_125, tmp_args_element_value_177);
        Py_DECREF(tmp_args_element_value_177);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_128;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_called_value_129;
        PyObject *tmp_called_value_130;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_element_value_190;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_called_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[104]);
        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = Py_None;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[105]);
        if (tmp_args_element_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[138]);
        if (tmp_args_element_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_186);
            Py_DECREF(tmp_args_element_value_187);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[108]);
        if (tmp_args_element_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_186);
            Py_DECREF(tmp_args_element_value_187);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_186);
            Py_DECREF(tmp_args_element_value_187);
            Py_DECREF(tmp_args_element_value_188);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_189 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[108]);
        if (tmp_args_element_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_args_element_value_186);
            Py_DECREF(tmp_args_element_value_187);
            Py_DECREF(tmp_args_element_value_188);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187, tmp_args_element_value_188, tmp_args_element_value_189};
            tmp_called_value_129 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_130, call_args);
        }

        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_186);
        Py_DECREF(tmp_args_element_value_187);
        Py_DECREF(tmp_args_element_value_188);
        Py_DECREF(tmp_args_element_value_189);
        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_190 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__32_glProgramUniform2f();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 140;
        tmp_args_element_value_184 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_129, tmp_args_element_value_190);
        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_element_value_190);
        if (tmp_args_element_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 139;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_184);
        Py_DECREF(tmp_args_element_value_184);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_called_value_132;
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_element_value_197;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[104]);
        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = Py_None;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[105]);
        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[138]);
        if (tmp_args_element_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_193);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[111]);
        if (tmp_args_element_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);
            Py_DECREF(tmp_args_element_value_195);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[124]);
        if (tmp_args_element_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_193);
            Py_DECREF(tmp_args_element_value_194);
            Py_DECREF(tmp_args_element_value_195);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_value_192, tmp_args_element_value_193, tmp_args_element_value_194, tmp_args_element_value_195, tmp_args_element_value_196};
            tmp_called_value_132 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_133, call_args);
        }

        Py_DECREF(tmp_called_value_133);
        Py_DECREF(tmp_args_element_value_193);
        Py_DECREF(tmp_args_element_value_194);
        Py_DECREF(tmp_args_element_value_195);
        Py_DECREF(tmp_args_element_value_196);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_197 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__33_glProgramUniform2fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 143;
        tmp_args_element_value_191 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_132, tmp_args_element_value_197);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_197);
        if (tmp_args_element_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 142;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_131, tmp_args_element_value_191);
        Py_DECREF(tmp_args_element_value_191);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_134;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_called_value_135;
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_element_value_203;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_args_element_value_204;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[104]);
        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_199 = Py_None;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[105]);
        if (tmp_args_element_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_200);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[138]);
        if (tmp_args_element_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_200);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[138]);
        if (tmp_args_element_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);
            Py_DECREF(tmp_args_element_value_202);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_203 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[138]);
        if (tmp_args_element_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_args_element_value_200);
            Py_DECREF(tmp_args_element_value_201);
            Py_DECREF(tmp_args_element_value_202);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_199, tmp_args_element_value_200, tmp_args_element_value_201, tmp_args_element_value_202, tmp_args_element_value_203};
            tmp_called_value_135 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_136, call_args);
        }

        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_200);
        Py_DECREF(tmp_args_element_value_201);
        Py_DECREF(tmp_args_element_value_202);
        Py_DECREF(tmp_args_element_value_203);
        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_204 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__34_glProgramUniform2i();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 146;
        tmp_args_element_value_198 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_135, tmp_args_element_value_204);
        Py_DECREF(tmp_called_value_135);
        Py_DECREF(tmp_args_element_value_204);
        if (tmp_args_element_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 145;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_134, tmp_args_element_value_198);
        Py_DECREF(tmp_args_element_value_198);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_called_value_138;
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_element_value_211;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[104]);
        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = Py_None;
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[105]);
        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[138]);
        if (tmp_args_element_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_207);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[111]);
        if (tmp_args_element_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_210 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[131]);
        if (tmp_args_element_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);
            Py_DECREF(tmp_args_element_value_207);
            Py_DECREF(tmp_args_element_value_208);
            Py_DECREF(tmp_args_element_value_209);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_206, tmp_args_element_value_207, tmp_args_element_value_208, tmp_args_element_value_209, tmp_args_element_value_210};
            tmp_called_value_138 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_139, call_args);
        }

        Py_DECREF(tmp_called_value_139);
        Py_DECREF(tmp_args_element_value_207);
        Py_DECREF(tmp_args_element_value_208);
        Py_DECREF(tmp_args_element_value_209);
        Py_DECREF(tmp_args_element_value_210);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_211 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__35_glProgramUniform2iv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 149;
        tmp_args_element_value_205 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_138, tmp_args_element_value_211);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_211);
        if (tmp_args_element_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 148;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_137, tmp_args_element_value_205);
        Py_DECREF(tmp_args_element_value_205);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_140;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_called_value_141;
        PyObject *tmp_called_value_142;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_args_element_value_214;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_218;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_called_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[104]);
        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = Py_None;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[105]);
        if (tmp_args_element_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[138]);
        if (tmp_args_element_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[105]);
        if (tmp_args_element_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);
            Py_DECREF(tmp_args_element_value_216);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[105]);
        if (tmp_args_element_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_element_value_214);
            Py_DECREF(tmp_args_element_value_215);
            Py_DECREF(tmp_args_element_value_216);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_213, tmp_args_element_value_214, tmp_args_element_value_215, tmp_args_element_value_216, tmp_args_element_value_217};
            tmp_called_value_141 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_142, call_args);
        }

        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_214);
        Py_DECREF(tmp_args_element_value_215);
        Py_DECREF(tmp_args_element_value_216);
        Py_DECREF(tmp_args_element_value_217);
        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_218 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__36_glProgramUniform2ui();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 152;
        tmp_args_element_value_212 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_141, tmp_args_element_value_218);
        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_args_element_value_218);
        if (tmp_args_element_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 151;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_140, tmp_args_element_value_212);
        Py_DECREF(tmp_args_element_value_212);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_called_value_144;
        PyObject *tmp_called_value_145;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_args_element_value_221;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_element_value_225;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_called_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[104]);
        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = Py_None;
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_221 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[105]);
        if (tmp_args_element_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_221);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_222 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[138]);
        if (tmp_args_element_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_221);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_223 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[111]);
        if (tmp_args_element_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[115]);
        if (tmp_args_element_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_145);
            Py_DECREF(tmp_args_element_value_221);
            Py_DECREF(tmp_args_element_value_222);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_220, tmp_args_element_value_221, tmp_args_element_value_222, tmp_args_element_value_223, tmp_args_element_value_224};
            tmp_called_value_144 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_145, call_args);
        }

        Py_DECREF(tmp_called_value_145);
        Py_DECREF(tmp_args_element_value_221);
        Py_DECREF(tmp_args_element_value_222);
        Py_DECREF(tmp_args_element_value_223);
        Py_DECREF(tmp_args_element_value_224);
        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_225 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__37_glProgramUniform2uiv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 155;
        tmp_args_element_value_219 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_144, tmp_args_element_value_225);
        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_225);
        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 154;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_143, tmp_args_element_value_219);
        Py_DECREF(tmp_args_element_value_219);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_146;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_called_value_147;
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_227;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_element_value_229;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_args_element_value_233;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[104]);
        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_227 = Py_None;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_228 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[105]);
        if (tmp_args_element_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_229 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[138]);
        if (tmp_args_element_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);
            Py_DECREF(tmp_args_element_value_229);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[119]);
        if (tmp_args_element_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);
            Py_DECREF(tmp_args_element_value_229);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);
            Py_DECREF(tmp_args_element_value_229);
            Py_DECREF(tmp_args_element_value_230);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[119]);
        if (tmp_args_element_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);
            Py_DECREF(tmp_args_element_value_229);
            Py_DECREF(tmp_args_element_value_230);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);
            Py_DECREF(tmp_args_element_value_229);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[119]);
        if (tmp_args_element_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_args_element_value_228);
            Py_DECREF(tmp_args_element_value_229);
            Py_DECREF(tmp_args_element_value_230);
            Py_DECREF(tmp_args_element_value_231);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_value_227, tmp_args_element_value_228, tmp_args_element_value_229, tmp_args_element_value_230, tmp_args_element_value_231, tmp_args_element_value_232};
            tmp_called_value_147 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_148, call_args);
        }

        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_228);
        Py_DECREF(tmp_args_element_value_229);
        Py_DECREF(tmp_args_element_value_230);
        Py_DECREF(tmp_args_element_value_231);
        Py_DECREF(tmp_args_element_value_232);
        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_233 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__38_glProgramUniform3d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 158;
        tmp_args_element_value_226 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_147, tmp_args_element_value_233);
        Py_DECREF(tmp_called_value_147);
        Py_DECREF(tmp_args_element_value_233);
        if (tmp_args_element_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 157;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_146, tmp_args_element_value_226);
        Py_DECREF(tmp_args_element_value_226);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_234;
        PyObject *tmp_called_value_150;
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_237;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_240;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_called_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[104]);
        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_235 = Py_None;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[105]);
        if (tmp_args_element_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_element_value_236);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_237 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[138]);
        if (tmp_args_element_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_element_value_236);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_element_value_236);
            Py_DECREF(tmp_args_element_value_237);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[111]);
        if (tmp_args_element_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_element_value_236);
            Py_DECREF(tmp_args_element_value_237);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_element_value_236);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_239 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[117]);
        if (tmp_args_element_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_element_value_236);
            Py_DECREF(tmp_args_element_value_237);
            Py_DECREF(tmp_args_element_value_238);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_value_235, tmp_args_element_value_236, tmp_args_element_value_237, tmp_args_element_value_238, tmp_args_element_value_239};
            tmp_called_value_150 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_151, call_args);
        }

        Py_DECREF(tmp_called_value_151);
        Py_DECREF(tmp_args_element_value_236);
        Py_DECREF(tmp_args_element_value_237);
        Py_DECREF(tmp_args_element_value_238);
        Py_DECREF(tmp_args_element_value_239);
        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_240 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__39_glProgramUniform3dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 161;
        tmp_args_element_value_234 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_150, tmp_args_element_value_240);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_240);
        if (tmp_args_element_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 160;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_149, tmp_args_element_value_234);
        Py_DECREF(tmp_args_element_value_234);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_152;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_called_value_153;
        PyObject *tmp_called_value_154;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_244;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_245;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_args_element_value_248;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_called_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[104]);
        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = Py_None;
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_243 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[105]);
        if (tmp_args_element_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_244 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[138]);
        if (tmp_args_element_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);
            Py_DECREF(tmp_args_element_value_244);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_245 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[108]);
        if (tmp_args_element_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);
            Py_DECREF(tmp_args_element_value_244);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);
            Py_DECREF(tmp_args_element_value_244);
            Py_DECREF(tmp_args_element_value_245);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[108]);
        if (tmp_args_element_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);
            Py_DECREF(tmp_args_element_value_244);
            Py_DECREF(tmp_args_element_value_245);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);
            Py_DECREF(tmp_args_element_value_244);
            Py_DECREF(tmp_args_element_value_245);
            Py_DECREF(tmp_args_element_value_246);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_247 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[108]);
        if (tmp_args_element_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_args_element_value_243);
            Py_DECREF(tmp_args_element_value_244);
            Py_DECREF(tmp_args_element_value_245);
            Py_DECREF(tmp_args_element_value_246);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_242, tmp_args_element_value_243, tmp_args_element_value_244, tmp_args_element_value_245, tmp_args_element_value_246, tmp_args_element_value_247};
            tmp_called_value_153 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_154, call_args);
        }

        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_243);
        Py_DECREF(tmp_args_element_value_244);
        Py_DECREF(tmp_args_element_value_245);
        Py_DECREF(tmp_args_element_value_246);
        Py_DECREF(tmp_args_element_value_247);
        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_248 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__40_glProgramUniform3f();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 164;
        tmp_args_element_value_241 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_153, tmp_args_element_value_248);
        Py_DECREF(tmp_called_value_153);
        Py_DECREF(tmp_args_element_value_248);
        if (tmp_args_element_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 163;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_152, tmp_args_element_value_241);
        Py_DECREF(tmp_args_element_value_241);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_155;
        PyObject *tmp_args_element_value_249;
        PyObject *tmp_called_value_156;
        PyObject *tmp_called_value_157;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_args_element_value_251;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_255;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_called_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[104]);
        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = Py_None;
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_251 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[105]);
        if (tmp_args_element_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_251);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_252 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[138]);
        if (tmp_args_element_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_251);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_251);
            Py_DECREF(tmp_args_element_value_252);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_253 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[111]);
        if (tmp_args_element_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_251);
            Py_DECREF(tmp_args_element_value_252);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_251);
            Py_DECREF(tmp_args_element_value_252);
            Py_DECREF(tmp_args_element_value_253);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[124]);
        if (tmp_args_element_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_157);
            Py_DECREF(tmp_args_element_value_251);
            Py_DECREF(tmp_args_element_value_252);
            Py_DECREF(tmp_args_element_value_253);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_250, tmp_args_element_value_251, tmp_args_element_value_252, tmp_args_element_value_253, tmp_args_element_value_254};
            tmp_called_value_156 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_157, call_args);
        }

        Py_DECREF(tmp_called_value_157);
        Py_DECREF(tmp_args_element_value_251);
        Py_DECREF(tmp_args_element_value_252);
        Py_DECREF(tmp_args_element_value_253);
        Py_DECREF(tmp_args_element_value_254);
        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_255 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__41_glProgramUniform3fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 167;
        tmp_args_element_value_249 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_156, tmp_args_element_value_255);
        Py_DECREF(tmp_called_value_156);
        Py_DECREF(tmp_args_element_value_255);
        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 166;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_155, tmp_args_element_value_249);
        Py_DECREF(tmp_args_element_value_249);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_158;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_called_value_159;
        PyObject *tmp_called_value_160;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_257;
        PyObject *tmp_args_element_value_258;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_args_element_value_263;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_called_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[104]);
        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_257 = Py_None;
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_258 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[105]);
        if (tmp_args_element_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_259 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[138]);
        if (tmp_args_element_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);
            Py_DECREF(tmp_args_element_value_259);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[138]);
        if (tmp_args_element_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);
            Py_DECREF(tmp_args_element_value_259);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);
            Py_DECREF(tmp_args_element_value_259);
            Py_DECREF(tmp_args_element_value_260);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_261 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[138]);
        if (tmp_args_element_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);
            Py_DECREF(tmp_args_element_value_259);
            Py_DECREF(tmp_args_element_value_260);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);
            Py_DECREF(tmp_args_element_value_259);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[138]);
        if (tmp_args_element_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_args_element_value_258);
            Py_DECREF(tmp_args_element_value_259);
            Py_DECREF(tmp_args_element_value_260);
            Py_DECREF(tmp_args_element_value_261);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_257, tmp_args_element_value_258, tmp_args_element_value_259, tmp_args_element_value_260, tmp_args_element_value_261, tmp_args_element_value_262};
            tmp_called_value_159 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_160, call_args);
        }

        Py_DECREF(tmp_called_value_160);
        Py_DECREF(tmp_args_element_value_258);
        Py_DECREF(tmp_args_element_value_259);
        Py_DECREF(tmp_args_element_value_260);
        Py_DECREF(tmp_args_element_value_261);
        Py_DECREF(tmp_args_element_value_262);
        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_263 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__42_glProgramUniform3i();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 170;
        tmp_args_element_value_256 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_159, tmp_args_element_value_263);
        Py_DECREF(tmp_called_value_159);
        Py_DECREF(tmp_args_element_value_263);
        if (tmp_args_element_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 169;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_158, tmp_args_element_value_256);
        Py_DECREF(tmp_args_element_value_256);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_161;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_called_value_162;
        PyObject *tmp_called_value_163;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_265;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_args_element_value_270;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_called_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[104]);
        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_265 = Py_None;
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_266 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[105]);
        if (tmp_args_element_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);
            Py_DECREF(tmp_args_element_value_266);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_267 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[138]);
        if (tmp_args_element_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);
            Py_DECREF(tmp_args_element_value_266);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);
            Py_DECREF(tmp_args_element_value_266);
            Py_DECREF(tmp_args_element_value_267);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[111]);
        if (tmp_args_element_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);
            Py_DECREF(tmp_args_element_value_266);
            Py_DECREF(tmp_args_element_value_267);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);
            Py_DECREF(tmp_args_element_value_266);
            Py_DECREF(tmp_args_element_value_267);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[131]);
        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);
            Py_DECREF(tmp_args_element_value_266);
            Py_DECREF(tmp_args_element_value_267);
            Py_DECREF(tmp_args_element_value_268);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_265, tmp_args_element_value_266, tmp_args_element_value_267, tmp_args_element_value_268, tmp_args_element_value_269};
            tmp_called_value_162 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_163, call_args);
        }

        Py_DECREF(tmp_called_value_163);
        Py_DECREF(tmp_args_element_value_266);
        Py_DECREF(tmp_args_element_value_267);
        Py_DECREF(tmp_args_element_value_268);
        Py_DECREF(tmp_args_element_value_269);
        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_270 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__43_glProgramUniform3iv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 173;
        tmp_args_element_value_264 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_162, tmp_args_element_value_270);
        Py_DECREF(tmp_called_value_162);
        Py_DECREF(tmp_args_element_value_270);
        if (tmp_args_element_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 172;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_161, tmp_args_element_value_264);
        Py_DECREF(tmp_args_element_value_264);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_164;
        PyObject *tmp_args_element_value_271;
        PyObject *tmp_called_value_165;
        PyObject *tmp_called_value_166;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_args_element_value_275;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_element_value_277;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_args_element_value_278;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_called_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[104]);
        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = Py_None;
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_273 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[105]);
        if (tmp_args_element_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_274 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[138]);
        if (tmp_args_element_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);
            Py_DECREF(tmp_args_element_value_274);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_275 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[105]);
        if (tmp_args_element_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);
            Py_DECREF(tmp_args_element_value_274);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[105]);
        if (tmp_args_element_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[105]);
        if (tmp_args_element_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_args_element_value_273);
            Py_DECREF(tmp_args_element_value_274);
            Py_DECREF(tmp_args_element_value_275);
            Py_DECREF(tmp_args_element_value_276);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_272, tmp_args_element_value_273, tmp_args_element_value_274, tmp_args_element_value_275, tmp_args_element_value_276, tmp_args_element_value_277};
            tmp_called_value_165 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_166, call_args);
        }

        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_args_element_value_273);
        Py_DECREF(tmp_args_element_value_274);
        Py_DECREF(tmp_args_element_value_275);
        Py_DECREF(tmp_args_element_value_276);
        Py_DECREF(tmp_args_element_value_277);
        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_278 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__44_glProgramUniform3ui();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 176;
        tmp_args_element_value_271 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_165, tmp_args_element_value_278);
        Py_DECREF(tmp_called_value_165);
        Py_DECREF(tmp_args_element_value_278);
        if (tmp_args_element_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 175;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_164, tmp_args_element_value_271);
        Py_DECREF(tmp_args_element_value_271);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_167;
        PyObject *tmp_args_element_value_279;
        PyObject *tmp_called_value_168;
        PyObject *tmp_called_value_169;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_args_element_value_282;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_args_element_value_284;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_args_element_value_285;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_called_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[104]);
        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_280 = Py_None;
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_281 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[105]);
        if (tmp_args_element_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_args_element_value_281);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_282 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[138]);
        if (tmp_args_element_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_args_element_value_281);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_args_element_value_281);
            Py_DECREF(tmp_args_element_value_282);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_283 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[111]);
        if (tmp_args_element_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_args_element_value_281);
            Py_DECREF(tmp_args_element_value_282);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_args_element_value_281);
            Py_DECREF(tmp_args_element_value_282);
            Py_DECREF(tmp_args_element_value_283);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_284 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[115]);
        if (tmp_args_element_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_169);
            Py_DECREF(tmp_args_element_value_281);
            Py_DECREF(tmp_args_element_value_282);
            Py_DECREF(tmp_args_element_value_283);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_280, tmp_args_element_value_281, tmp_args_element_value_282, tmp_args_element_value_283, tmp_args_element_value_284};
            tmp_called_value_168 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_169, call_args);
        }

        Py_DECREF(tmp_called_value_169);
        Py_DECREF(tmp_args_element_value_281);
        Py_DECREF(tmp_args_element_value_282);
        Py_DECREF(tmp_args_element_value_283);
        Py_DECREF(tmp_args_element_value_284);
        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_285 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__45_glProgramUniform3uiv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 179;
        tmp_args_element_value_279 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_168, tmp_args_element_value_285);
        Py_DECREF(tmp_called_value_168);
        Py_DECREF(tmp_args_element_value_285);
        if (tmp_args_element_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 178;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_167, tmp_args_element_value_279);
        Py_DECREF(tmp_args_element_value_279);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_170;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_called_value_171;
        PyObject *tmp_called_value_172;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_args_element_value_288;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_args_element_value_290;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_args_element_value_293;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_args_element_value_294;
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_called_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[104]);
        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = Py_None;
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[105]);
        if (tmp_args_element_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_289 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[138]);
        if (tmp_args_element_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_290 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[119]);
        if (tmp_args_element_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_291 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[119]);
        if (tmp_args_element_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[119]);
        if (tmp_args_element_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);
            Py_DECREF(tmp_args_element_value_292);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_293 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[119]);
        if (tmp_args_element_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_args_element_value_288);
            Py_DECREF(tmp_args_element_value_289);
            Py_DECREF(tmp_args_element_value_290);
            Py_DECREF(tmp_args_element_value_291);
            Py_DECREF(tmp_args_element_value_292);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_287, tmp_args_element_value_288, tmp_args_element_value_289, tmp_args_element_value_290, tmp_args_element_value_291, tmp_args_element_value_292, tmp_args_element_value_293};
            tmp_called_value_171 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_172, call_args);
        }

        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_args_element_value_288);
        Py_DECREF(tmp_args_element_value_289);
        Py_DECREF(tmp_args_element_value_290);
        Py_DECREF(tmp_args_element_value_291);
        Py_DECREF(tmp_args_element_value_292);
        Py_DECREF(tmp_args_element_value_293);
        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_294 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__46_glProgramUniform4d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 182;
        tmp_args_element_value_286 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_171, tmp_args_element_value_294);
        Py_DECREF(tmp_called_value_171);
        Py_DECREF(tmp_args_element_value_294);
        if (tmp_args_element_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 181;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_170, tmp_args_element_value_286);
        Py_DECREF(tmp_args_element_value_286);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_173;
        PyObject *tmp_args_element_value_295;
        PyObject *tmp_called_value_174;
        PyObject *tmp_called_value_175;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_args_element_value_298;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_args_element_value_299;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_args_element_value_300;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_element_value_301;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_called_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[104]);
        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_296 = Py_None;
        tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_208 == NULL)) {
            tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[105]);
        if (tmp_args_element_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);
            Py_DECREF(tmp_args_element_value_297);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_298 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[138]);
        if (tmp_args_element_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);
            Py_DECREF(tmp_args_element_value_297);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);
            Py_DECREF(tmp_args_element_value_297);
            Py_DECREF(tmp_args_element_value_298);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_299 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[111]);
        if (tmp_args_element_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);
            Py_DECREF(tmp_args_element_value_297);
            Py_DECREF(tmp_args_element_value_298);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);
            Py_DECREF(tmp_args_element_value_297);
            Py_DECREF(tmp_args_element_value_298);
            Py_DECREF(tmp_args_element_value_299);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_300 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[117]);
        if (tmp_args_element_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_175);
            Py_DECREF(tmp_args_element_value_297);
            Py_DECREF(tmp_args_element_value_298);
            Py_DECREF(tmp_args_element_value_299);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_296, tmp_args_element_value_297, tmp_args_element_value_298, tmp_args_element_value_299, tmp_args_element_value_300};
            tmp_called_value_174 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_175, call_args);
        }

        Py_DECREF(tmp_called_value_175);
        Py_DECREF(tmp_args_element_value_297);
        Py_DECREF(tmp_args_element_value_298);
        Py_DECREF(tmp_args_element_value_299);
        Py_DECREF(tmp_args_element_value_300);
        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_301 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__47_glProgramUniform4dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 185;
        tmp_args_element_value_295 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_174, tmp_args_element_value_301);
        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_301);
        if (tmp_args_element_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 184;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_173, tmp_args_element_value_295);
        Py_DECREF(tmp_args_element_value_295);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_176;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_called_value_177;
        PyObject *tmp_called_value_178;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_args_element_value_303;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_args_element_value_306;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_args_element_value_308;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_args_element_value_309;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_args_element_value_310;
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_called_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[104]);
        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = Py_None;
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[105]);
        if (tmp_args_element_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_305 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[138]);
        if (tmp_args_element_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_306 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[108]);
        if (tmp_args_element_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_307 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[108]);
        if (tmp_args_element_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);
            Py_DECREF(tmp_args_element_value_307);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_308 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[108]);
        if (tmp_args_element_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);
            Py_DECREF(tmp_args_element_value_307);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);
            Py_DECREF(tmp_args_element_value_307);
            Py_DECREF(tmp_args_element_value_308);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_309 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[108]);
        if (tmp_args_element_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);
            Py_DECREF(tmp_args_element_value_304);
            Py_DECREF(tmp_args_element_value_305);
            Py_DECREF(tmp_args_element_value_306);
            Py_DECREF(tmp_args_element_value_307);
            Py_DECREF(tmp_args_element_value_308);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_303, tmp_args_element_value_304, tmp_args_element_value_305, tmp_args_element_value_306, tmp_args_element_value_307, tmp_args_element_value_308, tmp_args_element_value_309};
            tmp_called_value_177 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_178, call_args);
        }

        Py_DECREF(tmp_called_value_178);
        Py_DECREF(tmp_args_element_value_304);
        Py_DECREF(tmp_args_element_value_305);
        Py_DECREF(tmp_args_element_value_306);
        Py_DECREF(tmp_args_element_value_307);
        Py_DECREF(tmp_args_element_value_308);
        Py_DECREF(tmp_args_element_value_309);
        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_310 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__48_glProgramUniform4f();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 188;
        tmp_args_element_value_302 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_177, tmp_args_element_value_310);
        Py_DECREF(tmp_called_value_177);
        Py_DECREF(tmp_args_element_value_310);
        if (tmp_args_element_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 187;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_176, tmp_args_element_value_302);
        Py_DECREF(tmp_args_element_value_302);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_179;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_called_value_180;
        PyObject *tmp_called_value_181;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_args_element_value_313;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_args_element_value_314;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_args_element_value_315;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_args_element_value_317;
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_called_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[104]);
        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_312 = Py_None;
        tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_220 == NULL)) {
            tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_313 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[105]);
        if (tmp_args_element_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_args_element_value_313);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_314 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[138]);
        if (tmp_args_element_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_args_element_value_313);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_args_element_value_313);
            Py_DECREF(tmp_args_element_value_314);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_315 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[111]);
        if (tmp_args_element_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_args_element_value_313);
            Py_DECREF(tmp_args_element_value_314);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_args_element_value_313);
            Py_DECREF(tmp_args_element_value_314);
            Py_DECREF(tmp_args_element_value_315);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_316 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[124]);
        if (tmp_args_element_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);
            Py_DECREF(tmp_args_element_value_313);
            Py_DECREF(tmp_args_element_value_314);
            Py_DECREF(tmp_args_element_value_315);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_312, tmp_args_element_value_313, tmp_args_element_value_314, tmp_args_element_value_315, tmp_args_element_value_316};
            tmp_called_value_180 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_181, call_args);
        }

        Py_DECREF(tmp_called_value_181);
        Py_DECREF(tmp_args_element_value_313);
        Py_DECREF(tmp_args_element_value_314);
        Py_DECREF(tmp_args_element_value_315);
        Py_DECREF(tmp_args_element_value_316);
        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_317 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__49_glProgramUniform4fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 191;
        tmp_args_element_value_311 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_180, tmp_args_element_value_317);
        Py_DECREF(tmp_called_value_180);
        Py_DECREF(tmp_args_element_value_317);
        if (tmp_args_element_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 190;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_179, tmp_args_element_value_311);
        Py_DECREF(tmp_args_element_value_311);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_182;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_called_value_183;
        PyObject *tmp_called_value_184;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_args_element_value_319;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_args_element_value_322;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_args_element_value_325;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_args_element_value_326;
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_called_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[104]);
        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = Py_None;
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_320 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[105]);
        if (tmp_args_element_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_226 == NULL)) {
            tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_321 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[138]);
        if (tmp_args_element_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_322 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[138]);
        if (tmp_args_element_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_228 == NULL)) {
            tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);
            Py_DECREF(tmp_args_element_value_322);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_323 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[138]);
        if (tmp_args_element_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);
            Py_DECREF(tmp_args_element_value_322);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);
            Py_DECREF(tmp_args_element_value_322);
            Py_DECREF(tmp_args_element_value_323);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_324 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[138]);
        if (tmp_args_element_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);
            Py_DECREF(tmp_args_element_value_322);
            Py_DECREF(tmp_args_element_value_323);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);
            Py_DECREF(tmp_args_element_value_322);
            Py_DECREF(tmp_args_element_value_323);
            Py_DECREF(tmp_args_element_value_324);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_325 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[138]);
        if (tmp_args_element_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);
            Py_DECREF(tmp_args_element_value_320);
            Py_DECREF(tmp_args_element_value_321);
            Py_DECREF(tmp_args_element_value_322);
            Py_DECREF(tmp_args_element_value_323);
            Py_DECREF(tmp_args_element_value_324);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_319, tmp_args_element_value_320, tmp_args_element_value_321, tmp_args_element_value_322, tmp_args_element_value_323, tmp_args_element_value_324, tmp_args_element_value_325};
            tmp_called_value_183 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_184, call_args);
        }

        Py_DECREF(tmp_called_value_184);
        Py_DECREF(tmp_args_element_value_320);
        Py_DECREF(tmp_args_element_value_321);
        Py_DECREF(tmp_args_element_value_322);
        Py_DECREF(tmp_args_element_value_323);
        Py_DECREF(tmp_args_element_value_324);
        Py_DECREF(tmp_args_element_value_325);
        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_326 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__50_glProgramUniform4i();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 194;
        tmp_args_element_value_318 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_183, tmp_args_element_value_326);
        Py_DECREF(tmp_called_value_183);
        Py_DECREF(tmp_args_element_value_326);
        if (tmp_args_element_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 193;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_182, tmp_args_element_value_318);
        Py_DECREF(tmp_args_element_value_318);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_185;
        PyObject *tmp_args_element_value_327;
        PyObject *tmp_called_value_186;
        PyObject *tmp_called_value_187;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_args_element_value_328;
        PyObject *tmp_args_element_value_329;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_args_element_value_330;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_args_element_value_331;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_args_element_value_333;
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_called_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[104]);
        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_328 = Py_None;
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_329 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[105]);
        if (tmp_args_element_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);
            Py_DECREF(tmp_args_element_value_329);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_330 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[138]);
        if (tmp_args_element_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);
            Py_DECREF(tmp_args_element_value_329);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);
            Py_DECREF(tmp_args_element_value_329);
            Py_DECREF(tmp_args_element_value_330);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_331 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[111]);
        if (tmp_args_element_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);
            Py_DECREF(tmp_args_element_value_329);
            Py_DECREF(tmp_args_element_value_330);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);
            Py_DECREF(tmp_args_element_value_329);
            Py_DECREF(tmp_args_element_value_330);
            Py_DECREF(tmp_args_element_value_331);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_332 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[131]);
        if (tmp_args_element_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_187);
            Py_DECREF(tmp_args_element_value_329);
            Py_DECREF(tmp_args_element_value_330);
            Py_DECREF(tmp_args_element_value_331);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_328, tmp_args_element_value_329, tmp_args_element_value_330, tmp_args_element_value_331, tmp_args_element_value_332};
            tmp_called_value_186 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_187, call_args);
        }

        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_args_element_value_329);
        Py_DECREF(tmp_args_element_value_330);
        Py_DECREF(tmp_args_element_value_331);
        Py_DECREF(tmp_args_element_value_332);
        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_333 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__51_glProgramUniform4iv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 197;
        tmp_args_element_value_327 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_186, tmp_args_element_value_333);
        Py_DECREF(tmp_called_value_186);
        Py_DECREF(tmp_args_element_value_333);
        if (tmp_args_element_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 196;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_185, tmp_args_element_value_327);
        Py_DECREF(tmp_args_element_value_327);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_188;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_called_value_189;
        PyObject *tmp_called_value_190;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_args_element_value_335;
        PyObject *tmp_args_element_value_336;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_args_element_value_337;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_args_element_value_338;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_args_element_value_339;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_args_element_value_340;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_args_element_value_341;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_args_element_value_342;
        tmp_called_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_188 == NULL)) {
            tmp_called_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_236 == NULL)) {
            tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[104]);
        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_335 = Py_None;
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_336 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[105]);
        if (tmp_args_element_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_337 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[138]);
        if (tmp_args_element_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_239 == NULL)) {
            tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_338 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[105]);
        if (tmp_args_element_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_240 == NULL)) {
            tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);
            Py_DECREF(tmp_args_element_value_338);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_339 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[105]);
        if (tmp_args_element_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);
            Py_DECREF(tmp_args_element_value_338);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);
            Py_DECREF(tmp_args_element_value_338);
            Py_DECREF(tmp_args_element_value_339);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_340 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[105]);
        if (tmp_args_element_value_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);
            Py_DECREF(tmp_args_element_value_338);
            Py_DECREF(tmp_args_element_value_339);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);
            Py_DECREF(tmp_args_element_value_338);
            Py_DECREF(tmp_args_element_value_339);
            Py_DECREF(tmp_args_element_value_340);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_341 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[105]);
        if (tmp_args_element_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);
            Py_DECREF(tmp_args_element_value_336);
            Py_DECREF(tmp_args_element_value_337);
            Py_DECREF(tmp_args_element_value_338);
            Py_DECREF(tmp_args_element_value_339);
            Py_DECREF(tmp_args_element_value_340);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_335, tmp_args_element_value_336, tmp_args_element_value_337, tmp_args_element_value_338, tmp_args_element_value_339, tmp_args_element_value_340, tmp_args_element_value_341};
            tmp_called_value_189 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_190, call_args);
        }

        Py_DECREF(tmp_called_value_190);
        Py_DECREF(tmp_args_element_value_336);
        Py_DECREF(tmp_args_element_value_337);
        Py_DECREF(tmp_args_element_value_338);
        Py_DECREF(tmp_args_element_value_339);
        Py_DECREF(tmp_args_element_value_340);
        Py_DECREF(tmp_args_element_value_341);
        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_342 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__52_glProgramUniform4ui();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 200;
        tmp_args_element_value_334 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_189, tmp_args_element_value_342);
        Py_DECREF(tmp_called_value_189);
        Py_DECREF(tmp_args_element_value_342);
        if (tmp_args_element_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 199;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_188, tmp_args_element_value_334);
        Py_DECREF(tmp_args_element_value_334);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_191;
        PyObject *tmp_args_element_value_343;
        PyObject *tmp_called_value_192;
        PyObject *tmp_called_value_193;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_args_element_value_344;
        PyObject *tmp_args_element_value_345;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_args_element_value_346;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_args_element_value_347;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_args_element_value_348;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_args_element_value_349;
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_called_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[104]);
        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_344 = Py_None;
        tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_244 == NULL)) {
            tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_345 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[105]);
        if (tmp_args_element_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_245 == NULL)) {
            tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);
            Py_DECREF(tmp_args_element_value_345);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_346 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[138]);
        if (tmp_args_element_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);
            Py_DECREF(tmp_args_element_value_345);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_246 == NULL)) {
            tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);
            Py_DECREF(tmp_args_element_value_345);
            Py_DECREF(tmp_args_element_value_346);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_347 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[111]);
        if (tmp_args_element_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);
            Py_DECREF(tmp_args_element_value_345);
            Py_DECREF(tmp_args_element_value_346);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_247 == NULL)) {
            tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);
            Py_DECREF(tmp_args_element_value_345);
            Py_DECREF(tmp_args_element_value_346);
            Py_DECREF(tmp_args_element_value_347);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_348 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[115]);
        if (tmp_args_element_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_193);
            Py_DECREF(tmp_args_element_value_345);
            Py_DECREF(tmp_args_element_value_346);
            Py_DECREF(tmp_args_element_value_347);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_344, tmp_args_element_value_345, tmp_args_element_value_346, tmp_args_element_value_347, tmp_args_element_value_348};
            tmp_called_value_192 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_193, call_args);
        }

        Py_DECREF(tmp_called_value_193);
        Py_DECREF(tmp_args_element_value_345);
        Py_DECREF(tmp_args_element_value_346);
        Py_DECREF(tmp_args_element_value_347);
        Py_DECREF(tmp_args_element_value_348);
        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_349 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__53_glProgramUniform4uiv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 203;
        tmp_args_element_value_343 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_192, tmp_args_element_value_349);
        Py_DECREF(tmp_called_value_192);
        Py_DECREF(tmp_args_element_value_349);
        if (tmp_args_element_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 202;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_191, tmp_args_element_value_343);
        Py_DECREF(tmp_args_element_value_343);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_194;
        PyObject *tmp_args_element_value_350;
        PyObject *tmp_called_value_195;
        PyObject *tmp_called_value_196;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_args_element_value_351;
        PyObject *tmp_args_element_value_352;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_args_element_value_353;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_args_element_value_354;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_args_element_value_355;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_args_element_value_356;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_args_element_value_357;
        tmp_called_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_194 == NULL)) {
            tmp_called_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_248 == NULL)) {
            tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_called_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[104]);
        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_351 = Py_None;
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_352 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[105]);
        if (tmp_args_element_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_250 == NULL)) {
            tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_353 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[138]);
        if (tmp_args_element_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_251 == NULL)) {
            tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);
            Py_DECREF(tmp_args_element_value_353);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_354 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[111]);
        if (tmp_args_element_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);
            Py_DECREF(tmp_args_element_value_353);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_252 == NULL)) {
            tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);
            Py_DECREF(tmp_args_element_value_353);
            Py_DECREF(tmp_args_element_value_354);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_355 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[135]);
        if (tmp_args_element_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);
            Py_DECREF(tmp_args_element_value_353);
            Py_DECREF(tmp_args_element_value_354);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);
            Py_DECREF(tmp_args_element_value_353);
            Py_DECREF(tmp_args_element_value_354);
            Py_DECREF(tmp_args_element_value_355);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_356 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[117]);
        if (tmp_args_element_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);
            Py_DECREF(tmp_args_element_value_352);
            Py_DECREF(tmp_args_element_value_353);
            Py_DECREF(tmp_args_element_value_354);
            Py_DECREF(tmp_args_element_value_355);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_351, tmp_args_element_value_352, tmp_args_element_value_353, tmp_args_element_value_354, tmp_args_element_value_355, tmp_args_element_value_356};
            tmp_called_value_195 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_196, call_args);
        }

        Py_DECREF(tmp_called_value_196);
        Py_DECREF(tmp_args_element_value_352);
        Py_DECREF(tmp_args_element_value_353);
        Py_DECREF(tmp_args_element_value_354);
        Py_DECREF(tmp_args_element_value_355);
        Py_DECREF(tmp_args_element_value_356);
        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_357 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__54_glProgramUniformMatrix2dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 206;
        tmp_args_element_value_350 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_195, tmp_args_element_value_357);
        Py_DECREF(tmp_called_value_195);
        Py_DECREF(tmp_args_element_value_357);
        if (tmp_args_element_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 205;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_194, tmp_args_element_value_350);
        Py_DECREF(tmp_args_element_value_350);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_197;
        PyObject *tmp_args_element_value_358;
        PyObject *tmp_called_value_198;
        PyObject *tmp_called_value_199;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_args_element_value_359;
        PyObject *tmp_args_element_value_360;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_args_element_value_361;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_args_element_value_362;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_args_element_value_363;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_args_element_value_364;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_args_element_value_365;
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_254 == NULL)) {
            tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_called_value_199 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[104]);
        if (tmp_called_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_359 = Py_None;
        tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_255 == NULL)) {
            tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_360 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[105]);
        if (tmp_args_element_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_256 == NULL)) {
            tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_361 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[138]);
        if (tmp_args_element_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_257 == NULL)) {
            tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);
            Py_DECREF(tmp_args_element_value_361);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_362 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[111]);
        if (tmp_args_element_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);
            Py_DECREF(tmp_args_element_value_361);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_258 == NULL)) {
            tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);
            Py_DECREF(tmp_args_element_value_361);
            Py_DECREF(tmp_args_element_value_362);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_363 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[135]);
        if (tmp_args_element_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);
            Py_DECREF(tmp_args_element_value_361);
            Py_DECREF(tmp_args_element_value_362);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_259 == NULL)) {
            tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);
            Py_DECREF(tmp_args_element_value_361);
            Py_DECREF(tmp_args_element_value_362);
            Py_DECREF(tmp_args_element_value_363);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_364 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[124]);
        if (tmp_args_element_value_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_199);
            Py_DECREF(tmp_args_element_value_360);
            Py_DECREF(tmp_args_element_value_361);
            Py_DECREF(tmp_args_element_value_362);
            Py_DECREF(tmp_args_element_value_363);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_359, tmp_args_element_value_360, tmp_args_element_value_361, tmp_args_element_value_362, tmp_args_element_value_363, tmp_args_element_value_364};
            tmp_called_value_198 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_199, call_args);
        }

        Py_DECREF(tmp_called_value_199);
        Py_DECREF(tmp_args_element_value_360);
        Py_DECREF(tmp_args_element_value_361);
        Py_DECREF(tmp_args_element_value_362);
        Py_DECREF(tmp_args_element_value_363);
        Py_DECREF(tmp_args_element_value_364);
        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_365 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__55_glProgramUniformMatrix2fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 209;
        tmp_args_element_value_358 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_198, tmp_args_element_value_365);
        Py_DECREF(tmp_called_value_198);
        Py_DECREF(tmp_args_element_value_365);
        if (tmp_args_element_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 208;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_197, tmp_args_element_value_358);
        Py_DECREF(tmp_args_element_value_358);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_200;
        PyObject *tmp_args_element_value_366;
        PyObject *tmp_called_value_201;
        PyObject *tmp_called_value_202;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_args_element_value_367;
        PyObject *tmp_args_element_value_368;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_args_element_value_369;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_args_element_value_370;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_args_element_value_371;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_args_element_value_372;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_args_element_value_373;
        tmp_called_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_200 == NULL)) {
            tmp_called_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_260 == NULL)) {
            tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_called_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[104]);
        if (tmp_called_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_367 = Py_None;
        tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_261 == NULL)) {
            tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_368 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[105]);
        if (tmp_args_element_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_262 == NULL)) {
            tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_369 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[138]);
        if (tmp_args_element_value_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);
            Py_DECREF(tmp_args_element_value_369);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_370 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[111]);
        if (tmp_args_element_value_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);
            Py_DECREF(tmp_args_element_value_369);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_264 == NULL)) {
            tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);
            Py_DECREF(tmp_args_element_value_369);
            Py_DECREF(tmp_args_element_value_370);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_371 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[135]);
        if (tmp_args_element_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);
            Py_DECREF(tmp_args_element_value_369);
            Py_DECREF(tmp_args_element_value_370);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_265 == NULL)) {
            tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);
            Py_DECREF(tmp_args_element_value_369);
            Py_DECREF(tmp_args_element_value_370);
            Py_DECREF(tmp_args_element_value_371);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_372 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[117]);
        if (tmp_args_element_value_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);
            Py_DECREF(tmp_args_element_value_368);
            Py_DECREF(tmp_args_element_value_369);
            Py_DECREF(tmp_args_element_value_370);
            Py_DECREF(tmp_args_element_value_371);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_367, tmp_args_element_value_368, tmp_args_element_value_369, tmp_args_element_value_370, tmp_args_element_value_371, tmp_args_element_value_372};
            tmp_called_value_201 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_202, call_args);
        }

        Py_DECREF(tmp_called_value_202);
        Py_DECREF(tmp_args_element_value_368);
        Py_DECREF(tmp_args_element_value_369);
        Py_DECREF(tmp_args_element_value_370);
        Py_DECREF(tmp_args_element_value_371);
        Py_DECREF(tmp_args_element_value_372);
        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_373 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__56_glProgramUniformMatrix2x3dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 212;
        tmp_args_element_value_366 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_201, tmp_args_element_value_373);
        Py_DECREF(tmp_called_value_201);
        Py_DECREF(tmp_args_element_value_373);
        if (tmp_args_element_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 211;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_200, tmp_args_element_value_366);
        Py_DECREF(tmp_args_element_value_366);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_203;
        PyObject *tmp_args_element_value_374;
        PyObject *tmp_called_value_204;
        PyObject *tmp_called_value_205;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_args_element_value_375;
        PyObject *tmp_args_element_value_376;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_args_element_value_377;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_args_element_value_378;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_args_element_value_379;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_args_element_value_380;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_args_element_value_381;
        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_203 == NULL)) {
            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_called_value_205 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[104]);
        if (tmp_called_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_375 = Py_None;
        tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_267 == NULL)) {
            tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_376 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[105]);
        if (tmp_args_element_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_268 == NULL)) {
            tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_377 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[138]);
        if (tmp_args_element_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_269 == NULL)) {
            tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);
            Py_DECREF(tmp_args_element_value_377);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_378 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[111]);
        if (tmp_args_element_value_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);
            Py_DECREF(tmp_args_element_value_377);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_270 == NULL)) {
            tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);
            Py_DECREF(tmp_args_element_value_377);
            Py_DECREF(tmp_args_element_value_378);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_379 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[135]);
        if (tmp_args_element_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);
            Py_DECREF(tmp_args_element_value_377);
            Py_DECREF(tmp_args_element_value_378);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_271 == NULL)) {
            tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);
            Py_DECREF(tmp_args_element_value_377);
            Py_DECREF(tmp_args_element_value_378);
            Py_DECREF(tmp_args_element_value_379);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_380 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[124]);
        if (tmp_args_element_value_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_205);
            Py_DECREF(tmp_args_element_value_376);
            Py_DECREF(tmp_args_element_value_377);
            Py_DECREF(tmp_args_element_value_378);
            Py_DECREF(tmp_args_element_value_379);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_375, tmp_args_element_value_376, tmp_args_element_value_377, tmp_args_element_value_378, tmp_args_element_value_379, tmp_args_element_value_380};
            tmp_called_value_204 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_205, call_args);
        }

        Py_DECREF(tmp_called_value_205);
        Py_DECREF(tmp_args_element_value_376);
        Py_DECREF(tmp_args_element_value_377);
        Py_DECREF(tmp_args_element_value_378);
        Py_DECREF(tmp_args_element_value_379);
        Py_DECREF(tmp_args_element_value_380);
        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_381 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__57_glProgramUniformMatrix2x3fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 215;
        tmp_args_element_value_374 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_204, tmp_args_element_value_381);
        Py_DECREF(tmp_called_value_204);
        Py_DECREF(tmp_args_element_value_381);
        if (tmp_args_element_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 214;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_203, tmp_args_element_value_374);
        Py_DECREF(tmp_args_element_value_374);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_206;
        PyObject *tmp_args_element_value_382;
        PyObject *tmp_called_value_207;
        PyObject *tmp_called_value_208;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_args_element_value_383;
        PyObject *tmp_args_element_value_384;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_args_element_value_385;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_args_element_value_386;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_args_element_value_387;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_args_element_value_388;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_args_element_value_389;
        tmp_called_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_206 == NULL)) {
            tmp_called_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_272 == NULL)) {
            tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_called_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[104]);
        if (tmp_called_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_383 = Py_None;
        tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_273 == NULL)) {
            tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_384 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[105]);
        if (tmp_args_element_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_385 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[138]);
        if (tmp_args_element_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_275 == NULL)) {
            tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);
            Py_DECREF(tmp_args_element_value_385);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_386 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[111]);
        if (tmp_args_element_value_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);
            Py_DECREF(tmp_args_element_value_385);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_276 == NULL)) {
            tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);
            Py_DECREF(tmp_args_element_value_385);
            Py_DECREF(tmp_args_element_value_386);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_387 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[135]);
        if (tmp_args_element_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);
            Py_DECREF(tmp_args_element_value_385);
            Py_DECREF(tmp_args_element_value_386);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_277 == NULL)) {
            tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);
            Py_DECREF(tmp_args_element_value_385);
            Py_DECREF(tmp_args_element_value_386);
            Py_DECREF(tmp_args_element_value_387);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_388 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[117]);
        if (tmp_args_element_value_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);
            Py_DECREF(tmp_args_element_value_384);
            Py_DECREF(tmp_args_element_value_385);
            Py_DECREF(tmp_args_element_value_386);
            Py_DECREF(tmp_args_element_value_387);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_383, tmp_args_element_value_384, tmp_args_element_value_385, tmp_args_element_value_386, tmp_args_element_value_387, tmp_args_element_value_388};
            tmp_called_value_207 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_208, call_args);
        }

        Py_DECREF(tmp_called_value_208);
        Py_DECREF(tmp_args_element_value_384);
        Py_DECREF(tmp_args_element_value_385);
        Py_DECREF(tmp_args_element_value_386);
        Py_DECREF(tmp_args_element_value_387);
        Py_DECREF(tmp_args_element_value_388);
        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_389 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__58_glProgramUniformMatrix2x4dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 218;
        tmp_args_element_value_382 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_207, tmp_args_element_value_389);
        Py_DECREF(tmp_called_value_207);
        Py_DECREF(tmp_args_element_value_389);
        if (tmp_args_element_value_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 217;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_206, tmp_args_element_value_382);
        Py_DECREF(tmp_args_element_value_382);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_209;
        PyObject *tmp_args_element_value_390;
        PyObject *tmp_called_value_210;
        PyObject *tmp_called_value_211;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_args_element_value_391;
        PyObject *tmp_args_element_value_392;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_args_element_value_393;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_args_element_value_394;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_args_element_value_395;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_args_element_value_396;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_args_element_value_397;
        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_209 == NULL)) {
            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_called_value_211 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[104]);
        if (tmp_called_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_391 = Py_None;
        tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_279 == NULL)) {
            tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_392 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[105]);
        if (tmp_args_element_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_280 == NULL)) {
            tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_393 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[138]);
        if (tmp_args_element_value_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_281 == NULL)) {
            tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);
            Py_DECREF(tmp_args_element_value_393);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_394 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[111]);
        if (tmp_args_element_value_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);
            Py_DECREF(tmp_args_element_value_393);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_282 == NULL)) {
            tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);
            Py_DECREF(tmp_args_element_value_393);
            Py_DECREF(tmp_args_element_value_394);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_395 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[135]);
        if (tmp_args_element_value_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);
            Py_DECREF(tmp_args_element_value_393);
            Py_DECREF(tmp_args_element_value_394);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_283 == NULL)) {
            tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);
            Py_DECREF(tmp_args_element_value_393);
            Py_DECREF(tmp_args_element_value_394);
            Py_DECREF(tmp_args_element_value_395);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_396 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[124]);
        if (tmp_args_element_value_396 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_211);
            Py_DECREF(tmp_args_element_value_392);
            Py_DECREF(tmp_args_element_value_393);
            Py_DECREF(tmp_args_element_value_394);
            Py_DECREF(tmp_args_element_value_395);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_391, tmp_args_element_value_392, tmp_args_element_value_393, tmp_args_element_value_394, tmp_args_element_value_395, tmp_args_element_value_396};
            tmp_called_value_210 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_211, call_args);
        }

        Py_DECREF(tmp_called_value_211);
        Py_DECREF(tmp_args_element_value_392);
        Py_DECREF(tmp_args_element_value_393);
        Py_DECREF(tmp_args_element_value_394);
        Py_DECREF(tmp_args_element_value_395);
        Py_DECREF(tmp_args_element_value_396);
        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_397 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__59_glProgramUniformMatrix2x4fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 221;
        tmp_args_element_value_390 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_210, tmp_args_element_value_397);
        Py_DECREF(tmp_called_value_210);
        Py_DECREF(tmp_args_element_value_397);
        if (tmp_args_element_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 220;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_209, tmp_args_element_value_390);
        Py_DECREF(tmp_args_element_value_390);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_212;
        PyObject *tmp_args_element_value_398;
        PyObject *tmp_called_value_213;
        PyObject *tmp_called_value_214;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_args_element_value_399;
        PyObject *tmp_args_element_value_400;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_args_element_value_401;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_args_element_value_402;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_args_element_value_403;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_args_element_value_404;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_args_element_value_405;
        tmp_called_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_212 == NULL)) {
            tmp_called_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_284 == NULL)) {
            tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_called_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[104]);
        if (tmp_called_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_399 = Py_None;
        tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_285 == NULL)) {
            tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_400 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[105]);
        if (tmp_args_element_value_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_401 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[138]);
        if (tmp_args_element_value_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_287 == NULL)) {
            tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);
            Py_DECREF(tmp_args_element_value_401);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_402 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[111]);
        if (tmp_args_element_value_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);
            Py_DECREF(tmp_args_element_value_401);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_288 == NULL)) {
            tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);
            Py_DECREF(tmp_args_element_value_401);
            Py_DECREF(tmp_args_element_value_402);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_403 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[135]);
        if (tmp_args_element_value_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);
            Py_DECREF(tmp_args_element_value_401);
            Py_DECREF(tmp_args_element_value_402);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);
            Py_DECREF(tmp_args_element_value_401);
            Py_DECREF(tmp_args_element_value_402);
            Py_DECREF(tmp_args_element_value_403);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_404 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[117]);
        if (tmp_args_element_value_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);
            Py_DECREF(tmp_args_element_value_400);
            Py_DECREF(tmp_args_element_value_401);
            Py_DECREF(tmp_args_element_value_402);
            Py_DECREF(tmp_args_element_value_403);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_399, tmp_args_element_value_400, tmp_args_element_value_401, tmp_args_element_value_402, tmp_args_element_value_403, tmp_args_element_value_404};
            tmp_called_value_213 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_214, call_args);
        }

        Py_DECREF(tmp_called_value_214);
        Py_DECREF(tmp_args_element_value_400);
        Py_DECREF(tmp_args_element_value_401);
        Py_DECREF(tmp_args_element_value_402);
        Py_DECREF(tmp_args_element_value_403);
        Py_DECREF(tmp_args_element_value_404);
        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_405 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__60_glProgramUniformMatrix3dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 224;
        tmp_args_element_value_398 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_213, tmp_args_element_value_405);
        Py_DECREF(tmp_called_value_213);
        Py_DECREF(tmp_args_element_value_405);
        if (tmp_args_element_value_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 223;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_212, tmp_args_element_value_398);
        Py_DECREF(tmp_args_element_value_398);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_215;
        PyObject *tmp_args_element_value_406;
        PyObject *tmp_called_value_216;
        PyObject *tmp_called_value_217;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_args_element_value_407;
        PyObject *tmp_args_element_value_408;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_args_element_value_409;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_args_element_value_410;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_args_element_value_411;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_args_element_value_412;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_args_element_value_413;
        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_215 == NULL)) {
            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_290 == NULL)) {
            tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_called_value_217 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[104]);
        if (tmp_called_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_407 = Py_None;
        tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_291 == NULL)) {
            tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_408 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[105]);
        if (tmp_args_element_value_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_292 == NULL)) {
            tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_409 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[138]);
        if (tmp_args_element_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);
            Py_DECREF(tmp_args_element_value_409);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_410 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[111]);
        if (tmp_args_element_value_410 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);
            Py_DECREF(tmp_args_element_value_409);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_294 == NULL)) {
            tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);
            Py_DECREF(tmp_args_element_value_409);
            Py_DECREF(tmp_args_element_value_410);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_411 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[135]);
        if (tmp_args_element_value_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);
            Py_DECREF(tmp_args_element_value_409);
            Py_DECREF(tmp_args_element_value_410);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_295 == NULL)) {
            tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);
            Py_DECREF(tmp_args_element_value_409);
            Py_DECREF(tmp_args_element_value_410);
            Py_DECREF(tmp_args_element_value_411);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_412 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[124]);
        if (tmp_args_element_value_412 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_217);
            Py_DECREF(tmp_args_element_value_408);
            Py_DECREF(tmp_args_element_value_409);
            Py_DECREF(tmp_args_element_value_410);
            Py_DECREF(tmp_args_element_value_411);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_value_407, tmp_args_element_value_408, tmp_args_element_value_409, tmp_args_element_value_410, tmp_args_element_value_411, tmp_args_element_value_412};
            tmp_called_value_216 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_217, call_args);
        }

        Py_DECREF(tmp_called_value_217);
        Py_DECREF(tmp_args_element_value_408);
        Py_DECREF(tmp_args_element_value_409);
        Py_DECREF(tmp_args_element_value_410);
        Py_DECREF(tmp_args_element_value_411);
        Py_DECREF(tmp_args_element_value_412);
        if (tmp_called_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_413 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__61_glProgramUniformMatrix3fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 227;
        tmp_args_element_value_406 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_216, tmp_args_element_value_413);
        Py_DECREF(tmp_called_value_216);
        Py_DECREF(tmp_args_element_value_413);
        if (tmp_args_element_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 226;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_215, tmp_args_element_value_406);
        Py_DECREF(tmp_args_element_value_406);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_218;
        PyObject *tmp_args_element_value_414;
        PyObject *tmp_called_value_219;
        PyObject *tmp_called_value_220;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_args_element_value_415;
        PyObject *tmp_args_element_value_416;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_args_element_value_417;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_args_element_value_418;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_args_element_value_419;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_args_element_value_420;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_args_element_value_421;
        tmp_called_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_218 == NULL)) {
            tmp_called_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_296 == NULL)) {
            tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_called_value_220 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[104]);
        if (tmp_called_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_415 = Py_None;
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_416 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[105]);
        if (tmp_args_element_value_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_417 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[138]);
        if (tmp_args_element_value_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_299 == NULL)) {
            tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);
            Py_DECREF(tmp_args_element_value_417);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_418 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[111]);
        if (tmp_args_element_value_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);
            Py_DECREF(tmp_args_element_value_417);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_300 == NULL)) {
            tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);
            Py_DECREF(tmp_args_element_value_417);
            Py_DECREF(tmp_args_element_value_418);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_419 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[135]);
        if (tmp_args_element_value_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);
            Py_DECREF(tmp_args_element_value_417);
            Py_DECREF(tmp_args_element_value_418);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);
            Py_DECREF(tmp_args_element_value_417);
            Py_DECREF(tmp_args_element_value_418);
            Py_DECREF(tmp_args_element_value_419);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_420 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[117]);
        if (tmp_args_element_value_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);
            Py_DECREF(tmp_args_element_value_416);
            Py_DECREF(tmp_args_element_value_417);
            Py_DECREF(tmp_args_element_value_418);
            Py_DECREF(tmp_args_element_value_419);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_415, tmp_args_element_value_416, tmp_args_element_value_417, tmp_args_element_value_418, tmp_args_element_value_419, tmp_args_element_value_420};
            tmp_called_value_219 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_220, call_args);
        }

        Py_DECREF(tmp_called_value_220);
        Py_DECREF(tmp_args_element_value_416);
        Py_DECREF(tmp_args_element_value_417);
        Py_DECREF(tmp_args_element_value_418);
        Py_DECREF(tmp_args_element_value_419);
        Py_DECREF(tmp_args_element_value_420);
        if (tmp_called_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_421 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__62_glProgramUniformMatrix3x2dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 230;
        tmp_args_element_value_414 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_219, tmp_args_element_value_421);
        Py_DECREF(tmp_called_value_219);
        Py_DECREF(tmp_args_element_value_421);
        if (tmp_args_element_value_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 229;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_218, tmp_args_element_value_414);
        Py_DECREF(tmp_args_element_value_414);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_221;
        PyObject *tmp_args_element_value_422;
        PyObject *tmp_called_value_222;
        PyObject *tmp_called_value_223;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_args_element_value_423;
        PyObject *tmp_args_element_value_424;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_args_element_value_425;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_args_element_value_426;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_args_element_value_427;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_args_element_value_428;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_args_element_value_429;
        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_221 == NULL)) {
            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_called_value_223 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[104]);
        if (tmp_called_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_423 = Py_None;
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_424 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[105]);
        if (tmp_args_element_value_424 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_304 == NULL)) {
            tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_425 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[138]);
        if (tmp_args_element_value_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);
            Py_DECREF(tmp_args_element_value_425);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_426 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[111]);
        if (tmp_args_element_value_426 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);
            Py_DECREF(tmp_args_element_value_425);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);
            Py_DECREF(tmp_args_element_value_425);
            Py_DECREF(tmp_args_element_value_426);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_427 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[135]);
        if (tmp_args_element_value_427 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);
            Py_DECREF(tmp_args_element_value_425);
            Py_DECREF(tmp_args_element_value_426);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_307 == NULL)) {
            tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);
            Py_DECREF(tmp_args_element_value_425);
            Py_DECREF(tmp_args_element_value_426);
            Py_DECREF(tmp_args_element_value_427);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_428 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[124]);
        if (tmp_args_element_value_428 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_223);
            Py_DECREF(tmp_args_element_value_424);
            Py_DECREF(tmp_args_element_value_425);
            Py_DECREF(tmp_args_element_value_426);
            Py_DECREF(tmp_args_element_value_427);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_423, tmp_args_element_value_424, tmp_args_element_value_425, tmp_args_element_value_426, tmp_args_element_value_427, tmp_args_element_value_428};
            tmp_called_value_222 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_223, call_args);
        }

        Py_DECREF(tmp_called_value_223);
        Py_DECREF(tmp_args_element_value_424);
        Py_DECREF(tmp_args_element_value_425);
        Py_DECREF(tmp_args_element_value_426);
        Py_DECREF(tmp_args_element_value_427);
        Py_DECREF(tmp_args_element_value_428);
        if (tmp_called_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_429 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__63_glProgramUniformMatrix3x2fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 233;
        tmp_args_element_value_422 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_222, tmp_args_element_value_429);
        Py_DECREF(tmp_called_value_222);
        Py_DECREF(tmp_args_element_value_429);
        if (tmp_args_element_value_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 232;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_221, tmp_args_element_value_422);
        Py_DECREF(tmp_args_element_value_422);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_224;
        PyObject *tmp_args_element_value_430;
        PyObject *tmp_called_value_225;
        PyObject *tmp_called_value_226;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_args_element_value_431;
        PyObject *tmp_args_element_value_432;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_args_element_value_433;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_args_element_value_434;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_args_element_value_435;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_args_element_value_436;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_args_element_value_437;
        tmp_called_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_224 == NULL)) {
            tmp_called_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_308 == NULL)) {
            tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_called_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[104]);
        if (tmp_called_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_431 = Py_None;
        tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_309 == NULL)) {
            tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_432 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[105]);
        if (tmp_args_element_value_432 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_310 == NULL)) {
            tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_433 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[138]);
        if (tmp_args_element_value_433 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_311 == NULL)) {
            tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);
            Py_DECREF(tmp_args_element_value_433);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_434 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[111]);
        if (tmp_args_element_value_434 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);
            Py_DECREF(tmp_args_element_value_433);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_312 == NULL)) {
            tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);
            Py_DECREF(tmp_args_element_value_433);
            Py_DECREF(tmp_args_element_value_434);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_435 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[135]);
        if (tmp_args_element_value_435 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);
            Py_DECREF(tmp_args_element_value_433);
            Py_DECREF(tmp_args_element_value_434);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_313 == NULL)) {
            tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);
            Py_DECREF(tmp_args_element_value_433);
            Py_DECREF(tmp_args_element_value_434);
            Py_DECREF(tmp_args_element_value_435);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_436 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[117]);
        if (tmp_args_element_value_436 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);
            Py_DECREF(tmp_args_element_value_432);
            Py_DECREF(tmp_args_element_value_433);
            Py_DECREF(tmp_args_element_value_434);
            Py_DECREF(tmp_args_element_value_435);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_431, tmp_args_element_value_432, tmp_args_element_value_433, tmp_args_element_value_434, tmp_args_element_value_435, tmp_args_element_value_436};
            tmp_called_value_225 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_226, call_args);
        }

        Py_DECREF(tmp_called_value_226);
        Py_DECREF(tmp_args_element_value_432);
        Py_DECREF(tmp_args_element_value_433);
        Py_DECREF(tmp_args_element_value_434);
        Py_DECREF(tmp_args_element_value_435);
        Py_DECREF(tmp_args_element_value_436);
        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_437 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__64_glProgramUniformMatrix3x4dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 236;
        tmp_args_element_value_430 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_225, tmp_args_element_value_437);
        Py_DECREF(tmp_called_value_225);
        Py_DECREF(tmp_args_element_value_437);
        if (tmp_args_element_value_430 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 235;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_224, tmp_args_element_value_430);
        Py_DECREF(tmp_args_element_value_430);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_227;
        PyObject *tmp_args_element_value_438;
        PyObject *tmp_called_value_228;
        PyObject *tmp_called_value_229;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_args_element_value_439;
        PyObject *tmp_args_element_value_440;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_args_element_value_441;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_args_element_value_442;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_args_element_value_443;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_args_element_value_444;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_args_element_value_445;
        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_227 == NULL)) {
            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_314 == NULL)) {
            tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_called_value_229 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[104]);
        if (tmp_called_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_439 = Py_None;
        tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_315 == NULL)) {
            tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_440 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[105]);
        if (tmp_args_element_value_440 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_316 == NULL)) {
            tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_441 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[138]);
        if (tmp_args_element_value_441 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_317 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_317 == NULL)) {
            tmp_expression_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);
            Py_DECREF(tmp_args_element_value_441);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_442 = LOOKUP_ATTRIBUTE(tmp_expression_value_317, mod_consts[111]);
        if (tmp_args_element_value_442 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);
            Py_DECREF(tmp_args_element_value_441);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_318 == NULL)) {
            tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);
            Py_DECREF(tmp_args_element_value_441);
            Py_DECREF(tmp_args_element_value_442);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_443 = LOOKUP_ATTRIBUTE(tmp_expression_value_318, mod_consts[135]);
        if (tmp_args_element_value_443 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);
            Py_DECREF(tmp_args_element_value_441);
            Py_DECREF(tmp_args_element_value_442);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_319 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_319 == NULL)) {
            tmp_expression_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);
            Py_DECREF(tmp_args_element_value_441);
            Py_DECREF(tmp_args_element_value_442);
            Py_DECREF(tmp_args_element_value_443);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_444 = LOOKUP_ATTRIBUTE(tmp_expression_value_319, mod_consts[124]);
        if (tmp_args_element_value_444 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_229);
            Py_DECREF(tmp_args_element_value_440);
            Py_DECREF(tmp_args_element_value_441);
            Py_DECREF(tmp_args_element_value_442);
            Py_DECREF(tmp_args_element_value_443);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_439, tmp_args_element_value_440, tmp_args_element_value_441, tmp_args_element_value_442, tmp_args_element_value_443, tmp_args_element_value_444};
            tmp_called_value_228 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_229, call_args);
        }

        Py_DECREF(tmp_called_value_229);
        Py_DECREF(tmp_args_element_value_440);
        Py_DECREF(tmp_args_element_value_441);
        Py_DECREF(tmp_args_element_value_442);
        Py_DECREF(tmp_args_element_value_443);
        Py_DECREF(tmp_args_element_value_444);
        if (tmp_called_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_445 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__65_glProgramUniformMatrix3x4fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 239;
        tmp_args_element_value_438 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_228, tmp_args_element_value_445);
        Py_DECREF(tmp_called_value_228);
        Py_DECREF(tmp_args_element_value_445);
        if (tmp_args_element_value_438 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 238;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_227, tmp_args_element_value_438);
        Py_DECREF(tmp_args_element_value_438);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_230;
        PyObject *tmp_args_element_value_446;
        PyObject *tmp_called_value_231;
        PyObject *tmp_called_value_232;
        PyObject *tmp_expression_value_320;
        PyObject *tmp_args_element_value_447;
        PyObject *tmp_args_element_value_448;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_args_element_value_449;
        PyObject *tmp_expression_value_322;
        PyObject *tmp_args_element_value_450;
        PyObject *tmp_expression_value_323;
        PyObject *tmp_args_element_value_451;
        PyObject *tmp_expression_value_324;
        PyObject *tmp_args_element_value_452;
        PyObject *tmp_expression_value_325;
        PyObject *tmp_args_element_value_453;
        tmp_called_value_230 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_230 == NULL)) {
            tmp_called_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_320 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_320 == NULL)) {
            tmp_expression_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_called_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_320, mod_consts[104]);
        if (tmp_called_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_447 = Py_None;
        tmp_expression_value_321 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_321 == NULL)) {
            tmp_expression_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_448 = LOOKUP_ATTRIBUTE(tmp_expression_value_321, mod_consts[105]);
        if (tmp_args_element_value_448 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_322 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_322 == NULL)) {
            tmp_expression_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_449 = LOOKUP_ATTRIBUTE(tmp_expression_value_322, mod_consts[138]);
        if (tmp_args_element_value_449 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_323 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_323 == NULL)) {
            tmp_expression_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);
            Py_DECREF(tmp_args_element_value_449);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_450 = LOOKUP_ATTRIBUTE(tmp_expression_value_323, mod_consts[111]);
        if (tmp_args_element_value_450 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);
            Py_DECREF(tmp_args_element_value_449);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_324 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_324 == NULL)) {
            tmp_expression_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);
            Py_DECREF(tmp_args_element_value_449);
            Py_DECREF(tmp_args_element_value_450);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_451 = LOOKUP_ATTRIBUTE(tmp_expression_value_324, mod_consts[135]);
        if (tmp_args_element_value_451 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);
            Py_DECREF(tmp_args_element_value_449);
            Py_DECREF(tmp_args_element_value_450);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_325 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_325 == NULL)) {
            tmp_expression_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);
            Py_DECREF(tmp_args_element_value_449);
            Py_DECREF(tmp_args_element_value_450);
            Py_DECREF(tmp_args_element_value_451);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_452 = LOOKUP_ATTRIBUTE(tmp_expression_value_325, mod_consts[117]);
        if (tmp_args_element_value_452 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);
            Py_DECREF(tmp_args_element_value_448);
            Py_DECREF(tmp_args_element_value_449);
            Py_DECREF(tmp_args_element_value_450);
            Py_DECREF(tmp_args_element_value_451);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_447, tmp_args_element_value_448, tmp_args_element_value_449, tmp_args_element_value_450, tmp_args_element_value_451, tmp_args_element_value_452};
            tmp_called_value_231 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_232, call_args);
        }

        Py_DECREF(tmp_called_value_232);
        Py_DECREF(tmp_args_element_value_448);
        Py_DECREF(tmp_args_element_value_449);
        Py_DECREF(tmp_args_element_value_450);
        Py_DECREF(tmp_args_element_value_451);
        Py_DECREF(tmp_args_element_value_452);
        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_453 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__66_glProgramUniformMatrix4dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 242;
        tmp_args_element_value_446 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_231, tmp_args_element_value_453);
        Py_DECREF(tmp_called_value_231);
        Py_DECREF(tmp_args_element_value_453);
        if (tmp_args_element_value_446 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 241;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_230, tmp_args_element_value_446);
        Py_DECREF(tmp_args_element_value_446);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_233;
        PyObject *tmp_args_element_value_454;
        PyObject *tmp_called_value_234;
        PyObject *tmp_called_value_235;
        PyObject *tmp_expression_value_326;
        PyObject *tmp_args_element_value_455;
        PyObject *tmp_args_element_value_456;
        PyObject *tmp_expression_value_327;
        PyObject *tmp_args_element_value_457;
        PyObject *tmp_expression_value_328;
        PyObject *tmp_args_element_value_458;
        PyObject *tmp_expression_value_329;
        PyObject *tmp_args_element_value_459;
        PyObject *tmp_expression_value_330;
        PyObject *tmp_args_element_value_460;
        PyObject *tmp_expression_value_331;
        PyObject *tmp_args_element_value_461;
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_326 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_326 == NULL)) {
            tmp_expression_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_called_value_235 = LOOKUP_ATTRIBUTE(tmp_expression_value_326, mod_consts[104]);
        if (tmp_called_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_455 = Py_None;
        tmp_expression_value_327 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_327 == NULL)) {
            tmp_expression_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_456 = LOOKUP_ATTRIBUTE(tmp_expression_value_327, mod_consts[105]);
        if (tmp_args_element_value_456 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_328 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_328 == NULL)) {
            tmp_expression_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_457 = LOOKUP_ATTRIBUTE(tmp_expression_value_328, mod_consts[138]);
        if (tmp_args_element_value_457 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_329 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_329 == NULL)) {
            tmp_expression_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);
            Py_DECREF(tmp_args_element_value_457);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_458 = LOOKUP_ATTRIBUTE(tmp_expression_value_329, mod_consts[111]);
        if (tmp_args_element_value_458 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);
            Py_DECREF(tmp_args_element_value_457);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_330 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_330 == NULL)) {
            tmp_expression_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);
            Py_DECREF(tmp_args_element_value_457);
            Py_DECREF(tmp_args_element_value_458);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_459 = LOOKUP_ATTRIBUTE(tmp_expression_value_330, mod_consts[135]);
        if (tmp_args_element_value_459 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);
            Py_DECREF(tmp_args_element_value_457);
            Py_DECREF(tmp_args_element_value_458);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_331 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_331 == NULL)) {
            tmp_expression_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);
            Py_DECREF(tmp_args_element_value_457);
            Py_DECREF(tmp_args_element_value_458);
            Py_DECREF(tmp_args_element_value_459);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_460 = LOOKUP_ATTRIBUTE(tmp_expression_value_331, mod_consts[124]);
        if (tmp_args_element_value_460 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_235);
            Py_DECREF(tmp_args_element_value_456);
            Py_DECREF(tmp_args_element_value_457);
            Py_DECREF(tmp_args_element_value_458);
            Py_DECREF(tmp_args_element_value_459);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_455, tmp_args_element_value_456, tmp_args_element_value_457, tmp_args_element_value_458, tmp_args_element_value_459, tmp_args_element_value_460};
            tmp_called_value_234 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_235, call_args);
        }

        Py_DECREF(tmp_called_value_235);
        Py_DECREF(tmp_args_element_value_456);
        Py_DECREF(tmp_args_element_value_457);
        Py_DECREF(tmp_args_element_value_458);
        Py_DECREF(tmp_args_element_value_459);
        Py_DECREF(tmp_args_element_value_460);
        if (tmp_called_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_461 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__67_glProgramUniformMatrix4fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 245;
        tmp_args_element_value_454 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_234, tmp_args_element_value_461);
        Py_DECREF(tmp_called_value_234);
        Py_DECREF(tmp_args_element_value_461);
        if (tmp_args_element_value_454 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 244;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_233, tmp_args_element_value_454);
        Py_DECREF(tmp_args_element_value_454);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_236;
        PyObject *tmp_args_element_value_462;
        PyObject *tmp_called_value_237;
        PyObject *tmp_called_value_238;
        PyObject *tmp_expression_value_332;
        PyObject *tmp_args_element_value_463;
        PyObject *tmp_args_element_value_464;
        PyObject *tmp_expression_value_333;
        PyObject *tmp_args_element_value_465;
        PyObject *tmp_expression_value_334;
        PyObject *tmp_args_element_value_466;
        PyObject *tmp_expression_value_335;
        PyObject *tmp_args_element_value_467;
        PyObject *tmp_expression_value_336;
        PyObject *tmp_args_element_value_468;
        PyObject *tmp_expression_value_337;
        PyObject *tmp_args_element_value_469;
        tmp_called_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_236 == NULL)) {
            tmp_called_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_332 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_332 == NULL)) {
            tmp_expression_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_called_value_238 = LOOKUP_ATTRIBUTE(tmp_expression_value_332, mod_consts[104]);
        if (tmp_called_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_463 = Py_None;
        tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_333 == NULL)) {
            tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_464 = LOOKUP_ATTRIBUTE(tmp_expression_value_333, mod_consts[105]);
        if (tmp_args_element_value_464 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_334 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_334 == NULL)) {
            tmp_expression_value_334 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_465 = LOOKUP_ATTRIBUTE(tmp_expression_value_334, mod_consts[138]);
        if (tmp_args_element_value_465 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_335 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_335 == NULL)) {
            tmp_expression_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);
            Py_DECREF(tmp_args_element_value_465);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_466 = LOOKUP_ATTRIBUTE(tmp_expression_value_335, mod_consts[111]);
        if (tmp_args_element_value_466 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);
            Py_DECREF(tmp_args_element_value_465);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_336 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_336 == NULL)) {
            tmp_expression_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);
            Py_DECREF(tmp_args_element_value_465);
            Py_DECREF(tmp_args_element_value_466);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_467 = LOOKUP_ATTRIBUTE(tmp_expression_value_336, mod_consts[135]);
        if (tmp_args_element_value_467 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);
            Py_DECREF(tmp_args_element_value_465);
            Py_DECREF(tmp_args_element_value_466);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_337 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_337 == NULL)) {
            tmp_expression_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);
            Py_DECREF(tmp_args_element_value_465);
            Py_DECREF(tmp_args_element_value_466);
            Py_DECREF(tmp_args_element_value_467);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_468 = LOOKUP_ATTRIBUTE(tmp_expression_value_337, mod_consts[117]);
        if (tmp_args_element_value_468 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);
            Py_DECREF(tmp_args_element_value_464);
            Py_DECREF(tmp_args_element_value_465);
            Py_DECREF(tmp_args_element_value_466);
            Py_DECREF(tmp_args_element_value_467);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_463, tmp_args_element_value_464, tmp_args_element_value_465, tmp_args_element_value_466, tmp_args_element_value_467, tmp_args_element_value_468};
            tmp_called_value_237 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_238, call_args);
        }

        Py_DECREF(tmp_called_value_238);
        Py_DECREF(tmp_args_element_value_464);
        Py_DECREF(tmp_args_element_value_465);
        Py_DECREF(tmp_args_element_value_466);
        Py_DECREF(tmp_args_element_value_467);
        Py_DECREF(tmp_args_element_value_468);
        if (tmp_called_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_469 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__68_glProgramUniformMatrix4x2dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 248;
        tmp_args_element_value_462 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_237, tmp_args_element_value_469);
        Py_DECREF(tmp_called_value_237);
        Py_DECREF(tmp_args_element_value_469);
        if (tmp_args_element_value_462 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 247;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_236, tmp_args_element_value_462);
        Py_DECREF(tmp_args_element_value_462);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_239;
        PyObject *tmp_args_element_value_470;
        PyObject *tmp_called_value_240;
        PyObject *tmp_called_value_241;
        PyObject *tmp_expression_value_338;
        PyObject *tmp_args_element_value_471;
        PyObject *tmp_args_element_value_472;
        PyObject *tmp_expression_value_339;
        PyObject *tmp_args_element_value_473;
        PyObject *tmp_expression_value_340;
        PyObject *tmp_args_element_value_474;
        PyObject *tmp_expression_value_341;
        PyObject *tmp_args_element_value_475;
        PyObject *tmp_expression_value_342;
        PyObject *tmp_args_element_value_476;
        PyObject *tmp_expression_value_343;
        PyObject *tmp_args_element_value_477;
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_338 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_338 == NULL)) {
            tmp_expression_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_called_value_241 = LOOKUP_ATTRIBUTE(tmp_expression_value_338, mod_consts[104]);
        if (tmp_called_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_471 = Py_None;
        tmp_expression_value_339 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_339 == NULL)) {
            tmp_expression_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_472 = LOOKUP_ATTRIBUTE(tmp_expression_value_339, mod_consts[105]);
        if (tmp_args_element_value_472 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_340 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_340 == NULL)) {
            tmp_expression_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_473 = LOOKUP_ATTRIBUTE(tmp_expression_value_340, mod_consts[138]);
        if (tmp_args_element_value_473 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_341 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_341 == NULL)) {
            tmp_expression_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);
            Py_DECREF(tmp_args_element_value_473);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_474 = LOOKUP_ATTRIBUTE(tmp_expression_value_341, mod_consts[111]);
        if (tmp_args_element_value_474 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);
            Py_DECREF(tmp_args_element_value_473);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_342 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_342 == NULL)) {
            tmp_expression_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_475 = LOOKUP_ATTRIBUTE(tmp_expression_value_342, mod_consts[135]);
        if (tmp_args_element_value_475 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_343 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_343 == NULL)) {
            tmp_expression_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);
            Py_DECREF(tmp_args_element_value_475);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_476 = LOOKUP_ATTRIBUTE(tmp_expression_value_343, mod_consts[124]);
        if (tmp_args_element_value_476 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);
            Py_DECREF(tmp_args_element_value_472);
            Py_DECREF(tmp_args_element_value_473);
            Py_DECREF(tmp_args_element_value_474);
            Py_DECREF(tmp_args_element_value_475);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_471, tmp_args_element_value_472, tmp_args_element_value_473, tmp_args_element_value_474, tmp_args_element_value_475, tmp_args_element_value_476};
            tmp_called_value_240 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_241, call_args);
        }

        Py_DECREF(tmp_called_value_241);
        Py_DECREF(tmp_args_element_value_472);
        Py_DECREF(tmp_args_element_value_473);
        Py_DECREF(tmp_args_element_value_474);
        Py_DECREF(tmp_args_element_value_475);
        Py_DECREF(tmp_args_element_value_476);
        if (tmp_called_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_477 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__69_glProgramUniformMatrix4x2fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 251;
        tmp_args_element_value_470 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_240, tmp_args_element_value_477);
        Py_DECREF(tmp_called_value_240);
        Py_DECREF(tmp_args_element_value_477);
        if (tmp_args_element_value_470 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 250;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_239, tmp_args_element_value_470);
        Py_DECREF(tmp_args_element_value_470);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_242;
        PyObject *tmp_args_element_value_478;
        PyObject *tmp_called_value_243;
        PyObject *tmp_called_value_244;
        PyObject *tmp_expression_value_344;
        PyObject *tmp_args_element_value_479;
        PyObject *tmp_args_element_value_480;
        PyObject *tmp_expression_value_345;
        PyObject *tmp_args_element_value_481;
        PyObject *tmp_expression_value_346;
        PyObject *tmp_args_element_value_482;
        PyObject *tmp_expression_value_347;
        PyObject *tmp_args_element_value_483;
        PyObject *tmp_expression_value_348;
        PyObject *tmp_args_element_value_484;
        PyObject *tmp_expression_value_349;
        PyObject *tmp_args_element_value_485;
        tmp_called_value_242 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_242 == NULL)) {
            tmp_called_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_344 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_344 == NULL)) {
            tmp_expression_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_called_value_244 = LOOKUP_ATTRIBUTE(tmp_expression_value_344, mod_consts[104]);
        if (tmp_called_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_479 = Py_None;
        tmp_expression_value_345 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_345 == NULL)) {
            tmp_expression_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_480 = LOOKUP_ATTRIBUTE(tmp_expression_value_345, mod_consts[105]);
        if (tmp_args_element_value_480 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_346 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_346 == NULL)) {
            tmp_expression_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_481 = LOOKUP_ATTRIBUTE(tmp_expression_value_346, mod_consts[138]);
        if (tmp_args_element_value_481 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_347 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_347 == NULL)) {
            tmp_expression_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);
            Py_DECREF(tmp_args_element_value_481);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_482 = LOOKUP_ATTRIBUTE(tmp_expression_value_347, mod_consts[111]);
        if (tmp_args_element_value_482 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);
            Py_DECREF(tmp_args_element_value_481);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_348 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_348 == NULL)) {
            tmp_expression_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);
            Py_DECREF(tmp_args_element_value_481);
            Py_DECREF(tmp_args_element_value_482);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_483 = LOOKUP_ATTRIBUTE(tmp_expression_value_348, mod_consts[135]);
        if (tmp_args_element_value_483 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);
            Py_DECREF(tmp_args_element_value_481);
            Py_DECREF(tmp_args_element_value_482);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_349 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_349 == NULL)) {
            tmp_expression_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);
            Py_DECREF(tmp_args_element_value_481);
            Py_DECREF(tmp_args_element_value_482);
            Py_DECREF(tmp_args_element_value_483);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_484 = LOOKUP_ATTRIBUTE(tmp_expression_value_349, mod_consts[117]);
        if (tmp_args_element_value_484 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);
            Py_DECREF(tmp_args_element_value_480);
            Py_DECREF(tmp_args_element_value_481);
            Py_DECREF(tmp_args_element_value_482);
            Py_DECREF(tmp_args_element_value_483);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_479, tmp_args_element_value_480, tmp_args_element_value_481, tmp_args_element_value_482, tmp_args_element_value_483, tmp_args_element_value_484};
            tmp_called_value_243 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_244, call_args);
        }

        Py_DECREF(tmp_called_value_244);
        Py_DECREF(tmp_args_element_value_480);
        Py_DECREF(tmp_args_element_value_481);
        Py_DECREF(tmp_args_element_value_482);
        Py_DECREF(tmp_args_element_value_483);
        Py_DECREF(tmp_args_element_value_484);
        if (tmp_called_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_485 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__70_glProgramUniformMatrix4x3dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 254;
        tmp_args_element_value_478 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_243, tmp_args_element_value_485);
        Py_DECREF(tmp_called_value_243);
        Py_DECREF(tmp_args_element_value_485);
        if (tmp_args_element_value_478 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 253;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_242, tmp_args_element_value_478);
        Py_DECREF(tmp_args_element_value_478);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_245;
        PyObject *tmp_args_element_value_486;
        PyObject *tmp_called_value_246;
        PyObject *tmp_called_value_247;
        PyObject *tmp_expression_value_350;
        PyObject *tmp_args_element_value_487;
        PyObject *tmp_args_element_value_488;
        PyObject *tmp_expression_value_351;
        PyObject *tmp_args_element_value_489;
        PyObject *tmp_expression_value_352;
        PyObject *tmp_args_element_value_490;
        PyObject *tmp_expression_value_353;
        PyObject *tmp_args_element_value_491;
        PyObject *tmp_expression_value_354;
        PyObject *tmp_args_element_value_492;
        PyObject *tmp_expression_value_355;
        PyObject *tmp_args_element_value_493;
        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_245 == NULL)) {
            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_350 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_350 == NULL)) {
            tmp_expression_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_called_value_247 = LOOKUP_ATTRIBUTE(tmp_expression_value_350, mod_consts[104]);
        if (tmp_called_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_487 = Py_None;
        tmp_expression_value_351 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_351 == NULL)) {
            tmp_expression_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_488 = LOOKUP_ATTRIBUTE(tmp_expression_value_351, mod_consts[105]);
        if (tmp_args_element_value_488 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_352 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_352 == NULL)) {
            tmp_expression_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_489 = LOOKUP_ATTRIBUTE(tmp_expression_value_352, mod_consts[138]);
        if (tmp_args_element_value_489 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_353 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_353 == NULL)) {
            tmp_expression_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_490 = LOOKUP_ATTRIBUTE(tmp_expression_value_353, mod_consts[111]);
        if (tmp_args_element_value_490 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_354 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_354 == NULL)) {
            tmp_expression_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);
            Py_DECREF(tmp_args_element_value_490);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_491 = LOOKUP_ATTRIBUTE(tmp_expression_value_354, mod_consts[135]);
        if (tmp_args_element_value_491 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);
            Py_DECREF(tmp_args_element_value_490);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_355 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_355 == NULL)) {
            tmp_expression_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);
            Py_DECREF(tmp_args_element_value_490);
            Py_DECREF(tmp_args_element_value_491);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_492 = LOOKUP_ATTRIBUTE(tmp_expression_value_355, mod_consts[124]);
        if (tmp_args_element_value_492 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);
            Py_DECREF(tmp_args_element_value_488);
            Py_DECREF(tmp_args_element_value_489);
            Py_DECREF(tmp_args_element_value_490);
            Py_DECREF(tmp_args_element_value_491);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_487, tmp_args_element_value_488, tmp_args_element_value_489, tmp_args_element_value_490, tmp_args_element_value_491, tmp_args_element_value_492};
            tmp_called_value_246 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_247, call_args);
        }

        Py_DECREF(tmp_called_value_247);
        Py_DECREF(tmp_args_element_value_488);
        Py_DECREF(tmp_args_element_value_489);
        Py_DECREF(tmp_args_element_value_490);
        Py_DECREF(tmp_args_element_value_491);
        Py_DECREF(tmp_args_element_value_492);
        if (tmp_called_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_493 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__71_glProgramUniformMatrix4x3fv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 257;
        tmp_args_element_value_486 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_246, tmp_args_element_value_493);
        Py_DECREF(tmp_called_value_246);
        Py_DECREF(tmp_args_element_value_493);
        if (tmp_args_element_value_486 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 256;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_245, tmp_args_element_value_486);
        Py_DECREF(tmp_args_element_value_486);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_248;
        PyObject *tmp_args_element_value_494;
        PyObject *tmp_called_value_249;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_495;
        tmp_called_value_248 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_248 == NULL)) {
            tmp_called_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 260;
        tmp_called_value_249 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[104],
            PyTuple_GET_ITEM(mod_consts[190], 0)
        );

        if (tmp_called_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_495 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__72_glReleaseShaderCompiler();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 260;
        tmp_args_element_value_494 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_249, tmp_args_element_value_495);
        Py_DECREF(tmp_called_value_249);
        Py_DECREF(tmp_args_element_value_495);
        if (tmp_args_element_value_494 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 259;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_248, tmp_args_element_value_494);
        Py_DECREF(tmp_args_element_value_494);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_250;
        PyObject *tmp_args_element_value_496;
        PyObject *tmp_called_value_251;
        PyObject *tmp_called_value_252;
        PyObject *tmp_expression_value_356;
        PyObject *tmp_args_element_value_497;
        PyObject *tmp_args_element_value_498;
        PyObject *tmp_expression_value_357;
        PyObject *tmp_args_element_value_499;
        PyObject *tmp_expression_value_358;
        PyObject *tmp_args_element_value_500;
        PyObject *tmp_expression_value_359;
        PyObject *tmp_args_element_value_501;
        tmp_called_value_250 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_250 == NULL)) {
            tmp_called_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_356 == NULL)) {
            tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_called_value_252 = LOOKUP_ATTRIBUTE(tmp_expression_value_356, mod_consts[104]);
        if (tmp_called_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_497 = Py_None;
        tmp_expression_value_357 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_357 == NULL)) {
            tmp_expression_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_498 = LOOKUP_ATTRIBUTE(tmp_expression_value_357, mod_consts[105]);
        if (tmp_args_element_value_498 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_358 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_358 == NULL)) {
            tmp_expression_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);
            Py_DECREF(tmp_args_element_value_498);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_499 = LOOKUP_ATTRIBUTE(tmp_expression_value_358, mod_consts[111]);
        if (tmp_args_element_value_499 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);
            Py_DECREF(tmp_args_element_value_498);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_359 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_359 == NULL)) {
            tmp_expression_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);
            Py_DECREF(tmp_args_element_value_498);
            Py_DECREF(tmp_args_element_value_499);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_500 = LOOKUP_ATTRIBUTE(tmp_expression_value_359, mod_consts[131]);
        if (tmp_args_element_value_500 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);
            Py_DECREF(tmp_args_element_value_498);
            Py_DECREF(tmp_args_element_value_499);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_497, tmp_args_element_value_498, tmp_args_element_value_499, tmp_args_element_value_500};
            tmp_called_value_251 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_252, call_args);
        }

        Py_DECREF(tmp_called_value_252);
        Py_DECREF(tmp_args_element_value_498);
        Py_DECREF(tmp_args_element_value_499);
        Py_DECREF(tmp_args_element_value_500);
        if (tmp_called_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_501 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__73_glScissorArrayv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 263;
        tmp_args_element_value_496 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_251, tmp_args_element_value_501);
        Py_DECREF(tmp_called_value_251);
        Py_DECREF(tmp_args_element_value_501);
        if (tmp_args_element_value_496 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 262;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_250, tmp_args_element_value_496);
        Py_DECREF(tmp_args_element_value_496);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_253;
        PyObject *tmp_args_element_value_502;
        PyObject *tmp_called_value_254;
        PyObject *tmp_called_value_255;
        PyObject *tmp_expression_value_360;
        PyObject *tmp_args_element_value_503;
        PyObject *tmp_args_element_value_504;
        PyObject *tmp_expression_value_361;
        PyObject *tmp_args_element_value_505;
        PyObject *tmp_expression_value_362;
        PyObject *tmp_args_element_value_506;
        PyObject *tmp_expression_value_363;
        PyObject *tmp_args_element_value_507;
        PyObject *tmp_expression_value_364;
        PyObject *tmp_args_element_value_508;
        PyObject *tmp_expression_value_365;
        PyObject *tmp_args_element_value_509;
        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_253 == NULL)) {
            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_360 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_360 == NULL)) {
            tmp_expression_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_called_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_360, mod_consts[104]);
        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_503 = Py_None;
        tmp_expression_value_361 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_361 == NULL)) {
            tmp_expression_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_504 = LOOKUP_ATTRIBUTE(tmp_expression_value_361, mod_consts[105]);
        if (tmp_args_element_value_504 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_362 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_362 == NULL)) {
            tmp_expression_value_362 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_505 = LOOKUP_ATTRIBUTE(tmp_expression_value_362, mod_consts[138]);
        if (tmp_args_element_value_505 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_363 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_363 == NULL)) {
            tmp_expression_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_506 = LOOKUP_ATTRIBUTE(tmp_expression_value_363, mod_consts[138]);
        if (tmp_args_element_value_506 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_364 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_364 == NULL)) {
            tmp_expression_value_364 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_507 = LOOKUP_ATTRIBUTE(tmp_expression_value_364, mod_consts[111]);
        if (tmp_args_element_value_507 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_365 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_365 == NULL)) {
            tmp_expression_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);
            Py_DECREF(tmp_args_element_value_507);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_508 = LOOKUP_ATTRIBUTE(tmp_expression_value_365, mod_consts[111]);
        if (tmp_args_element_value_508 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_255);
            Py_DECREF(tmp_args_element_value_504);
            Py_DECREF(tmp_args_element_value_505);
            Py_DECREF(tmp_args_element_value_506);
            Py_DECREF(tmp_args_element_value_507);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_503, tmp_args_element_value_504, tmp_args_element_value_505, tmp_args_element_value_506, tmp_args_element_value_507, tmp_args_element_value_508};
            tmp_called_value_254 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_255, call_args);
        }

        Py_DECREF(tmp_called_value_255);
        Py_DECREF(tmp_args_element_value_504);
        Py_DECREF(tmp_args_element_value_505);
        Py_DECREF(tmp_args_element_value_506);
        Py_DECREF(tmp_args_element_value_507);
        Py_DECREF(tmp_args_element_value_508);
        if (tmp_called_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_509 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__74_glScissorIndexed();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 266;
        tmp_args_element_value_502 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_254, tmp_args_element_value_509);
        Py_DECREF(tmp_called_value_254);
        Py_DECREF(tmp_args_element_value_509);
        if (tmp_args_element_value_502 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 265;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_253, tmp_args_element_value_502);
        Py_DECREF(tmp_args_element_value_502);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_256;
        PyObject *tmp_args_element_value_510;
        PyObject *tmp_called_value_257;
        PyObject *tmp_called_value_258;
        PyObject *tmp_expression_value_366;
        PyObject *tmp_args_element_value_511;
        PyObject *tmp_args_element_value_512;
        PyObject *tmp_expression_value_367;
        PyObject *tmp_args_element_value_513;
        PyObject *tmp_expression_value_368;
        PyObject *tmp_args_element_value_514;
        tmp_called_value_256 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_256 == NULL)) {
            tmp_called_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_366 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_366 == NULL)) {
            tmp_expression_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_called_value_258 = LOOKUP_ATTRIBUTE(tmp_expression_value_366, mod_consts[104]);
        if (tmp_called_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_511 = Py_None;
        tmp_expression_value_367 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_367 == NULL)) {
            tmp_expression_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_512 = LOOKUP_ATTRIBUTE(tmp_expression_value_367, mod_consts[105]);
        if (tmp_args_element_value_512 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_368 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_368 == NULL)) {
            tmp_expression_value_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);
            Py_DECREF(tmp_args_element_value_512);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_513 = LOOKUP_ATTRIBUTE(tmp_expression_value_368, mod_consts[131]);
        if (tmp_args_element_value_513 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);
            Py_DECREF(tmp_args_element_value_512);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_511, tmp_args_element_value_512, tmp_args_element_value_513};
            tmp_called_value_257 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_258, call_args);
        }

        Py_DECREF(tmp_called_value_258);
        Py_DECREF(tmp_args_element_value_512);
        Py_DECREF(tmp_args_element_value_513);
        if (tmp_called_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_514 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__75_glScissorIndexedv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 269;
        tmp_args_element_value_510 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_257, tmp_args_element_value_514);
        Py_DECREF(tmp_called_value_257);
        Py_DECREF(tmp_args_element_value_514);
        if (tmp_args_element_value_510 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 268;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_256, tmp_args_element_value_510);
        Py_DECREF(tmp_args_element_value_510);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_259;
        PyObject *tmp_args_element_value_515;
        PyObject *tmp_called_value_260;
        PyObject *tmp_called_value_261;
        PyObject *tmp_expression_value_369;
        PyObject *tmp_args_element_value_516;
        PyObject *tmp_args_element_value_517;
        PyObject *tmp_expression_value_370;
        PyObject *tmp_args_element_value_518;
        PyObject *tmp_expression_value_371;
        PyObject *tmp_args_element_value_519;
        PyObject *tmp_expression_value_372;
        PyObject *tmp_args_element_value_520;
        PyObject *tmp_expression_value_373;
        PyObject *tmp_args_element_value_521;
        PyObject *tmp_expression_value_374;
        PyObject *tmp_args_element_value_522;
        tmp_called_value_259 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_259 == NULL)) {
            tmp_called_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_369 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_369 == NULL)) {
            tmp_expression_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_called_value_261 = LOOKUP_ATTRIBUTE(tmp_expression_value_369, mod_consts[104]);
        if (tmp_called_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_516 = Py_None;
        tmp_expression_value_370 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_370 == NULL)) {
            tmp_expression_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_517 = LOOKUP_ATTRIBUTE(tmp_expression_value_370, mod_consts[111]);
        if (tmp_args_element_value_517 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_371 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_371 == NULL)) {
            tmp_expression_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_518 = LOOKUP_ATTRIBUTE(tmp_expression_value_371, mod_consts[115]);
        if (tmp_args_element_value_518 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_372 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_372 == NULL)) {
            tmp_expression_value_372 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);
            Py_DECREF(tmp_args_element_value_518);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_519 = LOOKUP_ATTRIBUTE(tmp_expression_value_372, mod_consts[110]);
        if (tmp_args_element_value_519 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);
            Py_DECREF(tmp_args_element_value_518);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_373 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_373 == NULL)) {
            tmp_expression_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);
            Py_DECREF(tmp_args_element_value_518);
            Py_DECREF(tmp_args_element_value_519);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_520 = LOOKUP_ATTRIBUTE(tmp_expression_value_373, mod_consts[127]);
        if (tmp_args_element_value_520 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);
            Py_DECREF(tmp_args_element_value_518);
            Py_DECREF(tmp_args_element_value_519);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_374 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_374 == NULL)) {
            tmp_expression_value_374 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);
            Py_DECREF(tmp_args_element_value_518);
            Py_DECREF(tmp_args_element_value_519);
            Py_DECREF(tmp_args_element_value_520);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_521 = LOOKUP_ATTRIBUTE(tmp_expression_value_374, mod_consts[111]);
        if (tmp_args_element_value_521 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_517);
            Py_DECREF(tmp_args_element_value_518);
            Py_DECREF(tmp_args_element_value_519);
            Py_DECREF(tmp_args_element_value_520);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_516, tmp_args_element_value_517, tmp_args_element_value_518, tmp_args_element_value_519, tmp_args_element_value_520, tmp_args_element_value_521};
            tmp_called_value_260 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_261, call_args);
        }

        Py_DECREF(tmp_called_value_261);
        Py_DECREF(tmp_args_element_value_517);
        Py_DECREF(tmp_args_element_value_518);
        Py_DECREF(tmp_args_element_value_519);
        Py_DECREF(tmp_args_element_value_520);
        Py_DECREF(tmp_args_element_value_521);
        if (tmp_called_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_522 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__76_glShaderBinary();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 272;
        tmp_args_element_value_515 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_260, tmp_args_element_value_522);
        Py_DECREF(tmp_called_value_260);
        Py_DECREF(tmp_args_element_value_522);
        if (tmp_args_element_value_515 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 271;
        tmp_assign_source_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_259, tmp_args_element_value_515);
        Py_DECREF(tmp_args_element_value_515);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_262;
        PyObject *tmp_args_element_value_523;
        PyObject *tmp_called_value_263;
        PyObject *tmp_called_value_264;
        PyObject *tmp_expression_value_375;
        PyObject *tmp_args_element_value_524;
        PyObject *tmp_args_element_value_525;
        PyObject *tmp_expression_value_376;
        PyObject *tmp_args_element_value_526;
        PyObject *tmp_expression_value_377;
        PyObject *tmp_args_element_value_527;
        PyObject *tmp_expression_value_378;
        PyObject *tmp_args_element_value_528;
        tmp_called_value_262 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_262 == NULL)) {
            tmp_called_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_375 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_375 == NULL)) {
            tmp_expression_value_375 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_called_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_375, mod_consts[104]);
        if (tmp_called_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_524 = Py_None;
        tmp_expression_value_376 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_376 == NULL)) {
            tmp_expression_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_525 = LOOKUP_ATTRIBUTE(tmp_expression_value_376, mod_consts[105]);
        if (tmp_args_element_value_525 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_377 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_377 == NULL)) {
            tmp_expression_value_377 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);
            Py_DECREF(tmp_args_element_value_525);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_526 = LOOKUP_ATTRIBUTE(tmp_expression_value_377, mod_consts[196]);
        if (tmp_args_element_value_526 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);
            Py_DECREF(tmp_args_element_value_525);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_378 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_378 == NULL)) {
            tmp_expression_value_378 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);
            Py_DECREF(tmp_args_element_value_525);
            Py_DECREF(tmp_args_element_value_526);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_527 = LOOKUP_ATTRIBUTE(tmp_expression_value_378, mod_consts[105]);
        if (tmp_args_element_value_527 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);
            Py_DECREF(tmp_args_element_value_525);
            Py_DECREF(tmp_args_element_value_526);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_524, tmp_args_element_value_525, tmp_args_element_value_526, tmp_args_element_value_527};
            tmp_called_value_263 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_264, call_args);
        }

        Py_DECREF(tmp_called_value_264);
        Py_DECREF(tmp_args_element_value_525);
        Py_DECREF(tmp_args_element_value_526);
        Py_DECREF(tmp_args_element_value_527);
        if (tmp_called_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_528 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__77_glUseProgramStages();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 275;
        tmp_args_element_value_523 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_263, tmp_args_element_value_528);
        Py_DECREF(tmp_called_value_263);
        Py_DECREF(tmp_args_element_value_528);
        if (tmp_args_element_value_523 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 274;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_262, tmp_args_element_value_523);
        Py_DECREF(tmp_args_element_value_523);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_265;
        PyObject *tmp_args_element_value_529;
        PyObject *tmp_called_value_266;
        PyObject *tmp_called_value_267;
        PyObject *tmp_expression_value_379;
        PyObject *tmp_args_element_value_530;
        PyObject *tmp_args_element_value_531;
        PyObject *tmp_expression_value_380;
        PyObject *tmp_args_element_value_532;
        tmp_called_value_265 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_265 == NULL)) {
            tmp_called_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_379 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_379 == NULL)) {
            tmp_expression_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_called_value_267 = LOOKUP_ATTRIBUTE(tmp_expression_value_379, mod_consts[104]);
        if (tmp_called_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_530 = Py_None;
        tmp_expression_value_380 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_380 == NULL)) {
            tmp_expression_value_380 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_267);

            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_531 = LOOKUP_ATTRIBUTE(tmp_expression_value_380, mod_consts[105]);
        if (tmp_args_element_value_531 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_267);

            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_530, tmp_args_element_value_531};
            tmp_called_value_266 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_267, call_args);
        }

        Py_DECREF(tmp_called_value_267);
        Py_DECREF(tmp_args_element_value_531);
        if (tmp_called_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_532 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__78_glValidateProgramPipeline();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 278;
        tmp_args_element_value_529 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_266, tmp_args_element_value_532);
        Py_DECREF(tmp_called_value_266);
        Py_DECREF(tmp_args_element_value_532);
        if (tmp_args_element_value_529 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 277;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_265, tmp_args_element_value_529);
        Py_DECREF(tmp_args_element_value_529);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_268;
        PyObject *tmp_args_element_value_533;
        PyObject *tmp_called_value_269;
        PyObject *tmp_called_value_270;
        PyObject *tmp_expression_value_381;
        PyObject *tmp_args_element_value_534;
        PyObject *tmp_args_element_value_535;
        PyObject *tmp_expression_value_382;
        PyObject *tmp_args_element_value_536;
        PyObject *tmp_expression_value_383;
        PyObject *tmp_args_element_value_537;
        tmp_called_value_268 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_268 == NULL)) {
            tmp_called_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_381 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_381 == NULL)) {
            tmp_expression_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_called_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_381, mod_consts[104]);
        if (tmp_called_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_534 = Py_None;
        tmp_expression_value_382 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_382 == NULL)) {
            tmp_expression_value_382 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_270);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_535 = LOOKUP_ATTRIBUTE(tmp_expression_value_382, mod_consts[105]);
        if (tmp_args_element_value_535 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_270);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_383 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_383 == NULL)) {
            tmp_expression_value_383 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_270);
            Py_DECREF(tmp_args_element_value_535);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_536 = LOOKUP_ATTRIBUTE(tmp_expression_value_383, mod_consts[119]);
        if (tmp_args_element_value_536 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_270);
            Py_DECREF(tmp_args_element_value_535);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_534, tmp_args_element_value_535, tmp_args_element_value_536};
            tmp_called_value_269 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_270, call_args);
        }

        Py_DECREF(tmp_called_value_270);
        Py_DECREF(tmp_args_element_value_535);
        Py_DECREF(tmp_args_element_value_536);
        if (tmp_called_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_537 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__79_glVertexAttribL1d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 281;
        tmp_args_element_value_533 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_269, tmp_args_element_value_537);
        Py_DECREF(tmp_called_value_269);
        Py_DECREF(tmp_args_element_value_537);
        if (tmp_args_element_value_533 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 280;
        tmp_assign_source_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_268, tmp_args_element_value_533);
        Py_DECREF(tmp_args_element_value_533);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_271;
        PyObject *tmp_args_element_value_538;
        PyObject *tmp_called_value_272;
        PyObject *tmp_called_value_273;
        PyObject *tmp_expression_value_384;
        PyObject *tmp_args_element_value_539;
        PyObject *tmp_args_element_value_540;
        PyObject *tmp_expression_value_385;
        PyObject *tmp_args_element_value_541;
        PyObject *tmp_expression_value_386;
        PyObject *tmp_args_element_value_542;
        tmp_called_value_271 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_271 == NULL)) {
            tmp_called_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_384 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_384 == NULL)) {
            tmp_expression_value_384 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_called_value_273 = LOOKUP_ATTRIBUTE(tmp_expression_value_384, mod_consts[104]);
        if (tmp_called_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_539 = Py_None;
        tmp_expression_value_385 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_385 == NULL)) {
            tmp_expression_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_273);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_540 = LOOKUP_ATTRIBUTE(tmp_expression_value_385, mod_consts[105]);
        if (tmp_args_element_value_540 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_273);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_386 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_386 == NULL)) {
            tmp_expression_value_386 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_273);
            Py_DECREF(tmp_args_element_value_540);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_541 = LOOKUP_ATTRIBUTE(tmp_expression_value_386, mod_consts[117]);
        if (tmp_args_element_value_541 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_273);
            Py_DECREF(tmp_args_element_value_540);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_args_element_value_539, tmp_args_element_value_540, tmp_args_element_value_541};
            tmp_called_value_272 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_273, call_args);
        }

        Py_DECREF(tmp_called_value_273);
        Py_DECREF(tmp_args_element_value_540);
        Py_DECREF(tmp_args_element_value_541);
        if (tmp_called_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_542 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__80_glVertexAttribL1dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 284;
        tmp_args_element_value_538 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_272, tmp_args_element_value_542);
        Py_DECREF(tmp_called_value_272);
        Py_DECREF(tmp_args_element_value_542);
        if (tmp_args_element_value_538 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 283;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_271, tmp_args_element_value_538);
        Py_DECREF(tmp_args_element_value_538);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_274;
        PyObject *tmp_args_element_value_543;
        PyObject *tmp_called_value_275;
        PyObject *tmp_called_value_276;
        PyObject *tmp_expression_value_387;
        PyObject *tmp_args_element_value_544;
        PyObject *tmp_args_element_value_545;
        PyObject *tmp_expression_value_388;
        PyObject *tmp_args_element_value_546;
        PyObject *tmp_expression_value_389;
        PyObject *tmp_args_element_value_547;
        PyObject *tmp_expression_value_390;
        PyObject *tmp_args_element_value_548;
        tmp_called_value_274 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_274 == NULL)) {
            tmp_called_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_387 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_387 == NULL)) {
            tmp_expression_value_387 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_called_value_276 = LOOKUP_ATTRIBUTE(tmp_expression_value_387, mod_consts[104]);
        if (tmp_called_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_544 = Py_None;
        tmp_expression_value_388 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_388 == NULL)) {
            tmp_expression_value_388 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_545 = LOOKUP_ATTRIBUTE(tmp_expression_value_388, mod_consts[105]);
        if (tmp_args_element_value_545 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_389 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_389 == NULL)) {
            tmp_expression_value_389 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);
            Py_DECREF(tmp_args_element_value_545);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_546 = LOOKUP_ATTRIBUTE(tmp_expression_value_389, mod_consts[119]);
        if (tmp_args_element_value_546 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);
            Py_DECREF(tmp_args_element_value_545);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_390 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_390 == NULL)) {
            tmp_expression_value_390 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);
            Py_DECREF(tmp_args_element_value_545);
            Py_DECREF(tmp_args_element_value_546);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_547 = LOOKUP_ATTRIBUTE(tmp_expression_value_390, mod_consts[119]);
        if (tmp_args_element_value_547 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);
            Py_DECREF(tmp_args_element_value_545);
            Py_DECREF(tmp_args_element_value_546);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_544, tmp_args_element_value_545, tmp_args_element_value_546, tmp_args_element_value_547};
            tmp_called_value_275 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_276, call_args);
        }

        Py_DECREF(tmp_called_value_276);
        Py_DECREF(tmp_args_element_value_545);
        Py_DECREF(tmp_args_element_value_546);
        Py_DECREF(tmp_args_element_value_547);
        if (tmp_called_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_548 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__81_glVertexAttribL2d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 287;
        tmp_args_element_value_543 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_275, tmp_args_element_value_548);
        Py_DECREF(tmp_called_value_275);
        Py_DECREF(tmp_args_element_value_548);
        if (tmp_args_element_value_543 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 286;
        tmp_assign_source_127 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_274, tmp_args_element_value_543);
        Py_DECREF(tmp_args_element_value_543);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_277;
        PyObject *tmp_args_element_value_549;
        PyObject *tmp_called_value_278;
        PyObject *tmp_called_value_279;
        PyObject *tmp_expression_value_391;
        PyObject *tmp_args_element_value_550;
        PyObject *tmp_args_element_value_551;
        PyObject *tmp_expression_value_392;
        PyObject *tmp_args_element_value_552;
        PyObject *tmp_expression_value_393;
        PyObject *tmp_args_element_value_553;
        tmp_called_value_277 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_277 == NULL)) {
            tmp_called_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_391 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_391 == NULL)) {
            tmp_expression_value_391 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_called_value_279 = LOOKUP_ATTRIBUTE(tmp_expression_value_391, mod_consts[104]);
        if (tmp_called_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_550 = Py_None;
        tmp_expression_value_392 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_392 == NULL)) {
            tmp_expression_value_392 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_279);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_551 = LOOKUP_ATTRIBUTE(tmp_expression_value_392, mod_consts[105]);
        if (tmp_args_element_value_551 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_279);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_393 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_393 == NULL)) {
            tmp_expression_value_393 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_279);
            Py_DECREF(tmp_args_element_value_551);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_552 = LOOKUP_ATTRIBUTE(tmp_expression_value_393, mod_consts[117]);
        if (tmp_args_element_value_552 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_279);
            Py_DECREF(tmp_args_element_value_551);

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_value_550, tmp_args_element_value_551, tmp_args_element_value_552};
            tmp_called_value_278 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_279, call_args);
        }

        Py_DECREF(tmp_called_value_279);
        Py_DECREF(tmp_args_element_value_551);
        Py_DECREF(tmp_args_element_value_552);
        if (tmp_called_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_553 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__82_glVertexAttribL2dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 290;
        tmp_args_element_value_549 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_278, tmp_args_element_value_553);
        Py_DECREF(tmp_called_value_278);
        Py_DECREF(tmp_args_element_value_553);
        if (tmp_args_element_value_549 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 289;
        tmp_assign_source_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_277, tmp_args_element_value_549);
        Py_DECREF(tmp_args_element_value_549);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_280;
        PyObject *tmp_args_element_value_554;
        PyObject *tmp_called_value_281;
        PyObject *tmp_called_value_282;
        PyObject *tmp_expression_value_394;
        PyObject *tmp_args_element_value_555;
        PyObject *tmp_args_element_value_556;
        PyObject *tmp_expression_value_395;
        PyObject *tmp_args_element_value_557;
        PyObject *tmp_expression_value_396;
        PyObject *tmp_args_element_value_558;
        PyObject *tmp_expression_value_397;
        PyObject *tmp_args_element_value_559;
        PyObject *tmp_expression_value_398;
        PyObject *tmp_args_element_value_560;
        tmp_called_value_280 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_280 == NULL)) {
            tmp_called_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_394 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_394 == NULL)) {
            tmp_expression_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_called_value_282 = LOOKUP_ATTRIBUTE(tmp_expression_value_394, mod_consts[104]);
        if (tmp_called_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_555 = Py_None;
        tmp_expression_value_395 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_395 == NULL)) {
            tmp_expression_value_395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_556 = LOOKUP_ATTRIBUTE(tmp_expression_value_395, mod_consts[105]);
        if (tmp_args_element_value_556 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_396 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_396 == NULL)) {
            tmp_expression_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_396 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);
            Py_DECREF(tmp_args_element_value_556);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_557 = LOOKUP_ATTRIBUTE(tmp_expression_value_396, mod_consts[119]);
        if (tmp_args_element_value_557 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);
            Py_DECREF(tmp_args_element_value_556);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_397 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_397 == NULL)) {
            tmp_expression_value_397 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);
            Py_DECREF(tmp_args_element_value_556);
            Py_DECREF(tmp_args_element_value_557);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_558 = LOOKUP_ATTRIBUTE(tmp_expression_value_397, mod_consts[119]);
        if (tmp_args_element_value_558 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);
            Py_DECREF(tmp_args_element_value_556);
            Py_DECREF(tmp_args_element_value_557);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_398 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_398 == NULL)) {
            tmp_expression_value_398 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);
            Py_DECREF(tmp_args_element_value_556);
            Py_DECREF(tmp_args_element_value_557);
            Py_DECREF(tmp_args_element_value_558);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_559 = LOOKUP_ATTRIBUTE(tmp_expression_value_398, mod_consts[119]);
        if (tmp_args_element_value_559 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);
            Py_DECREF(tmp_args_element_value_556);
            Py_DECREF(tmp_args_element_value_557);
            Py_DECREF(tmp_args_element_value_558);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_555, tmp_args_element_value_556, tmp_args_element_value_557, tmp_args_element_value_558, tmp_args_element_value_559};
            tmp_called_value_281 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_282, call_args);
        }

        Py_DECREF(tmp_called_value_282);
        Py_DECREF(tmp_args_element_value_556);
        Py_DECREF(tmp_args_element_value_557);
        Py_DECREF(tmp_args_element_value_558);
        Py_DECREF(tmp_args_element_value_559);
        if (tmp_called_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_560 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__83_glVertexAttribL3d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 293;
        tmp_args_element_value_554 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_281, tmp_args_element_value_560);
        Py_DECREF(tmp_called_value_281);
        Py_DECREF(tmp_args_element_value_560);
        if (tmp_args_element_value_554 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 292;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_280, tmp_args_element_value_554);
        Py_DECREF(tmp_args_element_value_554);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_283;
        PyObject *tmp_args_element_value_561;
        PyObject *tmp_called_value_284;
        PyObject *tmp_called_value_285;
        PyObject *tmp_expression_value_399;
        PyObject *tmp_args_element_value_562;
        PyObject *tmp_args_element_value_563;
        PyObject *tmp_expression_value_400;
        PyObject *tmp_args_element_value_564;
        PyObject *tmp_expression_value_401;
        PyObject *tmp_args_element_value_565;
        tmp_called_value_283 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_283 == NULL)) {
            tmp_called_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_399 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_399 == NULL)) {
            tmp_expression_value_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_called_value_285 = LOOKUP_ATTRIBUTE(tmp_expression_value_399, mod_consts[104]);
        if (tmp_called_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_562 = Py_None;
        tmp_expression_value_400 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_400 == NULL)) {
            tmp_expression_value_400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_285);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_563 = LOOKUP_ATTRIBUTE(tmp_expression_value_400, mod_consts[105]);
        if (tmp_args_element_value_563 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_285);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_401 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_401 == NULL)) {
            tmp_expression_value_401 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_285);
            Py_DECREF(tmp_args_element_value_563);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_564 = LOOKUP_ATTRIBUTE(tmp_expression_value_401, mod_consts[117]);
        if (tmp_args_element_value_564 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_285);
            Py_DECREF(tmp_args_element_value_563);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = {tmp_args_element_value_562, tmp_args_element_value_563, tmp_args_element_value_564};
            tmp_called_value_284 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_285, call_args);
        }

        Py_DECREF(tmp_called_value_285);
        Py_DECREF(tmp_args_element_value_563);
        Py_DECREF(tmp_args_element_value_564);
        if (tmp_called_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_565 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__84_glVertexAttribL3dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 296;
        tmp_args_element_value_561 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_284, tmp_args_element_value_565);
        Py_DECREF(tmp_called_value_284);
        Py_DECREF(tmp_args_element_value_565);
        if (tmp_args_element_value_561 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 295;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_283, tmp_args_element_value_561);
        Py_DECREF(tmp_args_element_value_561);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_286;
        PyObject *tmp_args_element_value_566;
        PyObject *tmp_called_value_287;
        PyObject *tmp_called_value_288;
        PyObject *tmp_expression_value_402;
        PyObject *tmp_args_element_value_567;
        PyObject *tmp_args_element_value_568;
        PyObject *tmp_expression_value_403;
        PyObject *tmp_args_element_value_569;
        PyObject *tmp_expression_value_404;
        PyObject *tmp_args_element_value_570;
        PyObject *tmp_expression_value_405;
        PyObject *tmp_args_element_value_571;
        PyObject *tmp_expression_value_406;
        PyObject *tmp_args_element_value_572;
        PyObject *tmp_expression_value_407;
        PyObject *tmp_args_element_value_573;
        tmp_called_value_286 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_286 == NULL)) {
            tmp_called_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_402 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_402 == NULL)) {
            tmp_expression_value_402 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_called_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_402, mod_consts[104]);
        if (tmp_called_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_567 = Py_None;
        tmp_expression_value_403 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_403 == NULL)) {
            tmp_expression_value_403 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_568 = LOOKUP_ATTRIBUTE(tmp_expression_value_403, mod_consts[105]);
        if (tmp_args_element_value_568 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_404 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_404 == NULL)) {
            tmp_expression_value_404 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_569 = LOOKUP_ATTRIBUTE(tmp_expression_value_404, mod_consts[119]);
        if (tmp_args_element_value_569 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_405 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_405 == NULL)) {
            tmp_expression_value_405 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);
            Py_DECREF(tmp_args_element_value_569);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_570 = LOOKUP_ATTRIBUTE(tmp_expression_value_405, mod_consts[119]);
        if (tmp_args_element_value_570 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);
            Py_DECREF(tmp_args_element_value_569);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_406 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_406 == NULL)) {
            tmp_expression_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);
            Py_DECREF(tmp_args_element_value_569);
            Py_DECREF(tmp_args_element_value_570);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_571 = LOOKUP_ATTRIBUTE(tmp_expression_value_406, mod_consts[119]);
        if (tmp_args_element_value_571 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);
            Py_DECREF(tmp_args_element_value_569);
            Py_DECREF(tmp_args_element_value_570);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_407 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_407 == NULL)) {
            tmp_expression_value_407 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);
            Py_DECREF(tmp_args_element_value_569);
            Py_DECREF(tmp_args_element_value_570);
            Py_DECREF(tmp_args_element_value_571);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_572 = LOOKUP_ATTRIBUTE(tmp_expression_value_407, mod_consts[119]);
        if (tmp_args_element_value_572 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);
            Py_DECREF(tmp_args_element_value_568);
            Py_DECREF(tmp_args_element_value_569);
            Py_DECREF(tmp_args_element_value_570);
            Py_DECREF(tmp_args_element_value_571);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_567, tmp_args_element_value_568, tmp_args_element_value_569, tmp_args_element_value_570, tmp_args_element_value_571, tmp_args_element_value_572};
            tmp_called_value_287 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_288, call_args);
        }

        Py_DECREF(tmp_called_value_288);
        Py_DECREF(tmp_args_element_value_568);
        Py_DECREF(tmp_args_element_value_569);
        Py_DECREF(tmp_args_element_value_570);
        Py_DECREF(tmp_args_element_value_571);
        Py_DECREF(tmp_args_element_value_572);
        if (tmp_called_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_573 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__85_glVertexAttribL4d();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 299;
        tmp_args_element_value_566 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_287, tmp_args_element_value_573);
        Py_DECREF(tmp_called_value_287);
        Py_DECREF(tmp_args_element_value_573);
        if (tmp_args_element_value_566 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 298;
        tmp_assign_source_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_286, tmp_args_element_value_566);
        Py_DECREF(tmp_args_element_value_566);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_289;
        PyObject *tmp_args_element_value_574;
        PyObject *tmp_called_value_290;
        PyObject *tmp_called_value_291;
        PyObject *tmp_expression_value_408;
        PyObject *tmp_args_element_value_575;
        PyObject *tmp_args_element_value_576;
        PyObject *tmp_expression_value_409;
        PyObject *tmp_args_element_value_577;
        PyObject *tmp_expression_value_410;
        PyObject *tmp_args_element_value_578;
        tmp_called_value_289 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_289 == NULL)) {
            tmp_called_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_408 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_408 == NULL)) {
            tmp_expression_value_408 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_called_value_291 = LOOKUP_ATTRIBUTE(tmp_expression_value_408, mod_consts[104]);
        if (tmp_called_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_575 = Py_None;
        tmp_expression_value_409 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_409 == NULL)) {
            tmp_expression_value_409 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_291);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_576 = LOOKUP_ATTRIBUTE(tmp_expression_value_409, mod_consts[105]);
        if (tmp_args_element_value_576 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_291);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_410 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_410 == NULL)) {
            tmp_expression_value_410 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_410 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_291);
            Py_DECREF(tmp_args_element_value_576);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_577 = LOOKUP_ATTRIBUTE(tmp_expression_value_410, mod_consts[117]);
        if (tmp_args_element_value_577 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_291);
            Py_DECREF(tmp_args_element_value_576);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_575, tmp_args_element_value_576, tmp_args_element_value_577};
            tmp_called_value_290 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_291, call_args);
        }

        Py_DECREF(tmp_called_value_291);
        Py_DECREF(tmp_args_element_value_576);
        Py_DECREF(tmp_args_element_value_577);
        if (tmp_called_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_578 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__86_glVertexAttribL4dv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 302;
        tmp_args_element_value_574 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_290, tmp_args_element_value_578);
        Py_DECREF(tmp_called_value_290);
        Py_DECREF(tmp_args_element_value_578);
        if (tmp_args_element_value_574 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 301;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_289, tmp_args_element_value_574);
        Py_DECREF(tmp_args_element_value_574);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_292;
        PyObject *tmp_args_element_value_579;
        PyObject *tmp_called_value_293;
        PyObject *tmp_called_value_294;
        PyObject *tmp_expression_value_411;
        PyObject *tmp_args_element_value_580;
        PyObject *tmp_args_element_value_581;
        PyObject *tmp_expression_value_412;
        PyObject *tmp_args_element_value_582;
        PyObject *tmp_expression_value_413;
        PyObject *tmp_args_element_value_583;
        PyObject *tmp_expression_value_414;
        PyObject *tmp_args_element_value_584;
        PyObject *tmp_expression_value_415;
        PyObject *tmp_args_element_value_585;
        PyObject *tmp_expression_value_416;
        PyObject *tmp_args_element_value_586;
        tmp_called_value_292 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_292 == NULL)) {
            tmp_called_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_411 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_411 == NULL)) {
            tmp_expression_value_411 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_called_value_294 = LOOKUP_ATTRIBUTE(tmp_expression_value_411, mod_consts[104]);
        if (tmp_called_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_580 = Py_None;
        tmp_expression_value_412 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_412 == NULL)) {
            tmp_expression_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_412 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_581 = LOOKUP_ATTRIBUTE(tmp_expression_value_412, mod_consts[105]);
        if (tmp_args_element_value_581 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_413 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_413 == NULL)) {
            tmp_expression_value_413 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_582 = LOOKUP_ATTRIBUTE(tmp_expression_value_413, mod_consts[138]);
        if (tmp_args_element_value_582 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_414 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_414 == NULL)) {
            tmp_expression_value_414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);
            Py_DECREF(tmp_args_element_value_582);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_583 = LOOKUP_ATTRIBUTE(tmp_expression_value_414, mod_consts[110]);
        if (tmp_args_element_value_583 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);
            Py_DECREF(tmp_args_element_value_582);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_415 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_415 == NULL)) {
            tmp_expression_value_415 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);
            Py_DECREF(tmp_args_element_value_582);
            Py_DECREF(tmp_args_element_value_583);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_584 = LOOKUP_ATTRIBUTE(tmp_expression_value_415, mod_consts[111]);
        if (tmp_args_element_value_584 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);
            Py_DECREF(tmp_args_element_value_582);
            Py_DECREF(tmp_args_element_value_583);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_416 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_416 == NULL)) {
            tmp_expression_value_416 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);
            Py_DECREF(tmp_args_element_value_582);
            Py_DECREF(tmp_args_element_value_583);
            Py_DECREF(tmp_args_element_value_584);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_585 = LOOKUP_ATTRIBUTE(tmp_expression_value_416, mod_consts[127]);
        if (tmp_args_element_value_585 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);
            Py_DECREF(tmp_args_element_value_581);
            Py_DECREF(tmp_args_element_value_582);
            Py_DECREF(tmp_args_element_value_583);
            Py_DECREF(tmp_args_element_value_584);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_580, tmp_args_element_value_581, tmp_args_element_value_582, tmp_args_element_value_583, tmp_args_element_value_584, tmp_args_element_value_585};
            tmp_called_value_293 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_294, call_args);
        }

        Py_DECREF(tmp_called_value_294);
        Py_DECREF(tmp_args_element_value_581);
        Py_DECREF(tmp_args_element_value_582);
        Py_DECREF(tmp_args_element_value_583);
        Py_DECREF(tmp_args_element_value_584);
        Py_DECREF(tmp_args_element_value_585);
        if (tmp_called_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_586 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__87_glVertexAttribLPointer();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 305;
        tmp_args_element_value_579 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_293, tmp_args_element_value_586);
        Py_DECREF(tmp_called_value_293);
        Py_DECREF(tmp_args_element_value_586);
        if (tmp_args_element_value_579 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 304;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_292, tmp_args_element_value_579);
        Py_DECREF(tmp_args_element_value_579);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_295;
        PyObject *tmp_args_element_value_587;
        PyObject *tmp_called_value_296;
        PyObject *tmp_called_value_297;
        PyObject *tmp_expression_value_417;
        PyObject *tmp_args_element_value_588;
        PyObject *tmp_args_element_value_589;
        PyObject *tmp_expression_value_418;
        PyObject *tmp_args_element_value_590;
        PyObject *tmp_expression_value_419;
        PyObject *tmp_args_element_value_591;
        PyObject *tmp_expression_value_420;
        PyObject *tmp_args_element_value_592;
        tmp_called_value_295 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_295 == NULL)) {
            tmp_called_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_417 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_417 == NULL)) {
            tmp_expression_value_417 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_called_value_297 = LOOKUP_ATTRIBUTE(tmp_expression_value_417, mod_consts[104]);
        if (tmp_called_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_588 = Py_None;
        tmp_expression_value_418 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_418 == NULL)) {
            tmp_expression_value_418 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_297);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_589 = LOOKUP_ATTRIBUTE(tmp_expression_value_418, mod_consts[105]);
        if (tmp_args_element_value_589 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_297);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_419 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_419 == NULL)) {
            tmp_expression_value_419 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_297);
            Py_DECREF(tmp_args_element_value_589);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_590 = LOOKUP_ATTRIBUTE(tmp_expression_value_419, mod_consts[111]);
        if (tmp_args_element_value_590 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_297);
            Py_DECREF(tmp_args_element_value_589);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_420 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_420 == NULL)) {
            tmp_expression_value_420 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_297);
            Py_DECREF(tmp_args_element_value_589);
            Py_DECREF(tmp_args_element_value_590);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_591 = LOOKUP_ATTRIBUTE(tmp_expression_value_420, mod_consts[124]);
        if (tmp_args_element_value_591 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_297);
            Py_DECREF(tmp_args_element_value_589);
            Py_DECREF(tmp_args_element_value_590);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_588, tmp_args_element_value_589, tmp_args_element_value_590, tmp_args_element_value_591};
            tmp_called_value_296 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_297, call_args);
        }

        Py_DECREF(tmp_called_value_297);
        Py_DECREF(tmp_args_element_value_589);
        Py_DECREF(tmp_args_element_value_590);
        Py_DECREF(tmp_args_element_value_591);
        if (tmp_called_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_592 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__88_glViewportArrayv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 308;
        tmp_args_element_value_587 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_296, tmp_args_element_value_592);
        Py_DECREF(tmp_called_value_296);
        Py_DECREF(tmp_args_element_value_592);
        if (tmp_args_element_value_587 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 307;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_295, tmp_args_element_value_587);
        Py_DECREF(tmp_args_element_value_587);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_298;
        PyObject *tmp_args_element_value_593;
        PyObject *tmp_called_value_299;
        PyObject *tmp_called_value_300;
        PyObject *tmp_expression_value_421;
        PyObject *tmp_args_element_value_594;
        PyObject *tmp_args_element_value_595;
        PyObject *tmp_expression_value_422;
        PyObject *tmp_args_element_value_596;
        PyObject *tmp_expression_value_423;
        PyObject *tmp_args_element_value_597;
        PyObject *tmp_expression_value_424;
        PyObject *tmp_args_element_value_598;
        PyObject *tmp_expression_value_425;
        PyObject *tmp_args_element_value_599;
        PyObject *tmp_expression_value_426;
        PyObject *tmp_args_element_value_600;
        tmp_called_value_298 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_298 == NULL)) {
            tmp_called_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_421 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_421 == NULL)) {
            tmp_expression_value_421 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_called_value_300 = LOOKUP_ATTRIBUTE(tmp_expression_value_421, mod_consts[104]);
        if (tmp_called_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_594 = Py_None;
        tmp_expression_value_422 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_422 == NULL)) {
            tmp_expression_value_422 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_595 = LOOKUP_ATTRIBUTE(tmp_expression_value_422, mod_consts[105]);
        if (tmp_args_element_value_595 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_423 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_423 == NULL)) {
            tmp_expression_value_423 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_423 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_596 = LOOKUP_ATTRIBUTE(tmp_expression_value_423, mod_consts[108]);
        if (tmp_args_element_value_596 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_424 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_424 == NULL)) {
            tmp_expression_value_424 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_424 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);
            Py_DECREF(tmp_args_element_value_596);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_597 = LOOKUP_ATTRIBUTE(tmp_expression_value_424, mod_consts[108]);
        if (tmp_args_element_value_597 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);
            Py_DECREF(tmp_args_element_value_596);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_425 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_425 == NULL)) {
            tmp_expression_value_425 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);
            Py_DECREF(tmp_args_element_value_596);
            Py_DECREF(tmp_args_element_value_597);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_598 = LOOKUP_ATTRIBUTE(tmp_expression_value_425, mod_consts[108]);
        if (tmp_args_element_value_598 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);
            Py_DECREF(tmp_args_element_value_596);
            Py_DECREF(tmp_args_element_value_597);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_426 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_426 == NULL)) {
            tmp_expression_value_426 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_426 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);
            Py_DECREF(tmp_args_element_value_596);
            Py_DECREF(tmp_args_element_value_597);
            Py_DECREF(tmp_args_element_value_598);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_599 = LOOKUP_ATTRIBUTE(tmp_expression_value_426, mod_consts[108]);
        if (tmp_args_element_value_599 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_300);
            Py_DECREF(tmp_args_element_value_595);
            Py_DECREF(tmp_args_element_value_596);
            Py_DECREF(tmp_args_element_value_597);
            Py_DECREF(tmp_args_element_value_598);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = {tmp_args_element_value_594, tmp_args_element_value_595, tmp_args_element_value_596, tmp_args_element_value_597, tmp_args_element_value_598, tmp_args_element_value_599};
            tmp_called_value_299 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_300, call_args);
        }

        Py_DECREF(tmp_called_value_300);
        Py_DECREF(tmp_args_element_value_595);
        Py_DECREF(tmp_args_element_value_596);
        Py_DECREF(tmp_args_element_value_597);
        Py_DECREF(tmp_args_element_value_598);
        Py_DECREF(tmp_args_element_value_599);
        if (tmp_called_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_600 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__89_glViewportIndexedf();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 311;
        tmp_args_element_value_593 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_299, tmp_args_element_value_600);
        Py_DECREF(tmp_called_value_299);
        Py_DECREF(tmp_args_element_value_600);
        if (tmp_args_element_value_593 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 310;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_298, tmp_args_element_value_593);
        Py_DECREF(tmp_args_element_value_593);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_301;
        PyObject *tmp_args_element_value_601;
        PyObject *tmp_called_value_302;
        PyObject *tmp_called_value_303;
        PyObject *tmp_expression_value_427;
        PyObject *tmp_args_element_value_602;
        PyObject *tmp_args_element_value_603;
        PyObject *tmp_expression_value_428;
        PyObject *tmp_args_element_value_604;
        PyObject *tmp_expression_value_429;
        PyObject *tmp_args_element_value_605;
        tmp_called_value_301 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_301 == NULL)) {
            tmp_called_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_427 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_427 == NULL)) {
            tmp_expression_value_427 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_427 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_called_value_303 = LOOKUP_ATTRIBUTE(tmp_expression_value_427, mod_consts[104]);
        if (tmp_called_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_602 = Py_None;
        tmp_expression_value_428 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_428 == NULL)) {
            tmp_expression_value_428 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_428 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_303);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_603 = LOOKUP_ATTRIBUTE(tmp_expression_value_428, mod_consts[105]);
        if (tmp_args_element_value_603 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_303);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_429 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_429 == NULL)) {
            tmp_expression_value_429 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_429 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_303);
            Py_DECREF(tmp_args_element_value_603);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_604 = LOOKUP_ATTRIBUTE(tmp_expression_value_429, mod_consts[124]);
        if (tmp_args_element_value_604 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_303);
            Py_DECREF(tmp_args_element_value_603);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_602, tmp_args_element_value_603, tmp_args_element_value_604};
            tmp_called_value_302 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_303, call_args);
        }

        Py_DECREF(tmp_called_value_303);
        Py_DECREF(tmp_args_element_value_603);
        Py_DECREF(tmp_args_element_value_604);
        if (tmp_called_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_605 = MAKE_FUNCTION_OpenGL$raw$GL$VERSION$GL_4_1$$$function__90_glViewportIndexedfv();

        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 314;
        tmp_args_element_value_601 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_302, tmp_args_element_value_605);
        Py_DECREF(tmp_called_value_302);
        Py_DECREF(tmp_args_element_value_605);
        if (tmp_args_element_value_601 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame.f_lineno = 313;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_301, tmp_args_element_value_601);
        Py_DECREF(tmp_args_element_value_601);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_136);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e8fc9ca7b511e0c715d11206ad4414c);
#endif
    popFrameStack();

    assertFrameObject(frame_6e8fc9ca7b511e0c715d11206ad4414c);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e8fc9ca7b511e0c715d11206ad4414c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e8fc9ca7b511e0c715d11206ad4414c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e8fc9ca7b511e0c715d11206ad4414c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e8fc9ca7b511e0c715d11206ad4414c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GL.VERSION.GL_4_1", false);

    return module_OpenGL$raw$GL$VERSION$GL_4_1;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$VERSION$GL_4_1, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GL$VERSION$GL_4_1", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
