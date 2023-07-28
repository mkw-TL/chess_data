/* Generated code for Python module 'psycopg.pq.abc'
 * created by Nuitka version 1.7.4
 *
 * This code is in part copyright 2023 Kay Hayen.
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

/* The "module_psycopg$pq$abc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_psycopg$pq$abc;
PyDictObject *moduledict_psycopg$pq$abc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[300];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[300];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("psycopg.pq.abc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 300; i++) {
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
void checkModuleConstants_psycopg$pq$abc(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 300; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b482bc06b71197bd287a14f95b1cafcf;
static PyCodeObject *codeobj_120fd12c49233269cd86744ac4dc6344;
static PyCodeObject *codeobj_72fd6ad3061a7488e52facb76d24c06f;
static PyCodeObject *codeobj_3d52946ebdddc7646d21150ec974276c;
static PyCodeObject *codeobj_fe219e001841ea9df7e6b6c31d08d098;
static PyCodeObject *codeobj_c95e6ed19b4d95090e6a23bee84e9bd0;
static PyCodeObject *codeobj_276d93598b4c9bd4197de3294f17b7d7;
static PyCodeObject *codeobj_84115753f950012c115af43e0875cd06;
static PyCodeObject *codeobj_94fd1ac74043e097f8d18fec8b4fdf60;
static PyCodeObject *codeobj_ce3280fe388629ac1d4bee397e1316ca;
static PyCodeObject *codeobj_9061eba3afee94b46e5756dd6792dbcf;
static PyCodeObject *codeobj_345a726dbcf8ea9f3218a53699763a83;
static PyCodeObject *codeobj_80c9c6393254780f1fab6b0a20ce2081;
static PyCodeObject *codeobj_4b8b218e38efff44cb220fef6f0c13fd;
static PyCodeObject *codeobj_cc6e04b54f3a1b07d6acbe78ed62a3ae;
static PyCodeObject *codeobj_a45302efa976d691d0b49b1f898331f8;
static PyCodeObject *codeobj_93a5dddcc9bfd0fe1b654ed67399d9e2;
static PyCodeObject *codeobj_ba02ddb59dee095abb05e8d170dcfba0;
static PyCodeObject *codeobj_8c2a03c943666987f392945fa5694fff;
static PyCodeObject *codeobj_0079ece86a0c15f69fc0070136f0e75e;
static PyCodeObject *codeobj_fd188af2df1c510ce05e82bda0999aa2;
static PyCodeObject *codeobj_daa8a6a6b97c67d6464affda1a236bfb;
static PyCodeObject *codeobj_71c10a15939ede642df6231d7cf57b3c;
static PyCodeObject *codeobj_976266afa9dae861552811db1ca17b54;
static PyCodeObject *codeobj_e133687bd6ae7822d2700e3e05996e7e;
static PyCodeObject *codeobj_b367232f85b56b6f43542e2ab266cb2e;
static PyCodeObject *codeobj_d503751cfc7dbec7ba4b30078a14e571;
static PyCodeObject *codeobj_ab6ff0983e99b5f8ca40fc6e61d5667d;
static PyCodeObject *codeobj_7d2b81286448e1bc2938f4010adcf5fb;
static PyCodeObject *codeobj_b65539bf2a26e81835ec17b4972a3bb1;
static PyCodeObject *codeobj_5a288630eb47117fddcfe8e190ee14b4;
static PyCodeObject *codeobj_a2c4c371b92dc33fea47f54118d6d320;
static PyCodeObject *codeobj_3c4c1e318cb68ae44ffda3634349dfa5;
static PyCodeObject *codeobj_bad44244e4c2b7dbc5a64a430671421a;
static PyCodeObject *codeobj_e4d68ad6407bad71b8b37cb2fa3a8974;
static PyCodeObject *codeobj_0169844fea19a8887867c740661f4a01;
static PyCodeObject *codeobj_715155e8a23f70eff28cabf73b5280ef;
static PyCodeObject *codeobj_dc2fa30b8523f21dc0aec134b47fa8e4;
static PyCodeObject *codeobj_f807525c74910ebfdd1a6682f81733fb;
static PyCodeObject *codeobj_5150f1705fb622b06b508fbdca5d9f94;
static PyCodeObject *codeobj_c56d0cfb0d9a7faafdeadaf2924609d3;
static PyCodeObject *codeobj_44959247d46a5d0b5d2456930c7a1d63;
static PyCodeObject *codeobj_e649ece2ecc93c63488ece4b85c7260d;
static PyCodeObject *codeobj_056fb6004123a99bc0ca72fb16326393;
static PyCodeObject *codeobj_7a80e8a145bb8d4ec8261797a27f6d15;
static PyCodeObject *codeobj_7f4e79cf09ff76718365041e05b0514e;
static PyCodeObject *codeobj_e2630ae82bcc044140ff2bbfbe01b1ab;
static PyCodeObject *codeobj_d238232323310c2e96a323121acf43c8;
static PyCodeObject *codeobj_2d78d387f61068a4cee2cd49822eddaf;
static PyCodeObject *codeobj_b8ad5afd5a574a855e05523f976a0e9f;
static PyCodeObject *codeobj_c33d714b9b8ad21b251a098e878123ed;
static PyCodeObject *codeobj_4d6c971db9e0408340268c3d357566a4;
static PyCodeObject *codeobj_58ccb82cd15746f8ef7b7a2c24ffc80a;
static PyCodeObject *codeobj_d708f5a4a096956e850b40d75ea4e931;
static PyCodeObject *codeobj_50b4dee10e318ef55da71e690b5fa4ce;
static PyCodeObject *codeobj_5098308ac24818cb805b71c4e2de2eae;
static PyCodeObject *codeobj_d2b8dcba5dd0057f91769ad69616ef6c;
static PyCodeObject *codeobj_db902ef13577873acba30930b4fc4d85;
static PyCodeObject *codeobj_68e7b529fa450f74203c9cb98aaf9d6a;
static PyCodeObject *codeobj_747c1ea84f26388beb9f43ba393fbca0;
static PyCodeObject *codeobj_4355a6c8f9e4b99ebedeb570ec92e6b8;
static PyCodeObject *codeobj_fce8b2d44fa9eaae0c047bc178ac2e2f;
static PyCodeObject *codeobj_71bf4096f83a955fbef36cb9e11136f0;
static PyCodeObject *codeobj_7a3c50b0106f68981a0be43d92c30f25;
static PyCodeObject *codeobj_91a4d124111fb945e41c00261cc4a104;
static PyCodeObject *codeobj_079aa4360b09c7f29312440dfe700f29;
static PyCodeObject *codeobj_3c257220542359550d586acd31260740;
static PyCodeObject *codeobj_33c30f78e47102068fbd4895d5507298;
static PyCodeObject *codeobj_674e2896ac811408acee4b027847c458;
static PyCodeObject *codeobj_7a963a12ee2465ebf00ef0bb10458bf7;
static PyCodeObject *codeobj_92cf21fb828e297ce8a41343d738e88f;
static PyCodeObject *codeobj_c85191ccd7087f20613e4c15e4e7e651;
static PyCodeObject *codeobj_29d7b88a7e23210ab0cb39a9b259b53a;
static PyCodeObject *codeobj_24a93d26c1b24ca69460291c58356e72;
static PyCodeObject *codeobj_449dbe8b32cdb7be7ce3f7bfbe82b402;
static PyCodeObject *codeobj_b03206daa2373820c671c508e912f614;
static PyCodeObject *codeobj_12cc41440e62c047c1db29775253e1da;
static PyCodeObject *codeobj_699779c321719da01dd088c9cade0f15;
static PyCodeObject *codeobj_e3a15cab89e473f218e792c0a82c40cb;
static PyCodeObject *codeobj_24b9a85539deb056dc7c0bd946f31e64;
static PyCodeObject *codeobj_bbad7a128acb256a15a628d41b98bc23;
static PyCodeObject *codeobj_efeb5da2afeaabc7d9cd569cbd4ea528;
static PyCodeObject *codeobj_4acd8a82898d49d7dc9294bb6bcd5b5e;
static PyCodeObject *codeobj_d96064a8d75118802ac4c1b64c263d5d;
static PyCodeObject *codeobj_4153695f402ecc5793d2943dfe7dabc3;
static PyCodeObject *codeobj_f51e81df5c80a738d6f722db154a0d0c;
static PyCodeObject *codeobj_51d1387e452bcc2c4278f62e522b51e9;
static PyCodeObject *codeobj_81c292c4c07c07acf3b1ceee4e38e78d;
static PyCodeObject *codeobj_c10f3d9428e8170e764734e9cecdef4d;
static PyCodeObject *codeobj_0c85e12d68964aaa859651e1def5014d;
static PyCodeObject *codeobj_862c08efb21fc0239db7b1d08378dfc9;
static PyCodeObject *codeobj_5579243f1fc6979a5afbee32ceb4dc24;
static PyCodeObject *codeobj_22b38b650344736d99f28e3873f5a5e7;
static PyCodeObject *codeobj_9d42fe853709608c6f7291f730663e63;
static PyCodeObject *codeobj_894ff80183a9cd2b0c415c4b6da2e98e;
static PyCodeObject *codeobj_afb091eb4278a7d6271e80efe3184fd9;
static PyCodeObject *codeobj_7178d55394a71f2b717d7e47bb4124b7;
static PyCodeObject *codeobj_2bd8009a6e23d1272de57e50fd401d88;
static PyCodeObject *codeobj_947a86f70c45a2ff93489e9390192d45;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[2]; CHECK_OBJECT(module_filename_obj);
    codeobj_b482bc06b71197bd287a14f95b1cafcf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[272], mod_consts[272], NULL, NULL, 0, 0, 0);
    codeobj_120fd12c49233269cd86744ac4dc6344 = MAKE_CODE_OBJECT(module_filename_obj, 353, 0, mod_consts[249], mod_consts[249], mod_consts[273], NULL, 0, 0, 0);
    codeobj_72fd6ad3061a7488e52facb76d24c06f = MAKE_CODE_OBJECT(module_filename_obj, 367, 0, mod_consts[257], mod_consts[257], mod_consts[273], NULL, 0, 0, 0);
    codeobj_3d52946ebdddc7646d21150ec974276c = MAKE_CODE_OBJECT(module_filename_obj, 345, 0, mod_consts[244], mod_consts[244], mod_consts[273], NULL, 0, 0, 0);
    codeobj_fe219e001841ea9df7e6b6c31d08d098 = MAKE_CODE_OBJECT(module_filename_obj, 21, 0, mod_consts[33], mod_consts[33], mod_consts[273], NULL, 0, 0, 0);
    codeobj_c95e6ed19b4d95090e6a23bee84e9bd0 = MAKE_CODE_OBJECT(module_filename_obj, 271, 0, mod_consts[110], mod_consts[110], mod_consts[273], NULL, 0, 0, 0);
    codeobj_276d93598b4c9bd4197de3294f17b7d7 = MAKE_CODE_OBJECT(module_filename_obj, 368, 0, mod_consts[259], mod_consts[259], mod_consts[274], NULL, 2, 0, 0);
    codeobj_84115753f950012c115af43e0875cd06 = MAKE_CODE_OBJECT(module_filename_obj, 363, 0, mod_consts[255], mod_consts[255], mod_consts[275], NULL, 2, 0, 0);
    codeobj_94fd1ac74043e097f8d18fec8b4fdf60 = MAKE_CODE_OBJECT(module_filename_obj, 112, 0, mod_consts[100], mod_consts[100], mod_consts[276], NULL, 1, 0, 0);
    codeobj_ce3280fe388629ac1d4bee397e1316ca = MAKE_CODE_OBJECT(module_filename_obj, 316, 0, mod_consts[224], mod_consts[224], mod_consts[276], NULL, 1, 0, 0);
    codeobj_9061eba3afee94b46e5756dd6792dbcf = MAKE_CODE_OBJECT(module_filename_obj, 349, 0, mod_consts[247], mod_consts[247], mod_consts[276], NULL, 1, 0, 0);
    codeobj_345a726dbcf8ea9f3218a53699763a83 = MAKE_CODE_OBJECT(module_filename_obj, 272, 0, mod_consts[198], mod_consts[198], mod_consts[276], NULL, 1, 0, 0);
    codeobj_80c9c6393254780f1fab6b0a20ce2081 = MAKE_CODE_OBJECT(module_filename_obj, 330, 0, mod_consts[234], mod_consts[234], mod_consts[276], NULL, 1, 0, 0);
    codeobj_4b8b218e38efff44cb220fef6f0c13fd = MAKE_CODE_OBJECT(module_filename_obj, 334, 0, mod_consts[236], mod_consts[236], mod_consts[276], NULL, 1, 0, 0);
    codeobj_cc6e04b54f3a1b07d6acbe78ed62a3ae = MAKE_CODE_OBJECT(module_filename_obj, 26, 0, mod_consts[49], mod_consts[49], mod_consts[277], NULL, 2, 0, 0);
    codeobj_a45302efa976d691d0b49b1f898331f8 = MAKE_CODE_OBJECT(module_filename_obj, 33, 0, mod_consts[54], mod_consts[54], mod_consts[276], NULL, 1, 0, 0);
    codeobj_93a5dddcc9bfd0fe1b654ed67399d9e2 = MAKE_CODE_OBJECT(module_filename_obj, 30, 0, mod_consts[51], mod_consts[51], mod_consts[277], NULL, 2, 0, 0);
    codeobj_ba02ddb59dee095abb05e8d170dcfba0 = MAKE_CODE_OBJECT(module_filename_obj, 202, 0, mod_consts[144], mod_consts[144], mod_consts[276], NULL, 1, 0, 0);
    codeobj_8c2a03c943666987f392945fa5694fff = MAKE_CODE_OBJECT(module_filename_obj, 57, 0, mod_consts[71], mod_consts[71], mod_consts[276], NULL, 1, 0, 0);
    codeobj_0079ece86a0c15f69fc0070136f0e75e = MAKE_CODE_OBJECT(module_filename_obj, 193, 0, mod_consts[138], mod_consts[138], mod_consts[278], NULL, 2, 0, 0);
    codeobj_fd188af2df1c510ce05e82bda0999aa2 = MAKE_CODE_OBJECT(module_filename_obj, 187, 0, mod_consts[134], mod_consts[134], mod_consts[278], NULL, 2, 0, 0);
    codeobj_daa8a6a6b97c67d6464affda1a236bfb = MAKE_CODE_OBJECT(module_filename_obj, 246, 0, mod_consts[182], mod_consts[182], mod_consts[279], NULL, 4, 0, 0);
    codeobj_71c10a15939ede642df6231d7cf57b3c = MAKE_CODE_OBJECT(module_filename_obj, 258, 0, mod_consts[189], mod_consts[189], mod_consts[276], NULL, 1, 0, 0);
    codeobj_976266afa9dae861552811db1ca17b54 = MAKE_CODE_OBJECT(module_filename_obj, 283, 0, mod_consts[203], mod_consts[203], mod_consts[280], NULL, 2, 0, 0);
    codeobj_e133687bd6ae7822d2700e3e05996e7e = MAKE_CODE_OBJECT(module_filename_obj, 100, 0, mod_consts[94], mod_consts[94], mod_consts[276], NULL, 1, 0, 0);
    codeobj_b367232f85b56b6f43542e2ab266cb2e = MAKE_CODE_OBJECT(module_filename_obj, 280, 0, mod_consts[94], mod_consts[94], mod_consts[276], NULL, 1, 0, 0);
    codeobj_d503751cfc7dbec7ba4b30078a14e571 = MAKE_CODE_OBJECT(module_filename_obj, 380, 0, mod_consts[268], mod_consts[268], mod_consts[281], NULL, 2, 0, 0);
    codeobj_ab6ff0983e99b5f8ca40fc6e61d5667d = MAKE_CODE_OBJECT(module_filename_obj, 374, 0, mod_consts[264], mod_consts[264], mod_consts[281], NULL, 2, 0, 0);
    codeobj_7d2b81286448e1bc2938f4010adcf5fb = MAKE_CODE_OBJECT(module_filename_obj, 371, 0, mod_consts[262], mod_consts[262], mod_consts[281], NULL, 2, 0, 0);
    codeobj_b65539bf2a26e81835ec17b4972a3bb1 = MAKE_CODE_OBJECT(module_filename_obj, 377, 0, mod_consts[266], mod_consts[266], mod_consts[281], NULL, 2, 0, 0);
    codeobj_5a288630eb47117fddcfe8e190ee14b4 = MAKE_CODE_OBJECT(module_filename_obj, 127, 0, mod_consts[111], mod_consts[111], mod_consts[282], NULL, 2, 0, 0);
    codeobj_a2c4c371b92dc33fea47f54118d6d320 = MAKE_CODE_OBJECT(module_filename_obj, 133, 0, mod_consts[120], mod_consts[120], mod_consts[283], NULL, 6, 0, 0);
    codeobj_3c4c1e318cb68ae44ffda3634349dfa5 = MAKE_CODE_OBJECT(module_filename_obj, 178, 0, mod_consts[132], mod_consts[132], mod_consts[284], NULL, 5, 0, 0);
    codeobj_bad44244e4c2b7dbc5a64a430671421a = MAKE_CODE_OBJECT(module_filename_obj, 261, 0, mod_consts[191], mod_consts[191], mod_consts[276], NULL, 1, 0, 0);
    codeobj_e4d68ad6407bad71b8b37cb2fa3a8974 = MAKE_CODE_OBJECT(module_filename_obj, 303, 0, mod_consts[216], mod_consts[216], mod_consts[285], NULL, 2, 0, 0);
    codeobj_0169844fea19a8887867c740661f4a01 = MAKE_CODE_OBJECT(module_filename_obj, 36, 0, mod_consts[57], mod_consts[57], mod_consts[276], NULL, 1, 0, 0);
    codeobj_715155e8a23f70eff28cabf73b5280ef = MAKE_CODE_OBJECT(module_filename_obj, 216, 0, mod_consts[152], mod_consts[152], mod_consts[276], NULL, 1, 0, 0);
    codeobj_dc2fa30b8523f21dc0aec134b47fa8e4 = MAKE_CODE_OBJECT(module_filename_obj, 309, 0, mod_consts[220], mod_consts[220], mod_consts[285], NULL, 2, 0, 0);
    codeobj_f807525c74910ebfdd1a6682f81733fb = MAKE_CODE_OBJECT(module_filename_obj, 294, 0, mod_consts[210], mod_consts[210], mod_consts[285], NULL, 2, 0, 0);
    codeobj_5150f1705fb622b06b508fbdca5d9f94 = MAKE_CODE_OBJECT(module_filename_obj, 346, 0, mod_consts[245], mod_consts[245], mod_consts[276], NULL, 1, 0, 0);
    codeobj_c56d0cfb0d9a7faafdeadaf2924609d3 = MAKE_CODE_OBJECT(module_filename_obj, 312, 0, mod_consts[222], mod_consts[222], mod_consts[285], NULL, 2, 0, 0);
    codeobj_44959247d46a5d0b5d2456930c7a1d63 = MAKE_CODE_OBJECT(module_filename_obj, 297, 0, mod_consts[212], mod_consts[212], mod_consts[285], NULL, 2, 0, 0);
    codeobj_e649ece2ecc93c63488ece4b85c7260d = MAKE_CODE_OBJECT(module_filename_obj, 300, 0, mod_consts[214], mod_consts[214], mod_consts[285], NULL, 2, 0, 0);
    codeobj_056fb6004123a99bc0ca72fb16326393 = MAKE_CODE_OBJECT(module_filename_obj, 306, 0, mod_consts[218], mod_consts[218], mod_consts[285], NULL, 2, 0, 0);
    codeobj_7a80e8a145bb8d4ec8261797a27f6d15 = MAKE_CODE_OBJECT(module_filename_obj, 222, 0, mod_consts[157], mod_consts[157], mod_consts[276], NULL, 1, 0, 0);
    codeobj_7f4e79cf09ff76718365041e05b0514e = MAKE_CODE_OBJECT(module_filename_obj, 234, 0, mod_consts[170], mod_consts[170], mod_consts[286], NULL, 2, 0, 0);
    codeobj_e2630ae82bcc044140ff2bbfbe01b1ab = MAKE_CODE_OBJECT(module_filename_obj, 355, 0, mod_consts[250], mod_consts[250], mod_consts[287], NULL, 1, 0, 0);
    codeobj_d238232323310c2e96a323121acf43c8 = MAKE_CODE_OBJECT(module_filename_obj, 199, 0, mod_consts[142], mod_consts[142], mod_consts[276], NULL, 1, 0, 0);
    codeobj_2d78d387f61068a4cee2cd49822eddaf = MAKE_CODE_OBJECT(module_filename_obj, 319, 0, mod_consts[227], mod_consts[227], mod_consts[288], NULL, 3, 0, 0);
    codeobj_b8ad5afd5a574a855e05523f976a0e9f = MAKE_CODE_OBJECT(module_filename_obj, 69, 0, mod_consts[77], mod_consts[77], mod_consts[276], NULL, 1, 0, 0);
    codeobj_c33d714b9b8ad21b251a098e878123ed = MAKE_CODE_OBJECT(module_filename_obj, 73, 0, mod_consts[79], mod_consts[79], mod_consts[276], NULL, 1, 0, 0);
    codeobj_4d6c971db9e0408340268c3d357566a4 = MAKE_CODE_OBJECT(module_filename_obj, 40, 0, mod_consts[61], mod_consts[61], mod_consts[276], NULL, 1, 0, 0);
    codeobj_58ccb82cd15746f8ef7b7a2c24ffc80a = MAKE_CODE_OBJECT(module_filename_obj, 205, 0, mod_consts[146], mod_consts[146], mod_consts[276], NULL, 1, 0, 0);
    codeobj_d708f5a4a096956e850b40d75ea4e931 = MAKE_CODE_OBJECT(module_filename_obj, 251, 0, mod_consts[185], mod_consts[185], mod_consts[289], NULL, 2, 0, 0);
    codeobj_50b4dee10e318ef55da71e690b5fa4ce = MAKE_CODE_OBJECT(module_filename_obj, 116, 0, mod_consts[103], mod_consts[103], mod_consts[276], NULL, 1, 0, 0);
    codeobj_5098308ac24818cb805b71c4e2de2eae = MAKE_CODE_OBJECT(module_filename_obj, 291, 0, mod_consts[207], mod_consts[207], mod_consts[276], NULL, 1, 0, 0);
    codeobj_d2b8dcba5dd0057f91769ad69616ef6c = MAKE_CODE_OBJECT(module_filename_obj, 209, 0, mod_consts[148], mod_consts[148], mod_consts[276], NULL, 1, 0, 0);
    codeobj_db902ef13577873acba30930b4fc4d85 = MAKE_CODE_OBJECT(module_filename_obj, 213, 0, mod_consts[148], mod_consts[148], mod_consts[290], NULL, 2, 0, 0);
    codeobj_68e7b529fa450f74203c9cb98aaf9d6a = MAKE_CODE_OBJECT(module_filename_obj, 225, 0, mod_consts[160], mod_consts[160], mod_consts[276], NULL, 1, 0, 0);
    codeobj_747c1ea84f26388beb9f43ba393fbca0 = MAKE_CODE_OBJECT(module_filename_obj, 323, 0, mod_consts[229], mod_consts[229], mod_consts[276], NULL, 1, 0, 0);
    codeobj_4355a6c8f9e4b99ebedeb570ec92e6b8 = MAKE_CODE_OBJECT(module_filename_obj, 287, 0, mod_consts[205], mod_consts[205], mod_consts[276], NULL, 1, 0, 0);
    codeobj_fce8b2d44fa9eaae0c047bc178ac2e2f = MAKE_CODE_OBJECT(module_filename_obj, 338, 0, mod_consts[238], mod_consts[238], mod_consts[276], NULL, 1, 0, 0);
    codeobj_71bf4096f83a955fbef36cb9e11136f0 = MAKE_CODE_OBJECT(module_filename_obj, 85, 0, mod_consts[85], mod_consts[85], mod_consts[276], NULL, 1, 0, 0);
    codeobj_7a3c50b0106f68981a0be43d92c30f25 = MAKE_CODE_OBJECT(module_filename_obj, 326, 0, mod_consts[232], mod_consts[232], mod_consts[291], NULL, 2, 0, 0);
    codeobj_91a4d124111fb945e41c00261cc4a104 = MAKE_CODE_OBJECT(module_filename_obj, 96, 0, mod_consts[92], mod_consts[92], mod_consts[278], NULL, 2, 0, 0);
    codeobj_079aa4360b09c7f29312440dfe700f29 = MAKE_CODE_OBJECT(module_filename_obj, 359, 0, mod_consts[252], mod_consts[252], mod_consts[277], NULL, 2, 0, 0);
    codeobj_3c257220542359550d586acd31260740 = MAKE_CODE_OBJECT(module_filename_obj, 65, 0, mod_consts[75], mod_consts[75], mod_consts[276], NULL, 1, 0, 0);
    codeobj_33c30f78e47102068fbd4895d5507298 = MAKE_CODE_OBJECT(module_filename_obj, 53, 0, mod_consts[69], mod_consts[69], mod_consts[292], NULL, 2, 0, 0);
    codeobj_674e2896ac811408acee4b027847c458 = MAKE_CODE_OBJECT(module_filename_obj, 255, 0, mod_consts[187], mod_consts[187], mod_consts[276], NULL, 1, 0, 0);
    codeobj_7a963a12ee2465ebf00ef0bb10458bf7 = MAKE_CODE_OBJECT(module_filename_obj, 264, 0, mod_consts[193], mod_consts[193], mod_consts[276], NULL, 1, 0, 0);
    codeobj_92cf21fb828e297ce8a41343d738e88f = MAKE_CODE_OBJECT(module_filename_obj, 77, 0, mod_consts[81], mod_consts[81], mod_consts[276], NULL, 1, 0, 0);
    codeobj_c85191ccd7087f20613e4c15e4e7e651 = MAKE_CODE_OBJECT(module_filename_obj, 170, 0, mod_consts[129], mod_consts[129], mod_consts[293], NULL, 4, 0, 0);
    codeobj_29d7b88a7e23210ab0cb39a9b259b53a = MAKE_CODE_OBJECT(module_filename_obj, 228, 0, mod_consts[163], mod_consts[163], mod_consts[294], NULL, 2, 0, 0);
    codeobj_24a93d26c1b24ca69460291c58356e72 = MAKE_CODE_OBJECT(module_filename_obj, 231, 0, mod_consts[166], mod_consts[166], mod_consts[295], NULL, 2, 0, 0);
    codeobj_449dbe8b32cdb7be7ce3f7bfbe82b402 = MAKE_CODE_OBJECT(module_filename_obj, 43, 0, mod_consts[63], mod_consts[63], mod_consts[276], NULL, 1, 0, 0);
    codeobj_b03206daa2373820c671c508e912f614 = MAKE_CODE_OBJECT(module_filename_obj, 49, 0, mod_consts[67], mod_consts[67], mod_consts[276], NULL, 1, 0, 0);
    codeobj_12cc41440e62c047c1db29775253e1da = MAKE_CODE_OBJECT(module_filename_obj, 46, 0, mod_consts[65], mod_consts[65], mod_consts[276], NULL, 1, 0, 0);
    codeobj_699779c321719da01dd088c9cade0f15 = MAKE_CODE_OBJECT(module_filename_obj, 196, 0, mod_consts[140], mod_consts[140], mod_consts[278], NULL, 2, 0, 0);
    codeobj_e3a15cab89e473f218e792c0a82c40cb = MAKE_CODE_OBJECT(module_filename_obj, 190, 0, mod_consts[136], mod_consts[136], mod_consts[278], NULL, 2, 0, 0);
    codeobj_24b9a85539deb056dc7c0bd946f31e64 = MAKE_CODE_OBJECT(module_filename_obj, 267, 0, mod_consts[195], mod_consts[195], mod_consts[276], NULL, 1, 0, 0);
    codeobj_bbad7a128acb256a15a628d41b98bc23 = MAKE_CODE_OBJECT(module_filename_obj, 153, 0, mod_consts[125], mod_consts[125], mod_consts[293], NULL, 4, 0, 0);
    codeobj_efeb5da2afeaabc7d9cd569cbd4ea528 = MAKE_CODE_OBJECT(module_filename_obj, 130, 0, mod_consts[113], mod_consts[113], mod_consts[282], NULL, 2, 0, 0);
    codeobj_4acd8a82898d49d7dc9294bb6bcd5b5e = MAKE_CODE_OBJECT(module_filename_obj, 143, 0, mod_consts[122], mod_consts[122], mod_consts[283], NULL, 6, 0, 0);
    codeobj_d96064a8d75118802ac4c1b64c263d5d = MAKE_CODE_OBJECT(module_filename_obj, 161, 0, mod_consts[127], mod_consts[127], mod_consts[284], NULL, 5, 0, 0);
    codeobj_4153695f402ecc5793d2943dfe7dabc3 = MAKE_CODE_OBJECT(module_filename_obj, 104, 0, mod_consts[96], mod_consts[96], mod_consts[276], NULL, 1, 0, 0);
    codeobj_f51e81df5c80a738d6f722db154a0d0c = MAKE_CODE_OBJECT(module_filename_obj, 341, 0, mod_consts[242], mod_consts[242], mod_consts[296], NULL, 2, 0, 0);
    codeobj_51d1387e452bcc2c4278f62e522b51e9 = MAKE_CODE_OBJECT(module_filename_obj, 219, 0, mod_consts[154], mod_consts[154], mod_consts[276], NULL, 1, 0, 0);
    codeobj_81c292c4c07c07acf3b1ceee4e38e78d = MAKE_CODE_OBJECT(module_filename_obj, 240, 0, mod_consts[176], mod_consts[176], mod_consts[297], NULL, 2, 0, 0);
    codeobj_c10f3d9428e8170e764734e9cecdef4d = MAKE_CODE_OBJECT(module_filename_obj, 108, 0, mod_consts[98], mod_consts[98], mod_consts[276], NULL, 1, 0, 0);
    codeobj_0c85e12d68964aaa859651e1def5014d = MAKE_CODE_OBJECT(module_filename_obj, 124, 0, mod_consts[107], mod_consts[107], mod_consts[276], NULL, 1, 0, 0);
    codeobj_862c08efb21fc0239db7b1d08378dfc9 = MAKE_CODE_OBJECT(module_filename_obj, 89, 0, mod_consts[87], mod_consts[87], mod_consts[276], NULL, 1, 0, 0);
    codeobj_5579243f1fc6979a5afbee32ceb4dc24 = MAKE_CODE_OBJECT(module_filename_obj, 276, 0, mod_consts[87], mod_consts[87], mod_consts[276], NULL, 1, 0, 0);
    codeobj_22b38b650344736d99f28e3873f5a5e7 = MAKE_CODE_OBJECT(module_filename_obj, 237, 0, mod_consts[173], mod_consts[173], mod_consts[298], NULL, 2, 0, 0);
    codeobj_9d42fe853709608c6f7291f730663e63 = MAKE_CODE_OBJECT(module_filename_obj, 93, 0, mod_consts[89], mod_consts[89], mod_consts[276], NULL, 1, 0, 0);
    codeobj_894ff80183a9cd2b0c415c4b6da2e98e = MAKE_CODE_OBJECT(module_filename_obj, 81, 0, mod_consts[83], mod_consts[83], mod_consts[276], NULL, 1, 0, 0);
    codeobj_afb091eb4278a7d6271e80efe3184fd9 = MAKE_CODE_OBJECT(module_filename_obj, 383, 0, mod_consts[270], mod_consts[270], mod_consts[281], NULL, 2, 0, 0);
    codeobj_7178d55394a71f2b717d7e47bb4124b7 = MAKE_CODE_OBJECT(module_filename_obj, 243, 0, mod_consts[178], mod_consts[178], mod_consts[276], NULL, 1, 0, 0);
    codeobj_2bd8009a6e23d1272de57e50fd401d88 = MAKE_CODE_OBJECT(module_filename_obj, 120, 0, mod_consts[105], mod_consts[105], mod_consts[276], NULL, 1, 0, 0);
    codeobj_947a86f70c45a2ff93489e9390192d45 = MAKE_CODE_OBJECT(module_filename_obj, 61, 0, mod_consts[73], mod_consts[73], mod_consts[276], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__10_db(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__11_user(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__12_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__13_host(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__14_hostaddr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__15_port(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__16_tty(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__17_options(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__18_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__19_transaction_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__1_connect(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__20_parameter_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__21_error_message(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__22_server_version(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__23_socket(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__24_backend_pid(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__25_needs_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__26_used_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__27_ssl_in_use(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__28_exec_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__29_send_query(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__2_connect_start(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__30_exec_params(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__31_send_query_params(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__32_send_prepare(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__33_send_query_prepared(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__34_prepare(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__35_exec_prepared(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__36_describe_prepared(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__37_send_describe_prepared(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__38_describe_portal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__39_send_describe_portal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__3_connect_poll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__40_get_result(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__41_consume_input(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__42_is_busy(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__43_nonblocking(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__44_nonblocking(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__45_flush(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__46_set_single_row_mode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__47_get_cancel(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__48_notifies(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__49_put_copy_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__4_finish(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__50_put_copy_end(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__51_get_copy_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__52_trace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__53_set_trace_flags(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__54_untrace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__55_encrypt_password(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__56_make_empty_result(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__57_pipeline_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__58_enter_pipeline_mode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__59_exit_pipeline_mode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__5_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__60_pipeline_sync(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__61_send_flush_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__62_clear(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__63_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__64_error_message(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__65_error_field(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__66_ntuples(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__67_nfields(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__68_fname(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__69_ftable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__6_reset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__70_ftablecol(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__71_fformat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__72_ftype(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__73_fmod(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__74_fsize(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__75_binary_tuples(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__76_get_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__77_nparams(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__78_param_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__79_command_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__7_reset_start(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__80_command_tuples(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__81_oid_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__82_set_attributes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__83_free(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__84_cancel(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__85_get_defaults(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__86_parse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__87__options_from_array(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__88___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__89_escape_literal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__8_reset_poll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__90_escape_identifier(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__91_escape_string(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__92_escape_bytea(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__93_unescape_bytea(PyObject *annotations);


static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__9_ping(PyObject *annotations);


// The module function definitions.

static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__10_db(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_8c2a03c943666987f392945fa5694fff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__11_user(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_947a86f70c45a2ff93489e9390192d45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__12_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_3c257220542359550d586acd31260740,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__13_host(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_b8ad5afd5a574a855e05523f976a0e9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__14_hostaddr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_c33d714b9b8ad21b251a098e878123ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__15_port(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_92cf21fb828e297ce8a41343d738e88f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__16_tty(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_894ff80183a9cd2b0c415c4b6da2e98e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__17_options(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_71bf4096f83a955fbef36cb9e11136f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__18_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_862c08efb21fc0239db7b1d08378dfc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__19_transaction_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_9d42fe853709608c6f7291f730663e63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__1_connect(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_cc6e04b54f3a1b07d6acbe78ed62a3ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__20_parameter_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_91a4d124111fb945e41c00261cc4a104,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__21_error_message(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_e133687bd6ae7822d2700e3e05996e7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__22_server_version(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_4153695f402ecc5793d2943dfe7dabc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__23_socket(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_c10f3d9428e8170e764734e9cecdef4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__24_backend_pid(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_94fd1ac74043e097f8d18fec8b4fdf60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__25_needs_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_50b4dee10e318ef55da71e690b5fa4ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__26_used_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_2bd8009a6e23d1272de57e50fd401d88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__27_ssl_in_use(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_0c85e12d68964aaa859651e1def5014d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__28_exec_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_5a288630eb47117fddcfe8e190ee14b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__29_send_query(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_efeb5da2afeaabc7d9cd569cbd4ea528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__2_connect_start(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_93a5dddcc9bfd0fe1b654ed67399d9e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__30_exec_params(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_a2c4c371b92dc33fea47f54118d6d320,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__31_send_query_params(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_4acd8a82898d49d7dc9294bb6bcd5b5e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__32_send_prepare(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_bbad7a128acb256a15a628d41b98bc23,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__33_send_query_prepared(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_d96064a8d75118802ac4c1b64c263d5d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__34_prepare(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_c85191ccd7087f20613e4c15e4e7e651,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__35_exec_prepared(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_3c4c1e318cb68ae44ffda3634349dfa5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__36_describe_prepared(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_fd188af2df1c510ce05e82bda0999aa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__37_send_describe_prepared(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_e3a15cab89e473f218e792c0a82c40cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__38_describe_portal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_0079ece86a0c15f69fc0070136f0e75e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__39_send_describe_portal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_699779c321719da01dd088c9cade0f15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__3_connect_poll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_a45302efa976d691d0b49b1f898331f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__40_get_result(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_d238232323310c2e96a323121acf43c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__41_consume_input(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_ba02ddb59dee095abb05e8d170dcfba0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__42_is_busy(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_58ccb82cd15746f8ef7b7a2c24ffc80a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__43_nonblocking(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_d2b8dcba5dd0057f91769ad69616ef6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__44_nonblocking(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_db902ef13577873acba30930b4fc4d85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__45_flush(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_715155e8a23f70eff28cabf73b5280ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__46_set_single_row_mode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_51d1387e452bcc2c4278f62e522b51e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__47_get_cancel(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_7a80e8a145bb8d4ec8261797a27f6d15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__48_notifies(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_68e7b529fa450f74203c9cb98aaf9d6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__49_put_copy_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_29d7b88a7e23210ab0cb39a9b259b53a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__4_finish(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_0169844fea19a8887867c740661f4a01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__50_put_copy_end(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_24a93d26c1b24ca69460291c58356e72,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__51_get_copy_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_7f4e79cf09ff76718365041e05b0514e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__52_trace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_22b38b650344736d99f28e3873f5a5e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__53_set_trace_flags(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_81c292c4c07c07acf3b1ceee4e38e78d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__54_untrace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_7178d55394a71f2b717d7e47bb4124b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__55_encrypt_password(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_daa8a6a6b97c67d6464affda1a236bfb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__56_make_empty_result(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_d708f5a4a096956e850b40d75ea4e931,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__57_pipeline_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_674e2896ac811408acee4b027847c458,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__58_enter_pipeline_mode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_71c10a15939ede642df6231d7cf57b3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__59_exit_pipeline_mode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_bad44244e4c2b7dbc5a64a430671421a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__5_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_4d6c971db9e0408340268c3d357566a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__60_pipeline_sync(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_7a963a12ee2465ebf00ef0bb10458bf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__61_send_flush_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_24b9a85539deb056dc7c0bd946f31e64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__62_clear(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_345a726dbcf8ea9f3218a53699763a83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__63_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_5579243f1fc6979a5afbee32ceb4dc24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__64_error_message(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_b367232f85b56b6f43542e2ab266cb2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__65_error_field(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_976266afa9dae861552811db1ca17b54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__66_ntuples(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_4355a6c8f9e4b99ebedeb570ec92e6b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__67_nfields(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_5098308ac24818cb805b71c4e2de2eae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__68_fname(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_f807525c74910ebfdd1a6682f81733fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__69_ftable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_44959247d46a5d0b5d2456930c7a1d63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__6_reset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_449dbe8b32cdb7be7ce3f7bfbe82b402,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__70_ftablecol(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_e649ece2ecc93c63488ece4b85c7260d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__71_fformat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_e4d68ad6407bad71b8b37cb2fa3a8974,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__72_ftype(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_056fb6004123a99bc0ca72fb16326393,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__73_fmod(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_dc2fa30b8523f21dc0aec134b47fa8e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__74_fsize(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_c56d0cfb0d9a7faafdeadaf2924609d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__75_binary_tuples(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_ce3280fe388629ac1d4bee397e1316ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__76_get_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[227],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_2d78d387f61068a4cee2cd49822eddaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__77_nparams(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_747c1ea84f26388beb9f43ba393fbca0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__78_param_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_7a3c50b0106f68981a0be43d92c30f25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__79_command_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_80c9c6393254780f1fab6b0a20ce2081,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__7_reset_start(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_12cc41440e62c047c1db29775253e1da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__80_command_tuples(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_4b8b218e38efff44cb220fef6f0c13fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__81_oid_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_fce8b2d44fa9eaae0c047bc178ac2e2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__82_set_attributes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_f51e81df5c80a738d6f722db154a0d0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__83_free(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[245],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_5150f1705fb622b06b508fbdca5d9f94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__84_cancel(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[247],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_9061eba3afee94b46e5756dd6792dbcf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__85_get_defaults(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_e2630ae82bcc044140ff2bbfbe01b1ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__86_parse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_079aa4360b09c7f29312440dfe700f29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__87__options_from_array(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[255],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_84115753f950012c115af43e0875cd06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__88___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[259],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_276d93598b4c9bd4197de3294f17b7d7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__89_escape_literal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_7d2b81286448e1bc2938f4010adcf5fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__8_reset_poll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_b03206daa2373820c671c508e912f614,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__90_escape_identifier(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_ab6ff0983e99b5f8ca40fc6e61d5667d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__91_escape_string(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_b65539bf2a26e81835ec17b4972a3bb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__92_escape_bytea(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[268],
#if PYTHON_VERSION >= 0x300
        mod_consts[269],
#endif
        codeobj_d503751cfc7dbec7ba4b30078a14e571,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__93_unescape_bytea(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[270],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_afb091eb4278a7d6271e80efe3184fd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_psycopg$pq$abc$$$function__9_ping(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_33c30f78e47102068fbd4895d5507298,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_psycopg$pq$abc,
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

function_impl_code functable_psycopg$pq$abc[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
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

    function_impl_code *current = functable_psycopg$pq$abc;
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

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
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

    if (offset > sizeof(functable_psycopg$pq$abc) || offset < 0) {
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

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_psycopg$pq$abc[offset],
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
        module_psycopg$pq$abc,
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
PyObject *modulecode_psycopg$pq$abc(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("psycopg.pq.abc");

    // Store the module for future use.
    module_psycopg$pq$abc = module;

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
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("psycopg.pq.abc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("psycopg.pq.abc: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpsycopg$pq$abc\n");

    moduledict_psycopg$pq$abc = MODULE_DICT(module_psycopg$pq$abc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_psycopg$pq$abc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_psycopg$pq$abc,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[299]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_psycopg$pq$abc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_psycopg$pq$abc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_psycopg$pq$abc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_psycopg$pq$abc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_psycopg$pq$abc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_b482bc06b71197bd287a14f95b1cafcf;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_psycopg$pq$abc$$$class__1_PGconn_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fe219e001841ea9df7e6b6c31d08d098_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_psycopg$pq$abc$$$class__2_PGresult_271 = NULL;
    struct Nuitka_FrameObject *frame_c95e6ed19b4d95090e6a23bee84e9bd0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_psycopg$pq$abc$$$class__3_PGcancel_345 = NULL;
    struct Nuitka_FrameObject *frame_3d52946ebdddc7646d21150ec974276c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_psycopg$pq$abc$$$class__4_Conninfo_353 = NULL;
    struct Nuitka_FrameObject *frame_120fd12c49233269cd86744ac4dc6344_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_psycopg$pq$abc$$$class__5_Escaping_367 = NULL;
    struct Nuitka_FrameObject *frame_72fd6ad3061a7488e52facb76d24c06f_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_b482bc06b71197bd287a14f95b1cafcf = MAKE_MODULE_FRAME(codeobj_b482bc06b71197bd287a14f95b1cafcf, module_psycopg$pq$abc);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b482bc06b71197bd287a14f95b1cafcf);
    assert(Py_REFCNT(frame_b482bc06b71197bd287a14f95b1cafcf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[2];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[9],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[11],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[11]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[12],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[12]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[13],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[13]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[14],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[14]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[15],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[15]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_12 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_12);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[16],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[16]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_False;
        UPDATE_STRING_DICT0(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_14);
    }
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[18];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_psycopg$pq$abc;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[19];
        tmp_level_value_1 = mod_consts[10];
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 9;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[20],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[21];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_psycopg$pq$abc;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[22];
        tmp_level_value_2 = mod_consts[23];
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 11;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[24],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[24]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[25],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[25]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_18);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[26];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_psycopg$pq$abc;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[27];
        tmp_level_value_3 = mod_consts[28];
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_psycopg$pq$abc,
                mod_consts[29],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[30];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_20);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[31];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_3, mod_consts[32]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[33];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 21;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_5, mod_consts[34]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_4 = mod_consts[36];
        tmp_default_value_1 = mod_consts[37];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_expression_value_6, tmp_name_value_4, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[36]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_psycopg$pq$abc$$$class__1_PGconn_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[8], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        frame_fe219e001841ea9df7e6b6c31d08d098_2 = MAKE_CLASS_FRAME(codeobj_fe219e001841ea9df7e6b6c31d08d098, module_psycopg$pq$abc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_fe219e001841ea9df7e6b6c31d08d098_2);
        assert(Py_REFCNT(frame_fe219e001841ea9df7e6b6c31d08d098_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_expression_value_8 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 22;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_9 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[11]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_8);

                        exception_lineno = 22;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_4 = DEEP_COPY_TUPLE_GUIDED(mod_consts[41], "li");
            tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_8);

                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_ass_subvalue_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[8]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[42];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_10 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 23;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_11 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[11]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_10);

                        exception_lineno = 23;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_6 = DEEP_COPY_TUPLE_GUIDED(mod_consts[43], "li");
            tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_10);

                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[8]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[44];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[45]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[45]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_1 = mod_consts[46];
            tmp_dict_value_1 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[48];
            tmp_dict_value_1 = mod_consts[33];
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_psycopg$pq$abc$$$function__1_connect(tmp_annotations_1);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 25;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_dict_key_2 = mod_consts[46];
            tmp_dict_value_2 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[48];
            tmp_dict_value_2 = mod_consts[33];
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_classmethod_arg_1 = MAKE_FUNCTION_psycopg$pq$abc$$$function__1_connect(tmp_annotations_2);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[45]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_3 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[45]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[46];
            tmp_dict_value_3 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[48];
            tmp_dict_value_3 = mod_consts[33];
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_psycopg$pq$abc$$$function__2_connect_start(tmp_annotations_3);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_dict_key_4 = mod_consts[46];
            tmp_dict_value_4 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[48];
            tmp_dict_value_4 = mod_consts[33];
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_classmethod_arg_2 = MAKE_FUNCTION_psycopg$pq$abc$$$function__2_connect_start(tmp_annotations_4);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[48];
            tmp_dict_value_5 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__3_connect_poll(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__4_finish(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_4 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_6 = mod_consts[48];
            tmp_expression_value_12 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[12]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_7 = mod_consts[60];
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_psycopg$pq$abc$$$function__5_info(tmp_annotations_7);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_7 = mod_consts[48];
            tmp_expression_value_13 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[12]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_8 = mod_consts[60];
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_psycopg$pq$abc$$$function__5_info(tmp_annotations_8);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__6_reset(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__7_reset_start(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[48];
            tmp_dict_value_8 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__8_reset_poll(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_classmethod_arg_3;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[45]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_6 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[45]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_9 = mod_consts[46];
            tmp_dict_value_9 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[48];
            tmp_dict_value_9 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_psycopg$pq$abc$$$function__9_ping(tmp_annotations_12);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_dict_key_10 = mod_consts[46];
            tmp_dict_value_10 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[48];
            tmp_dict_value_10 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_classmethod_arg_3 = MAKE_FUNCTION_psycopg$pq$abc$$$function__9_ping(tmp_annotations_13);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_7 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[48];
            tmp_dict_value_11 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_psycopg$pq$abc$$$function__10_db(tmp_annotations_14);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[48];
            tmp_dict_value_12 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_psycopg$pq$abc$$$function__10_db(tmp_annotations_15);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_9 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[48];
            tmp_dict_value_13 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_psycopg$pq$abc$$$function__11_user(tmp_annotations_16);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_14 = mod_consts[48];
            tmp_dict_value_14 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_psycopg$pq$abc$$$function__11_user(tmp_annotations_17);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_11 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_15 = mod_consts[48];
            tmp_dict_value_15 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_psycopg$pq$abc$$$function__12_password(tmp_annotations_18);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 64;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_16 = mod_consts[48];
            tmp_dict_value_16 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_psycopg$pq$abc$$$function__12_password(tmp_annotations_19);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 64;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_13 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[48];
            tmp_dict_value_17 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_psycopg$pq$abc$$$function__13_host(tmp_annotations_20);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[48];
            tmp_dict_value_18 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_psycopg$pq$abc$$$function__13_host(tmp_annotations_21);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_15 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[48];
            tmp_dict_value_19 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_psycopg$pq$abc$$$function__14_hostaddr(tmp_annotations_22);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_20 = mod_consts[48];
            tmp_dict_value_20 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_psycopg$pq$abc$$$function__14_hostaddr(tmp_annotations_23);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_17 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_21 = mod_consts[48];
            tmp_dict_value_21 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_psycopg$pq$abc$$$function__15_port(tmp_annotations_24);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_22 = mod_consts[48];
            tmp_dict_value_22 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_psycopg$pq$abc$$$function__15_port(tmp_annotations_25);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_19 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[48];
            tmp_dict_value_23 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_psycopg$pq$abc$$$function__16_tty(tmp_annotations_26);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_24 = mod_consts[48];
            tmp_dict_value_24 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_psycopg$pq$abc$$$function__16_tty(tmp_annotations_27);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_21 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_25 = mod_consts[48];
            tmp_dict_value_25 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_psycopg$pq$abc$$$function__17_options(tmp_annotations_28);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_26 = mod_consts[48];
            tmp_dict_value_26 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_26 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_psycopg$pq$abc$$$function__17_options(tmp_annotations_29);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_23 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_27 = mod_consts[48];
            tmp_dict_value_27 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_psycopg$pq$abc$$$function__18_status(tmp_annotations_30);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_28 = mod_consts[48];
            tmp_dict_value_28 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_psycopg$pq$abc$$$function__18_status(tmp_annotations_31);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_25 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[48];
            tmp_dict_value_29 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_psycopg$pq$abc$$$function__19_transaction_status(tmp_annotations_32);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_30 = mod_consts[48];
            tmp_dict_value_30 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_30 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_psycopg$pq$abc$$$function__19_transaction_status(tmp_annotations_33);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            tmp_dict_key_31 = mod_consts[91];
            tmp_dict_value_31 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_31 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_34 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_31, tmp_dict_value_31);
                Py_DECREF(tmp_dict_value_31);
                assert(!(tmp_res != 0));
                tmp_dict_key_31 = mod_consts[48];
                tmp_expression_value_14 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_31, tmp_dict_value_31);
                Py_DECREF(tmp_dict_value_31);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_34);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__20_parameter_status(tmp_annotations_34);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_27 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[48];
            tmp_dict_value_32 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_32 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_psycopg$pq$abc$$$function__21_error_message(tmp_annotations_35);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_33 = mod_consts[48];
            tmp_dict_value_33 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_33 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_psycopg$pq$abc$$$function__21_error_message(tmp_annotations_36);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_29 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_34 = mod_consts[48];
            tmp_dict_value_34 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_34 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_psycopg$pq$abc$$$function__22_server_version(tmp_annotations_37);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_35 = mod_consts[48];
            tmp_dict_value_35 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_35 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_psycopg$pq$abc$$$function__22_server_version(tmp_annotations_38);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_31 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_36 = mod_consts[48];
            tmp_dict_value_36 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_36 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_psycopg$pq$abc$$$function__23_socket(tmp_annotations_39);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_32 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_37 = mod_consts[48];
            tmp_dict_value_37 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_37 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_40 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_psycopg$pq$abc$$$function__23_socket(tmp_annotations_40);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_33 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_38 = mod_consts[48];
            tmp_dict_value_38 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_38 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_41 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_psycopg$pq$abc$$$function__24_backend_pid(tmp_annotations_41);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_34 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_39 = mod_consts[48];
            tmp_dict_value_39 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_39 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_psycopg$pq$abc$$$function__24_backend_pid(tmp_annotations_42);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_20;
            } else {
                goto condexpr_false_20;
            }
            condexpr_true_20:;
            tmp_called_value_35 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_40 = mod_consts[48];
            tmp_dict_value_40 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[102]);

            if (tmp_dict_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_40 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_psycopg$pq$abc$$$function__25_needs_password(tmp_annotations_43);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_20;
            condexpr_false_20:;
            tmp_called_value_36 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_41 = mod_consts[48];
            tmp_dict_value_41 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[102]);

            if (tmp_dict_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_41 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_psycopg$pq$abc$$$function__25_needs_password(tmp_annotations_44);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_20:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_45;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_43;
            PyObject *tmp_dict_value_43;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_21;
            } else {
                goto condexpr_false_21;
            }
            condexpr_true_21:;
            tmp_called_value_37 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_42 = mod_consts[48];
            tmp_dict_value_42 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[102]);

            if (tmp_dict_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_42 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_45 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_psycopg$pq$abc$$$function__26_used_password(tmp_annotations_45);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 119;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_21;
            condexpr_false_21:;
            tmp_called_value_38 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_43 = mod_consts[48];
            tmp_dict_value_43 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[102]);

            if (tmp_dict_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_43 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_46 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_psycopg$pq$abc$$$function__26_used_password(tmp_annotations_46);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 119;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_21:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_47;
            PyObject *tmp_dict_key_44;
            PyObject *tmp_dict_value_44;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_48;
            PyObject *tmp_dict_key_45;
            PyObject *tmp_dict_value_45;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_22;
            } else {
                goto condexpr_false_22;
            }
            condexpr_true_22:;
            tmp_called_value_39 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_44 = mod_consts[48];
            tmp_dict_value_44 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[102]);

            if (tmp_dict_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_44 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_psycopg$pq$abc$$$function__27_ssl_in_use(tmp_annotations_47);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 123;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_38);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_22;
            condexpr_false_22:;
            tmp_called_value_40 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_45 = mod_consts[48];
            tmp_dict_value_45 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[102]);

            if (tmp_dict_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_45 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_48 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_psycopg$pq$abc$$$function__27_ssl_in_use(tmp_annotations_48);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 123;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_22:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_49;
            PyObject *tmp_dict_key_46;
            PyObject *tmp_dict_value_46;
            tmp_dict_key_46 = mod_consts[109];
            tmp_dict_value_46 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_46 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_49 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));
            tmp_dict_key_46 = mod_consts[48];
            tmp_dict_value_46 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_46, tmp_dict_value_46);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__28_exec_(tmp_annotations_49);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_50;
            PyObject *tmp_dict_key_47;
            PyObject *tmp_dict_value_47;
            tmp_dict_key_47 = mod_consts[109];
            tmp_dict_value_47 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_47 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_50 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));
            tmp_dict_key_47 = mod_consts[48];
            tmp_dict_value_47 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_47, tmp_dict_value_47);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__29_send_query(tmp_annotations_50);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_annotations_51;
            PyObject *tmp_dict_key_48;
            PyObject *tmp_dict_value_48;
            tmp_tuple_element_4 = Py_None;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_15;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_4);
                tmp_expression_value_15 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[24]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[115]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_key_48 = mod_consts[109];
            tmp_dict_value_48 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_48 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_51 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_16;
                tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_48, tmp_dict_value_48);
                Py_DECREF(tmp_dict_value_48);
                assert(!(tmp_res != 0));
                tmp_dict_key_48 = mod_consts[116];
                tmp_expression_value_16 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_17 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);

                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_18 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[31]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_subscript_value_12 == NULL)) {
                            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_subscript_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);
                            Py_DECREF(tmp_expression_value_17);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_subscript_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_16);
                    Py_DECREF(tmp_expression_value_17);

                    exception_lineno = 136;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_subscript_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_16);

                    exception_lineno = 136;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_48, tmp_dict_value_48);
                Py_DECREF(tmp_dict_value_48);
                assert(!(tmp_res != 0));
                tmp_dict_key_48 = mod_consts[117];
                tmp_expression_value_19 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_20 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_subscript_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_19);

                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_48, tmp_dict_value_48);
                Py_DECREF(tmp_dict_value_48);
                assert(!(tmp_res != 0));
                tmp_dict_key_48 = mod_consts[118];
                tmp_expression_value_21 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_22 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_21);

                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_subscript_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_21);

                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_48, tmp_dict_value_48);
                Py_DECREF(tmp_dict_value_48);
                assert(!(tmp_res != 0));
                tmp_dict_key_48 = mod_consts[119];
                tmp_dict_value_48 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_dict_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_48 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_48);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_48, tmp_dict_value_48);
                Py_DECREF(tmp_dict_value_48);
                assert(!(tmp_res != 0));
                tmp_dict_key_48 = mod_consts[48];
                tmp_dict_value_48 = mod_consts[110];
                tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_48, tmp_dict_value_48);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_51);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__30_exec_params(tmp_defaults_1, tmp_annotations_51);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_annotations_52;
            PyObject *tmp_dict_key_49;
            PyObject *tmp_dict_value_49;
            tmp_tuple_element_5 = Py_None;
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_23;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_5);
                tmp_expression_value_23 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[24]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[115]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_key_49 = mod_consts[109];
            tmp_dict_value_49 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_49 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_52 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_23;
                tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_49, tmp_dict_value_49);
                Py_DECREF(tmp_dict_value_49);
                assert(!(tmp_res != 0));
                tmp_dict_key_49 = mod_consts[116];
                tmp_expression_value_24 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_25 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_24);

                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_26 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_24);
                            Py_DECREF(tmp_expression_value_25);

                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[31]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_subscript_value_19 == NULL)) {
                            tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_subscript_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_24);
                            Py_DECREF(tmp_expression_value_25);
                            Py_DECREF(tmp_expression_value_26);

                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_subscript_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_24);
                    Py_DECREF(tmp_expression_value_25);

                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_subscript_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_24);

                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_49, tmp_dict_value_49);
                Py_DECREF(tmp_dict_value_49);
                assert(!(tmp_res != 0));
                tmp_dict_key_49 = mod_consts[117];
                tmp_expression_value_27 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_28 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_27);

                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_subscript_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_27);

                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_49, tmp_dict_value_49);
                Py_DECREF(tmp_dict_value_49);
                assert(!(tmp_res != 0));
                tmp_dict_key_49 = mod_consts[118];
                tmp_expression_value_29 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_30 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_23 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_subscript_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_29);

                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_49, tmp_dict_value_49);
                Py_DECREF(tmp_dict_value_49);
                assert(!(tmp_res != 0));
                tmp_dict_key_49 = mod_consts[119];
                tmp_dict_value_49 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_dict_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_49 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_49);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_49, tmp_dict_value_49);
                Py_DECREF(tmp_dict_value_49);
                assert(!(tmp_res != 0));
                tmp_dict_key_49 = mod_consts[48];
                tmp_dict_value_49 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_49, tmp_dict_value_49);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_52);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__31_send_query_params(tmp_defaults_2, tmp_annotations_52);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_53;
            PyObject *tmp_dict_key_50;
            PyObject *tmp_dict_value_50;
            tmp_defaults_3 = mod_consts[124];
            tmp_dict_key_50 = mod_consts[91];
            tmp_dict_value_50 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_50 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_53 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_50, tmp_dict_value_50);
                Py_DECREF(tmp_dict_value_50);
                assert(!(tmp_res != 0));
                tmp_dict_key_50 = mod_consts[109];
                tmp_dict_value_50 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

                if (tmp_dict_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_50 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_dict_value_50);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_50, tmp_dict_value_50);
                Py_DECREF(tmp_dict_value_50);
                assert(!(tmp_res != 0));
                tmp_dict_key_50 = mod_consts[117];
                tmp_expression_value_31 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_32 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_subscript_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_31);

                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_50, tmp_dict_value_50);
                Py_DECREF(tmp_dict_value_50);
                assert(!(tmp_res != 0));
                tmp_dict_key_50 = mod_consts[48];
                tmp_dict_value_50 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_50, tmp_dict_value_50);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_53);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__32_send_prepare(tmp_defaults_3, tmp_annotations_53);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_annotations_54;
            PyObject *tmp_dict_key_51;
            PyObject *tmp_dict_value_51;
            tmp_tuple_element_6 = Py_None;
            tmp_defaults_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_33;
                PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_6);
                tmp_expression_value_33 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[24]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[115]);
                Py_DECREF(tmp_expression_value_33);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_4, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_defaults_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_key_51 = mod_consts[91];
            tmp_dict_value_51 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_51 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_54 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_30;
                tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_51, tmp_dict_value_51);
                Py_DECREF(tmp_dict_value_51);
                assert(!(tmp_res != 0));
                tmp_dict_key_51 = mod_consts[116];
                tmp_expression_value_34 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 164;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_35 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_34);

                            exception_lineno = 164;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_36 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_34);
                            Py_DECREF(tmp_expression_value_35);

                            exception_lineno = 164;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[31]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_subscript_value_28 == NULL)) {
                            tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_subscript_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_34);
                            Py_DECREF(tmp_expression_value_35);
                            Py_DECREF(tmp_expression_value_36);

                            exception_lineno = 164;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_subscript_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_34);
                    Py_DECREF(tmp_expression_value_35);

                    exception_lineno = 164;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_subscript_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_34);

                    exception_lineno = 164;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_51, tmp_dict_value_51);
                Py_DECREF(tmp_dict_value_51);
                assert(!(tmp_res != 0));
                tmp_dict_key_51 = mod_consts[118];
                tmp_expression_value_37 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_38 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_30 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_30 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_30);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_subscript_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_37);

                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_51, tmp_dict_value_51);
                Py_DECREF(tmp_dict_value_51);
                assert(!(tmp_res != 0));
                tmp_dict_key_51 = mod_consts[119];
                tmp_dict_value_51 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_dict_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_51 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_51);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_51, tmp_dict_value_51);
                Py_DECREF(tmp_dict_value_51);
                assert(!(tmp_res != 0));
                tmp_dict_key_51 = mod_consts[48];
                tmp_dict_value_51 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_51, tmp_dict_value_51);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_defaults_4);
            Py_DECREF(tmp_annotations_54);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__33_send_query_prepared(tmp_defaults_4, tmp_annotations_54);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_55;
            PyObject *tmp_dict_key_52;
            PyObject *tmp_dict_value_52;
            tmp_defaults_5 = mod_consts[124];
            tmp_dict_key_52 = mod_consts[91];
            tmp_dict_value_52 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_52 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_52);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_55 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_32;
                tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_52, tmp_dict_value_52);
                Py_DECREF(tmp_dict_value_52);
                assert(!(tmp_res != 0));
                tmp_dict_key_52 = mod_consts[109];
                tmp_dict_value_52 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

                if (tmp_dict_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_52 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_dict_value_52);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_52, tmp_dict_value_52);
                Py_DECREF(tmp_dict_value_52);
                assert(!(tmp_res != 0));
                tmp_dict_key_52 = mod_consts[117];
                tmp_expression_value_39 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_40 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_39);

                            exception_lineno = 174;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_32 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_subscript_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_39);

                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_52, tmp_dict_value_52);
                Py_DECREF(tmp_dict_value_52);
                assert(!(tmp_res != 0));
                tmp_dict_key_52 = mod_consts[48];
                tmp_dict_value_52 = mod_consts[110];
                tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_52, tmp_dict_value_52);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_55);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__34_prepare(tmp_defaults_5, tmp_annotations_55);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_56;
            PyObject *tmp_dict_key_53;
            PyObject *tmp_dict_value_53;
            tmp_defaults_6 = mod_consts[131];
            tmp_dict_key_53 = mod_consts[91];
            tmp_dict_value_53 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_53 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_56 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_36;
                tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_53, tmp_dict_value_53);
                Py_DECREF(tmp_dict_value_53);
                assert(!(tmp_res != 0));
                tmp_dict_key_53 = mod_consts[116];
                tmp_expression_value_41 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 181;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_42 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_41);

                            exception_lineno = 181;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_34 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[31]);

                if (tmp_subscript_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_subscript_value_34 == NULL)) {
                            tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_subscript_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_41);
                            Py_DECREF(tmp_expression_value_42);

                            exception_lineno = 181;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_subscript_value_34);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_subscript_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_41);

                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_53, tmp_dict_value_53);
                Py_DECREF(tmp_dict_value_53);
                assert(!(tmp_res != 0));
                tmp_dict_key_53 = mod_consts[118];
                tmp_expression_value_43 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 182;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_44 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[14]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_43);

                            exception_lineno = 182;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_36 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_subscript_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_36 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_36);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_subscript_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_43);

                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_53, tmp_dict_value_53);
                Py_DECREF(tmp_dict_value_53);
                assert(!(tmp_res != 0));
                tmp_dict_key_53 = mod_consts[119];
                tmp_dict_value_53 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_dict_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_53 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_53);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_53, tmp_dict_value_53);
                Py_DECREF(tmp_dict_value_53);
                assert(!(tmp_res != 0));
                tmp_dict_key_53 = mod_consts[48];
                tmp_dict_value_53 = mod_consts[110];
                tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_53, tmp_dict_value_53);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_56);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__35_exec_prepared(tmp_defaults_6, tmp_annotations_56);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_57;
            PyObject *tmp_dict_key_54;
            PyObject *tmp_dict_value_54;
            tmp_dict_key_54 = mod_consts[91];
            tmp_dict_value_54 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_54 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_57 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_57, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[48];
            tmp_dict_value_54 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_annotations_57, tmp_dict_key_54, tmp_dict_value_54);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__36_describe_prepared(tmp_annotations_57);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_58;
            PyObject *tmp_dict_key_55;
            PyObject *tmp_dict_value_55;
            tmp_dict_key_55 = mod_consts[91];
            tmp_dict_value_55 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_55 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_55);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_58 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_58, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[48];
            tmp_dict_value_55 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_58, tmp_dict_key_55, tmp_dict_value_55);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__37_send_describe_prepared(tmp_annotations_58);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_59;
            PyObject *tmp_dict_key_56;
            PyObject *tmp_dict_value_56;
            tmp_dict_key_56 = mod_consts[91];
            tmp_dict_value_56 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_56 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_56);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_59 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_59, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[48];
            tmp_dict_value_56 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_annotations_59, tmp_dict_key_56, tmp_dict_value_56);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__38_describe_portal(tmp_annotations_59);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_60;
            PyObject *tmp_dict_key_57;
            PyObject *tmp_dict_value_57;
            tmp_dict_key_57 = mod_consts[91];
            tmp_dict_value_57 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_57 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_57);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_60 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_60, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[48];
            tmp_dict_value_57 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_60, tmp_dict_key_57, tmp_dict_value_57);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__39_send_describe_portal(tmp_annotations_60);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_61;
            PyObject *tmp_dict_key_58;
            PyObject *tmp_dict_value_58;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_37;
            tmp_dict_key_58 = mod_consts[48];
            tmp_expression_value_45 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_37 = mod_consts[110];
            tmp_dict_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_61 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_61, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__40_get_result(tmp_annotations_61);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_62;
            tmp_annotations_62 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__41_consume_input(tmp_annotations_62);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_63;
            PyObject *tmp_dict_key_59;
            PyObject *tmp_dict_value_59;
            tmp_dict_key_59 = mod_consts[48];
            tmp_dict_value_59 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_59 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_59);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_63 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_63, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__42_is_busy(tmp_annotations_63);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_64;
            PyObject *tmp_dict_key_60;
            PyObject *tmp_dict_value_60;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_65;
            PyObject *tmp_dict_key_61;
            PyObject *tmp_dict_value_61;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_23;
            } else {
                goto condexpr_false_23;
            }
            condexpr_true_23:;
            tmp_called_value_41 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_60 = mod_consts[48];
            tmp_dict_value_60 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_60 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_60);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_64 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_64, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_psycopg$pq$abc$$$function__43_nonblocking(tmp_annotations_64);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_23;
            condexpr_false_23:;
            tmp_called_value_42 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_61 = mod_consts[48];
            tmp_dict_value_61 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_61 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_61);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_65 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_65, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_psycopg$pq$abc$$$function__43_nonblocking(tmp_annotations_65);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_23:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_66;
            PyObject *tmp_dict_key_62;
            PyObject *tmp_dict_value_62;
            tmp_expression_value_46 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[148]);

            if (unlikely(tmp_expression_value_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[148]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[150]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_62 = mod_consts[151];
            tmp_dict_value_62 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_62 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_62);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_66 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_66, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[48];
            tmp_dict_value_62 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_66, tmp_dict_key_62, tmp_dict_value_62);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_psycopg$pq$abc$$$function__44_nonblocking(tmp_annotations_66);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 212;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_67;
            PyObject *tmp_dict_key_63;
            PyObject *tmp_dict_value_63;
            tmp_dict_key_63 = mod_consts[48];
            tmp_dict_value_63 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_63 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_63);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_67 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_67, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__45_flush(tmp_annotations_67);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_68;
            tmp_annotations_68 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__46_set_single_row_mode(tmp_annotations_68);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_69;
            tmp_annotations_69 = DICT_COPY(mod_consts[156]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__47_get_cancel(tmp_annotations_69);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_70;
            PyObject *tmp_dict_key_64;
            PyObject *tmp_dict_value_64;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_38;
            tmp_dict_key_64 = mod_consts[48];
            tmp_expression_value_47 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 225;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_38 = mod_consts[159];
            tmp_dict_value_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_70 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_70, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__48_notifies(tmp_annotations_70);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_71;
            PyObject *tmp_dict_key_65;
            PyObject *tmp_dict_value_65;
            tmp_dict_key_65 = mod_consts[162];
            tmp_dict_value_65 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[31]);

            if (tmp_dict_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_65 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_65 == NULL)) {
                        tmp_dict_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 228;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_71 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_71, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[48];
            tmp_dict_value_65 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_65 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_71, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__49_put_copy_data(tmp_annotations_71);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_72;
            PyObject *tmp_dict_key_66;
            PyObject *tmp_dict_value_66;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_39;
            tmp_defaults_7 = mod_consts[124];
            tmp_dict_key_66 = mod_consts[165];
            tmp_expression_value_48 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_72 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_72, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[48];
            tmp_dict_value_66 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_66 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_66);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_72, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__50_put_copy_end(tmp_defaults_7, tmp_annotations_72);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_73;
            PyObject *tmp_dict_key_67;
            PyObject *tmp_dict_value_67;
            tmp_dict_key_67 = mod_consts[168];
            tmp_dict_value_67 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_67 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_67);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_73 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_40;
                PyObject *tmp_tuple_element_7;
                tmp_res = PyDict_SetItem(tmp_annotations_73, tmp_dict_key_67, tmp_dict_value_67);
                Py_DECREF(tmp_dict_value_67);
                assert(!(tmp_res != 0));
                tmp_dict_key_67 = mod_consts[48];
                tmp_expression_value_49 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[15]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 234;
                            type_description_2 = "o";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_tuple_element_7 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_40, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[169]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = (PyObject *)&PyMemoryView_Type;
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_40, 1, tmp_tuple_element_7);
                tmp_dict_value_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_40);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_dict_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_73, tmp_dict_key_67, tmp_dict_value_67);
                Py_DECREF(tmp_dict_value_67);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_73);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__51_get_copy_data(tmp_annotations_73);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_74;
            PyObject *tmp_dict_key_68;
            PyObject *tmp_dict_value_68;
            tmp_dict_key_68 = mod_consts[172];
            tmp_dict_value_68 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_68 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_68);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_74 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_74, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[48];
            tmp_dict_value_68 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_74, tmp_dict_key_68, tmp_dict_value_68);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__52_trace(tmp_annotations_74);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[173], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_75;
            PyObject *tmp_dict_key_69;
            PyObject *tmp_dict_value_69;
            tmp_dict_key_69 = mod_consts[175];
            tmp_dict_value_69 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[25]);

            if (tmp_dict_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_69 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_dict_value_69 == NULL)) {
                        tmp_dict_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_dict_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 240;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_69);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_75 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_75, tmp_dict_key_69, tmp_dict_value_69);
            Py_DECREF(tmp_dict_value_69);
            assert(!(tmp_res != 0));
            tmp_dict_key_69 = mod_consts[48];
            tmp_dict_value_69 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_75, tmp_dict_key_69, tmp_dict_value_69);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__53_set_trace_flags(tmp_annotations_75);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_76;
            tmp_annotations_76 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__54_untrace(tmp_annotations_76);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_77;
            PyObject *tmp_dict_key_70;
            PyObject *tmp_dict_value_70;
            tmp_defaults_8 = mod_consts[124];
            tmp_dict_key_70 = mod_consts[180];
            tmp_dict_value_70 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

            if (tmp_dict_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_70 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_70);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_77 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_41;
                tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_70, tmp_dict_value_70);
                Py_DECREF(tmp_dict_value_70);
                assert(!(tmp_res != 0));
                tmp_dict_key_70 = mod_consts[73];
                tmp_dict_value_70 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

                if (tmp_dict_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_70 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_dict_value_70);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_70, tmp_dict_value_70);
                Py_DECREF(tmp_dict_value_70);
                assert(!(tmp_res != 0));
                tmp_dict_key_70 = mod_consts[181];
                tmp_expression_value_50 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[13]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 247;
                            type_description_2 = "o";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_41 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

                if (tmp_subscript_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_41 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_value_41);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_41);
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_41);
                if (tmp_dict_value_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_70, tmp_dict_value_70);
                Py_DECREF(tmp_dict_value_70);
                assert(!(tmp_res != 0));
                tmp_dict_key_70 = mod_consts[48];
                tmp_dict_value_70 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[47]);

                if (tmp_dict_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_70 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_dict_value_70);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_70, tmp_dict_value_70);
                Py_DECREF(tmp_dict_value_70);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_77);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__55_encrypt_password(tmp_defaults_8, tmp_annotations_77);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[182], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_78;
            PyObject *tmp_dict_key_71;
            PyObject *tmp_dict_value_71;
            tmp_dict_key_71 = mod_consts[184];
            tmp_dict_value_71 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_71 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_71);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_78 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_78, tmp_dict_key_71, tmp_dict_value_71);
            Py_DECREF(tmp_dict_value_71);
            assert(!(tmp_res != 0));
            tmp_dict_key_71 = mod_consts[48];
            tmp_dict_value_71 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_annotations_78, tmp_dict_key_71, tmp_dict_value_71);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__56_make_empty_result(tmp_annotations_78);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[185], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_79;
            PyObject *tmp_dict_key_72;
            PyObject *tmp_dict_value_72;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_80;
            PyObject *tmp_dict_key_73;
            PyObject *tmp_dict_value_73;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_24;
            } else {
                goto condexpr_false_24;
            }
            condexpr_true_24:;
            tmp_called_value_44 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[59]);

            if (unlikely(tmp_called_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_72 = mod_consts[48];
            tmp_dict_value_72 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_72 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_72);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_79 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_79, tmp_dict_key_72, tmp_dict_value_72);
            Py_DECREF(tmp_dict_value_72);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_psycopg$pq$abc$$$function__57_pipeline_status(tmp_annotations_79);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_24;
            condexpr_false_24:;
            tmp_called_value_45 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_73 = mod_consts[48];
            tmp_dict_value_73 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[53]);

            if (tmp_dict_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_73 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_73);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_80 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_80, tmp_dict_key_73, tmp_dict_value_73);
            Py_DECREF(tmp_dict_value_73);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_psycopg$pq$abc$$$function__57_pipeline_status(tmp_annotations_80);

            frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_24:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[187], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_81;
            tmp_annotations_81 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__58_enter_pipeline_mode(tmp_annotations_81);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[189], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_82;
            tmp_annotations_82 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__59_exit_pipeline_mode(tmp_annotations_82);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[191], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_83;
            tmp_annotations_83 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__60_pipeline_sync(tmp_annotations_83);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[193], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_84;
            tmp_annotations_84 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__61_send_flush_request(tmp_annotations_84);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[195], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fe219e001841ea9df7e6b6c31d08d098_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fe219e001841ea9df7e6b6c31d08d098_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fe219e001841ea9df7e6b6c31d08d098_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fe219e001841ea9df7e6b6c31d08d098_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_fe219e001841ea9df7e6b6c31d08d098_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__1_PGconn_21, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_46 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_8 = mod_consts[33];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_8 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_psycopg$pq$abc$$$class__1_PGconn_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 21;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_psycopg$pq$abc$$$class__1_PGconn_21);
        locals_psycopg$pq$abc$$$class__1_PGconn_21 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_psycopg$pq$abc$$$class__1_PGconn_21);
        locals_psycopg$pq$abc$$$class__1_PGconn_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_28;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_condition_result_28 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_51 = tmp_class_creation_2__bases;
        tmp_subscript_value_42 = mod_consts[10];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_51, tmp_subscript_value_42, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_52 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_52, mod_consts[32]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_53 = tmp_class_creation_2__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[32]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[110];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_10 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 271;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_47, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_54 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_54, mod_consts[34]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_55 = tmp_class_creation_2__metaclass;
        tmp_name_value_5 = mod_consts[36];
        tmp_default_value_2 = mod_consts[37];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_expression_value_55, tmp_name_value_5, tmp_default_value_2);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[36]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 271;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_psycopg$pq$abc$$$class__2_PGresult_271 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_9;
        }
        frame_c95e6ed19b4d95090e6a23bee84e9bd0_3 = MAKE_CLASS_FRAME(codeobj_c95e6ed19b4d95090e6a23bee84e9bd0, module_psycopg$pq$abc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c95e6ed19b4d95090e6a23bee84e9bd0_3);
        assert(Py_REFCNT(frame_c95e6ed19b4d95090e6a23bee84e9bd0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_85;
            tmp_annotations_85 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__62_clear(tmp_annotations_85);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[198], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_86;
            PyObject *tmp_dict_key_74;
            PyObject *tmp_dict_value_74;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_87;
            PyObject *tmp_dict_key_75;
            PyObject *tmp_dict_value_75;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_31 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_26;
            } else {
                goto condexpr_false_26;
            }
            condexpr_true_26:;
            tmp_called_value_48 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_74 = mod_consts[48];
            tmp_dict_value_74 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_74 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_74);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_86 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_86, tmp_dict_key_74, tmp_dict_value_74);
            Py_DECREF(tmp_dict_value_74);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_psycopg$pq$abc$$$function__63_status(tmp_annotations_86);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 275;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_26;
            condexpr_false_26:;
            tmp_called_value_49 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_75 = mod_consts[48];
            tmp_dict_value_75 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_75 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_75);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_87 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_87, tmp_dict_key_75, tmp_dict_value_75);
            Py_DECREF(tmp_dict_value_75);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_psycopg$pq$abc$$$function__63_status(tmp_annotations_87);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 275;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_26:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_88;
            PyObject *tmp_dict_key_76;
            PyObject *tmp_dict_value_76;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_89;
            PyObject *tmp_dict_key_77;
            PyObject *tmp_dict_value_77;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_32 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_27;
            } else {
                goto condexpr_false_27;
            }
            condexpr_true_27:;
            tmp_called_value_50 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_76 = mod_consts[48];
            tmp_dict_value_76 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

            if (tmp_dict_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_76 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_76);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_88 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_88, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));


            tmp_args_element_value_47 = MAKE_FUNCTION_psycopg$pq$abc$$$function__64_error_message(tmp_annotations_88);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 279;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_47);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_27;
            condexpr_false_27:;
            tmp_called_value_51 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_77 = mod_consts[48];
            tmp_dict_value_77 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

            if (tmp_dict_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_77 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_77);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_89 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_89, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));


            tmp_args_element_value_48 = MAKE_FUNCTION_psycopg$pq$abc$$$function__64_error_message(tmp_annotations_89);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 279;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_27:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_90;
            PyObject *tmp_dict_key_78;
            PyObject *tmp_dict_value_78;
            tmp_dict_key_78 = mod_consts[202];
            tmp_dict_value_78 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_78 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_78);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_90 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_57;
                PyObject *tmp_subscript_value_43;
                tmp_res = PyDict_SetItem(tmp_annotations_90, tmp_dict_key_78, tmp_dict_value_78);
                Py_DECREF(tmp_dict_value_78);
                assert(!(tmp_res != 0));
                tmp_dict_key_78 = mod_consts[48];
                tmp_expression_value_57 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 283;
                            type_description_2 = "o";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_43 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

                if (tmp_subscript_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_43 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_value_43);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_43);
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_subscript_value_43);
                if (tmp_dict_value_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_90, tmp_dict_key_78, tmp_dict_value_78);
                Py_DECREF(tmp_dict_value_78);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_90);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__65_error_field(tmp_annotations_90);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_annotations_91;
            PyObject *tmp_dict_key_79;
            PyObject *tmp_dict_value_79;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_annotations_92;
            PyObject *tmp_dict_key_80;
            PyObject *tmp_dict_value_80;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_33 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_28;
            } else {
                goto condexpr_false_28;
            }
            condexpr_true_28:;
            tmp_called_value_52 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_79 = mod_consts[48];
            tmp_dict_value_79 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_79 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_79);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_91 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_91, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));


            tmp_args_element_value_49 = MAKE_FUNCTION_psycopg$pq$abc$$$function__66_ntuples(tmp_annotations_91);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_28;
            condexpr_false_28:;
            tmp_called_value_53 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_80 = mod_consts[48];
            tmp_dict_value_80 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_80 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_80);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_92 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_92, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));


            tmp_args_element_value_50 = MAKE_FUNCTION_psycopg$pq$abc$$$function__66_ntuples(tmp_annotations_92);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_28:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_93;
            PyObject *tmp_dict_key_81;
            PyObject *tmp_dict_value_81;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_annotations_94;
            PyObject *tmp_dict_key_82;
            PyObject *tmp_dict_value_82;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_34 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_29;
            } else {
                goto condexpr_false_29;
            }
            condexpr_true_29:;
            tmp_called_value_54 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_81 = mod_consts[48];
            tmp_dict_value_81 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_81 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_81);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_93 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_93, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));


            tmp_args_element_value_51 = MAKE_FUNCTION_psycopg$pq$abc$$$function__67_nfields(tmp_annotations_93);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_29;
            condexpr_false_29:;
            tmp_called_value_55 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_82 = mod_consts[48];
            tmp_dict_value_82 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_82 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_82);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_94 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_94, tmp_dict_key_82, tmp_dict_value_82);
            Py_DECREF(tmp_dict_value_82);
            assert(!(tmp_res != 0));


            tmp_args_element_value_52 = MAKE_FUNCTION_psycopg$pq$abc$$$function__67_nfields(tmp_annotations_94);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_29:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[207], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_95;
            PyObject *tmp_dict_key_83;
            PyObject *tmp_dict_value_83;
            tmp_dict_key_83 = mod_consts[209];
            tmp_dict_value_83 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_83 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_83);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_95 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_58;
                PyObject *tmp_subscript_value_44;
                tmp_res = PyDict_SetItem(tmp_annotations_95, tmp_dict_key_83, tmp_dict_value_83);
                Py_DECREF(tmp_dict_value_83);
                assert(!(tmp_res != 0));
                tmp_dict_key_83 = mod_consts[48];
                tmp_expression_value_58 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

                if (tmp_expression_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_58 == NULL)) {
                            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_58 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 294;
                            type_description_2 = "o";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_58);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_44 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

                if (tmp_subscript_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_44 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_value_44);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_dict_value_83 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_44);
                Py_DECREF(tmp_expression_value_58);
                Py_DECREF(tmp_subscript_value_44);
                if (tmp_dict_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_95, tmp_dict_key_83, tmp_dict_value_83);
                Py_DECREF(tmp_dict_value_83);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_95);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__68_fname(tmp_annotations_95);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[210], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_96;
            PyObject *tmp_dict_key_84;
            PyObject *tmp_dict_value_84;
            tmp_dict_key_84 = mod_consts[209];
            tmp_dict_value_84 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_84 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_84);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_96 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_96, tmp_dict_key_84, tmp_dict_value_84);
            Py_DECREF(tmp_dict_value_84);
            assert(!(tmp_res != 0));
            tmp_dict_key_84 = mod_consts[48];
            tmp_dict_value_84 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_84 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_84);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_96, tmp_dict_key_84, tmp_dict_value_84);
            Py_DECREF(tmp_dict_value_84);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__69_ftable(tmp_annotations_96);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_97;
            PyObject *tmp_dict_key_85;
            PyObject *tmp_dict_value_85;
            tmp_dict_key_85 = mod_consts[209];
            tmp_dict_value_85 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_85 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_85);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_97 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_97, tmp_dict_key_85, tmp_dict_value_85);
            Py_DECREF(tmp_dict_value_85);
            assert(!(tmp_res != 0));
            tmp_dict_key_85 = mod_consts[48];
            tmp_dict_value_85 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_85 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_85);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_97, tmp_dict_key_85, tmp_dict_value_85);
            Py_DECREF(tmp_dict_value_85);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__70_ftablecol(tmp_annotations_97);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_98;
            PyObject *tmp_dict_key_86;
            PyObject *tmp_dict_value_86;
            tmp_dict_key_86 = mod_consts[209];
            tmp_dict_value_86 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_86 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_86);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_98 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_98, tmp_dict_key_86, tmp_dict_value_86);
            Py_DECREF(tmp_dict_value_86);
            assert(!(tmp_res != 0));
            tmp_dict_key_86 = mod_consts[48];
            tmp_dict_value_86 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_86 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_86);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_98, tmp_dict_key_86, tmp_dict_value_86);
            Py_DECREF(tmp_dict_value_86);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__71_fformat(tmp_annotations_98);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[216], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_99;
            PyObject *tmp_dict_key_87;
            PyObject *tmp_dict_value_87;
            tmp_dict_key_87 = mod_consts[209];
            tmp_dict_value_87 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_87 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_87);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_99 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_99, tmp_dict_key_87, tmp_dict_value_87);
            Py_DECREF(tmp_dict_value_87);
            assert(!(tmp_res != 0));
            tmp_dict_key_87 = mod_consts[48];
            tmp_dict_value_87 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_87 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_87);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_99, tmp_dict_key_87, tmp_dict_value_87);
            Py_DECREF(tmp_dict_value_87);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__72_ftype(tmp_annotations_99);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[218], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_100;
            PyObject *tmp_dict_key_88;
            PyObject *tmp_dict_value_88;
            tmp_dict_key_88 = mod_consts[209];
            tmp_dict_value_88 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_88 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_88);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_100 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_100, tmp_dict_key_88, tmp_dict_value_88);
            Py_DECREF(tmp_dict_value_88);
            assert(!(tmp_res != 0));
            tmp_dict_key_88 = mod_consts[48];
            tmp_dict_value_88 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_88 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_88);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_100, tmp_dict_key_88, tmp_dict_value_88);
            Py_DECREF(tmp_dict_value_88);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__73_fmod(tmp_annotations_100);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[220], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_101;
            PyObject *tmp_dict_key_89;
            PyObject *tmp_dict_value_89;
            tmp_dict_key_89 = mod_consts[209];
            tmp_dict_value_89 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_89 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_89);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_101 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_101, tmp_dict_key_89, tmp_dict_value_89);
            Py_DECREF(tmp_dict_value_89);
            assert(!(tmp_res != 0));
            tmp_dict_key_89 = mod_consts[48];
            tmp_dict_value_89 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_89 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_89);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_101, tmp_dict_key_89, tmp_dict_value_89);
            Py_DECREF(tmp_dict_value_89);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__74_fsize(tmp_annotations_101);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[222], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_annotations_102;
            PyObject *tmp_dict_key_90;
            PyObject *tmp_dict_value_90;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_annotations_103;
            PyObject *tmp_dict_key_91;
            PyObject *tmp_dict_value_91;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_35 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_30;
            } else {
                goto condexpr_false_30;
            }
            condexpr_true_30:;
            tmp_called_value_56 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_90 = mod_consts[48];
            tmp_dict_value_90 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_90 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_90);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_102 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_102, tmp_dict_key_90, tmp_dict_value_90);
            Py_DECREF(tmp_dict_value_90);
            assert(!(tmp_res != 0));


            tmp_args_element_value_53 = MAKE_FUNCTION_psycopg$pq$abc$$$function__75_binary_tuples(tmp_annotations_102);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 315;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_53);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_30;
            condexpr_false_30:;
            tmp_called_value_57 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_91 = mod_consts[48];
            tmp_dict_value_91 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_91 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_91);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_103 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_103, tmp_dict_key_91, tmp_dict_value_91);
            Py_DECREF(tmp_dict_value_91);
            assert(!(tmp_res != 0));


            tmp_args_element_value_54 = MAKE_FUNCTION_psycopg$pq$abc$$$function__75_binary_tuples(tmp_annotations_103);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 315;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_30:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[224], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_104;
            PyObject *tmp_dict_key_92;
            PyObject *tmp_dict_value_92;
            tmp_dict_key_92 = mod_consts[226];
            tmp_dict_value_92 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_92 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_92 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_92);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_104 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_59;
                PyObject *tmp_subscript_value_45;
                tmp_res = PyDict_SetItem(tmp_annotations_104, tmp_dict_key_92, tmp_dict_value_92);
                Py_DECREF(tmp_dict_value_92);
                assert(!(tmp_res != 0));
                tmp_dict_key_92 = mod_consts[209];
                tmp_dict_value_92 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

                if (tmp_dict_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_92 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_92);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_104, tmp_dict_key_92, tmp_dict_value_92);
                Py_DECREF(tmp_dict_value_92);
                assert(!(tmp_res != 0));
                tmp_dict_key_92 = mod_consts[48];
                tmp_expression_value_59 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

                if (tmp_expression_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_expression_value_59 == NULL)) {
                            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_expression_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 319;
                            type_description_2 = "o";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_59);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_45 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

                if (tmp_subscript_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_45 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_value_45);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_92 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_45);
                Py_DECREF(tmp_expression_value_59);
                Py_DECREF(tmp_subscript_value_45);
                if (tmp_dict_value_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_104, tmp_dict_key_92, tmp_dict_value_92);
                Py_DECREF(tmp_dict_value_92);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_104);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__76_get_value(tmp_annotations_104);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[227], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_annotations_105;
            PyObject *tmp_dict_key_93;
            PyObject *tmp_dict_value_93;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_annotations_106;
            PyObject *tmp_dict_key_94;
            PyObject *tmp_dict_value_94;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_36 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_31;
            } else {
                goto condexpr_false_31;
            }
            condexpr_true_31:;
            tmp_called_value_58 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_58 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_93 = mod_consts[48];
            tmp_dict_value_93 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_93 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_93);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_105 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_105, tmp_dict_key_93, tmp_dict_value_93);
            Py_DECREF(tmp_dict_value_93);
            assert(!(tmp_res != 0));


            tmp_args_element_value_55 = MAKE_FUNCTION_psycopg$pq$abc$$$function__77_nparams(tmp_annotations_105);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_55);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_31;
            condexpr_false_31:;
            tmp_called_value_59 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_94 = mod_consts[48];
            tmp_dict_value_94 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_94 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_94 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_94);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_106 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_106, tmp_dict_key_94, tmp_dict_value_94);
            Py_DECREF(tmp_dict_value_94);
            assert(!(tmp_res != 0));


            tmp_args_element_value_56 = MAKE_FUNCTION_psycopg$pq$abc$$$function__77_nparams(tmp_annotations_106);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_56);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_31:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[229], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_107;
            PyObject *tmp_dict_key_95;
            PyObject *tmp_dict_value_95;
            tmp_dict_key_95 = mod_consts[231];
            tmp_dict_value_95 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_95 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_95 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_95);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_107 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_107, tmp_dict_key_95, tmp_dict_value_95);
            Py_DECREF(tmp_dict_value_95);
            assert(!(tmp_res != 0));
            tmp_dict_key_95 = mod_consts[48];
            tmp_dict_value_95 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_95 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_95 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_95);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_107, tmp_dict_key_95, tmp_dict_value_95);
            Py_DECREF(tmp_dict_value_95);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__78_param_type(tmp_annotations_107);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[232], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_annotations_108;
            PyObject *tmp_dict_key_96;
            PyObject *tmp_dict_value_96;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_annotations_109;
            PyObject *tmp_dict_key_97;
            PyObject *tmp_dict_value_97;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_47;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_37 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_32;
            } else {
                goto condexpr_false_32;
            }
            condexpr_true_32:;
            tmp_called_value_60 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_96 = mod_consts[48];
            tmp_expression_value_60 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_60);

                        exception_lineno = 330;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_96 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_60);

                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_108 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_108, tmp_dict_key_96, tmp_dict_value_96);
            Py_DECREF(tmp_dict_value_96);
            assert(!(tmp_res != 0));


            tmp_args_element_value_57 = MAKE_FUNCTION_psycopg$pq$abc$$$function__79_command_status(tmp_annotations_108);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 329;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_57);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_32;
            condexpr_false_32:;
            tmp_called_value_61 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_97 = mod_consts[48];
            tmp_expression_value_61 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 330;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[47]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_97 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_109 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_109, tmp_dict_key_97, tmp_dict_value_97);
            Py_DECREF(tmp_dict_value_97);
            assert(!(tmp_res != 0));


            tmp_args_element_value_58 = MAKE_FUNCTION_psycopg$pq$abc$$$function__79_command_status(tmp_annotations_109);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 329;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_58);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_32:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[234], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_annotations_110;
            PyObject *tmp_dict_key_98;
            PyObject *tmp_dict_value_98;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_annotations_111;
            PyObject *tmp_dict_key_99;
            PyObject *tmp_dict_value_99;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_49;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_38 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_33;
            } else {
                goto condexpr_false_33;
            }
            condexpr_true_33:;
            tmp_called_value_62 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_98 = mod_consts[48];
            tmp_expression_value_62 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_62);

                        exception_lineno = 334;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_98 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_62);

                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_110 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_110, tmp_dict_key_98, tmp_dict_value_98);
            Py_DECREF(tmp_dict_value_98);
            assert(!(tmp_res != 0));


            tmp_args_element_value_59 = MAKE_FUNCTION_psycopg$pq$abc$$$function__80_command_tuples(tmp_annotations_110);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 333;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_59);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_33;
            condexpr_false_33:;
            tmp_called_value_63 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_99 = mod_consts[48];
            tmp_expression_value_63 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[13]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 334;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_99 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_111 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_111, tmp_dict_key_99, tmp_dict_value_99);
            Py_DECREF(tmp_dict_value_99);
            assert(!(tmp_res != 0));


            tmp_args_element_value_60 = MAKE_FUNCTION_psycopg$pq$abc$$$function__80_command_tuples(tmp_annotations_111);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 333;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_33:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_39;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_annotations_112;
            PyObject *tmp_dict_key_100;
            PyObject *tmp_dict_value_100;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_annotations_113;
            PyObject *tmp_dict_key_101;
            PyObject *tmp_dict_value_101;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_39 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_34;
            } else {
                goto condexpr_false_34;
            }
            condexpr_true_34:;
            tmp_called_value_64 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[59]);

            if (unlikely(tmp_called_value_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[59]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_100 = mod_consts[48];
            tmp_dict_value_100 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_100 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_100 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_100);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_112 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_112, tmp_dict_key_100, tmp_dict_value_100);
            Py_DECREF(tmp_dict_value_100);
            assert(!(tmp_res != 0));


            tmp_args_element_value_61 = MAKE_FUNCTION_psycopg$pq$abc$$$function__81_oid_value(tmp_annotations_112);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_61);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_34;
            condexpr_false_34:;
            tmp_called_value_65 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_101 = mod_consts[48];
            tmp_dict_value_101 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[53]);

            if (tmp_dict_value_101 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_101 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_101);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_113 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_113, tmp_dict_key_101, tmp_dict_value_101);
            Py_DECREF(tmp_dict_value_101);
            assert(!(tmp_res != 0));


            tmp_args_element_value_62 = MAKE_FUNCTION_psycopg$pq$abc$$$function__81_oid_value(tmp_annotations_113);

            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_62);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_34:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[238], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_114;
            PyObject *tmp_dict_key_102;
            PyObject *tmp_dict_value_102;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_50;
            tmp_dict_key_102 = mod_consts[240];
            tmp_expression_value_64 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[12]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 341;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_50 = mod_consts[241];
            tmp_dict_value_102 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_dict_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_114 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_114, tmp_dict_key_102, tmp_dict_value_102);
            Py_DECREF(tmp_dict_value_102);
            assert(!(tmp_res != 0));
            tmp_dict_key_102 = mod_consts[48];
            tmp_dict_value_102 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_114, tmp_dict_key_102, tmp_dict_value_102);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__82_set_attributes(tmp_annotations_114);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[242], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c95e6ed19b4d95090e6a23bee84e9bd0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c95e6ed19b4d95090e6a23bee84e9bd0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c95e6ed19b4d95090e6a23bee84e9bd0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c95e6ed19b4d95090e6a23bee84e9bd0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_c95e6ed19b4d95090e6a23bee84e9bd0_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__2_PGresult_271, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_66 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_12 = mod_consts[110];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_12 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_psycopg$pq$abc$$$class__2_PGresult_271;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 271;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_66, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_psycopg$pq$abc$$$class__2_PGresult_271);
        locals_psycopg$pq$abc$$$class__2_PGresult_271 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_psycopg$pq$abc$$$class__2_PGresult_271);
        locals_psycopg$pq$abc$$$class__2_PGresult_271 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 271;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_35);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_38 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_51;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_condition_result_41 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_35;
        } else {
            goto condexpr_false_35;
        }
        condexpr_true_35:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_65 = tmp_class_creation_3__bases;
        tmp_subscript_value_51 = mod_consts[10];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_65, tmp_subscript_value_51, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        goto condexpr_end_35;
        condexpr_false_35:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_35:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_66 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_66, mod_consts[32]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_67 = tmp_class_creation_3__metaclass;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[32]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[244];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_14 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 345;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_67, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_68 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_68, mod_consts[34]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_69 = tmp_class_creation_3__metaclass;
        tmp_name_value_6 = mod_consts[36];
        tmp_default_value_3 = mod_consts[37];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_expression_value_69, tmp_name_value_6, tmp_default_value_3);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_70 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[36]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 345;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_42;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_psycopg$pq$abc$$$class__3_PGcancel_345 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__3_PGcancel_345, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[244];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__3_PGcancel_345, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_12;
        }
        frame_3d52946ebdddc7646d21150ec974276c_4 = MAKE_CLASS_FRAME(codeobj_3d52946ebdddc7646d21150ec974276c, module_psycopg$pq$abc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3d52946ebdddc7646d21150ec974276c_4);
        assert(Py_REFCNT(frame_3d52946ebdddc7646d21150ec974276c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_115;
            tmp_annotations_115 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__83_free(tmp_annotations_115);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__3_PGcancel_345, mod_consts[245], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_116;
            tmp_annotations_116 = DICT_COPY(mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__84_cancel(tmp_annotations_116);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__3_PGcancel_345, mod_consts[247], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3d52946ebdddc7646d21150ec974276c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3d52946ebdddc7646d21150ec974276c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3d52946ebdddc7646d21150ec974276c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3d52946ebdddc7646d21150ec974276c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_3d52946ebdddc7646d21150ec974276c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__3_PGcancel_345, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_68 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_16 = mod_consts[244];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_16 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_psycopg$pq$abc$$$class__3_PGcancel_345;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 345;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_68, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_43 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_psycopg$pq$abc$$$class__3_PGcancel_345);
        locals_psycopg$pq$abc$$$class__3_PGcancel_345 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_psycopg$pq$abc$$$class__3_PGcancel_345);
        locals_psycopg$pq$abc$$$class__3_PGcancel_345 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 345;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_43);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_46 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_condition_result_45 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_36;
        } else {
            goto condexpr_false_36;
        }
        condexpr_true_36:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_71 = tmp_class_creation_4__bases;
        tmp_subscript_value_52 = mod_consts[10];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_71, tmp_subscript_value_52, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        goto condexpr_end_36;
        condexpr_false_36:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_36:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_72 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_72, mod_consts[32]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_73 = tmp_class_creation_4__metaclass;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[32]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_tuple_element_18 = mod_consts[249];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_18 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 353;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_69, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_74 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_74, mod_consts[34]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_75 = tmp_class_creation_4__metaclass;
        tmp_name_value_7 = mod_consts[36];
        tmp_default_value_4 = mod_consts[37];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_expression_value_75, tmp_name_value_7, tmp_default_value_4);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_76 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_76 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[36]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 353;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_50;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_psycopg$pq$abc$$$class__4_Conninfo_353 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[249];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_15;
        }
        frame_120fd12c49233269cd86744ac4dc6344_5 = MAKE_CLASS_FRAME(codeobj_120fd12c49233269cd86744ac4dc6344, module_psycopg$pq$abc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_120fd12c49233269cd86744ac4dc6344_5);
        assert(Py_REFCNT(frame_120fd12c49233269cd86744ac4dc6344_5) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_annotations_117;
            PyObject *tmp_dict_key_103;
            PyObject *tmp_dict_value_103;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_classmethod_arg_4;
            PyObject *tmp_annotations_118;
            PyObject *tmp_dict_key_104;
            PyObject *tmp_dict_value_104;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_54;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[45]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_48 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_37;
            } else {
                goto condexpr_false_37;
            }
            condexpr_true_37:;
            tmp_called_value_70 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[45]);

            if (unlikely(tmp_called_value_70 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_103 = mod_consts[48];
            tmp_expression_value_77 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[12]);

            if (tmp_expression_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_expression_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_70);

                        exception_lineno = 355;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_77);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_53 = mod_consts[60];
            tmp_dict_value_103 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_dict_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_70);

                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_117 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_117, tmp_dict_key_103, tmp_dict_value_103);
            Py_DECREF(tmp_dict_value_103);
            assert(!(tmp_res != 0));


            tmp_args_element_value_63 = MAKE_FUNCTION_psycopg$pq$abc$$$function__85_get_defaults(tmp_annotations_117);

            frame_120fd12c49233269cd86744ac4dc6344_5->m_frame.f_lineno = 354;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_63);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_63);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_37;
            condexpr_false_37:;
            tmp_dict_key_104 = mod_consts[48];
            tmp_expression_value_78 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[12]);

            if (tmp_expression_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_expression_value_78 == NULL)) {
                        tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_expression_value_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 355;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_78);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_54 = mod_consts[60];
            tmp_dict_value_104 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_54);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_dict_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_118 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_118, tmp_dict_key_104, tmp_dict_value_104);
            Py_DECREF(tmp_dict_value_104);
            assert(!(tmp_res != 0));


            tmp_classmethod_arg_4 = MAKE_FUNCTION_psycopg$pq$abc$$$function__85_get_defaults(tmp_annotations_118);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_37:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[250], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_49;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_annotations_119;
            PyObject *tmp_dict_key_105;
            PyObject *tmp_dict_value_105;
            PyObject *tmp_classmethod_arg_5;
            PyObject *tmp_annotations_120;
            PyObject *tmp_dict_key_106;
            PyObject *tmp_dict_value_106;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[45]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_49 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_38;
            } else {
                goto condexpr_false_38;
            }
            condexpr_true_38:;
            tmp_called_value_71 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[45]);

            if (unlikely(tmp_called_value_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_105 = mod_consts[46];
            tmp_dict_value_105 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[47]);

            if (tmp_dict_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_105 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_105);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_119 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_79;
                PyObject *tmp_subscript_value_55;
                tmp_res = PyDict_SetItem(tmp_annotations_119, tmp_dict_key_105, tmp_dict_value_105);
                Py_DECREF(tmp_dict_value_105);
                assert(!(tmp_res != 0));
                tmp_dict_key_105 = mod_consts[48];
                tmp_expression_value_79 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[12]);

                if (tmp_expression_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_79 == NULL)) {
                            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_expression_value_79 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 359;
                            type_description_2 = "o";
                            goto dict_build_exception_13;
                        }
                        Py_INCREF(tmp_expression_value_79);
                    } else {
                        goto dict_build_exception_13;
                    }
                }

                tmp_subscript_value_55 = mod_consts[60];
                tmp_dict_value_105 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_55);
                Py_DECREF(tmp_expression_value_79);
                if (tmp_dict_value_105 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_119, tmp_dict_key_105, tmp_dict_value_105);
                Py_DECREF(tmp_dict_value_105);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_annotations_119);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;


            tmp_args_element_value_64 = MAKE_FUNCTION_psycopg$pq$abc$$$function__86_parse(tmp_annotations_119);

            frame_120fd12c49233269cd86744ac4dc6344_5->m_frame.f_lineno = 358;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_64);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_64);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_38;
            condexpr_false_38:;
            tmp_dict_key_106 = mod_consts[46];
            tmp_dict_value_106 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[47]);

            if (tmp_dict_value_106 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_106 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_106);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_120 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_80;
                PyObject *tmp_subscript_value_56;
                tmp_res = PyDict_SetItem(tmp_annotations_120, tmp_dict_key_106, tmp_dict_value_106);
                Py_DECREF(tmp_dict_value_106);
                assert(!(tmp_res != 0));
                tmp_dict_key_106 = mod_consts[48];
                tmp_expression_value_80 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[12]);

                if (tmp_expression_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_80 == NULL)) {
                            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_expression_value_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 359;
                            type_description_2 = "o";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_80);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_56 = mod_consts[60];
                tmp_dict_value_106 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_56);
                Py_DECREF(tmp_expression_value_80);
                if (tmp_dict_value_106 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_120, tmp_dict_key_106, tmp_dict_value_106);
                Py_DECREF(tmp_dict_value_106);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_14;
            // Exception handling pass through code for dict_build:
            dict_build_exception_14:;
            Py_DECREF(tmp_annotations_120);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_14:;


            tmp_classmethod_arg_5 = MAKE_FUNCTION_psycopg$pq$abc$$$function__86_parse(tmp_annotations_120);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_5);
            Py_DECREF(tmp_classmethod_arg_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_38:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[252], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_50;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_annotations_121;
            PyObject *tmp_dict_key_107;
            PyObject *tmp_dict_value_107;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_classmethod_arg_6;
            PyObject *tmp_annotations_122;
            PyObject *tmp_dict_key_108;
            PyObject *tmp_dict_value_108;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_59;
            tmp_res = MAPPING_HAS_ITEM(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[45]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_50 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_39;
            } else {
                goto condexpr_false_39;
            }
            condexpr_true_39:;
            tmp_called_value_72 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[45]);

            if (unlikely(tmp_called_value_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_107 = mod_consts[254];
            tmp_expression_value_81 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[14]);

            if (tmp_expression_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_72);

                        exception_lineno = 363;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_81);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_57 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[9]);

            if (tmp_subscript_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_subscript_value_57 == NULL)) {
                        tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
                    }

                    if (tmp_subscript_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_72);
                        Py_DECREF(tmp_expression_value_81);

                        exception_lineno = 363;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_subscript_value_57);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_value_107 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_57);
            Py_DECREF(tmp_expression_value_81);
            Py_DECREF(tmp_subscript_value_57);
            if (tmp_dict_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_72);

                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_121 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_82;
                PyObject *tmp_subscript_value_58;
                tmp_res = PyDict_SetItem(tmp_annotations_121, tmp_dict_key_107, tmp_dict_value_107);
                Py_DECREF(tmp_dict_value_107);
                assert(!(tmp_res != 0));
                tmp_dict_key_107 = mod_consts[48];
                tmp_expression_value_82 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[12]);

                if (tmp_expression_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_82 == NULL)) {
                            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_expression_value_82 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 363;
                            type_description_2 = "o";
                            goto dict_build_exception_15;
                        }
                        Py_INCREF(tmp_expression_value_82);
                    } else {
                        goto dict_build_exception_15;
                    }
                }

                tmp_subscript_value_58 = mod_consts[60];
                tmp_dict_value_107 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_58);
                Py_DECREF(tmp_expression_value_82);
                if (tmp_dict_value_107 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_15;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_121, tmp_dict_key_107, tmp_dict_value_107);
                Py_DECREF(tmp_dict_value_107);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_15;
            // Exception handling pass through code for dict_build:
            dict_build_exception_15:;
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_annotations_121);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_15:;


            tmp_args_element_value_65 = MAKE_FUNCTION_psycopg$pq$abc$$$function__87__options_from_array(tmp_annotations_121);

            frame_120fd12c49233269cd86744ac4dc6344_5->m_frame.f_lineno = 362;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_65);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_65);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_39;
            condexpr_false_39:;
            tmp_dict_key_108 = mod_consts[254];
            tmp_expression_value_83 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[14]);

            if (tmp_expression_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_83 == NULL)) {
                        tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 363;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_83);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_59 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[9]);

            if (tmp_subscript_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_59 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_subscript_value_59 == NULL)) {
                        tmp_subscript_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
                    }

                    if (tmp_subscript_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_83);

                        exception_lineno = 363;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_subscript_value_59);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_value_108 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_59);
            Py_DECREF(tmp_expression_value_83);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_dict_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_122 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_84;
                PyObject *tmp_subscript_value_60;
                tmp_res = PyDict_SetItem(tmp_annotations_122, tmp_dict_key_108, tmp_dict_value_108);
                Py_DECREF(tmp_dict_value_108);
                assert(!(tmp_res != 0));
                tmp_dict_key_108 = mod_consts[48];
                tmp_expression_value_84 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[12]);

                if (tmp_expression_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_84 == NULL)) {
                            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_expression_value_84 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 363;
                            type_description_2 = "o";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_84);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_60 = mod_consts[60];
                tmp_dict_value_108 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_60);
                Py_DECREF(tmp_expression_value_84);
                if (tmp_dict_value_108 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_122, tmp_dict_key_108, tmp_dict_value_108);
                Py_DECREF(tmp_dict_value_108);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_16;
            // Exception handling pass through code for dict_build:
            dict_build_exception_16:;
            Py_DECREF(tmp_annotations_122);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_16:;


            tmp_classmethod_arg_6 = MAKE_FUNCTION_psycopg$pq$abc$$$function__87__options_from_array(tmp_annotations_122);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_6);
            Py_DECREF(tmp_classmethod_arg_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_39:;
            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[255], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_120fd12c49233269cd86744ac4dc6344_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_120fd12c49233269cd86744ac4dc6344_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_120fd12c49233269cd86744ac4dc6344_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_120fd12c49233269cd86744ac4dc6344_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_120fd12c49233269cd86744ac4dc6344_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_51;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_51 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_51 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__4_Conninfo_353, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_73 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_20 = mod_consts[249];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_20 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_psycopg$pq$abc$$$class__4_Conninfo_353;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 353;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_73, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_51 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_psycopg$pq$abc$$$class__4_Conninfo_353);
        locals_psycopg$pq$abc$$$class__4_Conninfo_353 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_psycopg$pq$abc$$$class__4_Conninfo_353);
        locals_psycopg$pq$abc$$$class__4_Conninfo_353 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 353;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_51);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_54 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_52;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_61;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_condition_result_52 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_40;
        } else {
            goto condexpr_false_40;
        }
        condexpr_true_40:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_85 = tmp_class_creation_5__bases;
        tmp_subscript_value_61 = mod_consts[10];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_85, tmp_subscript_value_61, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        goto condexpr_end_40;
        condexpr_false_40:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_40:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_53;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_86 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_86, mod_consts[32]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_condition_result_53 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_87 = tmp_class_creation_5__metaclass;
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[32]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_tuple_element_22 = mod_consts[257];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_22 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 367;
        tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_74, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_88 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_88, mod_consts[34]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_89 = tmp_class_creation_5__metaclass;
        tmp_name_value_8 = mod_consts[36];
        tmp_default_value_5 = mod_consts[37];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_expression_value_89, tmp_name_value_8, tmp_default_value_5);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[36]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 367;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_58;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_psycopg$pq$abc$$$class__5_Escaping_367 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[257];
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_18;
        }
        frame_72fd6ad3061a7488e52facb76d24c06f_6 = MAKE_CLASS_FRAME(codeobj_72fd6ad3061a7488e52facb76d24c06f, module_psycopg$pq$abc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_72fd6ad3061a7488e52facb76d24c06f_6);
        assert(Py_REFCNT(frame_72fd6ad3061a7488e52facb76d24c06f_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_123;
            PyObject *tmp_dict_key_109;
            PyObject *tmp_dict_value_109;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_62;
            tmp_defaults_9 = mod_consts[124];
            tmp_dict_key_109 = mod_consts[258];
            tmp_expression_value_91 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[13]);

            if (tmp_expression_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_91 == NULL)) {
                        tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 368;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_91);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_62 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[33]);

            if (tmp_subscript_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_62 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_subscript_value_62 == NULL)) {
                        tmp_subscript_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                    }

                    if (tmp_subscript_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_91);

                        exception_lineno = 368;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_subscript_value_62);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dict_value_109 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_62);
            Py_DECREF(tmp_expression_value_91);
            Py_DECREF(tmp_subscript_value_62);
            if (tmp_dict_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_123 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_123, tmp_dict_key_109, tmp_dict_value_109);
            Py_DECREF(tmp_dict_value_109);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__88___init__(tmp_defaults_9, tmp_annotations_123);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[259], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_124;
            PyObject *tmp_dict_key_110;
            PyObject *tmp_dict_value_110;
            tmp_dict_key_110 = mod_consts[261];
            tmp_dict_value_110 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[31]);

            if (tmp_dict_value_110 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_110 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_110 == NULL)) {
                        tmp_dict_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_110 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 371;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_110);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_124 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_124, tmp_dict_key_110, tmp_dict_value_110);
            Py_DECREF(tmp_dict_value_110);
            assert(!(tmp_res != 0));
            tmp_dict_key_110 = mod_consts[48];
            tmp_dict_value_110 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[47]);

            if (tmp_dict_value_110 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_110 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_110);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_124, tmp_dict_key_110, tmp_dict_value_110);
            Py_DECREF(tmp_dict_value_110);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__89_escape_literal(tmp_annotations_124);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[262], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_125;
            PyObject *tmp_dict_key_111;
            PyObject *tmp_dict_value_111;
            tmp_dict_key_111 = mod_consts[261];
            tmp_dict_value_111 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[31]);

            if (tmp_dict_value_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_111 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_111 == NULL)) {
                        tmp_dict_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_111 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 374;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_111);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_125 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_125, tmp_dict_key_111, tmp_dict_value_111);
            Py_DECREF(tmp_dict_value_111);
            assert(!(tmp_res != 0));
            tmp_dict_key_111 = mod_consts[48];
            tmp_dict_value_111 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[47]);

            if (tmp_dict_value_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_111 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_111);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_125, tmp_dict_key_111, tmp_dict_value_111);
            Py_DECREF(tmp_dict_value_111);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__90_escape_identifier(tmp_annotations_125);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[264], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_126;
            PyObject *tmp_dict_key_112;
            PyObject *tmp_dict_value_112;
            tmp_dict_key_112 = mod_consts[261];
            tmp_dict_value_112 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[31]);

            if (tmp_dict_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_112 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_112 == NULL)) {
                        tmp_dict_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_112 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 377;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_112);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_126 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_126, tmp_dict_key_112, tmp_dict_value_112);
            Py_DECREF(tmp_dict_value_112);
            assert(!(tmp_res != 0));
            tmp_dict_key_112 = mod_consts[48];
            tmp_dict_value_112 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[47]);

            if (tmp_dict_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_112 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_112);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_126, tmp_dict_key_112, tmp_dict_value_112);
            Py_DECREF(tmp_dict_value_112);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__91_escape_string(tmp_annotations_126);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[266], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_127;
            PyObject *tmp_dict_key_113;
            PyObject *tmp_dict_value_113;
            tmp_dict_key_113 = mod_consts[261];
            tmp_dict_value_113 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[31]);

            if (tmp_dict_value_113 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_113 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_113 == NULL)) {
                        tmp_dict_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_113 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 380;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_113);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_127 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_127, tmp_dict_key_113, tmp_dict_value_113);
            Py_DECREF(tmp_dict_value_113);
            assert(!(tmp_res != 0));
            tmp_dict_key_113 = mod_consts[48];
            tmp_dict_value_113 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[47]);

            if (tmp_dict_value_113 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_113 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_113);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_127, tmp_dict_key_113, tmp_dict_value_113);
            Py_DECREF(tmp_dict_value_113);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__92_escape_bytea(tmp_annotations_127);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[268], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_128;
            PyObject *tmp_dict_key_114;
            PyObject *tmp_dict_value_114;
            tmp_dict_key_114 = mod_consts[261];
            tmp_dict_value_114 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[31]);

            if (tmp_dict_value_114 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_114 = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_114 == NULL)) {
                        tmp_dict_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_114 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_114);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_128 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_128, tmp_dict_key_114, tmp_dict_value_114);
            Py_DECREF(tmp_dict_value_114);
            assert(!(tmp_res != 0));
            tmp_dict_key_114 = mod_consts[48];
            tmp_dict_value_114 = PyObject_GetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[47]);

            if (tmp_dict_value_114 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_114 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_114);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_128, tmp_dict_key_114, tmp_dict_value_114);
            Py_DECREF(tmp_dict_value_114);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_psycopg$pq$abc$$$function__93_unescape_bytea(tmp_annotations_128);

            tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[270], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_72fd6ad3061a7488e52facb76d24c06f_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_72fd6ad3061a7488e52facb76d24c06f_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_72fd6ad3061a7488e52facb76d24c06f_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_72fd6ad3061a7488e52facb76d24c06f_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_72fd6ad3061a7488e52facb76d24c06f_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_18;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_55;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_55 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_psycopg$pq$abc$$$class__5_Escaping_367, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_75;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_75 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_24 = mod_consts[257];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_24 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_psycopg$pq$abc$$$class__5_Escaping_367;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_b482bc06b71197bd287a14f95b1cafcf->m_frame.f_lineno = 367;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_75, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_59 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_psycopg$pq$abc$$$class__5_Escaping_367);
        locals_psycopg$pq$abc$$$class__5_Escaping_367 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_psycopg$pq$abc$$$class__5_Escaping_367);
        locals_psycopg$pq$abc$$$class__5_Escaping_367 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 367;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_59);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b482bc06b71197bd287a14f95b1cafcf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b482bc06b71197bd287a14f95b1cafcf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b482bc06b71197bd287a14f95b1cafcf, exception_lineno);
    }



    assertFrameObject(frame_b482bc06b71197bd287a14f95b1cafcf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("psycopg.pq.abc", false);

    Py_INCREF(module_psycopg$pq$abc);
    return module_psycopg$pq$abc;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_psycopg$pq$abc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("psycopg$pq$abc", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
