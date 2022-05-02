/* Generated code for Python module 'visvis.text.freetype.ft_structs'
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

/* The "module_visvis$text$freetype$ft_structs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_visvis$text$freetype$ft_structs;
PyDictObject *moduledict_visvis$text$freetype$ft_structs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[211];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[211];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("visvis.text.freetype.ft_structs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 211; i++) {
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
void checkModuleConstants_visvis$text$freetype$ft_structs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 211; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_32f53683b90dff1123ccf9ee5c92b255;
static PyCodeObject *codeobj_a0a2c12c669926d351a50554e9f7a6d0;
static PyCodeObject *codeobj_71434c7d26fa761587ce32b8cc416385;
static PyCodeObject *codeobj_8da743f627ed20407ab0c98ca9ea8b4f;
static PyCodeObject *codeobj_bb54d558712f71d84c378952cf5b69b8;
static PyCodeObject *codeobj_f7da9a9b6961356e946ad8de52ce9dc7;
static PyCodeObject *codeobj_7d081cad1cc478f33034bc619d46d109;
static PyCodeObject *codeobj_14803e5d95fa812689ab3a6fbf7f603b;
static PyCodeObject *codeobj_d1de2a0fd91e35bf7254b24a5753e251;
static PyCodeObject *codeobj_f7e5fe0dd5ab896dfabf2bd7096fc2ff;
static PyCodeObject *codeobj_138cf2db88e16a535aa1c11fd8b7f64a;
static PyCodeObject *codeobj_978f50f028a19a2bcfccddc5d5b021cc;
static PyCodeObject *codeobj_72991c284b787215b782c6b454f17f9e;
static PyCodeObject *codeobj_5c2e0bbca61779b69f7967ced7379a7b;
static PyCodeObject *codeobj_42a393062d7cdca19a75ffc70f83b19f;
static PyCodeObject *codeobj_97539333dbb8f2e3481f421b6cb20169;
static PyCodeObject *codeobj_1ccb6c9dc70a1812859a73787caf930b;
static PyCodeObject *codeobj_9521411cf6871e66cbffa1faf94fa1b2;
static PyCodeObject *codeobj_a98aa90b312a1ae44a8db3164de9b07d;
static PyCodeObject *codeobj_7439ed9ae59c732e0b049ca9ceed8497;
static PyCodeObject *codeobj_48dd1b33acb6cfb9a9d686526d8c47c3;
static PyCodeObject *codeobj_4f0dfcc3e098325825ed3de4a3c20264;
static PyCodeObject *codeobj_701ec7b9c11bab0b4c9ba9a48e139083;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[207]); CHECK_OBJECT(module_filename_obj);
    codeobj_32f53683b90dff1123ccf9ee5c92b255 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[208], NULL, NULL, 0, 0, 0);
    codeobj_a0a2c12c669926d351a50554e9f7a6d0 = MAKE_CODEOBJECT(module_filename_obj, 116, CO_NOFREE, mod_consts[54], mod_consts[209], NULL, 0, 0, 0);
    codeobj_71434c7d26fa761587ce32b8cc416385 = MAKE_CODEOBJECT(module_filename_obj, 189, CO_NOFREE, mod_consts[68], mod_consts[209], NULL, 0, 0, 0);
    codeobj_8da743f627ed20407ab0c98ca9ea8b4f = MAKE_CODEOBJECT(module_filename_obj, 939, CO_NOFREE, mod_consts[201], mod_consts[209], NULL, 0, 0, 0);
    codeobj_bb54d558712f71d84c378952cf5b69b8 = MAKE_CODEOBJECT(module_filename_obj, 299, CO_NOFREE, mod_consts[85], mod_consts[209], NULL, 0, 0, 0);
    codeobj_f7da9a9b6961356e946ad8de52ce9dc7 = MAKE_CODEOBJECT(module_filename_obj, 328, CO_NOFREE, mod_consts[91], mod_consts[209], NULL, 0, 0, 0);
    codeobj_7d081cad1cc478f33034bc619d46d109 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_NOFREE, mod_consts[78], mod_consts[209], NULL, 0, 0, 0);
    codeobj_14803e5d95fa812689ab3a6fbf7f603b = MAKE_CODEOBJECT(module_filename_obj, 674, CO_NOFREE, mod_consts[152], mod_consts[209], NULL, 0, 0, 0);
    codeobj_d1de2a0fd91e35bf7254b24a5753e251 = MAKE_CODEOBJECT(module_filename_obj, 269, CO_NOFREE, mod_consts[81], mod_consts[209], NULL, 0, 0, 0);
    codeobj_f7e5fe0dd5ab896dfabf2bd7096fc2ff = MAKE_CODEOBJECT(module_filename_obj, 448, CO_NOFREE, mod_consts[114], mod_consts[209], NULL, 0, 0, 0);
    codeobj_138cf2db88e16a535aa1c11fd8b7f64a = MAKE_CODEOBJECT(module_filename_obj, 474, CO_NOFREE, mod_consts[121], mod_consts[209], NULL, 0, 0, 0);
    codeobj_978f50f028a19a2bcfccddc5d5b021cc = MAKE_CODEOBJECT(module_filename_obj, 359, CO_NOFREE, mod_consts[98], mod_consts[209], NULL, 0, 0, 0);
    codeobj_72991c284b787215b782c6b454f17f9e = MAKE_CODEOBJECT(module_filename_obj, 74, CO_NOFREE, mod_consts[38], mod_consts[209], NULL, 0, 0, 0);
    codeobj_5c2e0bbca61779b69f7967ced7379a7b = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[60], mod_consts[209], NULL, 0, 0, 0);
    codeobj_42a393062d7cdca19a75ffc70f83b19f = MAKE_CODEOBJECT(module_filename_obj, 855, CO_NOFREE, mod_consts[185], mod_consts[209], NULL, 0, 0, 0);
    codeobj_97539333dbb8f2e3481f421b6cb20169 = MAKE_CODEOBJECT(module_filename_obj, 397, CO_NOFREE, mod_consts[106], mod_consts[209], NULL, 0, 0, 0);
    codeobj_1ccb6c9dc70a1812859a73787caf930b = MAKE_CODEOBJECT(module_filename_obj, 835, CO_NOFREE, mod_consts[181], mod_consts[209], NULL, 0, 0, 0);
    codeobj_9521411cf6871e66cbffa1faf94fa1b2 = MAKE_CODEOBJECT(module_filename_obj, 894, CO_NOFREE, mod_consts[192], mod_consts[209], NULL, 0, 0, 0);
    codeobj_a98aa90b312a1ae44a8db3164de9b07d = MAKE_CODEOBJECT(module_filename_obj, 648, CO_NOFREE, mod_consts[149], mod_consts[209], NULL, 0, 0, 0);
    codeobj_7439ed9ae59c732e0b049ca9ceed8497 = MAKE_CODEOBJECT(module_filename_obj, 600, CO_NOFREE, mod_consts[142], mod_consts[209], NULL, 0, 0, 0);
    codeobj_48dd1b33acb6cfb9a9d686526d8c47c3 = MAKE_CODEOBJECT(module_filename_obj, 927, CO_NOFREE, mod_consts[198], mod_consts[209], NULL, 0, 0, 0);
    codeobj_4f0dfcc3e098325825ed3de4a3c20264 = MAKE_CODEOBJECT(module_filename_obj, 173, CO_NOFREE, mod_consts[66], mod_consts[209], NULL, 0, 0, 0);
    codeobj_701ec7b9c11bab0b4c9ba9a48e139083 = MAKE_CODEOBJECT(module_filename_obj, 88, CO_NOFREE, mod_consts[50], mod_consts[209], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


// The module function definitions.


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

function_impl_code functable_visvis$text$freetype$ft_structs[] = {

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

    function_impl_code *current = functable_visvis$text$freetype$ft_structs;
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

    if (offset > sizeof(functable_visvis$text$freetype$ft_structs) || offset < 0) {
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
        functable_visvis$text$freetype$ft_structs[offset],
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
        module_visvis$text$freetype$ft_structs,
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
PyObject *modulecode_visvis$text$freetype$ft_structs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("visvis.text.freetype.ft_structs");

    // Store the module for future use.
    module_visvis$text$freetype$ft_structs = module;

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
        PRINT_STRING("visvis.text.freetype.ft_structs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("visvis.text.freetype.ft_structs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("visvis.text.freetype.ft_structs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initvisvis$text$freetype$ft_structs\n");

    moduledict_visvis$text$freetype$ft_structs = MODULE_DICT(module_visvis$text$freetype$ft_structs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_visvis$text$freetype$ft_structs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_visvis$text$freetype$ft_structs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[210]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_visvis$text$freetype$ft_structs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_visvis$text$freetype$ft_structs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_visvis$text$freetype$ft_structs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_visvis$text$freetype$ft_structs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_visvis$text$freetype$ft_structs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
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
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_32f53683b90dff1123ccf9ee5c92b255;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_72991c284b787215b782c6b454f17f9e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_72991c284b787215b782c6b454f17f9e_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88 = NULL;
    struct Nuitka_FrameObject *frame_701ec7b9c11bab0b4c9ba9a48e139083_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116 = NULL;
    struct Nuitka_FrameObject *frame_a0a2c12c669926d351a50554e9f7a6d0_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150 = NULL;
    struct Nuitka_FrameObject *frame_5c2e0bbca61779b69f7967ced7379a7b_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173 = NULL;
    struct Nuitka_FrameObject *frame_4f0dfcc3e098325825ed3de4a3c20264_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189 = NULL;
    struct Nuitka_FrameObject *frame_71434c7d26fa761587ce32b8cc416385_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_71434c7d26fa761587ce32b8cc416385_7 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245 = NULL;
    struct Nuitka_FrameObject *frame_7d081cad1cc478f33034bc619d46d109_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d081cad1cc478f33034bc619d46d109_8 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269 = NULL;
    struct Nuitka_FrameObject *frame_d1de2a0fd91e35bf7254b24a5753e251_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299 = NULL;
    struct Nuitka_FrameObject *frame_bb54d558712f71d84c378952cf5b69b8_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb54d558712f71d84c378952cf5b69b8_10 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328 = NULL;
    struct Nuitka_FrameObject *frame_f7da9a9b6961356e946ad8de52ce9dc7_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359 = NULL;
    struct Nuitka_FrameObject *frame_978f50f028a19a2bcfccddc5d5b021cc_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397 = NULL;
    struct Nuitka_FrameObject *frame_97539333dbb8f2e3481f421b6cb20169_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_97539333dbb8f2e3481f421b6cb20169_13 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448 = NULL;
    struct Nuitka_FrameObject *frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14 = NULL;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474 = NULL;
    struct Nuitka_FrameObject *frame_138cf2db88e16a535aa1c11fd8b7f64a_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    static struct Nuitka_FrameObject *cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15 = NULL;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600 = NULL;
    struct Nuitka_FrameObject *frame_7439ed9ae59c732e0b049ca9ceed8497_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16 = NULL;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648 = NULL;
    struct Nuitka_FrameObject *frame_a98aa90b312a1ae44a8db3164de9b07d_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17 = NULL;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674 = NULL;
    struct Nuitka_FrameObject *frame_14803e5d95fa812689ab3a6fbf7f603b_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    static struct Nuitka_FrameObject *cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18 = NULL;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835 = NULL;
    struct Nuitka_FrameObject *frame_1ccb6c9dc70a1812859a73787caf930b_19;
    NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1ccb6c9dc70a1812859a73787caf930b_19 = NULL;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855 = NULL;
    struct Nuitka_FrameObject *frame_42a393062d7cdca19a75ffc70f83b19f_20;
    NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
    static struct Nuitka_FrameObject *cache_frame_42a393062d7cdca19a75ffc70f83b19f_20 = NULL;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894 = NULL;
    struct Nuitka_FrameObject *frame_9521411cf6871e66cbffa1faf94fa1b2_21;
    NUITKA_MAY_BE_UNUSED char const *type_description_21 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21 = NULL;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927 = NULL;
    struct Nuitka_FrameObject *frame_48dd1b33acb6cfb9a9d686526d8c47c3_22;
    NUITKA_MAY_BE_UNUSED char const *type_description_22 = NULL;
    static struct Nuitka_FrameObject *cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22 = NULL;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939 = NULL;
    struct Nuitka_FrameObject *frame_8da743f627ed20407ab0c98ca9ea8b4f_23;
    NUITKA_MAY_BE_UNUSED char const *type_description_23 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23 = NULL;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_32f53683b90dff1123ccf9ee5c92b255 = MAKE_MODULE_FRAME(codeobj_32f53683b90dff1123ccf9ee5c92b255, module_visvis$text$freetype$ft_structs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_32f53683b90dff1123ccf9ee5c92b255);
    assert(Py_REFCNT(frame_32f53683b90dff1123ccf9ee5c92b255) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_visvis$text$freetype$ft_structs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[9];
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 62;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

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
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[10],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[10]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[11],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[11]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[12],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[12]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[13],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[13]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[14],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[14]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[15],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[15]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[16],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[16]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[17],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[17]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[18],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[18]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[19];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_visvis$text$freetype$ft_structs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[20];
        tmp_level_value_2 = mod_consts[9];
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 63;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[21],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[21]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[22],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[22]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[23],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[23]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[24],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[24]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[25],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[25]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[26],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[26]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[27],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[27]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[28],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[28]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[29],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[29]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_19 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[30],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[30]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_20 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[31],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[31]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_21 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[32],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[32]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_22 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[33],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[33]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_23 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[34],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[34]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_24 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_visvis$text$freetype$ft_structs,
                mod_consts[35],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[35]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_29);
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
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_assign_source_30 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_31 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[36];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 74;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[37]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[38];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 74;
        tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[39]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[41];
        tmp_getattr_default_1 = mod_consts[42];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[41]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 74;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_72991c284b787215b782c6b454f17f9e_2)) {
            Py_XDECREF(cache_frame_72991c284b787215b782c6b454f17f9e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_72991c284b787215b782c6b454f17f9e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_72991c284b787215b782c6b454f17f9e_2 = MAKE_FUNCTION_FRAME(codeobj_72991c284b787215b782c6b454f17f9e, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_72991c284b787215b782c6b454f17f9e_2->m_type_description == NULL);
        frame_72991c284b787215b782c6b454f17f9e_2 = cache_frame_72991c284b787215b782c6b454f17f9e_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_72991c284b787215b782c6b454f17f9e_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_72991c284b787215b782c6b454f17f9e_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyList_New(0);
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_72991c284b787215b782c6b454f17f9e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_72991c284b787215b782c6b454f17f9e_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_72991c284b787215b782c6b454f17f9e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_72991c284b787215b782c6b454f17f9e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_72991c284b787215b782c6b454f17f9e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_72991c284b787215b782c6b454f17f9e_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_72991c284b787215b782c6b454f17f9e_2 == cache_frame_72991c284b787215b782c6b454f17f9e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_72991c284b787215b782c6b454f17f9e_2);
            cache_frame_72991c284b787215b782c6b454f17f9e_2 = NULL;
        }

        assertFrameObject(frame_72991c284b787215b782c6b454f17f9e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[38];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 74;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_36 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74);
        locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74);
        locals_visvis$text$freetype$ft_structs$$$class__1_FT_LibraryRec_74 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 74;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_36);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 81;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_38);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_assign_source_39 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[36];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 88;

        goto try_except_handler_6;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[37]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[50];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 88;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[39]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_value_2 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[41];
        tmp_getattr_default_2 = mod_consts[42];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[41]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 88;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3)) {
            Py_XDECREF(cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3 = MAKE_FUNCTION_FRAME(codeobj_701ec7b9c11bab0b4c9ba9a48e139083, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3->m_type_description == NULL);
        frame_701ec7b9c11bab0b4c9ba9a48e139083_3 = cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_701ec7b9c11bab0b4c9ba9a48e139083_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_701ec7b9c11bab0b4c9ba9a48e139083_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = mod_consts[52];
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[24]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_tuple_element_9;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_9 = mod_consts[53];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[24]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_701ec7b9c11bab0b4c9ba9a48e139083_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_701ec7b9c11bab0b4c9ba9a48e139083_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_701ec7b9c11bab0b4c9ba9a48e139083_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_701ec7b9c11bab0b4c9ba9a48e139083_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_701ec7b9c11bab0b4c9ba9a48e139083_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_701ec7b9c11bab0b4c9ba9a48e139083_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_701ec7b9c11bab0b4c9ba9a48e139083_3 == cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3);
            cache_frame_701ec7b9c11bab0b4c9ba9a48e139083_3 = NULL;
        }

        assertFrameObject(frame_701ec7b9c11bab0b4c9ba9a48e139083_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[50];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 88;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_45 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88);
        locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88);
        locals_visvis$text$freetype$ft_structs$$$class__2_FT_Vector_88 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 88;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_45);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        tmp_assign_source_47 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[36];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[9];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 116;

        goto try_except_handler_9;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[37]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[37]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        tmp_tuple_element_12 = mod_consts[54];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_12 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 116;
        tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[39]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_value_3 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[41];
        tmp_getattr_default_3 = mod_consts[42];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        tmp_right_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[41]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_value_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 116;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_52;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_11;
        }
        if (isFrameUnusable(cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4)) {
            Py_XDECREF(cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4 = MAKE_FUNCTION_FRAME(codeobj_a0a2c12c669926d351a50554e9f7a6d0, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4->m_type_description == NULL);
        frame_a0a2c12c669926d351a50554e9f7a6d0_4 = cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a0a2c12c669926d351a50554e9f7a6d0_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a0a2c12c669926d351a50554e9f7a6d0_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_14;
            tmp_tuple_element_14 = mod_consts[56];
            tmp_list_element_2 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[24]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_tuple_element_17;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_15 = mod_consts[57];
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[24]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_16 = mod_consts[58];
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[24]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_16);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_17 = mod_consts[59];
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[24]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "o";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_17);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a0a2c12c669926d351a50554e9f7a6d0_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a0a2c12c669926d351a50554e9f7a6d0_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0a2c12c669926d351a50554e9f7a6d0_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0a2c12c669926d351a50554e9f7a6d0_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0a2c12c669926d351a50554e9f7a6d0_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0a2c12c669926d351a50554e9f7a6d0_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a0a2c12c669926d351a50554e9f7a6d0_4 == cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4);
            cache_frame_a0a2c12c669926d351a50554e9f7a6d0_4 = NULL;
        }

        assertFrameObject(frame_a0a2c12c669926d351a50554e9f7a6d0_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_11;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_18 = mod_consts[54];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_18 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 116;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_53 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116);
        locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116);
        locals_visvis$text$freetype$ft_structs$$$class__3_FT_BBox_116 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 116;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_53);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        tmp_assign_source_55 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_19;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[36];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_16 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[9];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 150;

        goto try_except_handler_12;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[37]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[37]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        tmp_tuple_element_20 = mod_consts[60];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_20 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 150;
        tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[39]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_value_4 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[41];
        tmp_getattr_default_4 = mod_consts[42];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        tmp_right_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_value_4, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[41]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_value_4, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_value_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 150;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_60;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[60];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_14;
        }
        if (isFrameUnusable(cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5)) {
            Py_XDECREF(cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5 = MAKE_FUNCTION_FRAME(codeobj_5c2e0bbca61779b69f7967ced7379a7b, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5->m_type_description == NULL);
        frame_5c2e0bbca61779b69f7967ced7379a7b_5 = cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5c2e0bbca61779b69f7967ced7379a7b_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5c2e0bbca61779b69f7967ced7379a7b_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_22;
            tmp_tuple_element_22 = mod_consts[62];
            tmp_list_element_3 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[23]);

            if (tmp_tuple_element_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_tuple_element_22 == NULL)) {
                        tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_tuple_element_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    Py_INCREF(tmp_tuple_element_22);
                } else {
                    goto tuple_build_exception_11;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_23 = mod_consts[63];
                tmp_list_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[23]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 164;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_23);
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_24 = mod_consts[64];
                tmp_list_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[23]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_24);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_25 = mod_consts[65];
                tmp_list_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[23]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_25 == NULL)) {
                            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_25);
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5c2e0bbca61779b69f7967ced7379a7b_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5c2e0bbca61779b69f7967ced7379a7b_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5c2e0bbca61779b69f7967ced7379a7b_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5c2e0bbca61779b69f7967ced7379a7b_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5c2e0bbca61779b69f7967ced7379a7b_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5c2e0bbca61779b69f7967ced7379a7b_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5c2e0bbca61779b69f7967ced7379a7b_5 == cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5);
            cache_frame_5c2e0bbca61779b69f7967ced7379a7b_5 = NULL;
        }

        assertFrameObject(frame_5c2e0bbca61779b69f7967ced7379a7b_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_14;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_9 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_26 = mod_consts[60];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_26 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 150;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_61 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150);
        locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150);
        locals_visvis$text$freetype$ft_structs$$$class__4_FT_Matrix_150 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 150;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_61);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        tmp_assign_source_63 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_64 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_25;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[36];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_21 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[9];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 173;

        goto try_except_handler_15;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[37]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[37]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        tmp_tuple_element_28 = mod_consts[66];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_28 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 173;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[39]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_value_5 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[41];
        tmp_getattr_default_5 = mod_consts[42];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        tmp_right_value_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_value_5, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[41]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_right_value_5, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_right_value_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 173;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_68;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_17;
        }
        if (isFrameUnusable(cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6)) {
            Py_XDECREF(cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6 = MAKE_FUNCTION_FRAME(codeobj_4f0dfcc3e098325825ed3de4a3c20264, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6->m_type_description == NULL);
        frame_4f0dfcc3e098325825ed3de4a3c20264_6 = cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_4f0dfcc3e098325825ed3de4a3c20264_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_4f0dfcc3e098325825ed3de4a3c20264_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_30;
            tmp_tuple_element_30 = mod_consts[52];
            tmp_list_element_4 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[28]);

            if (tmp_tuple_element_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_tuple_element_30 == NULL)) {
                        tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                    }

                    if (tmp_tuple_element_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    Py_INCREF(tmp_tuple_element_30);
                } else {
                    goto tuple_build_exception_16;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_30);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_tuple_element_31;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_31 = mod_consts[53];
                tmp_list_element_4 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[28]);

                if (tmp_tuple_element_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[28]);

                        if (unlikely(tmp_tuple_element_31 == NULL)) {
                            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                        }

                        if (tmp_tuple_element_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 182;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_31);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_31);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4f0dfcc3e098325825ed3de4a3c20264_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4f0dfcc3e098325825ed3de4a3c20264_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4f0dfcc3e098325825ed3de4a3c20264_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4f0dfcc3e098325825ed3de4a3c20264_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4f0dfcc3e098325825ed3de4a3c20264_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4f0dfcc3e098325825ed3de4a3c20264_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_4f0dfcc3e098325825ed3de4a3c20264_6 == cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6);
            cache_frame_4f0dfcc3e098325825ed3de4a3c20264_6 = NULL;
        }

        assertFrameObject(frame_4f0dfcc3e098325825ed3de4a3c20264_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
            assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_17;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_11 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_32 = mod_consts[66];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_32 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 173;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_69 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173);
        locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173);
        locals_visvis$text$freetype$ft_structs$$$class__5_FT_UnitVector_173 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 173;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_69);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_33;
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        tmp_assign_source_71 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_33);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_72 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_31;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[36];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_26 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[9];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 189;

        goto try_except_handler_18;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_27 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[37]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_28 = tmp_class_creation_6__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[37]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        tmp_tuple_element_34 = mod_consts[68];
        tmp_args_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_34 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 189;
        tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_29 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[39]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_value_6 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[41];
        tmp_getattr_default_6 = mod_consts[42];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        tmp_right_value_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_right_value_6, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[41]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_right_value_6, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_right_value_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_6, tmp_right_value_6);
        Py_DECREF(tmp_right_value_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 189;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_76;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_20;
        }
        if (isFrameUnusable(cache_frame_71434c7d26fa761587ce32b8cc416385_7)) {
            Py_XDECREF(cache_frame_71434c7d26fa761587ce32b8cc416385_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_71434c7d26fa761587ce32b8cc416385_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_71434c7d26fa761587ce32b8cc416385_7 = MAKE_FUNCTION_FRAME(codeobj_71434c7d26fa761587ce32b8cc416385, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_71434c7d26fa761587ce32b8cc416385_7->m_type_description == NULL);
        frame_71434c7d26fa761587ce32b8cc416385_7 = cache_frame_71434c7d26fa761587ce32b8cc416385_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_71434c7d26fa761587ce32b8cc416385_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_71434c7d26fa761587ce32b8cc416385_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_36;
            tmp_tuple_element_36 = mod_consts[70];
            tmp_list_element_5 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[16]);

            if (tmp_tuple_element_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_tuple_element_36 == NULL)) {
                        tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_tuple_element_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    Py_INCREF(tmp_tuple_element_36);
                } else {
                    goto tuple_build_exception_19;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dictset_value = PyList_New(8);
            {
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_37 = mod_consts[71];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_37);
                tmp_tuple_element_37 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[16]);

                if (tmp_tuple_element_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_37 == NULL)) {
                            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_tuple_element_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 232;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_37);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_37);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_tuple_element_38 = mod_consts[72];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[16]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_38 == NULL)) {
                            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_tuple_element_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 233;
                            type_description_2 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_tuple_element_39 = mod_consts[73];
                tmp_list_element_5 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_13;
                    PyObject *tmp_args_element_value_2;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_39);
                    tmp_called_value_13 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[10]);

                    if (tmp_called_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_13 == NULL)) {
                                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_13 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 235;
                                type_description_2 = "o";
                                goto tuple_build_exception_22;
                            }
                            Py_INCREF(tmp_called_value_13);
                        } else {
                            goto tuple_build_exception_22;
                        }
                    }

                    tmp_args_element_value_2 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[14]);

                    if (tmp_args_element_value_2 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[14]);

                            if (unlikely(tmp_args_element_value_2 == NULL)) {
                                tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                            }

                            if (tmp_args_element_value_2 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_13);

                                exception_lineno = 235;
                                type_description_2 = "o";
                                goto tuple_build_exception_22;
                            }
                            Py_INCREF(tmp_args_element_value_2);
                        } else {
                            goto tuple_build_exception_22;
                        }
                    }

                    frame_71434c7d26fa761587ce32b8cc416385_7->m_frame.f_lineno = 235;
                    tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_2);
                    Py_DECREF(tmp_called_value_13);
                    Py_DECREF(tmp_args_element_value_2);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 235;
                        type_description_2 = "o";
                        goto tuple_build_exception_22;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
                tmp_tuple_element_40 = mod_consts[74];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_40);
                tmp_tuple_element_40 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[15]);

                if (tmp_tuple_element_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_tuple_element_40 == NULL)) {
                            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_tuple_element_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 236;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_tuple_element_40);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_40);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_5);
                tmp_tuple_element_41 = mod_consts[75];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_41);
                tmp_tuple_element_41 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[14]);

                if (tmp_tuple_element_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[14]);

                        if (unlikely(tmp_tuple_element_41 == NULL)) {
                            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                        }

                        if (tmp_tuple_element_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 237;
                            type_description_2 = "o";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_41);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_41);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_5);
                tmp_tuple_element_42 = mod_consts[76];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_42);
                tmp_tuple_element_42 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[13]);

                if (tmp_tuple_element_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_tuple_element_42 == NULL)) {
                            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                        }

                        if (tmp_tuple_element_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_tuple_element_42);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_42);
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_5);
                tmp_tuple_element_43 = mod_consts[77];
                tmp_list_element_5 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_43);
                tmp_tuple_element_43 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[12]);

                if (tmp_tuple_element_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_43 == NULL)) {
                            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 239;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_tuple_element_43);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_43);
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_71434c7d26fa761587ce32b8cc416385_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_71434c7d26fa761587ce32b8cc416385_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_71434c7d26fa761587ce32b8cc416385_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_71434c7d26fa761587ce32b8cc416385_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_71434c7d26fa761587ce32b8cc416385_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_71434c7d26fa761587ce32b8cc416385_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_71434c7d26fa761587ce32b8cc416385_7 == cache_frame_71434c7d26fa761587ce32b8cc416385_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_71434c7d26fa761587ce32b8cc416385_7);
            cache_frame_71434c7d26fa761587ce32b8cc416385_7 = NULL;
        }

        assertFrameObject(frame_71434c7d26fa761587ce32b8cc416385_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_20;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
            assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_20;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_14 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_44 = mod_consts[68];
            tmp_args_value_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_44 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_44);
            tmp_tuple_element_44 = locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 189;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_77 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189);
        locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189);
        locals_visvis$text$freetype$ft_structs$$$class__6_FT_Bitmap_189 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 189;
        goto try_except_handler_18;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_77);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_45;
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_45 == NULL)) {
            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        tmp_assign_source_79 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_45);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_80 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_value_7;
        bool tmp_condition_result_37;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        tmp_key_value_19 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[36];
        tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_metaclass_value_7 == NULL) {
            tmp_metaclass_value_7 = Py_None;
        }
        assert(!(tmp_metaclass_value_7 == NULL));
        Py_INCREF(tmp_metaclass_value_7);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_31 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[9];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 245;

        goto try_except_handler_21;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_32 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[37]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_33 = tmp_class_creation_7__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[37]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        tmp_tuple_element_46 = mod_consts[78];
        tmp_args_value_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_46 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 245;
        tmp_assign_source_83 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_34 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[39]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_value_7 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[41];
        tmp_getattr_default_7 = mod_consts[42];
        tmp_tuple_element_47 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        tmp_right_value_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_right_value_7, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_35 == NULL));
            tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[41]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_right_value_7, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_right_value_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 245;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_84;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_23;
        }
        if (isFrameUnusable(cache_frame_7d081cad1cc478f33034bc619d46d109_8)) {
            Py_XDECREF(cache_frame_7d081cad1cc478f33034bc619d46d109_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7d081cad1cc478f33034bc619d46d109_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7d081cad1cc478f33034bc619d46d109_8 = MAKE_FUNCTION_FRAME(codeobj_7d081cad1cc478f33034bc619d46d109, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7d081cad1cc478f33034bc619d46d109_8->m_type_description == NULL);
        frame_7d081cad1cc478f33034bc619d46d109_8 = cache_frame_7d081cad1cc478f33034bc619d46d109_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7d081cad1cc478f33034bc619d46d109_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7d081cad1cc478f33034bc619d46d109_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_48;
            tmp_tuple_element_48 = mod_consts[80];
            tmp_list_element_6 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_16;
                PyObject *tmp_args_element_value_3;
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_48);
                tmp_called_value_16 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[10]);

                if (tmp_called_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_called_value_16 == NULL)) {
                            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_called_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 252;
                            type_description_2 = "o";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_called_value_16);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                tmp_args_element_value_3 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[29]);

                if (tmp_args_element_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_args_element_value_3 == NULL)) {
                            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_args_element_value_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_16);

                            exception_lineno = 252;
                            type_description_2 = "o";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_args_element_value_3);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                frame_7d081cad1cc478f33034bc619d46d109_8->m_frame.f_lineno = 252;
                tmp_tuple_element_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_3);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_3);
                if (tmp_tuple_element_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "o";
                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_48);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_tuple_element_49;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_49 = mod_consts[53];
                tmp_list_element_6 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_49);
                tmp_tuple_element_49 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[32]);

                if (tmp_tuple_element_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_49 == NULL)) {
                            tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_2 = "o";
                            goto tuple_build_exception_29;
                        }
                        Py_INCREF(tmp_tuple_element_49);
                    } else {
                        goto tuple_build_exception_29;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_49);
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7d081cad1cc478f33034bc619d46d109_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7d081cad1cc478f33034bc619d46d109_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7d081cad1cc478f33034bc619d46d109_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7d081cad1cc478f33034bc619d46d109_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7d081cad1cc478f33034bc619d46d109_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7d081cad1cc478f33034bc619d46d109_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7d081cad1cc478f33034bc619d46d109_8 == cache_frame_7d081cad1cc478f33034bc619d46d109_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7d081cad1cc478f33034bc619d46d109_8);
            cache_frame_7d081cad1cc478f33034bc619d46d109_8 = NULL;
        }

        assertFrameObject(frame_7d081cad1cc478f33034bc619d46d109_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_23;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
            assert(tmp_condition_result_42 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_23;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_17 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_50 = mod_consts[78];
            tmp_args_value_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_50 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 245;
            tmp_assign_source_86 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_85 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245);
        locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245);
        locals_visvis$text$freetype$ft_structs$$$class__7_FT_Data_245 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 245;
        goto try_except_handler_21;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_85);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_51;
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_51 == NULL)) {
            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        tmp_assign_source_87 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_51);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_88 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_metaclass_value_8;
        bool tmp_condition_result_43;
        PyObject *tmp_key_value_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        tmp_key_value_22 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_22, tmp_key_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_value_23 = mod_consts[36];
        tmp_metaclass_value_8 = DICT_GET_ITEM0(tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_metaclass_value_8 == NULL) {
            tmp_metaclass_value_8 = Py_None;
        }
        assert(!(tmp_metaclass_value_8 == NULL));
        Py_INCREF(tmp_metaclass_value_8);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        tmp_condition_result_44 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_36 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[9];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_36, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_90 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_45;
        PyObject *tmp_key_value_24;
        PyObject *tmp_dict_arg_value_24;
        tmp_key_value_24 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_24, tmp_key_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 269;

        goto try_except_handler_24;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_37 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[37]);
        tmp_condition_result_46 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_38 = tmp_class_creation_8__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[37]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        tmp_tuple_element_52 = mod_consts[81];
        tmp_args_value_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_52 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 269;
        tmp_assign_source_91 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_91;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_39 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[39]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_value_8 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[41];
        tmp_getattr_default_8 = mod_consts[42];
        tmp_tuple_element_53 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        tmp_right_value_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_right_value_8, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[41]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM(tmp_right_value_8, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_right_value_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_8, tmp_right_value_8);
        Py_DECREF(tmp_right_value_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 269;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_92;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_26;
        }
        if (isFrameUnusable(cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9)) {
            Py_XDECREF(cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9 = MAKE_FUNCTION_FRAME(codeobj_d1de2a0fd91e35bf7254b24a5753e251, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9->m_type_description == NULL);
        frame_d1de2a0fd91e35bf7254b24a5753e251_9 = cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d1de2a0fd91e35bf7254b24a5753e251_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d1de2a0fd91e35bf7254b24a5753e251_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_7;
            PyObject *tmp_tuple_element_54;
            tmp_tuple_element_54 = mod_consts[83];
            tmp_list_element_7 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[12]);

            if (tmp_tuple_element_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_tuple_element_54 == NULL)) {
                        tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_tuple_element_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    Py_INCREF(tmp_tuple_element_54);
                } else {
                    goto tuple_build_exception_31;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_list_element_7);
            goto frame_exception_exit_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_tuple_element_55;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_7);
                tmp_tuple_element_55 = mod_consts[84];
                tmp_list_element_7 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_55);
                tmp_tuple_element_55 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[26]);

                if (tmp_tuple_element_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_55 == NULL)) {
                            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_tuple_element_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto tuple_build_exception_32;
                        }
                        Py_INCREF(tmp_tuple_element_55);
                    } else {
                        goto tuple_build_exception_32;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_55);
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_7);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d1de2a0fd91e35bf7254b24a5753e251_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d1de2a0fd91e35bf7254b24a5753e251_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d1de2a0fd91e35bf7254b24a5753e251_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d1de2a0fd91e35bf7254b24a5753e251_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d1de2a0fd91e35bf7254b24a5753e251_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d1de2a0fd91e35bf7254b24a5753e251_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d1de2a0fd91e35bf7254b24a5753e251_9 == cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9);
            cache_frame_d1de2a0fd91e35bf7254b24a5753e251_9 = NULL;
        }

        assertFrameObject(frame_d1de2a0fd91e35bf7254b24a5753e251_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_26;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
            assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_26;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_19 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_56 = mod_consts[81];
            tmp_args_value_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_56);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_56 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_56);
            tmp_tuple_element_56 = locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_56);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 269;
            tmp_assign_source_94 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_93 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_93);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269);
        locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269);
        locals_visvis$text$freetype$ft_structs$$$class__8_FT_Generic_269 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 269;
        goto try_except_handler_24;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_93);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_57;
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_57 == NULL)) {
            tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        tmp_assign_source_95 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_57);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_96 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_value_9;
        bool tmp_condition_result_49;
        PyObject *tmp_key_value_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        tmp_key_value_25 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_25, tmp_key_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_value_26 = mod_consts[36];
        tmp_metaclass_value_9 = DICT_GET_ITEM0(tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_metaclass_value_9 == NULL) {
            tmp_metaclass_value_9 = Py_None;
        }
        assert(!(tmp_metaclass_value_9 == NULL));
        Py_INCREF(tmp_metaclass_value_9);
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        tmp_condition_result_50 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_41 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[9];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_key_value_27;
        PyObject *tmp_dict_arg_value_27;
        tmp_key_value_27 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_27, tmp_key_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 299;

        goto try_except_handler_27;
    }
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_42 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[37]);
        tmp_condition_result_52 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_43 = tmp_class_creation_9__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[37]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        tmp_tuple_element_58 = mod_consts[85];
        tmp_args_value_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_58);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_58 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_58);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 299;
        tmp_assign_source_99 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_53;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_44 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[39]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_value_9 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[41];
        tmp_getattr_default_9 = mod_consts[42];
        tmp_tuple_element_59 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        tmp_right_value_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_right_value_9, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_45 == NULL));
            tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[41]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_right_value_9, 1, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_right_value_9);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_9, tmp_right_value_9);
        Py_DECREF(tmp_right_value_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 299;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_100;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_29;
        }
        if (isFrameUnusable(cache_frame_bb54d558712f71d84c378952cf5b69b8_10)) {
            Py_XDECREF(cache_frame_bb54d558712f71d84c378952cf5b69b8_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bb54d558712f71d84c378952cf5b69b8_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bb54d558712f71d84c378952cf5b69b8_10 = MAKE_FUNCTION_FRAME(codeobj_bb54d558712f71d84c378952cf5b69b8, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_bb54d558712f71d84c378952cf5b69b8_10->m_type_description == NULL);
        frame_bb54d558712f71d84c378952cf5b69b8_10 = cache_frame_bb54d558712f71d84c378952cf5b69b8_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_bb54d558712f71d84c378952cf5b69b8_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_bb54d558712f71d84c378952cf5b69b8_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_tuple_element_60;
            tmp_tuple_element_60 = mod_consts[87];
            tmp_list_element_8 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[30]);

            if (tmp_tuple_element_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_tuple_element_60 == NULL)) {
                        tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                    }

                    if (tmp_tuple_element_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 318;
                        type_description_2 = "o";
                        goto tuple_build_exception_34;
                    }
                    Py_INCREF(tmp_tuple_element_60);
                } else {
                    goto tuple_build_exception_34;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_60);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_list_element_8);
            goto frame_exception_exit_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_dictset_value = PyList_New(5);
            {
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_tuple_element_64;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_8);
                tmp_tuple_element_61 = mod_consts[71];
                tmp_list_element_8 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_61);
                tmp_tuple_element_61 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[30]);

                if (tmp_tuple_element_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_61 == NULL)) {
                            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 319;
                            type_description_2 = "o";
                            goto tuple_build_exception_35;
                        }
                        Py_INCREF(tmp_tuple_element_61);
                    } else {
                        goto tuple_build_exception_35;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_61);
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_8);
                tmp_tuple_element_62 = mod_consts[88];
                tmp_list_element_8 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_62);
                tmp_tuple_element_62 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[24]);

                if (tmp_tuple_element_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_62 == NULL)) {
                            tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 320;
                            type_description_2 = "o";
                            goto tuple_build_exception_36;
                        }
                        Py_INCREF(tmp_tuple_element_62);
                    } else {
                        goto tuple_build_exception_36;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_62);
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_8);
                tmp_tuple_element_63 = mod_consts[89];
                tmp_list_element_8 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_63);
                tmp_tuple_element_63 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[24]);

                if (tmp_tuple_element_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_63 == NULL)) {
                            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 321;
                            type_description_2 = "o";
                            goto tuple_build_exception_37;
                        }
                        Py_INCREF(tmp_tuple_element_63);
                    } else {
                        goto tuple_build_exception_37;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_63);
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_8);
                tmp_tuple_element_64 = mod_consts[90];
                tmp_list_element_8 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_64);
                tmp_tuple_element_64 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[24]);

                if (tmp_tuple_element_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_64 == NULL)) {
                            tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 322;
                            type_description_2 = "o";
                            goto tuple_build_exception_38;
                        }
                        Py_INCREF(tmp_tuple_element_64);
                    } else {
                        goto tuple_build_exception_38;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_64);
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_8);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_10;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bb54d558712f71d84c378952cf5b69b8_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bb54d558712f71d84c378952cf5b69b8_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb54d558712f71d84c378952cf5b69b8_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb54d558712f71d84c378952cf5b69b8_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb54d558712f71d84c378952cf5b69b8_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb54d558712f71d84c378952cf5b69b8_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_bb54d558712f71d84c378952cf5b69b8_10 == cache_frame_bb54d558712f71d84c378952cf5b69b8_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_bb54d558712f71d84c378952cf5b69b8_10);
            cache_frame_bb54d558712f71d84c378952cf5b69b8_10 = NULL;
        }

        assertFrameObject(frame_bb54d558712f71d84c378952cf5b69b8_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_29;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
            assert(tmp_condition_result_54 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_29;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_21 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_65 = mod_consts[85];
            tmp_args_value_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_65 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_65);
            tmp_tuple_element_65 = locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 299;
            tmp_assign_source_102 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_101 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299);
        locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299);
        locals_visvis$text$freetype$ft_structs$$$class__9_FT_Bitmap_Size_299 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 299;
        goto try_except_handler_27;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_101);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_tuple_element_66;
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_66 == NULL)) {
            tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        tmp_assign_source_103 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_66);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_104 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = PyDict_New();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_metaclass_value_10;
        bool tmp_condition_result_55;
        PyObject *tmp_key_value_28;
        PyObject *tmp_dict_arg_value_28;
        PyObject *tmp_dict_arg_value_29;
        PyObject *tmp_key_value_29;
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        tmp_key_value_28 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_28, tmp_key_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_value_29 = mod_consts[36];
        tmp_metaclass_value_10 = DICT_GET_ITEM0(tmp_dict_arg_value_29, tmp_key_value_29);
        if (tmp_metaclass_value_10 == NULL) {
            tmp_metaclass_value_10 = Py_None;
        }
        assert(!(tmp_metaclass_value_10 == NULL));
        Py_INCREF(tmp_metaclass_value_10);
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        tmp_condition_result_56 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_46 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[9];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_46, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_20:;
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_106 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_106;
    }
    {
        bool tmp_condition_result_57;
        PyObject *tmp_key_value_30;
        PyObject *tmp_dict_arg_value_30;
        tmp_key_value_30 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_30, tmp_key_value_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 328;

        goto try_except_handler_30;
    }
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_47 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_47, mod_consts[37]);
        tmp_condition_result_58 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_48 = tmp_class_creation_10__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[37]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        tmp_tuple_element_67 = mod_consts[91];
        tmp_args_value_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_67);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_67 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_67);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 328;
        tmp_assign_source_107 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_49 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_49, mod_consts[39]);
        tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_value_10 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[41];
        tmp_getattr_default_10 = mod_consts[42];
        tmp_tuple_element_68 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        tmp_right_value_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_right_value_10, 0, tmp_tuple_element_68);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_50 == NULL));
            tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[41]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_tuple_element_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM(tmp_right_value_10, 1, tmp_tuple_element_68);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_39:;
        Py_DECREF(tmp_right_value_10);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_10, tmp_right_value_10);
        Py_DECREF(tmp_right_value_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_30;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 328;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_30;
    }
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_108;
    }
    branch_end_38:;
    {
        PyObject *tmp_assign_source_109;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_32;
        }
        if (isFrameUnusable(cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11)) {
            Py_XDECREF(cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11 = MAKE_FUNCTION_FRAME(codeobj_f7da9a9b6961356e946ad8de52ce9dc7, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11->m_type_description == NULL);
        frame_f7da9a9b6961356e946ad8de52ce9dc7_11 = cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f7da9a9b6961356e946ad8de52ce9dc7_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f7da9a9b6961356e946ad8de52ce9dc7_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_9;
            PyObject *tmp_tuple_element_69;
            tmp_tuple_element_69 = mod_consts[93];
            tmp_list_element_9 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[12]);

            if (tmp_tuple_element_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_tuple_element_69 == NULL)) {
                        tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_tuple_element_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 345;
                        type_description_2 = "o";
                        goto tuple_build_exception_40;
                    }
                    Py_INCREF(tmp_tuple_element_69);
                } else {
                    goto tuple_build_exception_40;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_69);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_9);
            goto frame_exception_exit_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_70;
                PyObject *tmp_tuple_element_71;
                PyObject *tmp_tuple_element_72;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_9);
                tmp_tuple_element_70 = mod_consts[94];
                tmp_list_element_9 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_70);
                tmp_tuple_element_70 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[27]);

                if (tmp_tuple_element_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_tuple_element_70 == NULL)) {
                            tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_tuple_element_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 346;
                            type_description_2 = "o";
                            goto tuple_build_exception_41;
                        }
                        Py_INCREF(tmp_tuple_element_70);
                    } else {
                        goto tuple_build_exception_41;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_70);
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_9);
                tmp_tuple_element_71 = mod_consts[95];
                tmp_list_element_9 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_71);
                tmp_tuple_element_71 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[31]);

                if (tmp_tuple_element_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_71 == NULL)) {
                            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 347;
                            type_description_2 = "o";
                            goto tuple_build_exception_42;
                        }
                        Py_INCREF(tmp_tuple_element_71);
                    } else {
                        goto tuple_build_exception_42;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_71);
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_9);
                tmp_tuple_element_72 = mod_consts[96];
                tmp_list_element_9 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_72);
                tmp_tuple_element_72 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[31]);

                if (tmp_tuple_element_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_72 == NULL)) {
                            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 348;
                            type_description_2 = "o";
                            goto tuple_build_exception_43;
                        }
                        Py_INCREF(tmp_tuple_element_72);
                    } else {
                        goto tuple_build_exception_43;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_72);
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_9);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_11;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f7da9a9b6961356e946ad8de52ce9dc7_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f7da9a9b6961356e946ad8de52ce9dc7_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f7da9a9b6961356e946ad8de52ce9dc7_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f7da9a9b6961356e946ad8de52ce9dc7_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f7da9a9b6961356e946ad8de52ce9dc7_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f7da9a9b6961356e946ad8de52ce9dc7_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_f7da9a9b6961356e946ad8de52ce9dc7_11 == cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11);
            cache_frame_f7da9a9b6961356e946ad8de52ce9dc7_11 = NULL;
        }

        assertFrameObject(frame_f7da9a9b6961356e946ad8de52ce9dc7_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_32;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_32;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
            assert(tmp_condition_result_60 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_40:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_32;
        }
        branch_no_40:;
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_23 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_73 = mod_consts[91];
            tmp_args_value_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_73 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_73);
            tmp_tuple_element_73 = locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 328;
            tmp_assign_source_110 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_110;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_109 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_109);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328);
        locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328);
        locals_visvis$text$freetype$ft_structs$$$class__10_FT_CharmapRec_328 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 328;
        goto try_except_handler_30;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_109);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 350;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_4);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_111);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_tuple_element_74;
        tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_74 == NULL)) {
            tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        tmp_assign_source_112 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_112, 0, tmp_tuple_element_74);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_113 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = PyDict_New();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_metaclass_value_11;
        bool tmp_condition_result_61;
        PyObject *tmp_key_value_31;
        PyObject *tmp_dict_arg_value_31;
        PyObject *tmp_dict_arg_value_32;
        PyObject *tmp_key_value_32;
        nuitka_bool tmp_condition_result_62;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        tmp_key_value_31 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_31, tmp_key_value_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_61 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_value_32 = mod_consts[36];
        tmp_metaclass_value_11 = DICT_GET_ITEM0(tmp_dict_arg_value_32, tmp_key_value_32);
        if (tmp_metaclass_value_11 == NULL) {
            tmp_metaclass_value_11 = Py_None;
        }
        assert(!(tmp_metaclass_value_11 == NULL));
        Py_INCREF(tmp_metaclass_value_11);
        goto condexpr_end_21;
        condexpr_false_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        tmp_condition_result_62 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_51 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[9];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_51, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_22:;
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_115 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_115;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_key_value_33;
        PyObject *tmp_dict_arg_value_33;
        tmp_key_value_33 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_33, tmp_key_value_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 359;

        goto try_except_handler_33;
    }
    branch_no_41:;
    {
        nuitka_bool tmp_condition_result_64;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_52 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_52, mod_consts[37]);
        tmp_condition_result_64 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_53 = tmp_class_creation_11__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[37]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        tmp_tuple_element_75 = mod_consts[98];
        tmp_args_value_21 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_75);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_75 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_75);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 359;
        tmp_assign_source_116 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_116;
    }
    {
        bool tmp_condition_result_65;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_54 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_54, mod_consts[39]);
        tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        tmp_condition_result_65 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_left_value_11 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[41];
        tmp_getattr_default_11 = mod_consts[42];
        tmp_tuple_element_76 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        tmp_right_value_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_55;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_right_value_11, 0, tmp_tuple_element_76);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_55 == NULL));
            tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[41]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_tuple_element_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM(tmp_right_value_11, 1, tmp_tuple_element_76);
        }
        goto tuple_build_noexception_44;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_44:;
        Py_DECREF(tmp_right_value_11);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_44:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_11, tmp_right_value_11);
        Py_DECREF(tmp_right_value_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 359;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_117;
    }
    branch_end_42:;
    {
        PyObject *tmp_assign_source_118;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_35;
        }
        if (isFrameUnusable(cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12)) {
            Py_XDECREF(cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12 = MAKE_FUNCTION_FRAME(codeobj_978f50f028a19a2bcfccddc5d5b021cc, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12->m_type_description == NULL);
        frame_978f50f028a19a2bcfccddc5d5b021cc_12 = cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_978f50f028a19a2bcfccddc5d5b021cc_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_978f50f028a19a2bcfccddc5d5b021cc_12) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_10;
            PyObject *tmp_tuple_element_77;
            tmp_tuple_element_77 = mod_consts[71];
            tmp_list_element_10 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

            if (tmp_tuple_element_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                    if (unlikely(tmp_tuple_element_77 == NULL)) {
                        tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                    }

                    if (tmp_tuple_element_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_2 = "o";
                        goto tuple_build_exception_45;
                    }
                    Py_INCREF(tmp_tuple_element_77);
                } else {
                    goto tuple_build_exception_45;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_77);
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_10);
            goto frame_exception_exit_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            tmp_dictset_value = PyList_New(8);
            {
                PyObject *tmp_tuple_element_78;
                PyObject *tmp_tuple_element_79;
                PyObject *tmp_tuple_element_80;
                PyObject *tmp_tuple_element_81;
                PyObject *tmp_tuple_element_82;
                PyObject *tmp_tuple_element_83;
                PyObject *tmp_tuple_element_84;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_10);
                tmp_tuple_element_78 = mod_consts[87];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_78);
                tmp_tuple_element_78 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_78 == NULL)) {
                            tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_78 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 384;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_tuple_element_78);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_78);
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_10);
                tmp_tuple_element_79 = mod_consts[100];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_79);
                tmp_tuple_element_79 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_79 == NULL)) {
                            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_79 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 385;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_tuple_element_79);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_79);
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_10);
                tmp_tuple_element_80 = mod_consts[101];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_80);
                tmp_tuple_element_80 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_80 == NULL)) {
                            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 386;
                            type_description_2 = "o";
                            goto tuple_build_exception_48;
                        }
                        Py_INCREF(tmp_tuple_element_80);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_80);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_10);
                tmp_tuple_element_81 = mod_consts[102];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_81);
                tmp_tuple_element_81 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_81 == NULL)) {
                            tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_81 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 387;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_81);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_81);
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_10);
                tmp_tuple_element_82 = mod_consts[103];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_82);
                tmp_tuple_element_82 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_82 == NULL)) {
                            tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_82 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 388;
                            type_description_2 = "o";
                            goto tuple_build_exception_50;
                        }
                        Py_INCREF(tmp_tuple_element_82);
                    } else {
                        goto tuple_build_exception_50;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_82);
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_10);
                tmp_tuple_element_83 = mod_consts[104];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_83);
                tmp_tuple_element_83 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_83 == NULL)) {
                            tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_83 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 389;
                            type_description_2 = "o";
                            goto tuple_build_exception_51;
                        }
                        Py_INCREF(tmp_tuple_element_83);
                    } else {
                        goto tuple_build_exception_51;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_83);
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_10);
                tmp_tuple_element_84 = mod_consts[105];
                tmp_list_element_10 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_84);
                tmp_tuple_element_84 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[24]);

                if (tmp_tuple_element_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_84 == NULL)) {
                            tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_84 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 390;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_tuple_element_84);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_84);
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_10);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_12;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_978f50f028a19a2bcfccddc5d5b021cc_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_978f50f028a19a2bcfccddc5d5b021cc_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_978f50f028a19a2bcfccddc5d5b021cc_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_978f50f028a19a2bcfccddc5d5b021cc_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_978f50f028a19a2bcfccddc5d5b021cc_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_978f50f028a19a2bcfccddc5d5b021cc_12,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_978f50f028a19a2bcfccddc5d5b021cc_12 == cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12);
            cache_frame_978f50f028a19a2bcfccddc5d5b021cc_12 = NULL;
        }

        assertFrameObject(frame_978f50f028a19a2bcfccddc5d5b021cc_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_35;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_66;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_66 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_66 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
            assert(tmp_condition_result_66 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_44:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_35;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_119;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_26 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_85 = mod_consts[98];
            tmp_args_value_22 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_85 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_85);
            tmp_tuple_element_85 = locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 359;
            tmp_assign_source_119 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_119 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_119;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_118 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_118);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359);
        locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359);
        locals_visvis$text$freetype$ft_structs$$$class__11_FT_Glyph_Metrics_359 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 359;
        goto try_except_handler_33;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_118);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_tuple_element_86;
        tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_86 == NULL)) {
            tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        tmp_assign_source_120 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_120, 0, tmp_tuple_element_86);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_120;
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_121 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_121;
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = PyDict_New();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_metaclass_value_12;
        bool tmp_condition_result_67;
        PyObject *tmp_key_value_34;
        PyObject *tmp_dict_arg_value_34;
        PyObject *tmp_dict_arg_value_35;
        PyObject *tmp_key_value_35;
        nuitka_bool tmp_condition_result_68;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        tmp_key_value_34 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_34, tmp_key_value_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_67 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_value_35 = mod_consts[36];
        tmp_metaclass_value_12 = DICT_GET_ITEM0(tmp_dict_arg_value_35, tmp_key_value_35);
        if (tmp_metaclass_value_12 == NULL) {
            tmp_metaclass_value_12 = Py_None;
        }
        assert(!(tmp_metaclass_value_12 == NULL));
        Py_INCREF(tmp_metaclass_value_12);
        goto condexpr_end_23;
        condexpr_false_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        tmp_condition_result_68 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_56 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[9];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_56, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_24:;
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_123 = SELECT_METACLASS(tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_123;
    }
    {
        bool tmp_condition_result_69;
        PyObject *tmp_key_value_36;
        PyObject *tmp_dict_arg_value_36;
        tmp_key_value_36 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_36, tmp_key_value_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_69 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 397;

        goto try_except_handler_36;
    }
    branch_no_45:;
    {
        nuitka_bool tmp_condition_result_70;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_57 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[37]);
        tmp_condition_result_70 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_87;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_58 = tmp_class_creation_12__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[37]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        tmp_tuple_element_87 = mod_consts[106];
        tmp_args_value_23 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_87);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_87 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_87);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 397;
        tmp_assign_source_124 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_124;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_59 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_59, mod_consts[39]);
        tmp_operand_value_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        tmp_condition_result_71 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_left_value_12 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[41];
        tmp_getattr_default_12 = mod_consts[42];
        tmp_tuple_element_88 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        tmp_right_value_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_right_value_12, 0, tmp_tuple_element_88);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[41]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_right_value_12, 1, tmp_tuple_element_88);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_right_value_12);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_12, tmp_right_value_12);
        Py_DECREF(tmp_right_value_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_36;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 397;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_36;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_125;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_126;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_38;
        }
        if (isFrameUnusable(cache_frame_97539333dbb8f2e3481f421b6cb20169_13)) {
            Py_XDECREF(cache_frame_97539333dbb8f2e3481f421b6cb20169_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_97539333dbb8f2e3481f421b6cb20169_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_97539333dbb8f2e3481f421b6cb20169_13 = MAKE_FUNCTION_FRAME(codeobj_97539333dbb8f2e3481f421b6cb20169, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_97539333dbb8f2e3481f421b6cb20169_13->m_type_description == NULL);
        frame_97539333dbb8f2e3481f421b6cb20169_13 = cache_frame_97539333dbb8f2e3481f421b6cb20169_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_97539333dbb8f2e3481f421b6cb20169_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_97539333dbb8f2e3481f421b6cb20169_13) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_11;
            PyObject *tmp_tuple_element_89;
            tmp_tuple_element_89 = mod_consts[108];
            tmp_list_element_11 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[15]);

            if (tmp_tuple_element_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_tuple_element_89 == NULL)) {
                        tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_tuple_element_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 434;
                        type_description_2 = "o";
                        goto tuple_build_exception_54;
                    }
                    Py_INCREF(tmp_tuple_element_89);
                } else {
                    goto tuple_build_exception_54;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_89);
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_list_element_11);
            goto frame_exception_exit_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            tmp_dictset_value = PyList_New(6);
            {
                PyObject *tmp_tuple_element_90;
                PyObject *tmp_tuple_element_91;
                PyObject *tmp_tuple_element_92;
                PyObject *tmp_tuple_element_93;
                PyObject *tmp_tuple_element_94;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_11);
                tmp_tuple_element_90 = mod_consts[109];
                tmp_list_element_11 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_90);
                tmp_tuple_element_90 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[15]);

                if (tmp_tuple_element_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_tuple_element_90 == NULL)) {
                            tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_tuple_element_90 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 435;
                            type_description_2 = "o";
                            goto tuple_build_exception_55;
                        }
                        Py_INCREF(tmp_tuple_element_90);
                    } else {
                        goto tuple_build_exception_55;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_90);
                goto tuple_build_noexception_55;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_55:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_55:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_11);
                tmp_tuple_element_91 = mod_consts[110];
                tmp_list_element_11 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_args_element_value_5;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_91);
                    tmp_called_value_28 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[10]);

                    if (tmp_called_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_28 == NULL)) {
                                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_28 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 436;
                                type_description_2 = "o";
                                goto tuple_build_exception_56;
                            }
                            Py_INCREF(tmp_called_value_28);
                        } else {
                            goto tuple_build_exception_56;
                        }
                    }

                    tmp_args_element_value_5 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[50]);

                    if (tmp_args_element_value_5 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[50]);

                            if (unlikely(tmp_args_element_value_5 == NULL)) {
                                tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                            }

                            if (tmp_args_element_value_5 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 436;
                                type_description_2 = "o";
                                goto tuple_build_exception_56;
                            }
                            Py_INCREF(tmp_args_element_value_5);
                        } else {
                            goto tuple_build_exception_56;
                        }
                    }

                    frame_97539333dbb8f2e3481f421b6cb20169_13->m_frame.f_lineno = 436;
                    tmp_tuple_element_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_5);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_5);
                    if (tmp_tuple_element_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 436;
                        type_description_2 = "o";
                        goto tuple_build_exception_56;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_91);
                }
                goto tuple_build_noexception_56;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_56:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_56:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_11);
                tmp_tuple_element_92 = mod_consts[111];
                tmp_list_element_11 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_29;
                    PyObject *tmp_args_element_value_6;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_92);
                    tmp_called_value_29 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[10]);

                    if (tmp_called_value_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_29 == NULL)) {
                                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_29 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 438;
                                type_description_2 = "o";
                                goto tuple_build_exception_57;
                            }
                            Py_INCREF(tmp_called_value_29);
                        } else {
                            goto tuple_build_exception_57;
                        }
                    }

                    tmp_args_element_value_6 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[14]);

                    if (tmp_args_element_value_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[14]);

                            if (unlikely(tmp_args_element_value_6 == NULL)) {
                                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                            }

                            if (tmp_args_element_value_6 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_29);

                                exception_lineno = 438;
                                type_description_2 = "o";
                                goto tuple_build_exception_57;
                            }
                            Py_INCREF(tmp_args_element_value_6);
                        } else {
                            goto tuple_build_exception_57;
                        }
                    }

                    frame_97539333dbb8f2e3481f421b6cb20169_13->m_frame.f_lineno = 438;
                    tmp_tuple_element_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_6);
                    Py_DECREF(tmp_called_value_29);
                    Py_DECREF(tmp_args_element_value_6);
                    if (tmp_tuple_element_92 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 438;
                        type_description_2 = "o";
                        goto tuple_build_exception_57;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_92);
                }
                goto tuple_build_noexception_57;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_57:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_57:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_11);
                tmp_tuple_element_93 = mod_consts[112];
                tmp_list_element_11 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_args_element_value_7;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_93);
                    tmp_called_value_30 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[10]);

                    if (tmp_called_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_30 == NULL)) {
                                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_30 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 439;
                                type_description_2 = "o";
                                goto tuple_build_exception_58;
                            }
                            Py_INCREF(tmp_called_value_30);
                        } else {
                            goto tuple_build_exception_58;
                        }
                    }

                    tmp_args_element_value_7 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[15]);

                    if (tmp_args_element_value_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[15]);

                            if (unlikely(tmp_args_element_value_7 == NULL)) {
                                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                            }

                            if (tmp_args_element_value_7 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_30);

                                exception_lineno = 439;
                                type_description_2 = "o";
                                goto tuple_build_exception_58;
                            }
                            Py_INCREF(tmp_args_element_value_7);
                        } else {
                            goto tuple_build_exception_58;
                        }
                    }

                    frame_97539333dbb8f2e3481f421b6cb20169_13->m_frame.f_lineno = 439;
                    tmp_tuple_element_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_7);
                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_7);
                    if (tmp_tuple_element_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 439;
                        type_description_2 = "o";
                        goto tuple_build_exception_58;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_93);
                }
                goto tuple_build_noexception_58;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_58:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_58:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_11);
                tmp_tuple_element_94 = mod_consts[113];
                tmp_list_element_11 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_94);
                tmp_tuple_element_94 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[16]);

                if (tmp_tuple_element_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_94 == NULL)) {
                            tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_tuple_element_94 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 440;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_tuple_element_94);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_94);
                goto tuple_build_noexception_59;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_59:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_59:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_11);
            }
            goto list_build_noexception_11;
            // Exception handling pass through code for list_build:
            list_build_exception_11:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_13;
            // Finished with no exception for list_build:
            list_build_noexception_11:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_97539333dbb8f2e3481f421b6cb20169_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_97539333dbb8f2e3481f421b6cb20169_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_97539333dbb8f2e3481f421b6cb20169_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_97539333dbb8f2e3481f421b6cb20169_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_97539333dbb8f2e3481f421b6cb20169_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_97539333dbb8f2e3481f421b6cb20169_13,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_97539333dbb8f2e3481f421b6cb20169_13 == cache_frame_97539333dbb8f2e3481f421b6cb20169_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_97539333dbb8f2e3481f421b6cb20169_13);
            cache_frame_97539333dbb8f2e3481f421b6cb20169_13 = NULL;
        }

        assertFrameObject(frame_97539333dbb8f2e3481f421b6cb20169_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_38;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;

                goto try_except_handler_38;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
            assert(tmp_condition_result_72 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_38;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_127;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_95;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_31 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_95 = mod_consts[106];
            tmp_args_value_24 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_95 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_95);
            tmp_tuple_element_95 = locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 397;
            tmp_assign_source_127 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;

                goto try_except_handler_38;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_127;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_126 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_126);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397);
        locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397);
        locals_visvis$text$freetype$ft_structs$$$class__12_FT_Outline_397 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 397;
        goto try_except_handler_36;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_126);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_tuple_element_96;
        tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_96 == NULL)) {
            tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        tmp_assign_source_128 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_128, 0, tmp_tuple_element_96);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_129 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = PyDict_New();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_metaclass_value_13;
        bool tmp_condition_result_73;
        PyObject *tmp_key_value_37;
        PyObject *tmp_dict_arg_value_37;
        PyObject *tmp_dict_arg_value_38;
        PyObject *tmp_key_value_38;
        nuitka_bool tmp_condition_result_74;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        tmp_key_value_37 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_37, tmp_key_value_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_73 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_73 != false) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_value_38 = mod_consts[36];
        tmp_metaclass_value_13 = DICT_GET_ITEM0(tmp_dict_arg_value_38, tmp_key_value_38);
        if (tmp_metaclass_value_13 == NULL) {
            tmp_metaclass_value_13 = Py_None;
        }
        assert(!(tmp_metaclass_value_13 == NULL));
        Py_INCREF(tmp_metaclass_value_13);
        goto condexpr_end_25;
        condexpr_false_25:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        tmp_condition_result_74 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_61 = tmp_class_creation_13__bases;
        tmp_subscript_value_13 = mod_consts[9];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_61, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_26:;
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_131 = SELECT_METACLASS(tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_131;
    }
    {
        bool tmp_condition_result_75;
        PyObject *tmp_key_value_39;
        PyObject *tmp_dict_arg_value_39;
        tmp_key_value_39 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_39, tmp_key_value_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_75 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 448;

        goto try_except_handler_39;
    }
    branch_no_49:;
    {
        nuitka_bool tmp_condition_result_76;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_62 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_62, mod_consts[37]);
        tmp_condition_result_76 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_97;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_63 = tmp_class_creation_13__metaclass;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[37]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        tmp_tuple_element_97 = mod_consts[114];
        tmp_args_value_25 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_97);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_97 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_97);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 448;
        tmp_assign_source_132 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_132;
    }
    {
        bool tmp_condition_result_77;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_64 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_64, mod_consts[39]);
        tmp_operand_value_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        tmp_condition_result_77 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_77 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_13;
        PyObject *tmp_tuple_element_98;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_left_value_13 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[41];
        tmp_getattr_default_13 = mod_consts[42];
        tmp_tuple_element_98 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        tmp_right_value_13 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_right_value_13, 0, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_65 == NULL));
            tmp_tuple_element_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[41]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_tuple_element_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_right_value_13, 1, tmp_tuple_element_98);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_right_value_13);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_13, tmp_right_value_13);
        Py_DECREF(tmp_right_value_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_39;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 448;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_39;
    }
    branch_no_51:;
    goto branch_end_50;
    branch_no_50:;
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = PyDict_New();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_133;
    }
    branch_end_50:;
    {
        PyObject *tmp_assign_source_134;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_41;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_41;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_41;
        }
        if (isFrameUnusable(cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14)) {
            Py_XDECREF(cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14 = MAKE_FUNCTION_FRAME(codeobj_f7e5fe0dd5ab896dfabf2bd7096fc2ff, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14->m_type_description == NULL);
        frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14 = cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_12;
            PyObject *tmp_tuple_element_99;
            tmp_tuple_element_99 = mod_consts[116];
            tmp_list_element_12 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_12, 0, tmp_tuple_element_99);
            tmp_tuple_element_99 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[49]);

            if (tmp_tuple_element_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_99 == NULL)) {
                        tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_tuple_element_99 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 462;
                        type_description_2 = "o";
                        goto tuple_build_exception_61;
                    }
                    Py_INCREF(tmp_tuple_element_99);
                } else {
                    goto tuple_build_exception_61;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_12, 1, tmp_tuple_element_99);
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_list_element_12);
            goto frame_exception_exit_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_100;
                PyObject *tmp_tuple_element_101;
                PyObject *tmp_tuple_element_102;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_12);
                tmp_tuple_element_100 = mod_consts[117];
                tmp_list_element_12 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_12, 0, tmp_tuple_element_100);
                tmp_tuple_element_100 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[12]);

                if (tmp_tuple_element_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_100 == NULL)) {
                            tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_100 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 463;
                            type_description_2 = "o";
                            goto tuple_build_exception_62;
                        }
                        Py_INCREF(tmp_tuple_element_100);
                    } else {
                        goto tuple_build_exception_62;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_12, 1, tmp_tuple_element_100);
                goto tuple_build_noexception_62;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_62:;
                Py_DECREF(tmp_list_element_12);
                goto list_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_62:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_12);
                tmp_tuple_element_101 = mod_consts[118];
                tmp_list_element_12 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_12, 0, tmp_tuple_element_101);
                tmp_tuple_element_101 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[25]);

                if (tmp_tuple_element_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_tuple_element_101 == NULL)) {
                            tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_tuple_element_101 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 464;
                            type_description_2 = "o";
                            goto tuple_build_exception_63;
                        }
                        Py_INCREF(tmp_tuple_element_101);
                    } else {
                        goto tuple_build_exception_63;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_12, 1, tmp_tuple_element_101);
                goto tuple_build_noexception_63;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_63:;
                Py_DECREF(tmp_list_element_12);
                goto list_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_63:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_12);
                tmp_tuple_element_102 = mod_consts[119];
                tmp_list_element_12 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_12, 0, tmp_tuple_element_102);
                tmp_tuple_element_102 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[50]);

                if (tmp_tuple_element_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_tuple_element_102 == NULL)) {
                            tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_tuple_element_102 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 465;
                            type_description_2 = "o";
                            goto tuple_build_exception_64;
                        }
                        Py_INCREF(tmp_tuple_element_102);
                    } else {
                        goto tuple_build_exception_64;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_12, 1, tmp_tuple_element_102);
                goto tuple_build_noexception_64;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_64:;
                Py_DECREF(tmp_list_element_12);
                goto list_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_64:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_12);
            }
            goto list_build_noexception_12;
            // Exception handling pass through code for list_build:
            list_build_exception_12:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_14;
            // Finished with no exception for list_build:
            list_build_noexception_12:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14,
            type_description_2,
            outline_12_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14 == cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14);
            cache_frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14 = NULL;
        }

        assertFrameObject(frame_f7e5fe0dd5ab896dfabf2bd7096fc2ff_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_41;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_78;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_78 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_78 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;

                goto try_except_handler_41;
            }
            if (tmp_condition_result_78 == NUITKA_BOOL_TRUE) {
                goto branch_yes_52;
            } else {
                goto branch_no_52;
            }
            assert(tmp_condition_result_78 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_52:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto try_except_handler_41;
        }
        branch_no_52:;
        {
            PyObject *tmp_assign_source_135;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_103;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_33 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_103 = mod_consts[114];
            tmp_args_value_26 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_103 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_103);
            tmp_tuple_element_103 = locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 448;
            tmp_assign_source_135 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;

                goto try_except_handler_41;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_135;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_134 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_134);
        goto try_return_handler_41;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448);
        locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448 = NULL;
        goto try_return_handler_40;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448);
        locals_visvis$text$freetype$ft_structs$$$class__13_FT_GlyphRec_448 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_40;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 448;
        goto try_except_handler_39;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_134);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 467;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_8);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_136);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_tuple_element_104;
        tmp_tuple_element_104 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_104 == NULL)) {
            tmp_tuple_element_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        tmp_assign_source_137 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_137, 0, tmp_tuple_element_104);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_138 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = PyDict_New();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_metaclass_value_14;
        bool tmp_condition_result_79;
        PyObject *tmp_key_value_40;
        PyObject *tmp_dict_arg_value_40;
        PyObject *tmp_dict_arg_value_41;
        PyObject *tmp_key_value_41;
        nuitka_bool tmp_condition_result_80;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        tmp_key_value_40 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_40 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_40, tmp_key_value_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_79 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_41 = tmp_class_creation_14__class_decl_dict;
        tmp_key_value_41 = mod_consts[36];
        tmp_metaclass_value_14 = DICT_GET_ITEM0(tmp_dict_arg_value_41, tmp_key_value_41);
        if (tmp_metaclass_value_14 == NULL) {
            tmp_metaclass_value_14 = Py_None;
        }
        assert(!(tmp_metaclass_value_14 == NULL));
        Py_INCREF(tmp_metaclass_value_14);
        goto condexpr_end_27;
        condexpr_false_27:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        tmp_condition_result_80 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_66 = tmp_class_creation_14__bases;
        tmp_subscript_value_14 = mod_consts[9];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_66, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_28:;
        condexpr_end_27:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_140 = SELECT_METACLASS(tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_140;
    }
    {
        bool tmp_condition_result_81;
        PyObject *tmp_key_value_42;
        PyObject *tmp_dict_arg_value_42;
        tmp_key_value_42 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_42 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_42, tmp_key_value_42);
        assert(!(tmp_res == -1));
        tmp_condition_result_81 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_81 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 474;

        goto try_except_handler_42;
    }
    branch_no_53:;
    {
        nuitka_bool tmp_condition_result_82;
        PyObject *tmp_expression_value_67;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_67 = tmp_class_creation_14__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_67, mod_consts[37]);
        tmp_condition_result_82 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_82 == NUITKA_BOOL_TRUE) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_105;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_68 = tmp_class_creation_14__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[37]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        tmp_tuple_element_105 = mod_consts[121];
        tmp_args_value_27 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_105);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_105 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_105);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 474;
        tmp_assign_source_141 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_141;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_69 = tmp_class_creation_14__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_69, mod_consts[39]);
        tmp_operand_value_14 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        tmp_condition_result_83 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_14;
        PyObject *tmp_tuple_element_106;
        PyObject *tmp_getattr_target_14;
        PyObject *tmp_getattr_attr_14;
        PyObject *tmp_getattr_default_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_left_value_14 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_getattr_target_14 = tmp_class_creation_14__metaclass;
        tmp_getattr_attr_14 = mod_consts[41];
        tmp_getattr_default_14 = mod_consts[42];
        tmp_tuple_element_106 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
        if (tmp_tuple_element_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        tmp_right_value_14 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_right_value_14, 0, tmp_tuple_element_106);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_70 == NULL));
            tmp_tuple_element_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[41]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_tuple_element_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM(tmp_right_value_14, 1, tmp_tuple_element_106);
        }
        goto tuple_build_noexception_65;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_65:;
        Py_DECREF(tmp_right_value_14);
        goto try_except_handler_42;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_65:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_14, tmp_right_value_14);
        Py_DECREF(tmp_right_value_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_42;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 474;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_42;
    }
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = PyDict_New();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_142;
    }
    branch_end_54:;
    {
        PyObject *tmp_assign_source_143;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_44;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_44;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_44;
        }
        if (isFrameUnusable(cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15)) {
            Py_XDECREF(cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15);

#if _DEBUG_REFCOUNTS
            if (cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15 = MAKE_FUNCTION_FRAME(codeobj_138cf2db88e16a535aa1c11fd8b7f64a, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15->m_type_description == NULL);
        frame_138cf2db88e16a535aa1c11fd8b7f64a_15 = cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_138cf2db88e16a535aa1c11fd8b7f64a_15);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_138cf2db88e16a535aa1c11fd8b7f64a_15) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_13;
            PyObject *tmp_tuple_element_107;
            tmp_tuple_element_107 = mod_consts[116];
            tmp_list_element_13 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_107);
            tmp_tuple_element_107 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[49]);

            if (tmp_tuple_element_107 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_107 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_107 == NULL)) {
                        tmp_tuple_element_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_tuple_element_107 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 565;
                        type_description_2 = "o";
                        goto tuple_build_exception_66;
                    }
                    Py_INCREF(tmp_tuple_element_107);
                } else {
                    goto tuple_build_exception_66;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_107);
            goto tuple_build_noexception_66;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_66:;
            Py_DECREF(tmp_list_element_13);
            goto frame_exception_exit_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_66:;
            tmp_dictset_value = PyList_New(22);
            {
                PyObject *tmp_tuple_element_108;
                PyObject *tmp_tuple_element_109;
                PyObject *tmp_tuple_element_110;
                PyObject *tmp_tuple_element_111;
                PyObject *tmp_tuple_element_112;
                PyObject *tmp_tuple_element_113;
                PyObject *tmp_tuple_element_114;
                PyObject *tmp_tuple_element_115;
                PyObject *tmp_tuple_element_116;
                PyObject *tmp_tuple_element_117;
                PyObject *tmp_tuple_element_118;
                PyObject *tmp_tuple_element_119;
                PyObject *tmp_tuple_element_120;
                PyObject *tmp_tuple_element_121;
                PyObject *tmp_tuple_element_122;
                PyObject *tmp_tuple_element_123;
                PyObject *tmp_tuple_element_124;
                PyObject *tmp_tuple_element_125;
                PyObject *tmp_tuple_element_126;
                PyObject *tmp_tuple_element_127;
                PyObject *tmp_tuple_element_128;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_13);
                tmp_tuple_element_108 = mod_consts[93];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_108);
                tmp_tuple_element_108 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[12]);

                if (tmp_tuple_element_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_108 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_108 == NULL)) {
                            tmp_tuple_element_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_108 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 566;
                            type_description_2 = "o";
                            goto tuple_build_exception_67;
                        }
                        Py_INCREF(tmp_tuple_element_108);
                    } else {
                        goto tuple_build_exception_67;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_108);
                goto tuple_build_noexception_67;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_67:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_67:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_13);
                tmp_tuple_element_109 = mod_consts[123];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_109);
                tmp_tuple_element_109 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[12]);

                if (tmp_tuple_element_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_109 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_109 == NULL)) {
                            tmp_tuple_element_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_109 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 567;
                            type_description_2 = "o";
                            goto tuple_build_exception_68;
                        }
                        Py_INCREF(tmp_tuple_element_109);
                    } else {
                        goto tuple_build_exception_68;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_109);
                goto tuple_build_noexception_68;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_68:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_68:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_13);
                tmp_tuple_element_110 = mod_consts[124];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_110);
                tmp_tuple_element_110 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[17]);

                if (tmp_tuple_element_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_110 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_tuple_element_110 == NULL)) {
                            tmp_tuple_element_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_tuple_element_110 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 568;
                            type_description_2 = "o";
                            goto tuple_build_exception_69;
                        }
                        Py_INCREF(tmp_tuple_element_110);
                    } else {
                        goto tuple_build_exception_69;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_110);
                goto tuple_build_noexception_69;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_69:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_69:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_13);
                tmp_tuple_element_111 = mod_consts[125];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_111);
                tmp_tuple_element_111 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[81]);

                if (tmp_tuple_element_111 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_111 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_tuple_element_111 == NULL)) {
                            tmp_tuple_element_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_tuple_element_111 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 569;
                            type_description_2 = "o";
                            goto tuple_build_exception_70;
                        }
                        Py_INCREF(tmp_tuple_element_111);
                    } else {
                        goto tuple_build_exception_70;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_111);
                goto tuple_build_noexception_70;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_70:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_70:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_13);
                tmp_tuple_element_112 = mod_consts[126];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_112);
                tmp_tuple_element_112 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[98]);

                if (tmp_tuple_element_112 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_112 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[98]);

                        if (unlikely(tmp_tuple_element_112 == NULL)) {
                            tmp_tuple_element_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                        }

                        if (tmp_tuple_element_112 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 571;
                            type_description_2 = "o";
                            goto tuple_build_exception_71;
                        }
                        Py_INCREF(tmp_tuple_element_112);
                    } else {
                        goto tuple_build_exception_71;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_112);
                goto tuple_build_noexception_71;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_71:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_71:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_13);
                tmp_tuple_element_113 = mod_consts[127];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_113);
                tmp_tuple_element_113 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[23]);

                if (tmp_tuple_element_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_113 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_113 == NULL)) {
                            tmp_tuple_element_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_113 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 572;
                            type_description_2 = "o";
                            goto tuple_build_exception_72;
                        }
                        Py_INCREF(tmp_tuple_element_113);
                    } else {
                        goto tuple_build_exception_72;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_113);
                goto tuple_build_noexception_72;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_72:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_72:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_13);
                tmp_tuple_element_114 = mod_consts[128];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_114);
                tmp_tuple_element_114 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[23]);

                if (tmp_tuple_element_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_114 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_114 == NULL)) {
                            tmp_tuple_element_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_114 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 573;
                            type_description_2 = "o";
                            goto tuple_build_exception_73;
                        }
                        Py_INCREF(tmp_tuple_element_114);
                    } else {
                        goto tuple_build_exception_73;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_114);
                goto tuple_build_noexception_73;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_73:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_73:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_13);
                tmp_tuple_element_115 = mod_consts[119];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_115);
                tmp_tuple_element_115 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[50]);

                if (tmp_tuple_element_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_115 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_tuple_element_115 == NULL)) {
                            tmp_tuple_element_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_tuple_element_115 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 574;
                            type_description_2 = "o";
                            goto tuple_build_exception_74;
                        }
                        Py_INCREF(tmp_tuple_element_115);
                    } else {
                        goto tuple_build_exception_74;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_115);
                goto tuple_build_noexception_74;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_74:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_74:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_13);
                tmp_tuple_element_116 = mod_consts[118];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_116);
                tmp_tuple_element_116 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[25]);

                if (tmp_tuple_element_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_116 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_tuple_element_116 == NULL)) {
                            tmp_tuple_element_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_tuple_element_116 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 576;
                            type_description_2 = "o";
                            goto tuple_build_exception_75;
                        }
                        Py_INCREF(tmp_tuple_element_116);
                    } else {
                        goto tuple_build_exception_75;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_116);
                goto tuple_build_noexception_75;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_75:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_75:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_13);
                tmp_tuple_element_117 = mod_consts[129];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_117);
                tmp_tuple_element_117 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[68]);

                if (tmp_tuple_element_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_117 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_117 == NULL)) {
                            tmp_tuple_element_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_117 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 578;
                            type_description_2 = "o";
                            goto tuple_build_exception_76;
                        }
                        Py_INCREF(tmp_tuple_element_117);
                    } else {
                        goto tuple_build_exception_76;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_117);
                goto tuple_build_noexception_76;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_76:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_76:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_13);
                tmp_tuple_element_118 = mod_consts[130];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_118);
                tmp_tuple_element_118 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[32]);

                if (tmp_tuple_element_118 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_118 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_118 == NULL)) {
                            tmp_tuple_element_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_118 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 579;
                            type_description_2 = "o";
                            goto tuple_build_exception_77;
                        }
                        Py_INCREF(tmp_tuple_element_118);
                    } else {
                        goto tuple_build_exception_77;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_118);
                goto tuple_build_noexception_77;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_77:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_77:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_13);
                tmp_tuple_element_119 = mod_consts[131];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_119);
                tmp_tuple_element_119 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[32]);

                if (tmp_tuple_element_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_119 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_119 == NULL)) {
                            tmp_tuple_element_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_119 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 580;
                            type_description_2 = "o";
                            goto tuple_build_exception_78;
                        }
                        Py_INCREF(tmp_tuple_element_119);
                    } else {
                        goto tuple_build_exception_78;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_119);
                goto tuple_build_noexception_78;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_78:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_78:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_13);
                tmp_tuple_element_120 = mod_consts[132];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_120);
                tmp_tuple_element_120 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[106]);

                if (tmp_tuple_element_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_120 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[106]);

                        if (unlikely(tmp_tuple_element_120 == NULL)) {
                            tmp_tuple_element_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                        }

                        if (tmp_tuple_element_120 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 582;
                            type_description_2 = "o";
                            goto tuple_build_exception_79;
                        }
                        Py_INCREF(tmp_tuple_element_120);
                    } else {
                        goto tuple_build_exception_79;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_120);
                goto tuple_build_noexception_79;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_79:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_79:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_13);
                tmp_tuple_element_121 = mod_consts[133];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_121);
                tmp_tuple_element_121 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[33]);

                if (tmp_tuple_element_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_121 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_tuple_element_121 == NULL)) {
                            tmp_tuple_element_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                        }

                        if (tmp_tuple_element_121 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 583;
                            type_description_2 = "o";
                            goto tuple_build_exception_80;
                        }
                        Py_INCREF(tmp_tuple_element_121);
                    } else {
                        goto tuple_build_exception_80;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_121);
                goto tuple_build_noexception_80;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_80:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_80:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_13);
                tmp_tuple_element_122 = mod_consts[134];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_122);
                tmp_tuple_element_122 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[12]);

                if (tmp_tuple_element_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_122 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_122 == NULL)) {
                            tmp_tuple_element_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_122 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 584;
                            type_description_2 = "o";
                            goto tuple_build_exception_81;
                        }
                        Py_INCREF(tmp_tuple_element_122);
                    } else {
                        goto tuple_build_exception_81;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_122);
                goto tuple_build_noexception_81;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_81:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_81:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_13);
                tmp_tuple_element_123 = mod_consts[135];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_123);
                tmp_tuple_element_123 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[12]);

                if (tmp_tuple_element_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_123 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_123 == NULL)) {
                            tmp_tuple_element_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 586;
                            type_description_2 = "o";
                            goto tuple_build_exception_82;
                        }
                        Py_INCREF(tmp_tuple_element_123);
                    } else {
                        goto tuple_build_exception_82;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_123);
                goto tuple_build_noexception_82;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_82:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_82:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_13);
                tmp_tuple_element_124 = mod_consts[136];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_124);
                tmp_tuple_element_124 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[18]);

                if (tmp_tuple_element_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_124 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_tuple_element_124 == NULL)) {
                            tmp_tuple_element_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                        }

                        if (tmp_tuple_element_124 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 587;
                            type_description_2 = "o";
                            goto tuple_build_exception_83;
                        }
                        Py_INCREF(tmp_tuple_element_124);
                    } else {
                        goto tuple_build_exception_83;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_124);
                goto tuple_build_noexception_83;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_83:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_83:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_13);
                tmp_tuple_element_125 = mod_consts[137];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_125);
                tmp_tuple_element_125 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[24]);

                if (tmp_tuple_element_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_125 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_125 == NULL)) {
                            tmp_tuple_element_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 589;
                            type_description_2 = "o";
                            goto tuple_build_exception_84;
                        }
                        Py_INCREF(tmp_tuple_element_125);
                    } else {
                        goto tuple_build_exception_84;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_125);
                goto tuple_build_noexception_84;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_84:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_84:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_13);
                tmp_tuple_element_126 = mod_consts[138];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_126);
                tmp_tuple_element_126 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[24]);

                if (tmp_tuple_element_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_126 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_126 == NULL)) {
                            tmp_tuple_element_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_126 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 590;
                            type_description_2 = "o";
                            goto tuple_build_exception_85;
                        }
                        Py_INCREF(tmp_tuple_element_126);
                    } else {
                        goto tuple_build_exception_85;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_126);
                goto tuple_build_noexception_85;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_85:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_85:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_13);
                tmp_tuple_element_127 = mod_consts[139];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_127);
                tmp_tuple_element_127 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[12]);

                if (tmp_tuple_element_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_127 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_127 == NULL)) {
                            tmp_tuple_element_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_127 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 591;
                            type_description_2 = "o";
                            goto tuple_build_exception_86;
                        }
                        Py_INCREF(tmp_tuple_element_127);
                    } else {
                        goto tuple_build_exception_86;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_127);
                goto tuple_build_noexception_86;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_86:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_86:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_13);
                tmp_tuple_element_128 = mod_consts[140];
                tmp_list_element_13 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_13, 0, tmp_tuple_element_128);
                tmp_tuple_element_128 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[12]);

                if (tmp_tuple_element_128 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_128 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_128 == NULL)) {
                            tmp_tuple_element_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_128 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 592;
                            type_description_2 = "o";
                            goto tuple_build_exception_87;
                        }
                        Py_INCREF(tmp_tuple_element_128);
                    } else {
                        goto tuple_build_exception_87;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_13, 1, tmp_tuple_element_128);
                goto tuple_build_noexception_87;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_87:;
                Py_DECREF(tmp_list_element_13);
                goto list_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_87:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_13);
            }
            goto list_build_noexception_13;
            // Exception handling pass through code for list_build:
            list_build_exception_13:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_15;
            // Finished with no exception for list_build:
            list_build_noexception_13:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_138cf2db88e16a535aa1c11fd8b7f64a_15);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;

        frame_exception_exit_15:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_138cf2db88e16a535aa1c11fd8b7f64a_15);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_138cf2db88e16a535aa1c11fd8b7f64a_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_138cf2db88e16a535aa1c11fd8b7f64a_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_138cf2db88e16a535aa1c11fd8b7f64a_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_138cf2db88e16a535aa1c11fd8b7f64a_15,
            type_description_2,
            outline_13_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_138cf2db88e16a535aa1c11fd8b7f64a_15 == cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15);
            cache_frame_138cf2db88e16a535aa1c11fd8b7f64a_15 = NULL;
        }

        assertFrameObject(frame_138cf2db88e16a535aa1c11fd8b7f64a_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;

        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_44;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto try_except_handler_44;
            }
            if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
                goto branch_yes_56;
            } else {
                goto branch_no_56;
            }
            assert(tmp_condition_result_84 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_56:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto try_except_handler_44;
        }
        branch_no_56:;
        {
            PyObject *tmp_assign_source_144;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_129;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_36 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_129 = mod_consts[121];
            tmp_args_value_28 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_129);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_129 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_129);
            tmp_tuple_element_129 = locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_129);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 474;
            tmp_assign_source_144 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto try_except_handler_44;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_144;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_143 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_143);
        goto try_return_handler_44;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474);
        locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474 = NULL;
        goto try_return_handler_43;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474);
        locals_visvis$text$freetype$ft_structs$$$class__14_FT_GlyphSlotRec_474 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto try_except_handler_43;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 474;
        goto try_except_handler_42;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_143);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 594;
        tmp_assign_source_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_9);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_145);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_tuple_element_130;
        tmp_tuple_element_130 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_130 == NULL)) {
            tmp_tuple_element_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        tmp_assign_source_146 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_146, 0, tmp_tuple_element_130);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_146;
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_147 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = PyDict_New();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_metaclass_value_15;
        bool tmp_condition_result_85;
        PyObject *tmp_key_value_43;
        PyObject *tmp_dict_arg_value_43;
        PyObject *tmp_dict_arg_value_44;
        PyObject *tmp_key_value_44;
        nuitka_bool tmp_condition_result_86;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        tmp_key_value_43 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_value_43 = tmp_class_creation_15__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_43, tmp_key_value_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_85 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_85 != false) {
            goto condexpr_true_29;
        } else {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_value_44 = tmp_class_creation_15__class_decl_dict;
        tmp_key_value_44 = mod_consts[36];
        tmp_metaclass_value_15 = DICT_GET_ITEM0(tmp_dict_arg_value_44, tmp_key_value_44);
        if (tmp_metaclass_value_15 == NULL) {
            tmp_metaclass_value_15 = Py_None;
        }
        assert(!(tmp_metaclass_value_15 == NULL));
        Py_INCREF(tmp_metaclass_value_15);
        goto condexpr_end_29;
        condexpr_false_29:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        tmp_condition_result_86 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_30;
        } else {
            goto condexpr_false_30;
        }
        condexpr_true_30:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_71 = tmp_class_creation_15__bases;
        tmp_subscript_value_15 = mod_consts[9];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_71, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        goto condexpr_end_30;
        condexpr_false_30:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_30:;
        condexpr_end_29:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_149 = SELECT_METACLASS(tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_149;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_key_value_45;
        PyObject *tmp_dict_arg_value_45;
        tmp_key_value_45 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_value_45 = tmp_class_creation_15__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_45, tmp_key_value_45);
        assert(!(tmp_res == -1));
        tmp_condition_result_87 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 600;

        goto try_except_handler_45;
    }
    branch_no_57:;
    {
        nuitka_bool tmp_condition_result_88;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_72 = tmp_class_creation_15__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[37]);
        tmp_condition_result_88 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_131;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_73 = tmp_class_creation_15__metaclass;
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[37]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        tmp_tuple_element_131 = mod_consts[142];
        tmp_args_value_29 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_131);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_131 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_131);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 600;
        tmp_assign_source_150 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_150;
    }
    {
        bool tmp_condition_result_89;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_74 = tmp_class_creation_15__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_74, mod_consts[39]);
        tmp_operand_value_15 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        tmp_condition_result_89 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_89 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_15;
        PyObject *tmp_tuple_element_132;
        PyObject *tmp_getattr_target_15;
        PyObject *tmp_getattr_attr_15;
        PyObject *tmp_getattr_default_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_left_value_15 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_getattr_target_15 = tmp_class_creation_15__metaclass;
        tmp_getattr_attr_15 = mod_consts[41];
        tmp_getattr_default_15 = mod_consts[42];
        tmp_tuple_element_132 = BUILTIN_GETATTR(tmp_getattr_target_15, tmp_getattr_attr_15, tmp_getattr_default_15);
        if (tmp_tuple_element_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        tmp_right_value_15 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_75;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_right_value_15, 0, tmp_tuple_element_132);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_75 == NULL));
            tmp_tuple_element_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[41]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_tuple_element_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;

                goto tuple_build_exception_88;
            }
            PyTuple_SET_ITEM(tmp_right_value_15, 1, tmp_tuple_element_132);
        }
        goto tuple_build_noexception_88;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_88:;
        Py_DECREF(tmp_right_value_15);
        goto try_except_handler_45;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_88:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_15, tmp_right_value_15);
        Py_DECREF(tmp_right_value_15);
        if (tmp_raise_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_45;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 600;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_45;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = PyDict_New();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_151;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_152;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_47;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_47;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_47;
        }
        if (isFrameUnusable(cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16)) {
            Py_XDECREF(cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16 = MAKE_FUNCTION_FRAME(codeobj_7439ed9ae59c732e0b049ca9ceed8497, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16->m_type_description == NULL);
        frame_7439ed9ae59c732e0b049ca9ceed8497_16 = cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7439ed9ae59c732e0b049ca9ceed8497_16);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7439ed9ae59c732e0b049ca9ceed8497_16) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_14;
            PyObject *tmp_tuple_element_133;
            tmp_tuple_element_133 = mod_consts[89];
            tmp_list_element_14 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_133);
            tmp_tuple_element_133 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[31]);

            if (tmp_tuple_element_133 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_133 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_tuple_element_133 == NULL)) {
                        tmp_tuple_element_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_tuple_element_133 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 631;
                        type_description_2 = "o";
                        goto tuple_build_exception_89;
                    }
                    Py_INCREF(tmp_tuple_element_133);
                } else {
                    goto tuple_build_exception_89;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_133);
            goto tuple_build_noexception_89;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_89:;
            Py_DECREF(tmp_list_element_14);
            goto frame_exception_exit_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_89:;
            tmp_dictset_value = PyList_New(8);
            {
                PyObject *tmp_tuple_element_134;
                PyObject *tmp_tuple_element_135;
                PyObject *tmp_tuple_element_136;
                PyObject *tmp_tuple_element_137;
                PyObject *tmp_tuple_element_138;
                PyObject *tmp_tuple_element_139;
                PyObject *tmp_tuple_element_140;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_14);
                tmp_tuple_element_134 = mod_consts[90];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_134);
                tmp_tuple_element_134 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[31]);

                if (tmp_tuple_element_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_134 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_134 == NULL)) {
                            tmp_tuple_element_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_134 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 632;
                            type_description_2 = "o";
                            goto tuple_build_exception_90;
                        }
                        Py_INCREF(tmp_tuple_element_134);
                    } else {
                        goto tuple_build_exception_90;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_134);
                goto tuple_build_noexception_90;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_90:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_90:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_14);
                tmp_tuple_element_135 = mod_consts[144];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_135);
                tmp_tuple_element_135 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[23]);

                if (tmp_tuple_element_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_135 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_135 == NULL)) {
                            tmp_tuple_element_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_135 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 634;
                            type_description_2 = "o";
                            goto tuple_build_exception_91;
                        }
                        Py_INCREF(tmp_tuple_element_135);
                    } else {
                        goto tuple_build_exception_91;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_135);
                goto tuple_build_noexception_91;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_91:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_91:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_14);
                tmp_tuple_element_136 = mod_consts[145];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_136);
                tmp_tuple_element_136 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[23]);

                if (tmp_tuple_element_136 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_136 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_136 == NULL)) {
                            tmp_tuple_element_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_136 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 635;
                            type_description_2 = "o";
                            goto tuple_build_exception_92;
                        }
                        Py_INCREF(tmp_tuple_element_136);
                    } else {
                        goto tuple_build_exception_92;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_136);
                goto tuple_build_noexception_92;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_92:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_92:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_14);
                tmp_tuple_element_137 = mod_consts[146];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_137);
                tmp_tuple_element_137 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[24]);

                if (tmp_tuple_element_137 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_137 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_137 == NULL)) {
                            tmp_tuple_element_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_137 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 637;
                            type_description_2 = "o";
                            goto tuple_build_exception_93;
                        }
                        Py_INCREF(tmp_tuple_element_137);
                    } else {
                        goto tuple_build_exception_93;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_137);
                goto tuple_build_noexception_93;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_93:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_93:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_14);
                tmp_tuple_element_138 = mod_consts[147];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_138);
                tmp_tuple_element_138 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[24]);

                if (tmp_tuple_element_138 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_138 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_138 == NULL)) {
                            tmp_tuple_element_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_138 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 638;
                            type_description_2 = "o";
                            goto tuple_build_exception_94;
                        }
                        Py_INCREF(tmp_tuple_element_138);
                    } else {
                        goto tuple_build_exception_94;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_138);
                goto tuple_build_noexception_94;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_94:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_94:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_14);
                tmp_tuple_element_139 = mod_consts[87];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_139);
                tmp_tuple_element_139 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[24]);

                if (tmp_tuple_element_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_139 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_139 == NULL)) {
                            tmp_tuple_element_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_139 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 639;
                            type_description_2 = "o";
                            goto tuple_build_exception_95;
                        }
                        Py_INCREF(tmp_tuple_element_139);
                    } else {
                        goto tuple_build_exception_95;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_139);
                goto tuple_build_noexception_95;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_95:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_95:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_14);
                tmp_tuple_element_140 = mod_consts[148];
                tmp_list_element_14 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_14, 0, tmp_tuple_element_140);
                tmp_tuple_element_140 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[24]);

                if (tmp_tuple_element_140 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_140 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_140 == NULL)) {
                            tmp_tuple_element_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                        }

                        if (tmp_tuple_element_140 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 640;
                            type_description_2 = "o";
                            goto tuple_build_exception_96;
                        }
                        Py_INCREF(tmp_tuple_element_140);
                    } else {
                        goto tuple_build_exception_96;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_14, 1, tmp_tuple_element_140);
                goto tuple_build_noexception_96;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_96:;
                Py_DECREF(tmp_list_element_14);
                goto list_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_96:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_14);
            }
            goto list_build_noexception_14;
            // Exception handling pass through code for list_build:
            list_build_exception_14:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_16;
            // Finished with no exception for list_build:
            list_build_noexception_14:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7439ed9ae59c732e0b049ca9ceed8497_16);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_15;

        frame_exception_exit_16:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7439ed9ae59c732e0b049ca9ceed8497_16);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7439ed9ae59c732e0b049ca9ceed8497_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7439ed9ae59c732e0b049ca9ceed8497_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7439ed9ae59c732e0b049ca9ceed8497_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7439ed9ae59c732e0b049ca9ceed8497_16,
            type_description_2,
            outline_14_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7439ed9ae59c732e0b049ca9ceed8497_16 == cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16);
            cache_frame_7439ed9ae59c732e0b049ca9ceed8497_16 = NULL;
        }

        assertFrameObject(frame_7439ed9ae59c732e0b049ca9ceed8497_16);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_15;

        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_47;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_90;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_90 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_90 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;

                goto try_except_handler_47;
            }
            if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
            assert(tmp_condition_result_90 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_60:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;

            goto try_except_handler_47;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_153;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_141;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_39 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_141 = mod_consts[142];
            tmp_args_value_30 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_141);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_141 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_141);
            tmp_tuple_element_141 = locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_141);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 600;
            tmp_assign_source_153 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;

                goto try_except_handler_47;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_153;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_152 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_152);
        goto try_return_handler_47;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600);
        locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600 = NULL;
        goto try_return_handler_46;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600);
        locals_visvis$text$freetype$ft_structs$$$class__15_FT_Size_Metrics_600 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto try_except_handler_46;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 600;
        goto try_except_handler_45;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_152);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_tuple_element_142;
        tmp_tuple_element_142 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_142 == NULL)) {
            tmp_tuple_element_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        tmp_assign_source_154 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_154, 0, tmp_tuple_element_142);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_154;
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_155 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_155;
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = PyDict_New();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_156;
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_metaclass_value_16;
        bool tmp_condition_result_91;
        PyObject *tmp_key_value_46;
        PyObject *tmp_dict_arg_value_46;
        PyObject *tmp_dict_arg_value_47;
        PyObject *tmp_key_value_47;
        nuitka_bool tmp_condition_result_92;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        tmp_key_value_46 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_value_46 = tmp_class_creation_16__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_46, tmp_key_value_46);
        assert(!(tmp_res == -1));
        tmp_condition_result_91 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_91 != false) {
            goto condexpr_true_31;
        } else {
            goto condexpr_false_31;
        }
        condexpr_true_31:;
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_value_47 = tmp_class_creation_16__class_decl_dict;
        tmp_key_value_47 = mod_consts[36];
        tmp_metaclass_value_16 = DICT_GET_ITEM0(tmp_dict_arg_value_47, tmp_key_value_47);
        if (tmp_metaclass_value_16 == NULL) {
            tmp_metaclass_value_16 = Py_None;
        }
        assert(!(tmp_metaclass_value_16 == NULL));
        Py_INCREF(tmp_metaclass_value_16);
        goto condexpr_end_31;
        condexpr_false_31:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        tmp_condition_result_92 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_32;
        } else {
            goto condexpr_false_32;
        }
        condexpr_true_32:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_76 = tmp_class_creation_16__bases;
        tmp_subscript_value_16 = mod_consts[9];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_76, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        goto condexpr_end_32;
        condexpr_false_32:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_32:;
        condexpr_end_31:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_157 = SELECT_METACLASS(tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_157;
    }
    {
        bool tmp_condition_result_93;
        PyObject *tmp_key_value_48;
        PyObject *tmp_dict_arg_value_48;
        tmp_key_value_48 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_value_48 = tmp_class_creation_16__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_48, tmp_key_value_48);
        assert(!(tmp_res == -1));
        tmp_condition_result_93 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_93 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 648;

        goto try_except_handler_48;
    }
    branch_no_61:;
    {
        nuitka_bool tmp_condition_result_94;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_77 = tmp_class_creation_16__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_77, mod_consts[37]);
        tmp_condition_result_94 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_143;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_78 = tmp_class_creation_16__metaclass;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[37]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        tmp_tuple_element_143 = mod_consts[149];
        tmp_args_value_31 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_143);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_143 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_143);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 648;
        tmp_assign_source_158 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_158;
    }
    {
        bool tmp_condition_result_95;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_79 = tmp_class_creation_16__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_79, mod_consts[39]);
        tmp_operand_value_16 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        tmp_condition_result_95 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_95 != false) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_16;
        PyObject *tmp_tuple_element_144;
        PyObject *tmp_getattr_target_16;
        PyObject *tmp_getattr_attr_16;
        PyObject *tmp_getattr_default_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_left_value_16 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_getattr_target_16 = tmp_class_creation_16__metaclass;
        tmp_getattr_attr_16 = mod_consts[41];
        tmp_getattr_default_16 = mod_consts[42];
        tmp_tuple_element_144 = BUILTIN_GETATTR(tmp_getattr_target_16, tmp_getattr_attr_16, tmp_getattr_default_16);
        if (tmp_tuple_element_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        tmp_right_value_16 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_right_value_16, 0, tmp_tuple_element_144);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_80 == NULL));
            tmp_tuple_element_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[41]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_tuple_element_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto tuple_build_exception_97;
            }
            PyTuple_SET_ITEM(tmp_right_value_16, 1, tmp_tuple_element_144);
        }
        goto tuple_build_noexception_97;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_97:;
        Py_DECREF(tmp_right_value_16);
        goto try_except_handler_48;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_97:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_16, tmp_right_value_16);
        Py_DECREF(tmp_right_value_16);
        if (tmp_raise_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_48;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 648;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_48;
    }
    branch_no_63:;
    goto branch_end_62;
    branch_no_62:;
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = PyDict_New();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_159;
    }
    branch_end_62:;
    {
        PyObject *tmp_assign_source_160;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_50;
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_50;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_50;
        }
        if (isFrameUnusable(cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17)) {
            Py_XDECREF(cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17 = MAKE_FUNCTION_FRAME(codeobj_a98aa90b312a1ae44a8db3164de9b07d, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17->m_type_description == NULL);
        frame_a98aa90b312a1ae44a8db3164de9b07d_17 = cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a98aa90b312a1ae44a8db3164de9b07d_17);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a98aa90b312a1ae44a8db3164de9b07d_17) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_15;
            PyObject *tmp_tuple_element_145;
            tmp_tuple_element_145 = mod_consts[93];
            tmp_list_element_15 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_15, 0, tmp_tuple_element_145);
            tmp_tuple_element_145 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[12]);

            if (tmp_tuple_element_145 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_145 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                    if (unlikely(tmp_tuple_element_145 == NULL)) {
                        tmp_tuple_element_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                    }

                    if (tmp_tuple_element_145 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 662;
                        type_description_2 = "o";
                        goto tuple_build_exception_98;
                    }
                    Py_INCREF(tmp_tuple_element_145);
                } else {
                    goto tuple_build_exception_98;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_15, 1, tmp_tuple_element_145);
            goto tuple_build_noexception_98;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_98:;
            Py_DECREF(tmp_list_element_15);
            goto frame_exception_exit_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_98:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_146;
                PyObject *tmp_tuple_element_147;
                PyObject *tmp_tuple_element_148;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_15);
                tmp_tuple_element_146 = mod_consts[125];
                tmp_list_element_15 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_15, 0, tmp_tuple_element_146);
                tmp_tuple_element_146 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[81]);

                if (tmp_tuple_element_146 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_146 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_tuple_element_146 == NULL)) {
                            tmp_tuple_element_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_tuple_element_146 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 663;
                            type_description_2 = "o";
                            goto tuple_build_exception_99;
                        }
                        Py_INCREF(tmp_tuple_element_146);
                    } else {
                        goto tuple_build_exception_99;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_15, 1, tmp_tuple_element_146);
                goto tuple_build_noexception_99;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_99:;
                Py_DECREF(tmp_list_element_15);
                goto list_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_99:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_15);
                tmp_tuple_element_147 = mod_consts[126];
                tmp_list_element_15 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_15, 0, tmp_tuple_element_147);
                tmp_tuple_element_147 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[142]);

                if (tmp_tuple_element_147 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_147 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_tuple_element_147 == NULL)) {
                            tmp_tuple_element_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_tuple_element_147 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 664;
                            type_description_2 = "o";
                            goto tuple_build_exception_100;
                        }
                        Py_INCREF(tmp_tuple_element_147);
                    } else {
                        goto tuple_build_exception_100;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_15, 1, tmp_tuple_element_147);
                goto tuple_build_noexception_100;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_100:;
                Py_DECREF(tmp_list_element_15);
                goto list_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_100:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_15);
                tmp_tuple_element_148 = mod_consts[140];
                tmp_list_element_15 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_15, 0, tmp_tuple_element_148);
                tmp_tuple_element_148 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[12]);

                if (tmp_tuple_element_148 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_148 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_148 == NULL)) {
                            tmp_tuple_element_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_148 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 665;
                            type_description_2 = "o";
                            goto tuple_build_exception_101;
                        }
                        Py_INCREF(tmp_tuple_element_148);
                    } else {
                        goto tuple_build_exception_101;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_15, 1, tmp_tuple_element_148);
                goto tuple_build_noexception_101;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_101:;
                Py_DECREF(tmp_list_element_15);
                goto list_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_101:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_15);
            }
            goto list_build_noexception_15;
            // Exception handling pass through code for list_build:
            list_build_exception_15:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_17;
            // Finished with no exception for list_build:
            list_build_noexception_15:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 661;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a98aa90b312a1ae44a8db3164de9b07d_17);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_16;

        frame_exception_exit_17:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a98aa90b312a1ae44a8db3164de9b07d_17);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a98aa90b312a1ae44a8db3164de9b07d_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a98aa90b312a1ae44a8db3164de9b07d_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a98aa90b312a1ae44a8db3164de9b07d_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a98aa90b312a1ae44a8db3164de9b07d_17,
            type_description_2,
            outline_15_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a98aa90b312a1ae44a8db3164de9b07d_17 == cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17);
            cache_frame_a98aa90b312a1ae44a8db3164de9b07d_17 = NULL;
        }

        assertFrameObject(frame_a98aa90b312a1ae44a8db3164de9b07d_17);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_16;

        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_50;
        skip_nested_handling_16:;
        {
            nuitka_bool tmp_condition_result_96;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto try_except_handler_50;
            }
            if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
                goto branch_yes_64;
            } else {
                goto branch_no_64;
            }
            assert(tmp_condition_result_96 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_64:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_50;
        }
        branch_no_64:;
        {
            PyObject *tmp_assign_source_161;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_149;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_41 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_149 = mod_consts[149];
            tmp_args_value_32 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_149);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_149 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_149);
            tmp_tuple_element_149 = locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_149);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 648;
            tmp_assign_source_161 = CALL_FUNCTION(tmp_called_value_41, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_161 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;

                goto try_except_handler_50;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_161;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_160 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_160);
        goto try_return_handler_50;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648);
        locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648 = NULL;
        goto try_return_handler_49;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648);
        locals_visvis$text$freetype$ft_structs$$$class__16_FT_SizeRec_648 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto try_except_handler_49;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 648;
        goto try_except_handler_48;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_160);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 667;
        tmp_assign_source_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_10);
        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_162);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_tuple_element_150;
        tmp_tuple_element_150 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_150 == NULL)) {
            tmp_tuple_element_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        tmp_assign_source_163 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_163, 0, tmp_tuple_element_150);
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_163;
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_dircall_arg1_17;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_164 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_164;
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = PyDict_New();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_metaclass_value_17;
        bool tmp_condition_result_97;
        PyObject *tmp_key_value_49;
        PyObject *tmp_dict_arg_value_49;
        PyObject *tmp_dict_arg_value_50;
        PyObject *tmp_key_value_50;
        nuitka_bool tmp_condition_result_98;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_17;
        tmp_key_value_49 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_dict_arg_value_49 = tmp_class_creation_17__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_49, tmp_key_value_49);
        assert(!(tmp_res == -1));
        tmp_condition_result_97 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_97 != false) {
            goto condexpr_true_33;
        } else {
            goto condexpr_false_33;
        }
        condexpr_true_33:;
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_dict_arg_value_50 = tmp_class_creation_17__class_decl_dict;
        tmp_key_value_50 = mod_consts[36];
        tmp_metaclass_value_17 = DICT_GET_ITEM0(tmp_dict_arg_value_50, tmp_key_value_50);
        if (tmp_metaclass_value_17 == NULL) {
            tmp_metaclass_value_17 = Py_None;
        }
        assert(!(tmp_metaclass_value_17 == NULL));
        Py_INCREF(tmp_metaclass_value_17);
        goto condexpr_end_33;
        condexpr_false_33:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        tmp_condition_result_98 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_34;
        } else {
            goto condexpr_false_34;
        }
        condexpr_true_34:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_81 = tmp_class_creation_17__bases;
        tmp_subscript_value_17 = mod_consts[9];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_81, tmp_subscript_value_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        goto condexpr_end_34;
        condexpr_false_34:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_34:;
        condexpr_end_33:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_166 = SELECT_METACLASS(tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_166;
    }
    {
        bool tmp_condition_result_99;
        PyObject *tmp_key_value_51;
        PyObject *tmp_dict_arg_value_51;
        tmp_key_value_51 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_dict_arg_value_51 = tmp_class_creation_17__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_51, tmp_key_value_51);
        assert(!(tmp_res == -1));
        tmp_condition_result_99 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_99 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 674;

        goto try_except_handler_51;
    }
    branch_no_65:;
    {
        nuitka_bool tmp_condition_result_100;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_82 = tmp_class_creation_17__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_82, mod_consts[37]);
        tmp_condition_result_100 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_151;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_83 = tmp_class_creation_17__metaclass;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[37]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        tmp_tuple_element_151 = mod_consts[152];
        tmp_args_value_33 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_151);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_151 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_151);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 674;
        tmp_assign_source_167 = CALL_FUNCTION(tmp_called_value_43, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_167;
    }
    {
        bool tmp_condition_result_101;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_84 = tmp_class_creation_17__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_84, mod_consts[39]);
        tmp_operand_value_17 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        tmp_condition_result_101 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_101 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_left_value_17;
        PyObject *tmp_right_value_17;
        PyObject *tmp_tuple_element_152;
        PyObject *tmp_getattr_target_17;
        PyObject *tmp_getattr_attr_17;
        PyObject *tmp_getattr_default_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_left_value_17 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_getattr_target_17 = tmp_class_creation_17__metaclass;
        tmp_getattr_attr_17 = mod_consts[41];
        tmp_getattr_default_17 = mod_consts[42];
        tmp_tuple_element_152 = BUILTIN_GETATTR(tmp_getattr_target_17, tmp_getattr_attr_17, tmp_getattr_default_17);
        if (tmp_tuple_element_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        tmp_right_value_17 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_85;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_right_value_17, 0, tmp_tuple_element_152);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_value_85 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_85 == NULL));
            tmp_tuple_element_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[41]);
            Py_DECREF(tmp_expression_value_85);
            if (tmp_tuple_element_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 674;

                goto tuple_build_exception_102;
            }
            PyTuple_SET_ITEM(tmp_right_value_17, 1, tmp_tuple_element_152);
        }
        goto tuple_build_noexception_102;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_102:;
        Py_DECREF(tmp_right_value_17);
        goto try_except_handler_51;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_102:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_17, tmp_right_value_17);
        Py_DECREF(tmp_right_value_17);
        if (tmp_raise_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_51;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 674;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_51;
    }
    branch_no_67:;
    goto branch_end_66;
    branch_no_66:;
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = PyDict_New();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_168;
    }
    branch_end_66:;
    {
        PyObject *tmp_assign_source_169;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_53;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_53;
        }
        tmp_dictset_value = mod_consts[152];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_53;
        }
        if (isFrameUnusable(cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18)) {
            Py_XDECREF(cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18);

#if _DEBUG_REFCOUNTS
            if (cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18 = MAKE_FUNCTION_FRAME(codeobj_14803e5d95fa812689ab3a6fbf7f603b, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18->m_type_description == NULL);
        frame_14803e5d95fa812689ab3a6fbf7f603b_18 = cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_14803e5d95fa812689ab3a6fbf7f603b_18);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_14803e5d95fa812689ab3a6fbf7f603b_18) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_16;
            PyObject *tmp_tuple_element_153;
            tmp_tuple_element_153 = mod_consts[154];
            tmp_list_element_16 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_153);
            tmp_tuple_element_153 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[34]);

            if (tmp_tuple_element_153 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_153 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34]);

                    if (unlikely(tmp_tuple_element_153 == NULL)) {
                        tmp_tuple_element_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                    }

                    if (tmp_tuple_element_153 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 779;
                        type_description_2 = "o";
                        goto tuple_build_exception_103;
                    }
                    Py_INCREF(tmp_tuple_element_153);
                } else {
                    goto tuple_build_exception_103;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_153);
            goto tuple_build_noexception_103;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_103:;
            Py_DECREF(tmp_list_element_16);
            goto frame_exception_exit_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_103:;
            tmp_dictset_value = PyList_New(32);
            {
                PyObject *tmp_tuple_element_154;
                PyObject *tmp_tuple_element_155;
                PyObject *tmp_tuple_element_156;
                PyObject *tmp_tuple_element_157;
                PyObject *tmp_tuple_element_158;
                PyObject *tmp_tuple_element_159;
                PyObject *tmp_tuple_element_160;
                PyObject *tmp_tuple_element_161;
                PyObject *tmp_tuple_element_162;
                PyObject *tmp_tuple_element_163;
                PyObject *tmp_tuple_element_164;
                PyObject *tmp_tuple_element_165;
                PyObject *tmp_tuple_element_166;
                PyObject *tmp_tuple_element_167;
                PyObject *tmp_tuple_element_168;
                PyObject *tmp_tuple_element_169;
                PyObject *tmp_tuple_element_170;
                PyObject *tmp_tuple_element_171;
                PyObject *tmp_tuple_element_172;
                PyObject *tmp_tuple_element_173;
                PyObject *tmp_tuple_element_174;
                PyObject *tmp_tuple_element_175;
                PyObject *tmp_tuple_element_176;
                PyObject *tmp_tuple_element_177;
                PyObject *tmp_tuple_element_178;
                PyObject *tmp_tuple_element_179;
                PyObject *tmp_tuple_element_180;
                PyObject *tmp_tuple_element_181;
                PyObject *tmp_tuple_element_182;
                PyObject *tmp_tuple_element_183;
                PyObject *tmp_tuple_element_184;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_16);
                tmp_tuple_element_154 = mod_consts[155];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_154);
                tmp_tuple_element_154 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[34]);

                if (tmp_tuple_element_154 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_154 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_154 == NULL)) {
                            tmp_tuple_element_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_154 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 780;
                            type_description_2 = "o";
                            goto tuple_build_exception_104;
                        }
                        Py_INCREF(tmp_tuple_element_154);
                    } else {
                        goto tuple_build_exception_104;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_154);
                goto tuple_build_noexception_104;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_104:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_104:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_16);
                tmp_tuple_element_155 = mod_consts[156];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_155);
                tmp_tuple_element_155 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[34]);

                if (tmp_tuple_element_155 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_155 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_155 == NULL)) {
                            tmp_tuple_element_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_155 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 782;
                            type_description_2 = "o";
                            goto tuple_build_exception_105;
                        }
                        Py_INCREF(tmp_tuple_element_155);
                    } else {
                        goto tuple_build_exception_105;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_155);
                goto tuple_build_noexception_105;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_105:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_105:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_16);
                tmp_tuple_element_156 = mod_consts[157];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_156);
                tmp_tuple_element_156 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[34]);

                if (tmp_tuple_element_156 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_156 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_156 == NULL)) {
                            tmp_tuple_element_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_156 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 783;
                            type_description_2 = "o";
                            goto tuple_build_exception_106;
                        }
                        Py_INCREF(tmp_tuple_element_156);
                    } else {
                        goto tuple_build_exception_106;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_156);
                goto tuple_build_noexception_106;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_106:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_106:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_16);
                tmp_tuple_element_157 = mod_consts[158];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_157);
                tmp_tuple_element_157 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[34]);

                if (tmp_tuple_element_157 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_157 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_157 == NULL)) {
                            tmp_tuple_element_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_157 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 785;
                            type_description_2 = "o";
                            goto tuple_build_exception_107;
                        }
                        Py_INCREF(tmp_tuple_element_157);
                    } else {
                        goto tuple_build_exception_107;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_157);
                goto tuple_build_noexception_107;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_107:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_107:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_16);
                tmp_tuple_element_158 = mod_consts[159];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_158);
                tmp_tuple_element_158 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[22]);

                if (tmp_tuple_element_158 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_158 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_tuple_element_158 == NULL)) {
                            tmp_tuple_element_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                        }

                        if (tmp_tuple_element_158 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 787;
                            type_description_2 = "o";
                            goto tuple_build_exception_108;
                        }
                        Py_INCREF(tmp_tuple_element_158);
                    } else {
                        goto tuple_build_exception_108;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_158);
                goto tuple_build_noexception_108;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_108:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_108:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_16);
                tmp_tuple_element_159 = mod_consts[160];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_159);
                tmp_tuple_element_159 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[22]);

                if (tmp_tuple_element_159 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_159 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_tuple_element_159 == NULL)) {
                            tmp_tuple_element_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                        }

                        if (tmp_tuple_element_159 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 788;
                            type_description_2 = "o";
                            goto tuple_build_exception_109;
                        }
                        Py_INCREF(tmp_tuple_element_159);
                    } else {
                        goto tuple_build_exception_109;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_159);
                goto tuple_build_noexception_109;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_109:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_109:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_16);
                tmp_tuple_element_160 = mod_consts[161];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_160);
                tmp_tuple_element_160 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[32]);

                if (tmp_tuple_element_160 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_160 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_160 == NULL)) {
                            tmp_tuple_element_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_160 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 790;
                            type_description_2 = "o";
                            goto tuple_build_exception_110;
                        }
                        Py_INCREF(tmp_tuple_element_160);
                    } else {
                        goto tuple_build_exception_110;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_160);
                goto tuple_build_noexception_110;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_110:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_110:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_16);
                tmp_tuple_element_161 = mod_consts[162];
                tmp_list_element_16 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_44;
                    PyObject *tmp_args_element_value_11;
                    PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_161);
                    tmp_called_value_44 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[10]);

                    if (tmp_called_value_44 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_44 == NULL)) {
                                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_44 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 791;
                                type_description_2 = "o";
                                goto tuple_build_exception_111;
                            }
                            Py_INCREF(tmp_called_value_44);
                        } else {
                            goto tuple_build_exception_111;
                        }
                    }

                    tmp_args_element_value_11 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[85]);

                    if (tmp_args_element_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[85]);

                            if (unlikely(tmp_args_element_value_11 == NULL)) {
                                tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                            }

                            if (tmp_args_element_value_11 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_44);

                                exception_lineno = 791;
                                type_description_2 = "o";
                                goto tuple_build_exception_111;
                            }
                            Py_INCREF(tmp_args_element_value_11);
                        } else {
                            goto tuple_build_exception_111;
                        }
                    }

                    frame_14803e5d95fa812689ab3a6fbf7f603b_18->m_frame.f_lineno = 791;
                    tmp_tuple_element_161 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_11);
                    Py_DECREF(tmp_called_value_44);
                    Py_DECREF(tmp_args_element_value_11);
                    if (tmp_tuple_element_161 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 791;
                        type_description_2 = "o";
                        goto tuple_build_exception_111;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_161);
                }
                goto tuple_build_noexception_111;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_111:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_111:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_16);
                tmp_tuple_element_162 = mod_consts[163];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_162);
                tmp_tuple_element_162 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[16]);

                if (tmp_tuple_element_162 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_162 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_162 == NULL)) {
                            tmp_tuple_element_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_tuple_element_162 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 793;
                            type_description_2 = "o";
                            goto tuple_build_exception_112;
                        }
                        Py_INCREF(tmp_tuple_element_162);
                    } else {
                        goto tuple_build_exception_112;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_162);
                goto tuple_build_noexception_112;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_112:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_112:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_16);
                tmp_tuple_element_163 = mod_consts[164];
                tmp_list_element_16 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_45;
                    PyObject *tmp_args_element_value_12;
                    PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_163);
                    tmp_called_value_45 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[10]);

                    if (tmp_called_value_45 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_45 == NULL)) {
                                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_45 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 794;
                                type_description_2 = "o";
                                goto tuple_build_exception_113;
                            }
                            Py_INCREF(tmp_called_value_45);
                        } else {
                            goto tuple_build_exception_113;
                        }
                    }

                    tmp_args_element_value_12 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[97]);

                    if (tmp_args_element_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[97]);

                            if (unlikely(tmp_args_element_value_12 == NULL)) {
                                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
                            }

                            if (tmp_args_element_value_12 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_45);

                                exception_lineno = 794;
                                type_description_2 = "o";
                                goto tuple_build_exception_113;
                            }
                            Py_INCREF(tmp_args_element_value_12);
                        } else {
                            goto tuple_build_exception_113;
                        }
                    }

                    frame_14803e5d95fa812689ab3a6fbf7f603b_18->m_frame.f_lineno = 794;
                    tmp_tuple_element_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_12);
                    Py_DECREF(tmp_called_value_45);
                    Py_DECREF(tmp_args_element_value_12);
                    if (tmp_tuple_element_163 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 794;
                        type_description_2 = "o";
                        goto tuple_build_exception_113;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_163);
                }
                goto tuple_build_noexception_113;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_113:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_113:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_16);
                tmp_tuple_element_164 = mod_consts[125];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_164);
                tmp_tuple_element_164 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[81]);

                if (tmp_tuple_element_164 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_164 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_tuple_element_164 == NULL)) {
                            tmp_tuple_element_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_tuple_element_164 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 796;
                            type_description_2 = "o";
                            goto tuple_build_exception_114;
                        }
                        Py_INCREF(tmp_tuple_element_164);
                    } else {
                        goto tuple_build_exception_114;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_164);
                goto tuple_build_noexception_114;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_114:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_114:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_16);
                tmp_tuple_element_165 = mod_consts[165];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_165);
                tmp_tuple_element_165 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[54]);

                if (tmp_tuple_element_165 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_165 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_tuple_element_165 == NULL)) {
                            tmp_tuple_element_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_tuple_element_165 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 801;
                            type_description_2 = "o";
                            goto tuple_build_exception_115;
                        }
                        Py_INCREF(tmp_tuple_element_165);
                    } else {
                        goto tuple_build_exception_115;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_165);
                goto tuple_build_noexception_115;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_115:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_115:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_16);
                tmp_tuple_element_166 = mod_consts[166];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_166);
                tmp_tuple_element_166 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[31]);

                if (tmp_tuple_element_166 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_166 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_166 == NULL)) {
                            tmp_tuple_element_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_166 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 803;
                            type_description_2 = "o";
                            goto tuple_build_exception_116;
                        }
                        Py_INCREF(tmp_tuple_element_166);
                    } else {
                        goto tuple_build_exception_116;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_166);
                goto tuple_build_noexception_116;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_116:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_116:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_16);
                tmp_tuple_element_167 = mod_consts[146];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_167);
                tmp_tuple_element_167 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_167 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_167 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_167 == NULL)) {
                            tmp_tuple_element_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_167 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 804;
                            type_description_2 = "o";
                            goto tuple_build_exception_117;
                        }
                        Py_INCREF(tmp_tuple_element_167);
                    } else {
                        goto tuple_build_exception_117;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_167);
                goto tuple_build_noexception_117;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_117:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_117:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_16);
                tmp_tuple_element_168 = mod_consts[147];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_168);
                tmp_tuple_element_168 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_168 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_168 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_168 == NULL)) {
                            tmp_tuple_element_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_168 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 805;
                            type_description_2 = "o";
                            goto tuple_build_exception_118;
                        }
                        Py_INCREF(tmp_tuple_element_168);
                    } else {
                        goto tuple_build_exception_118;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_168);
                goto tuple_build_noexception_118;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_118:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_118:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_16);
                tmp_tuple_element_169 = mod_consts[87];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_169);
                tmp_tuple_element_169 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_169 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_169 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_169 == NULL)) {
                            tmp_tuple_element_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_169 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 806;
                            type_description_2 = "o";
                            goto tuple_build_exception_119;
                        }
                        Py_INCREF(tmp_tuple_element_169);
                    } else {
                        goto tuple_build_exception_119;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_169);
                goto tuple_build_noexception_119;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_119:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_119:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_16);
                tmp_tuple_element_170 = mod_consts[167];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_170);
                tmp_tuple_element_170 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_170 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_170 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_170 == NULL)) {
                            tmp_tuple_element_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_170 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 808;
                            type_description_2 = "o";
                            goto tuple_build_exception_120;
                        }
                        Py_INCREF(tmp_tuple_element_170);
                    } else {
                        goto tuple_build_exception_120;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_170);
                goto tuple_build_noexception_120;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_120:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_120:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_16);
                tmp_tuple_element_171 = mod_consts[168];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_171);
                tmp_tuple_element_171 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_171 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_171 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_171 == NULL)) {
                            tmp_tuple_element_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_171 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 809;
                            type_description_2 = "o";
                            goto tuple_build_exception_121;
                        }
                        Py_INCREF(tmp_tuple_element_171);
                    } else {
                        goto tuple_build_exception_121;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_171);
                goto tuple_build_noexception_121;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_121:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_121:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_16);
                tmp_tuple_element_172 = mod_consts[169];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_172);
                tmp_tuple_element_172 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_172 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_172 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_172 == NULL)) {
                            tmp_tuple_element_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_172 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 811;
                            type_description_2 = "o";
                            goto tuple_build_exception_122;
                        }
                        Py_INCREF(tmp_tuple_element_172);
                    } else {
                        goto tuple_build_exception_122;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_172);
                goto tuple_build_noexception_122;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_122:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_122:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_16);
                tmp_tuple_element_173 = mod_consts[170];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_173);
                tmp_tuple_element_173 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[30]);

                if (tmp_tuple_element_173 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_173 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_tuple_element_173 == NULL)) {
                            tmp_tuple_element_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_tuple_element_173 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 812;
                            type_description_2 = "o";
                            goto tuple_build_exception_123;
                        }
                        Py_INCREF(tmp_tuple_element_173);
                    } else {
                        goto tuple_build_exception_123;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_173);
                goto tuple_build_noexception_123;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_123:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_123:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_16);
                tmp_tuple_element_174 = mod_consts[171];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_174);
                tmp_tuple_element_174 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[141]);

                if (tmp_tuple_element_174 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_174 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[141]);

                        if (unlikely(tmp_tuple_element_174 == NULL)) {
                            tmp_tuple_element_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                        }

                        if (tmp_tuple_element_174 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 814;
                            type_description_2 = "o";
                            goto tuple_build_exception_124;
                        }
                        Py_INCREF(tmp_tuple_element_174);
                    } else {
                        goto tuple_build_exception_124;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_174);
                goto tuple_build_noexception_124;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_124:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_124:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_16);
                tmp_tuple_element_175 = mod_consts[88];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_175);
                tmp_tuple_element_175 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[151]);

                if (tmp_tuple_element_175 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_175 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_tuple_element_175 == NULL)) {
                            tmp_tuple_element_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                        }

                        if (tmp_tuple_element_175 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 815;
                            type_description_2 = "o";
                            goto tuple_build_exception_125;
                        }
                        Py_INCREF(tmp_tuple_element_175);
                    } else {
                        goto tuple_build_exception_125;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_175);
                goto tuple_build_noexception_125;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_125:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_125:;
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_16);
                tmp_tuple_element_176 = mod_consts[172];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_176);
                tmp_tuple_element_176 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[97]);

                if (tmp_tuple_element_176 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_176 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[97]);

                        if (unlikely(tmp_tuple_element_176 == NULL)) {
                            tmp_tuple_element_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
                        }

                        if (tmp_tuple_element_176 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 816;
                            type_description_2 = "o";
                            goto tuple_build_exception_126;
                        }
                        Py_INCREF(tmp_tuple_element_176);
                    } else {
                        goto tuple_build_exception_126;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_176);
                goto tuple_build_noexception_126;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_126:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_126:;
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_16);
                tmp_tuple_element_177 = mod_consts[173];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_177);
                tmp_tuple_element_177 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_177 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_177 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_177 == NULL)) {
                            tmp_tuple_element_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_177 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 819;
                            type_description_2 = "o";
                            goto tuple_build_exception_127;
                        }
                        Py_INCREF(tmp_tuple_element_177);
                    } else {
                        goto tuple_build_exception_127;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_177);
                goto tuple_build_noexception_127;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_127:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_127:;
                PyList_SET_ITEM(tmp_dictset_value, 24, tmp_list_element_16);
                tmp_tuple_element_178 = mod_consts[174];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_178);
                tmp_tuple_element_178 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_178 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_178 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_178 == NULL)) {
                            tmp_tuple_element_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_178 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 820;
                            type_description_2 = "o";
                            goto tuple_build_exception_128;
                        }
                        Py_INCREF(tmp_tuple_element_178);
                    } else {
                        goto tuple_build_exception_128;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_178);
                goto tuple_build_noexception_128;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_128:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_128:;
                PyList_SET_ITEM(tmp_dictset_value, 25, tmp_list_element_16);
                tmp_tuple_element_179 = mod_consts[175];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_179);
                tmp_tuple_element_179 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_179 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_179 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_179 == NULL)) {
                            tmp_tuple_element_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_179 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 821;
                            type_description_2 = "o";
                            goto tuple_build_exception_129;
                        }
                        Py_INCREF(tmp_tuple_element_179);
                    } else {
                        goto tuple_build_exception_129;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_179);
                goto tuple_build_noexception_129;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_129:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_129:;
                PyList_SET_ITEM(tmp_dictset_value, 26, tmp_list_element_16);
                tmp_tuple_element_180 = mod_consts[176];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_180);
                tmp_tuple_element_180 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_180 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_180 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_180 == NULL)) {
                            tmp_tuple_element_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_180 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 822;
                            type_description_2 = "o";
                            goto tuple_build_exception_130;
                        }
                        Py_INCREF(tmp_tuple_element_180);
                    } else {
                        goto tuple_build_exception_130;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_180);
                goto tuple_build_noexception_130;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_130:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_130:;
                PyList_SET_ITEM(tmp_dictset_value, 27, tmp_list_element_16);
                tmp_tuple_element_181 = mod_consts[177];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_181);
                tmp_tuple_element_181 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_181 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_181 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_181 == NULL)) {
                            tmp_tuple_element_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_181 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 823;
                            type_description_2 = "o";
                            goto tuple_build_exception_131;
                        }
                        Py_INCREF(tmp_tuple_element_181);
                    } else {
                        goto tuple_build_exception_131;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_181);
                goto tuple_build_noexception_131;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_131:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_131:;
                PyList_SET_ITEM(tmp_dictset_value, 28, tmp_list_element_16);
                tmp_tuple_element_182 = mod_consts[178];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_182);
                tmp_tuple_element_182 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[81]);

                if (tmp_tuple_element_182 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_182 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_tuple_element_182 == NULL)) {
                            tmp_tuple_element_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_tuple_element_182 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 824;
                            type_description_2 = "o";
                            goto tuple_build_exception_132;
                        }
                        Py_INCREF(tmp_tuple_element_182);
                    } else {
                        goto tuple_build_exception_132;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_182);
                goto tuple_build_noexception_132;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_132:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_132:;
                PyList_SET_ITEM(tmp_dictset_value, 29, tmp_list_element_16);
                tmp_tuple_element_183 = mod_consts[179];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_183);
                tmp_tuple_element_183 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_183 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_183 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_183 == NULL)) {
                            tmp_tuple_element_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_183 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 825;
                            type_description_2 = "o";
                            goto tuple_build_exception_133;
                        }
                        Py_INCREF(tmp_tuple_element_183);
                    } else {
                        goto tuple_build_exception_133;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_183);
                goto tuple_build_noexception_133;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_133:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_133:;
                PyList_SET_ITEM(tmp_dictset_value, 30, tmp_list_element_16);
                tmp_tuple_element_184 = mod_consts[140];
                tmp_list_element_16 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_16, 0, tmp_tuple_element_184);
                tmp_tuple_element_184 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[12]);

                if (tmp_tuple_element_184 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_184 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_184 == NULL)) {
                            tmp_tuple_element_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_184 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 826;
                            type_description_2 = "o";
                            goto tuple_build_exception_134;
                        }
                        Py_INCREF(tmp_tuple_element_184);
                    } else {
                        goto tuple_build_exception_134;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_16, 1, tmp_tuple_element_184);
                goto tuple_build_noexception_134;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_134:;
                Py_DECREF(tmp_list_element_16);
                goto list_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_134:;
                PyList_SET_ITEM(tmp_dictset_value, 31, tmp_list_element_16);
            }
            goto list_build_noexception_16;
            // Exception handling pass through code for list_build:
            list_build_exception_16:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_18;
            // Finished with no exception for list_build:
            list_build_noexception_16:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_14803e5d95fa812689ab3a6fbf7f603b_18);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_17;

        frame_exception_exit_18:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_14803e5d95fa812689ab3a6fbf7f603b_18);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_14803e5d95fa812689ab3a6fbf7f603b_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_14803e5d95fa812689ab3a6fbf7f603b_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_14803e5d95fa812689ab3a6fbf7f603b_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_14803e5d95fa812689ab3a6fbf7f603b_18,
            type_description_2,
            outline_16_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_14803e5d95fa812689ab3a6fbf7f603b_18 == cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18);
            cache_frame_14803e5d95fa812689ab3a6fbf7f603b_18 = NULL;
        }

        assertFrameObject(frame_14803e5d95fa812689ab3a6fbf7f603b_18);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_17;

        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_17:;

        goto try_except_handler_53;
        skip_nested_handling_17:;
        {
            nuitka_bool tmp_condition_result_102;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_102 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_102 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 674;

                goto try_except_handler_53;
            }
            if (tmp_condition_result_102 == NUITKA_BOOL_TRUE) {
                goto branch_yes_68;
            } else {
                goto branch_no_68;
            }
            assert(tmp_condition_result_102 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_68:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;

            goto try_except_handler_53;
        }
        branch_no_68:;
        {
            PyObject *tmp_assign_source_170;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_185;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_46 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_185 = mod_consts[152];
            tmp_args_value_34 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_185);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_185 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_185);
            tmp_tuple_element_185 = locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_185);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 674;
            tmp_assign_source_170 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_170 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 674;

                goto try_except_handler_53;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_170;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_169 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_169);
        goto try_return_handler_53;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674);
        locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674 = NULL;
        goto try_return_handler_52;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674);
        locals_visvis$text$freetype$ft_structs$$$class__17_FT_FaceRec_674 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto try_except_handler_52;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 674;
        goto try_except_handler_51;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_169);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 828;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 828;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 828;
        tmp_assign_source_171 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_13);
        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 828;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_171);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_tuple_element_186;
        tmp_tuple_element_186 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_186 == NULL)) {
            tmp_tuple_element_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        tmp_assign_source_172 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_172, 0, tmp_tuple_element_186);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_173 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = PyDict_New();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_metaclass_value_18;
        bool tmp_condition_result_103;
        PyObject *tmp_key_value_52;
        PyObject *tmp_dict_arg_value_52;
        PyObject *tmp_dict_arg_value_53;
        PyObject *tmp_key_value_53;
        nuitka_bool tmp_condition_result_104;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_18;
        tmp_key_value_52 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_dict_arg_value_52 = tmp_class_creation_18__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_52, tmp_key_value_52);
        assert(!(tmp_res == -1));
        tmp_condition_result_103 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_103 != false) {
            goto condexpr_true_35;
        } else {
            goto condexpr_false_35;
        }
        condexpr_true_35:;
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_dict_arg_value_53 = tmp_class_creation_18__class_decl_dict;
        tmp_key_value_53 = mod_consts[36];
        tmp_metaclass_value_18 = DICT_GET_ITEM0(tmp_dict_arg_value_53, tmp_key_value_53);
        if (tmp_metaclass_value_18 == NULL) {
            tmp_metaclass_value_18 = Py_None;
        }
        assert(!(tmp_metaclass_value_18 == NULL));
        Py_INCREF(tmp_metaclass_value_18);
        goto condexpr_end_35;
        condexpr_false_35:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        tmp_condition_result_104 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_104 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_36;
        } else {
            goto condexpr_false_36;
        }
        condexpr_true_36:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_86 = tmp_class_creation_18__bases;
        tmp_subscript_value_18 = mod_consts[9];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_86, tmp_subscript_value_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        goto condexpr_end_36;
        condexpr_false_36:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_36:;
        condexpr_end_35:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_175 = SELECT_METACLASS(tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_175;
    }
    {
        bool tmp_condition_result_105;
        PyObject *tmp_key_value_54;
        PyObject *tmp_dict_arg_value_54;
        tmp_key_value_54 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_dict_arg_value_54 = tmp_class_creation_18__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_54, tmp_key_value_54);
        assert(!(tmp_res == -1));
        tmp_condition_result_105 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_105 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 835;

        goto try_except_handler_54;
    }
    branch_no_69:;
    {
        nuitka_bool tmp_condition_result_106;
        PyObject *tmp_expression_value_87;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_87 = tmp_class_creation_18__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_87, mod_consts[37]);
        tmp_condition_result_106 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_106 == NUITKA_BOOL_TRUE) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_187;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_88 = tmp_class_creation_18__metaclass;
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[37]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        tmp_tuple_element_187 = mod_consts[181];
        tmp_args_value_35 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_187);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_187 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_187);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 835;
        tmp_assign_source_176 = CALL_FUNCTION(tmp_called_value_48, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_176;
    }
    {
        bool tmp_condition_result_107;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_89 = tmp_class_creation_18__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_89, mod_consts[39]);
        tmp_operand_value_18 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        tmp_condition_result_107 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_107 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_18;
        PyObject *tmp_tuple_element_188;
        PyObject *tmp_getattr_target_18;
        PyObject *tmp_getattr_attr_18;
        PyObject *tmp_getattr_default_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_left_value_18 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_getattr_target_18 = tmp_class_creation_18__metaclass;
        tmp_getattr_attr_18 = mod_consts[41];
        tmp_getattr_default_18 = mod_consts[42];
        tmp_tuple_element_188 = BUILTIN_GETATTR(tmp_getattr_target_18, tmp_getattr_attr_18, tmp_getattr_default_18);
        if (tmp_tuple_element_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        tmp_right_value_18 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_right_value_18, 0, tmp_tuple_element_188);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[41]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_188 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 835;

                goto tuple_build_exception_135;
            }
            PyTuple_SET_ITEM(tmp_right_value_18, 1, tmp_tuple_element_188);
        }
        goto tuple_build_noexception_135;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_135:;
        Py_DECREF(tmp_right_value_18);
        goto try_except_handler_54;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_135:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_18, tmp_right_value_18);
        Py_DECREF(tmp_right_value_18);
        if (tmp_raise_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_54;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 835;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_54;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = PyDict_New();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_177;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_178;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_56;
        }
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_56;
        }
        tmp_dictset_value = mod_consts[181];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_56;
        }
        if (isFrameUnusable(cache_frame_1ccb6c9dc70a1812859a73787caf930b_19)) {
            Py_XDECREF(cache_frame_1ccb6c9dc70a1812859a73787caf930b_19);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1ccb6c9dc70a1812859a73787caf930b_19 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1ccb6c9dc70a1812859a73787caf930b_19 = MAKE_FUNCTION_FRAME(codeobj_1ccb6c9dc70a1812859a73787caf930b, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1ccb6c9dc70a1812859a73787caf930b_19->m_type_description == NULL);
        frame_1ccb6c9dc70a1812859a73787caf930b_19 = cache_frame_1ccb6c9dc70a1812859a73787caf930b_19;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1ccb6c9dc70a1812859a73787caf930b_19);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1ccb6c9dc70a1812859a73787caf930b_19) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_17;
            PyObject *tmp_tuple_element_189;
            tmp_tuple_element_189 = mod_consts[183];
            tmp_list_element_17 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_17, 0, tmp_tuple_element_189);
            tmp_tuple_element_189 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[35]);

            if (tmp_tuple_element_189 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_189 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_tuple_element_189 == NULL)) {
                        tmp_tuple_element_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_tuple_element_189 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 845;
                        type_description_2 = "o";
                        goto tuple_build_exception_136;
                    }
                    Py_INCREF(tmp_tuple_element_189);
                } else {
                    goto tuple_build_exception_136;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_17, 1, tmp_tuple_element_189);
            goto tuple_build_noexception_136;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_136:;
            Py_DECREF(tmp_list_element_17);
            goto frame_exception_exit_19;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_136:;
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_tuple_element_190;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_17);
                tmp_tuple_element_190 = mod_consts[83];
                tmp_list_element_17 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_17, 0, tmp_tuple_element_190);
                tmp_tuple_element_190 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[21]);

                if (tmp_tuple_element_190 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_190 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_190 == NULL)) {
                            tmp_tuple_element_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                        }

                        if (tmp_tuple_element_190 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 846;
                            type_description_2 = "o";
                            goto tuple_build_exception_137;
                        }
                        Py_INCREF(tmp_tuple_element_190);
                    } else {
                        goto tuple_build_exception_137;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_17, 1, tmp_tuple_element_190);
                goto tuple_build_noexception_137;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_137:;
                Py_DECREF(tmp_list_element_17);
                goto list_build_exception_17;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_137:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_17);
            }
            goto list_build_noexception_17;
            // Exception handling pass through code for list_build:
            list_build_exception_17:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_19;
            // Finished with no exception for list_build:
            list_build_noexception_17:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 844;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1ccb6c9dc70a1812859a73787caf930b_19);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_18;

        frame_exception_exit_19:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1ccb6c9dc70a1812859a73787caf930b_19);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1ccb6c9dc70a1812859a73787caf930b_19, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1ccb6c9dc70a1812859a73787caf930b_19->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1ccb6c9dc70a1812859a73787caf930b_19, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1ccb6c9dc70a1812859a73787caf930b_19,
            type_description_2,
            outline_17_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1ccb6c9dc70a1812859a73787caf930b_19 == cache_frame_1ccb6c9dc70a1812859a73787caf930b_19) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1ccb6c9dc70a1812859a73787caf930b_19);
            cache_frame_1ccb6c9dc70a1812859a73787caf930b_19 = NULL;
        }

        assertFrameObject(frame_1ccb6c9dc70a1812859a73787caf930b_19);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_18;

        frame_no_exception_18:;
        goto skip_nested_handling_18;
        nested_frame_exit_18:;

        goto try_except_handler_56;
        skip_nested_handling_18:;
        {
            nuitka_bool tmp_condition_result_108;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_108 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_108 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 835;

                goto try_except_handler_56;
            }
            if (tmp_condition_result_108 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
            assert(tmp_condition_result_108 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_72:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_56;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_179;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_191;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_49 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_191 = mod_consts[181];
            tmp_args_value_36 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_191);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_191 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_191);
            tmp_tuple_element_191 = locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_191);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 835;
            tmp_assign_source_179 = CALL_FUNCTION(tmp_called_value_49, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_179 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 835;

                goto try_except_handler_56;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_179;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_178 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_178);
        goto try_return_handler_56;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835);
        locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835 = NULL;
        goto try_return_handler_55;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835);
        locals_visvis$text$freetype$ft_structs$$$class__18_FT_Parameter_835 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto try_except_handler_55;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 835;
        goto try_except_handler_54;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_178);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 847;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 847;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 847;
        tmp_assign_source_180 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_14);
        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 847;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_180);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_tuple_element_192;
        tmp_tuple_element_192 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_192 == NULL)) {
            tmp_tuple_element_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        tmp_assign_source_181 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_181, 0, tmp_tuple_element_192);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_182 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_182;
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = PyDict_New();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_183;
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_metaclass_value_19;
        bool tmp_condition_result_109;
        PyObject *tmp_key_value_55;
        PyObject *tmp_dict_arg_value_55;
        PyObject *tmp_dict_arg_value_56;
        PyObject *tmp_key_value_56;
        nuitka_bool tmp_condition_result_110;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_19;
        tmp_key_value_55 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_dict_arg_value_55 = tmp_class_creation_19__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_55, tmp_key_value_55);
        assert(!(tmp_res == -1));
        tmp_condition_result_109 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_109 != false) {
            goto condexpr_true_37;
        } else {
            goto condexpr_false_37;
        }
        condexpr_true_37:;
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_dict_arg_value_56 = tmp_class_creation_19__class_decl_dict;
        tmp_key_value_56 = mod_consts[36];
        tmp_metaclass_value_19 = DICT_GET_ITEM0(tmp_dict_arg_value_56, tmp_key_value_56);
        if (tmp_metaclass_value_19 == NULL) {
            tmp_metaclass_value_19 = Py_None;
        }
        assert(!(tmp_metaclass_value_19 == NULL));
        Py_INCREF(tmp_metaclass_value_19);
        goto condexpr_end_37;
        condexpr_false_37:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        tmp_condition_result_110 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_110 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_38;
        } else {
            goto condexpr_false_38;
        }
        condexpr_true_38:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_91 = tmp_class_creation_19__bases;
        tmp_subscript_value_19 = mod_consts[9];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_91, tmp_subscript_value_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        goto condexpr_end_38;
        condexpr_false_38:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_38:;
        condexpr_end_37:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_184 = SELECT_METACLASS(tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_184;
    }
    {
        bool tmp_condition_result_111;
        PyObject *tmp_key_value_57;
        PyObject *tmp_dict_arg_value_57;
        tmp_key_value_57 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_dict_arg_value_57 = tmp_class_creation_19__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_57, tmp_key_value_57);
        assert(!(tmp_res == -1));
        tmp_condition_result_111 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_111 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 855;

        goto try_except_handler_57;
    }
    branch_no_73:;
    {
        nuitka_bool tmp_condition_result_112;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_92 = tmp_class_creation_19__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_92, mod_consts[37]);
        tmp_condition_result_112 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_112 == NUITKA_BOOL_TRUE) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_193;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_93 = tmp_class_creation_19__metaclass;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[37]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        tmp_tuple_element_193 = mod_consts[185];
        tmp_args_value_37 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_193);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_193 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_193);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 855;
        tmp_assign_source_185 = CALL_FUNCTION(tmp_called_value_51, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_185;
    }
    {
        bool tmp_condition_result_113;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_94 = tmp_class_creation_19__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_94, mod_consts[39]);
        tmp_operand_value_19 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        tmp_condition_result_113 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_113 != false) {
            goto branch_yes_75;
        } else {
            goto branch_no_75;
        }
    }
    branch_yes_75:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_19;
        PyObject *tmp_tuple_element_194;
        PyObject *tmp_getattr_target_19;
        PyObject *tmp_getattr_attr_19;
        PyObject *tmp_getattr_default_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_left_value_19 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_getattr_target_19 = tmp_class_creation_19__metaclass;
        tmp_getattr_attr_19 = mod_consts[41];
        tmp_getattr_default_19 = mod_consts[42];
        tmp_tuple_element_194 = BUILTIN_GETATTR(tmp_getattr_target_19, tmp_getattr_attr_19, tmp_getattr_default_19);
        if (tmp_tuple_element_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        tmp_right_value_19 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_95;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_right_value_19, 0, tmp_tuple_element_194);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_value_95 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_95 == NULL));
            tmp_tuple_element_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[41]);
            Py_DECREF(tmp_expression_value_95);
            if (tmp_tuple_element_194 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 855;

                goto tuple_build_exception_138;
            }
            PyTuple_SET_ITEM(tmp_right_value_19, 1, tmp_tuple_element_194);
        }
        goto tuple_build_noexception_138;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_138:;
        Py_DECREF(tmp_right_value_19);
        goto try_except_handler_57;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_138:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_19, tmp_right_value_19);
        Py_DECREF(tmp_right_value_19);
        if (tmp_raise_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_57;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 855;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_57;
    }
    branch_no_75:;
    goto branch_end_74;
    branch_no_74:;
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = PyDict_New();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_186;
    }
    branch_end_74:;
    {
        PyObject *tmp_assign_source_187;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_59;
        }
        tmp_dictset_value = mod_consts[186];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_59;
        }
        tmp_dictset_value = mod_consts[185];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_59;
        }
        if (isFrameUnusable(cache_frame_42a393062d7cdca19a75ffc70f83b19f_20)) {
            Py_XDECREF(cache_frame_42a393062d7cdca19a75ffc70f83b19f_20);

#if _DEBUG_REFCOUNTS
            if (cache_frame_42a393062d7cdca19a75ffc70f83b19f_20 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_42a393062d7cdca19a75ffc70f83b19f_20 = MAKE_FUNCTION_FRAME(codeobj_42a393062d7cdca19a75ffc70f83b19f, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_42a393062d7cdca19a75ffc70f83b19f_20->m_type_description == NULL);
        frame_42a393062d7cdca19a75ffc70f83b19f_20 = cache_frame_42a393062d7cdca19a75ffc70f83b19f_20;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_42a393062d7cdca19a75ffc70f83b19f_20);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_42a393062d7cdca19a75ffc70f83b19f_20) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_18;
            PyObject *tmp_tuple_element_195;
            tmp_tuple_element_195 = mod_consts[113];
            tmp_list_element_18 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_195);
            tmp_tuple_element_195 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[33]);

            if (tmp_tuple_element_195 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_195 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_tuple_element_195 == NULL)) {
                        tmp_tuple_element_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                    }

                    if (tmp_tuple_element_195 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 880;
                        type_description_2 = "o";
                        goto tuple_build_exception_139;
                    }
                    Py_INCREF(tmp_tuple_element_195);
                } else {
                    goto tuple_build_exception_139;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_195);
            goto tuple_build_noexception_139;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_139:;
            Py_DECREF(tmp_list_element_18);
            goto frame_exception_exit_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_139:;
            tmp_dictset_value = PyList_New(8);
            {
                PyObject *tmp_tuple_element_196;
                PyObject *tmp_tuple_element_197;
                PyObject *tmp_tuple_element_198;
                PyObject *tmp_tuple_element_199;
                PyObject *tmp_tuple_element_200;
                PyObject *tmp_tuple_element_201;
                PyObject *tmp_tuple_element_202;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_18);
                tmp_tuple_element_196 = mod_consts[187];
                tmp_list_element_18 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_52;
                    PyObject *tmp_args_element_value_15;
                    PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_196);
                    tmp_called_value_52 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[10]);

                    if (tmp_called_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_52 == NULL)) {
                                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_52 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 881;
                                type_description_2 = "o";
                                goto tuple_build_exception_140;
                            }
                            Py_INCREF(tmp_called_value_52);
                        } else {
                            goto tuple_build_exception_140;
                        }
                    }

                    tmp_args_element_value_15 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[29]);

                    if (tmp_args_element_value_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_15 == NULL)) {
                                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                            }

                            if (tmp_args_element_value_15 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_52);

                                exception_lineno = 881;
                                type_description_2 = "o";
                                goto tuple_build_exception_140;
                            }
                            Py_INCREF(tmp_args_element_value_15);
                        } else {
                            goto tuple_build_exception_140;
                        }
                    }

                    frame_42a393062d7cdca19a75ffc70f83b19f_20->m_frame.f_lineno = 881;
                    tmp_tuple_element_196 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_15);
                    Py_DECREF(tmp_called_value_52);
                    Py_DECREF(tmp_args_element_value_15);
                    if (tmp_tuple_element_196 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 881;
                        type_description_2 = "o";
                        goto tuple_build_exception_140;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_196);
                }
                goto tuple_build_noexception_140;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_140:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_140:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_18);
                tmp_tuple_element_197 = mod_consts[188];
                tmp_list_element_18 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_197);
                tmp_tuple_element_197 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[34]);

                if (tmp_tuple_element_197 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_197 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_197 == NULL)) {
                            tmp_tuple_element_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_197 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 882;
                            type_description_2 = "o";
                            goto tuple_build_exception_141;
                        }
                        Py_INCREF(tmp_tuple_element_197);
                    } else {
                        goto tuple_build_exception_141;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_197);
                goto tuple_build_noexception_141;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_141:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_141:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_18);
                tmp_tuple_element_198 = mod_consts[189];
                tmp_list_element_18 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_198);
                tmp_tuple_element_198 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[22]);

                if (tmp_tuple_element_198 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_198 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_tuple_element_198 == NULL)) {
                            tmp_tuple_element_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                        }

                        if (tmp_tuple_element_198 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 883;
                            type_description_2 = "o";
                            goto tuple_build_exception_142;
                        }
                        Py_INCREF(tmp_tuple_element_198);
                    } else {
                        goto tuple_build_exception_142;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_198);
                goto tuple_build_noexception_142;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_142:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_142:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_18);
                tmp_tuple_element_199 = mod_consts[175];
                tmp_list_element_18 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_199);
                tmp_tuple_element_199 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[12]);

                if (tmp_tuple_element_199 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_199 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_199 == NULL)) {
                            tmp_tuple_element_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_199 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 884;
                            type_description_2 = "o";
                            goto tuple_build_exception_143;
                        }
                        Py_INCREF(tmp_tuple_element_199);
                    } else {
                        goto tuple_build_exception_143;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_199);
                goto tuple_build_noexception_143;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_143:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_143:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_18);
                tmp_tuple_element_200 = mod_consts[173];
                tmp_list_element_18 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_200);
                tmp_tuple_element_200 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[12]);

                if (tmp_tuple_element_200 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_200 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_200 == NULL)) {
                            tmp_tuple_element_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
                        }

                        if (tmp_tuple_element_200 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 885;
                            type_description_2 = "o";
                            goto tuple_build_exception_144;
                        }
                        Py_INCREF(tmp_tuple_element_200);
                    } else {
                        goto tuple_build_exception_144;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_200);
                goto tuple_build_noexception_144;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_144:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_144:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_18);
                tmp_tuple_element_201 = mod_consts[190];
                tmp_list_element_18 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_201);
                tmp_tuple_element_201 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[32]);

                if (tmp_tuple_element_201 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_201 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_201 == NULL)) {
                            tmp_tuple_element_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_201 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 886;
                            type_description_2 = "o";
                            goto tuple_build_exception_145;
                        }
                        Py_INCREF(tmp_tuple_element_201);
                    } else {
                        goto tuple_build_exception_145;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_201);
                goto tuple_build_noexception_145;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_145:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_145:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_18);
                tmp_tuple_element_202 = mod_consts[191];
                tmp_list_element_18 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_18, 0, tmp_tuple_element_202);
                tmp_tuple_element_202 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[184]);

                if (tmp_tuple_element_202 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_202 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[184]);

                        if (unlikely(tmp_tuple_element_202 == NULL)) {
                            tmp_tuple_element_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                        }

                        if (tmp_tuple_element_202 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 887;
                            type_description_2 = "o";
                            goto tuple_build_exception_146;
                        }
                        Py_INCREF(tmp_tuple_element_202);
                    } else {
                        goto tuple_build_exception_146;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_18, 1, tmp_tuple_element_202);
                goto tuple_build_noexception_146;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_146:;
                Py_DECREF(tmp_list_element_18);
                goto list_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_146:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_18);
            }
            goto list_build_noexception_18;
            // Exception handling pass through code for list_build:
            list_build_exception_18:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_20;
            // Finished with no exception for list_build:
            list_build_noexception_18:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 879;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_42a393062d7cdca19a75ffc70f83b19f_20);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_19;

        frame_exception_exit_20:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_42a393062d7cdca19a75ffc70f83b19f_20);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_42a393062d7cdca19a75ffc70f83b19f_20, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_42a393062d7cdca19a75ffc70f83b19f_20->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_42a393062d7cdca19a75ffc70f83b19f_20, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_42a393062d7cdca19a75ffc70f83b19f_20,
            type_description_2,
            outline_18_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_42a393062d7cdca19a75ffc70f83b19f_20 == cache_frame_42a393062d7cdca19a75ffc70f83b19f_20) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_42a393062d7cdca19a75ffc70f83b19f_20);
            cache_frame_42a393062d7cdca19a75ffc70f83b19f_20 = NULL;
        }

        assertFrameObject(frame_42a393062d7cdca19a75ffc70f83b19f_20);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_19;

        frame_no_exception_19:;
        goto skip_nested_handling_19;
        nested_frame_exit_19:;

        goto try_except_handler_59;
        skip_nested_handling_19:;
        {
            nuitka_bool tmp_condition_result_114;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_114 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_114 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 855;

                goto try_except_handler_59;
            }
            if (tmp_condition_result_114 == NUITKA_BOOL_TRUE) {
                goto branch_yes_76;
            } else {
                goto branch_no_76;
            }
            assert(tmp_condition_result_114 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_76:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto try_except_handler_59;
        }
        branch_no_76:;
        {
            PyObject *tmp_assign_source_188;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_203;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_53 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_203 = mod_consts[185];
            tmp_args_value_38 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_203);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_203 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_203);
            tmp_tuple_element_203 = locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_203);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 855;
            tmp_assign_source_188 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_188 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 855;

                goto try_except_handler_59;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_188;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_187 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_187);
        goto try_return_handler_59;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855);
        locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855 = NULL;
        goto try_return_handler_58;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855);
        locals_visvis$text$freetype$ft_structs$$$class__19_FT_Open_Args_855 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto try_except_handler_58;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 855;
        goto try_except_handler_57;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_187);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_tuple_element_204;
        tmp_tuple_element_204 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_204 == NULL)) {
            tmp_tuple_element_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        tmp_assign_source_189 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_189, 0, tmp_tuple_element_204);
        assert(tmp_class_creation_20__bases_orig == NULL);
        tmp_class_creation_20__bases_orig = tmp_assign_source_189;
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_dircall_arg1_20;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_190 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_190;
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = PyDict_New();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_191;
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_metaclass_value_20;
        bool tmp_condition_result_115;
        PyObject *tmp_key_value_58;
        PyObject *tmp_dict_arg_value_58;
        PyObject *tmp_dict_arg_value_59;
        PyObject *tmp_key_value_59;
        nuitka_bool tmp_condition_result_116;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_20;
        tmp_key_value_58 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_dict_arg_value_58 = tmp_class_creation_20__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_58, tmp_key_value_58);
        assert(!(tmp_res == -1));
        tmp_condition_result_115 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_115 != false) {
            goto condexpr_true_39;
        } else {
            goto condexpr_false_39;
        }
        condexpr_true_39:;
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_dict_arg_value_59 = tmp_class_creation_20__class_decl_dict;
        tmp_key_value_59 = mod_consts[36];
        tmp_metaclass_value_20 = DICT_GET_ITEM0(tmp_dict_arg_value_59, tmp_key_value_59);
        if (tmp_metaclass_value_20 == NULL) {
            tmp_metaclass_value_20 = Py_None;
        }
        assert(!(tmp_metaclass_value_20 == NULL));
        Py_INCREF(tmp_metaclass_value_20);
        goto condexpr_end_39;
        condexpr_false_39:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        tmp_condition_result_116 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_116 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_40;
        } else {
            goto condexpr_false_40;
        }
        condexpr_true_40:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_96 = tmp_class_creation_20__bases;
        tmp_subscript_value_20 = mod_consts[9];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_96, tmp_subscript_value_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        goto condexpr_end_40;
        condexpr_false_40:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_40:;
        condexpr_end_39:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_192 = SELECT_METACLASS(tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_192;
    }
    {
        bool tmp_condition_result_117;
        PyObject *tmp_key_value_60;
        PyObject *tmp_dict_arg_value_60;
        tmp_key_value_60 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_dict_arg_value_60 = tmp_class_creation_20__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_60, tmp_key_value_60);
        assert(!(tmp_res == -1));
        tmp_condition_result_117 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_117 != false) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 894;

        goto try_except_handler_60;
    }
    branch_no_77:;
    {
        nuitka_bool tmp_condition_result_118;
        PyObject *tmp_expression_value_97;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_97 = tmp_class_creation_20__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_97, mod_consts[37]);
        tmp_condition_result_118 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_118 == NUITKA_BOOL_TRUE) {
            goto branch_yes_78;
        } else {
            goto branch_no_78;
        }
    }
    branch_yes_78:;
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_205;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_98 = tmp_class_creation_20__metaclass;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[37]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        tmp_tuple_element_205 = mod_consts[192];
        tmp_args_value_39 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_205);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_205 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_205);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 894;
        tmp_assign_source_193 = CALL_FUNCTION(tmp_called_value_54, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_193;
    }
    {
        bool tmp_condition_result_119;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_99;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_99 = tmp_class_creation_20__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_99, mod_consts[39]);
        tmp_operand_value_20 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        tmp_condition_result_119 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_119 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_left_value_20;
        PyObject *tmp_right_value_20;
        PyObject *tmp_tuple_element_206;
        PyObject *tmp_getattr_target_20;
        PyObject *tmp_getattr_attr_20;
        PyObject *tmp_getattr_default_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_left_value_20 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_getattr_target_20 = tmp_class_creation_20__metaclass;
        tmp_getattr_attr_20 = mod_consts[41];
        tmp_getattr_default_20 = mod_consts[42];
        tmp_tuple_element_206 = BUILTIN_GETATTR(tmp_getattr_target_20, tmp_getattr_attr_20, tmp_getattr_default_20);
        if (tmp_tuple_element_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        tmp_right_value_20 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_right_value_20, 0, tmp_tuple_element_206);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_value_100 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_100 == NULL));
            tmp_tuple_element_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[41]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_tuple_element_206 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 894;

                goto tuple_build_exception_147;
            }
            PyTuple_SET_ITEM(tmp_right_value_20, 1, tmp_tuple_element_206);
        }
        goto tuple_build_noexception_147;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_147:;
        Py_DECREF(tmp_right_value_20);
        goto try_except_handler_60;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_147:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_20, tmp_right_value_20);
        Py_DECREF(tmp_right_value_20);
        if (tmp_raise_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_60;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 894;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_60;
    }
    branch_no_79:;
    goto branch_end_78;
    branch_no_78:;
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = PyDict_New();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_194;
    }
    branch_end_78:;
    {
        PyObject *tmp_assign_source_195;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_62;
        }
        tmp_dictset_value = mod_consts[193];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_62;
        }
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_62;
        }
        if (isFrameUnusable(cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21)) {
            Py_XDECREF(cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21 = MAKE_FUNCTION_FRAME(codeobj_9521411cf6871e66cbffa1faf94fa1b2, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21->m_type_description == NULL);
        frame_9521411cf6871e66cbffa1faf94fa1b2_21 = cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9521411cf6871e66cbffa1faf94fa1b2_21);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9521411cf6871e66cbffa1faf94fa1b2_21) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_19;
            PyObject *tmp_tuple_element_207;
            tmp_tuple_element_207 = mod_consts[95];
            tmp_list_element_19 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_207);
            tmp_tuple_element_207 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[31]);

            if (tmp_tuple_element_207 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_207 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_tuple_element_207 == NULL)) {
                        tmp_tuple_element_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_tuple_element_207 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 915;
                        type_description_2 = "o";
                        goto tuple_build_exception_148;
                    }
                    Py_INCREF(tmp_tuple_element_207);
                } else {
                    goto tuple_build_exception_148;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_19, 1, tmp_tuple_element_207);
            goto tuple_build_noexception_148;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_148:;
            Py_DECREF(tmp_list_element_19);
            goto frame_exception_exit_21;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_148:;
            tmp_dictset_value = PyList_New(6);
            {
                PyObject *tmp_tuple_element_208;
                PyObject *tmp_tuple_element_209;
                PyObject *tmp_tuple_element_210;
                PyObject *tmp_tuple_element_211;
                PyObject *tmp_tuple_element_212;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_19);
                tmp_tuple_element_208 = mod_consts[96];
                tmp_list_element_19 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_208);
                tmp_tuple_element_208 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[31]);

                if (tmp_tuple_element_208 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_208 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_208 == NULL)) {
                            tmp_tuple_element_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_208 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 916;
                            type_description_2 = "o";
                            goto tuple_build_exception_149;
                        }
                        Py_INCREF(tmp_tuple_element_208);
                    } else {
                        goto tuple_build_exception_149;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_19, 1, tmp_tuple_element_208);
                goto tuple_build_noexception_149;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_149:;
                Py_DECREF(tmp_list_element_19);
                goto list_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_149:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_19);
                tmp_tuple_element_209 = mod_consts[194];
                tmp_list_element_19 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_209);
                tmp_tuple_element_209 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[31]);

                if (tmp_tuple_element_209 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_209 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_209 == NULL)) {
                            tmp_tuple_element_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_209 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 917;
                            type_description_2 = "o";
                            goto tuple_build_exception_150;
                        }
                        Py_INCREF(tmp_tuple_element_209);
                    } else {
                        goto tuple_build_exception_150;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_19, 1, tmp_tuple_element_209);
                goto tuple_build_noexception_150;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_150:;
                Py_DECREF(tmp_list_element_19);
                goto list_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_150:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_19);
                tmp_tuple_element_210 = mod_consts[195];
                tmp_list_element_19 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_210);
                tmp_tuple_element_210 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[31]);

                if (tmp_tuple_element_210 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_210 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_tuple_element_210 == NULL)) {
                            tmp_tuple_element_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_tuple_element_210 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 918;
                            type_description_2 = "o";
                            goto tuple_build_exception_151;
                        }
                        Py_INCREF(tmp_tuple_element_210);
                    } else {
                        goto tuple_build_exception_151;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_19, 1, tmp_tuple_element_210);
                goto tuple_build_noexception_151;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_151:;
                Py_DECREF(tmp_list_element_19);
                goto list_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_151:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_19);
                tmp_tuple_element_211 = mod_consts[196];
                tmp_list_element_19 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_55;
                    PyObject *tmp_args_element_value_16;
                    PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_211);
                    tmp_called_value_55 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[10]);

                    if (tmp_called_value_55 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_called_value_55 == NULL)) {
                                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_called_value_55 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 920;
                                type_description_2 = "o";
                                goto tuple_build_exception_152;
                            }
                            Py_INCREF(tmp_called_value_55);
                        } else {
                            goto tuple_build_exception_152;
                        }
                    }

                    tmp_args_element_value_16 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[29]);

                    if (tmp_args_element_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_16 == NULL)) {
                                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                            }

                            if (tmp_args_element_value_16 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_55);

                                exception_lineno = 920;
                                type_description_2 = "o";
                                goto tuple_build_exception_152;
                            }
                            Py_INCREF(tmp_args_element_value_16);
                        } else {
                            goto tuple_build_exception_152;
                        }
                    }

                    frame_9521411cf6871e66cbffa1faf94fa1b2_21->m_frame.f_lineno = 920;
                    tmp_tuple_element_211 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_16);
                    Py_DECREF(tmp_called_value_55);
                    Py_DECREF(tmp_args_element_value_16);
                    if (tmp_tuple_element_211 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 920;
                        type_description_2 = "o";
                        goto tuple_build_exception_152;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_19, 1, tmp_tuple_element_211);
                }
                goto tuple_build_noexception_152;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_152:;
                Py_DECREF(tmp_list_element_19);
                goto list_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_152:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_19);
                tmp_tuple_element_212 = mod_consts[197];
                tmp_list_element_19 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_212);
                tmp_tuple_element_212 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[33]);

                if (tmp_tuple_element_212 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_212 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_tuple_element_212 == NULL)) {
                            tmp_tuple_element_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                        }

                        if (tmp_tuple_element_212 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 921;
                            type_description_2 = "o";
                            goto tuple_build_exception_153;
                        }
                        Py_INCREF(tmp_tuple_element_212);
                    } else {
                        goto tuple_build_exception_153;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_19, 1, tmp_tuple_element_212);
                goto tuple_build_noexception_153;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_153:;
                Py_DECREF(tmp_list_element_19);
                goto list_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_153:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_19);
            }
            goto list_build_noexception_19;
            // Exception handling pass through code for list_build:
            list_build_exception_19:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_21;
            // Finished with no exception for list_build:
            list_build_noexception_19:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 914;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9521411cf6871e66cbffa1faf94fa1b2_21);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_20;

        frame_exception_exit_21:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9521411cf6871e66cbffa1faf94fa1b2_21);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9521411cf6871e66cbffa1faf94fa1b2_21, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9521411cf6871e66cbffa1faf94fa1b2_21->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9521411cf6871e66cbffa1faf94fa1b2_21, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9521411cf6871e66cbffa1faf94fa1b2_21,
            type_description_2,
            outline_19_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_9521411cf6871e66cbffa1faf94fa1b2_21 == cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21);
            cache_frame_9521411cf6871e66cbffa1faf94fa1b2_21 = NULL;
        }

        assertFrameObject(frame_9521411cf6871e66cbffa1faf94fa1b2_21);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_20;

        frame_no_exception_20:;
        goto skip_nested_handling_20;
        nested_frame_exit_20:;

        goto try_except_handler_62;
        skip_nested_handling_20:;
        {
            nuitka_bool tmp_condition_result_120;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_20__bases;
            CHECK_OBJECT(tmp_class_creation_20__bases_orig);
            tmp_cmp_expr_right_20 = tmp_class_creation_20__bases_orig;
            tmp_condition_result_120 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_120 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 894;

                goto try_except_handler_62;
            }
            if (tmp_condition_result_120 == NUITKA_BOOL_TRUE) {
                goto branch_yes_80;
            } else {
                goto branch_no_80;
            }
            assert(tmp_condition_result_120 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_80:;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dictset_value = tmp_class_creation_20__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 894;

            goto try_except_handler_62;
        }
        branch_no_80:;
        {
            PyObject *tmp_assign_source_196;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_213;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_56 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_213 = mod_consts[192];
            tmp_args_value_40 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_213);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_213 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_213);
            tmp_tuple_element_213 = locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_213);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 894;
            tmp_assign_source_196 = CALL_FUNCTION(tmp_called_value_56, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_196 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 894;

                goto try_except_handler_62;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_196;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_195 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_195);
        goto try_return_handler_62;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894);
        locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894 = NULL;
        goto try_return_handler_61;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894);
        locals_visvis$text$freetype$ft_structs$$$class__20_FT_SfntName_894 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto try_except_handler_61;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 894;
        goto try_except_handler_60;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_195);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_20__bases_orig);
    Py_DECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_tuple_element_214;
        tmp_tuple_element_214 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_214 == NULL)) {
            tmp_tuple_element_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        tmp_assign_source_197 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_197, 0, tmp_tuple_element_214);
        assert(tmp_class_creation_21__bases_orig == NULL);
        tmp_class_creation_21__bases_orig = tmp_assign_source_197;
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_dircall_arg1_21;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_198 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_198;
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = PyDict_New();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_199;
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_metaclass_value_21;
        bool tmp_condition_result_121;
        PyObject *tmp_key_value_61;
        PyObject *tmp_dict_arg_value_61;
        PyObject *tmp_dict_arg_value_62;
        PyObject *tmp_key_value_62;
        nuitka_bool tmp_condition_result_122;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_21;
        tmp_key_value_61 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_dict_arg_value_61 = tmp_class_creation_21__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_61, tmp_key_value_61);
        assert(!(tmp_res == -1));
        tmp_condition_result_121 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_121 != false) {
            goto condexpr_true_41;
        } else {
            goto condexpr_false_41;
        }
        condexpr_true_41:;
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_dict_arg_value_62 = tmp_class_creation_21__class_decl_dict;
        tmp_key_value_62 = mod_consts[36];
        tmp_metaclass_value_21 = DICT_GET_ITEM0(tmp_dict_arg_value_62, tmp_key_value_62);
        if (tmp_metaclass_value_21 == NULL) {
            tmp_metaclass_value_21 = Py_None;
        }
        assert(!(tmp_metaclass_value_21 == NULL));
        Py_INCREF(tmp_metaclass_value_21);
        goto condexpr_end_41;
        condexpr_false_41:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        tmp_condition_result_122 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_122 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_42;
        } else {
            goto condexpr_false_42;
        }
        condexpr_true_42:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_101 = tmp_class_creation_21__bases;
        tmp_subscript_value_21 = mod_consts[9];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_101, tmp_subscript_value_21, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        goto condexpr_end_42;
        condexpr_false_42:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_42:;
        condexpr_end_41:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_200 = SELECT_METACLASS(tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_200;
    }
    {
        bool tmp_condition_result_123;
        PyObject *tmp_key_value_63;
        PyObject *tmp_dict_arg_value_63;
        tmp_key_value_63 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_dict_arg_value_63 = tmp_class_creation_21__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_63, tmp_key_value_63);
        assert(!(tmp_res == -1));
        tmp_condition_result_123 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_123 != false) {
            goto branch_yes_81;
        } else {
            goto branch_no_81;
        }
    }
    branch_yes_81:;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_21__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 927;

        goto try_except_handler_63;
    }
    branch_no_81:;
    {
        nuitka_bool tmp_condition_result_124;
        PyObject *tmp_expression_value_102;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_102 = tmp_class_creation_21__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_102, mod_consts[37]);
        tmp_condition_result_124 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_124 == NUITKA_BOOL_TRUE) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
    }
    branch_yes_82:;
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_215;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_103 = tmp_class_creation_21__metaclass;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[37]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        tmp_tuple_element_215 = mod_consts[198];
        tmp_args_value_41 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_215);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_215 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_215);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 927;
        tmp_assign_source_201 = CALL_FUNCTION(tmp_called_value_57, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_201;
    }
    {
        bool tmp_condition_result_125;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_104 = tmp_class_creation_21__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_104, mod_consts[39]);
        tmp_operand_value_21 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        tmp_condition_result_125 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_125 != false) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
    }
    branch_yes_83:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_left_value_21;
        PyObject *tmp_right_value_21;
        PyObject *tmp_tuple_element_216;
        PyObject *tmp_getattr_target_21;
        PyObject *tmp_getattr_attr_21;
        PyObject *tmp_getattr_default_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_left_value_21 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_getattr_target_21 = tmp_class_creation_21__metaclass;
        tmp_getattr_attr_21 = mod_consts[41];
        tmp_getattr_default_21 = mod_consts[42];
        tmp_tuple_element_216 = BUILTIN_GETATTR(tmp_getattr_target_21, tmp_getattr_attr_21, tmp_getattr_default_21);
        if (tmp_tuple_element_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        tmp_right_value_21 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_105;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_right_value_21, 0, tmp_tuple_element_216);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_42 = tmp_class_creation_21__prepared;
            tmp_expression_value_105 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_105 == NULL));
            tmp_tuple_element_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[41]);
            Py_DECREF(tmp_expression_value_105);
            if (tmp_tuple_element_216 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 927;

                goto tuple_build_exception_154;
            }
            PyTuple_SET_ITEM(tmp_right_value_21, 1, tmp_tuple_element_216);
        }
        goto tuple_build_noexception_154;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_154:;
        Py_DECREF(tmp_right_value_21);
        goto try_except_handler_63;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_154:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_21, tmp_right_value_21);
        Py_DECREF(tmp_right_value_21);
        if (tmp_raise_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_63;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 927;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_63;
    }
    branch_no_83:;
    goto branch_end_82;
    branch_no_82:;
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = PyDict_New();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_202;
    }
    branch_end_82:;
    {
        PyObject *tmp_assign_source_203;
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_65;
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_65;
        }
        tmp_dictset_value = mod_consts[198];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_65;
        }
        if (isFrameUnusable(cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22)) {
            Py_XDECREF(cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22);

#if _DEBUG_REFCOUNTS
            if (cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22 = MAKE_FUNCTION_FRAME(codeobj_48dd1b33acb6cfb9a9d686526d8c47c3, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22->m_type_description == NULL);
        frame_48dd1b33acb6cfb9a9d686526d8c47c3_22 = cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_48dd1b33acb6cfb9a9d686526d8c47c3_22);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_48dd1b33acb6cfb9a9d686526d8c47c3_22) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyList_New(0);
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;
            type_description_2 = "o";
            goto frame_exception_exit_22;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_48dd1b33acb6cfb9a9d686526d8c47c3_22);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_21;

        frame_exception_exit_22:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_48dd1b33acb6cfb9a9d686526d8c47c3_22);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_48dd1b33acb6cfb9a9d686526d8c47c3_22, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_48dd1b33acb6cfb9a9d686526d8c47c3_22->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_48dd1b33acb6cfb9a9d686526d8c47c3_22, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_48dd1b33acb6cfb9a9d686526d8c47c3_22,
            type_description_2,
            outline_20_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_48dd1b33acb6cfb9a9d686526d8c47c3_22 == cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22);
            cache_frame_48dd1b33acb6cfb9a9d686526d8c47c3_22 = NULL;
        }

        assertFrameObject(frame_48dd1b33acb6cfb9a9d686526d8c47c3_22);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_21;

        frame_no_exception_21:;
        goto skip_nested_handling_21;
        nested_frame_exit_21:;

        goto try_except_handler_65;
        skip_nested_handling_21:;
        {
            nuitka_bool tmp_condition_result_126;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_21__bases;
            CHECK_OBJECT(tmp_class_creation_21__bases_orig);
            tmp_cmp_expr_right_21 = tmp_class_creation_21__bases_orig;
            tmp_condition_result_126 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_126 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 927;

                goto try_except_handler_65;
            }
            if (tmp_condition_result_126 == NUITKA_BOOL_TRUE) {
                goto branch_yes_84;
            } else {
                goto branch_no_84;
            }
            assert(tmp_condition_result_126 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_84:;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dictset_value = tmp_class_creation_21__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;

            goto try_except_handler_65;
        }
        branch_no_84:;
        {
            PyObject *tmp_assign_source_204;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_217;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_58 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_217 = mod_consts[198];
            tmp_args_value_42 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_217);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_217 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_217);
            tmp_tuple_element_217 = locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_217);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 927;
            tmp_assign_source_204 = CALL_FUNCTION(tmp_called_value_58, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_204 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 927;

                goto try_except_handler_65;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_204;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_assign_source_203 = outline_20_var___class__;
        Py_INCREF(tmp_assign_source_203);
        goto try_return_handler_65;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_65:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927);
        locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927 = NULL;
        goto try_return_handler_64;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927);
        locals_visvis$text$freetype$ft_structs$$$class__21_FT_StrokerRec_927 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_63;
        exception_value = exception_keeper_value_63;
        exception_tb = exception_keeper_tb_63;
        exception_lineno = exception_keeper_lineno_63;

        goto try_except_handler_64;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_64:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 927;
        goto try_except_handler_63;
        outline_result_21:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_203);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_21__bases_orig);
    Py_DECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 932;
        tmp_assign_source_205 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_17);
        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_205);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_tuple_element_218;
        tmp_tuple_element_218 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_218 == NULL)) {
            tmp_tuple_element_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        tmp_assign_source_206 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_206, 0, tmp_tuple_element_218);
        assert(tmp_class_creation_22__bases_orig == NULL);
        tmp_class_creation_22__bases_orig = tmp_assign_source_206;
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_dircall_arg1_22;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dircall_arg1_22 = tmp_class_creation_22__bases_orig;
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_207 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_207;
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = PyDict_New();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_208;
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_metaclass_value_22;
        bool tmp_condition_result_127;
        PyObject *tmp_key_value_64;
        PyObject *tmp_dict_arg_value_64;
        PyObject *tmp_dict_arg_value_65;
        PyObject *tmp_key_value_65;
        nuitka_bool tmp_condition_result_128;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_22;
        tmp_key_value_64 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_dict_arg_value_64 = tmp_class_creation_22__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_64, tmp_key_value_64);
        assert(!(tmp_res == -1));
        tmp_condition_result_127 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_127 != false) {
            goto condexpr_true_43;
        } else {
            goto condexpr_false_43;
        }
        condexpr_true_43:;
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_dict_arg_value_65 = tmp_class_creation_22__class_decl_dict;
        tmp_key_value_65 = mod_consts[36];
        tmp_metaclass_value_22 = DICT_GET_ITEM0(tmp_dict_arg_value_65, tmp_key_value_65);
        if (tmp_metaclass_value_22 == NULL) {
            tmp_metaclass_value_22 = Py_None;
        }
        assert(!(tmp_metaclass_value_22 == NULL));
        Py_INCREF(tmp_metaclass_value_22);
        goto condexpr_end_43;
        condexpr_false_43:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_22 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        tmp_condition_result_128 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_128 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_44;
        } else {
            goto condexpr_false_44;
        }
        condexpr_true_44:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_106 = tmp_class_creation_22__bases;
        tmp_subscript_value_22 = mod_consts[9];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_106, tmp_subscript_value_22, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        goto condexpr_end_44;
        condexpr_false_44:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_44:;
        condexpr_end_43:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_22 = tmp_class_creation_22__bases;
        tmp_assign_source_209 = SELECT_METACLASS(tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_209;
    }
    {
        bool tmp_condition_result_129;
        PyObject *tmp_key_value_66;
        PyObject *tmp_dict_arg_value_66;
        tmp_key_value_66 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_dict_arg_value_66 = tmp_class_creation_22__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_66, tmp_key_value_66);
        assert(!(tmp_res == -1));
        tmp_condition_result_129 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_129 != false) {
            goto branch_yes_85;
        } else {
            goto branch_no_85;
        }
    }
    branch_yes_85:;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_22__class_decl_dict;
    tmp_dictdel_key = mod_consts[36];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 939;

        goto try_except_handler_66;
    }
    branch_no_85:;
    {
        nuitka_bool tmp_condition_result_130;
        PyObject *tmp_expression_value_107;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_107 = tmp_class_creation_22__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_107, mod_consts[37]);
        tmp_condition_result_130 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_130 == NUITKA_BOOL_TRUE) {
            goto branch_yes_86;
        } else {
            goto branch_no_86;
        }
    }
    branch_yes_86:;
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_219;
        PyObject *tmp_kwargs_value_43;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_108 = tmp_class_creation_22__metaclass;
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[37]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        tmp_tuple_element_219 = mod_consts[201];
        tmp_args_value_43 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_219);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_219 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_219);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 939;
        tmp_assign_source_210 = CALL_FUNCTION(tmp_called_value_60, tmp_args_value_43, tmp_kwargs_value_43);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_value_43);
        if (tmp_assign_source_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_210;
    }
    {
        bool tmp_condition_result_131;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_109;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_109 = tmp_class_creation_22__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_109, mod_consts[39]);
        tmp_operand_value_22 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        tmp_condition_result_131 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_131 != false) {
            goto branch_yes_87;
        } else {
            goto branch_no_87;
        }
    }
    branch_yes_87:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_left_value_22;
        PyObject *tmp_right_value_22;
        PyObject *tmp_tuple_element_220;
        PyObject *tmp_getattr_target_22;
        PyObject *tmp_getattr_attr_22;
        PyObject *tmp_getattr_default_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_left_value_22 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_getattr_target_22 = tmp_class_creation_22__metaclass;
        tmp_getattr_attr_22 = mod_consts[41];
        tmp_getattr_default_22 = mod_consts[42];
        tmp_tuple_element_220 = BUILTIN_GETATTR(tmp_getattr_target_22, tmp_getattr_attr_22, tmp_getattr_default_22);
        if (tmp_tuple_element_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        tmp_right_value_22 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_110;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_right_value_22, 0, tmp_tuple_element_220);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_44 = tmp_class_creation_22__prepared;
            tmp_expression_value_110 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_110 == NULL));
            tmp_tuple_element_220 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[41]);
            Py_DECREF(tmp_expression_value_110);
            if (tmp_tuple_element_220 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 939;

                goto tuple_build_exception_155;
            }
            PyTuple_SET_ITEM(tmp_right_value_22, 1, tmp_tuple_element_220);
        }
        goto tuple_build_noexception_155;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_155:;
        Py_DECREF(tmp_right_value_22);
        goto try_except_handler_66;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_155:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_22, tmp_right_value_22);
        Py_DECREF(tmp_right_value_22);
        if (tmp_raise_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_66;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 939;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_66;
    }
    branch_no_87:;
    goto branch_end_86;
    branch_no_86:;
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = PyDict_New();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_211;
    }
    branch_end_86:;
    {
        PyObject *tmp_assign_source_212;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_68;
        }
        tmp_dictset_value = mod_consts[202];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_68;
        }
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_68;
        }
        if (isFrameUnusable(cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23)) {
            Py_XDECREF(cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23 = MAKE_FUNCTION_FRAME(codeobj_8da743f627ed20407ab0c98ca9ea8b4f, module_visvis$text$freetype$ft_structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23->m_type_description == NULL);
        frame_8da743f627ed20407ab0c98ca9ea8b4f_23 = cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8da743f627ed20407ab0c98ca9ea8b4f_23);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8da743f627ed20407ab0c98ca9ea8b4f_23) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_20;
            PyObject *tmp_tuple_element_221;
            tmp_tuple_element_221 = mod_consts[203];
            tmp_list_element_20 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_221);
            tmp_tuple_element_221 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[114]);

            if (tmp_tuple_element_221 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_221 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_tuple_element_221 == NULL)) {
                        tmp_tuple_element_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_tuple_element_221 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 945;
                        type_description_2 = "o";
                        goto tuple_build_exception_156;
                    }
                    Py_INCREF(tmp_tuple_element_221);
                } else {
                    goto tuple_build_exception_156;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_20, 1, tmp_tuple_element_221);
            goto tuple_build_noexception_156;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_156:;
            Py_DECREF(tmp_list_element_20);
            goto frame_exception_exit_23;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_156:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_222;
                PyObject *tmp_tuple_element_223;
                PyObject *tmp_tuple_element_224;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_20);
                tmp_tuple_element_222 = mod_consts[204];
                tmp_list_element_20 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_222);
                tmp_tuple_element_222 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[32]);

                if (tmp_tuple_element_222 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_222 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_222 == NULL)) {
                            tmp_tuple_element_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_222 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 946;
                            type_description_2 = "o";
                            goto tuple_build_exception_157;
                        }
                        Py_INCREF(tmp_tuple_element_222);
                    } else {
                        goto tuple_build_exception_157;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_20, 1, tmp_tuple_element_222);
                goto tuple_build_noexception_157;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_157:;
                Py_DECREF(tmp_list_element_20);
                goto list_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_157:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_20);
                tmp_tuple_element_223 = mod_consts[205];
                tmp_list_element_20 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_223);
                tmp_tuple_element_223 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[32]);

                if (tmp_tuple_element_223 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_223 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_tuple_element_223 == NULL)) {
                            tmp_tuple_element_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_tuple_element_223 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 947;
                            type_description_2 = "o";
                            goto tuple_build_exception_158;
                        }
                        Py_INCREF(tmp_tuple_element_223);
                    } else {
                        goto tuple_build_exception_158;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_20, 1, tmp_tuple_element_223);
                goto tuple_build_noexception_158;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_158:;
                Py_DECREF(tmp_list_element_20);
                goto list_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_158:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_20);
                tmp_tuple_element_224 = mod_consts[129];
                tmp_list_element_20 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_224);
                tmp_tuple_element_224 = PyObject_GetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[68]);

                if (tmp_tuple_element_224 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_224 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_224 == NULL)) {
                            tmp_tuple_element_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_224 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 948;
                            type_description_2 = "o";
                            goto tuple_build_exception_159;
                        }
                        Py_INCREF(tmp_tuple_element_224);
                    } else {
                        goto tuple_build_exception_159;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_20, 1, tmp_tuple_element_224);
                goto tuple_build_noexception_159;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_159:;
                Py_DECREF(tmp_list_element_20);
                goto list_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_159:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_20);
            }
            goto list_build_noexception_20;
            // Exception handling pass through code for list_build:
            list_build_exception_20:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_23;
            // Finished with no exception for list_build:
            list_build_noexception_20:;
            tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 944;
                type_description_2 = "o";
                goto frame_exception_exit_23;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8da743f627ed20407ab0c98ca9ea8b4f_23);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_22;

        frame_exception_exit_23:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8da743f627ed20407ab0c98ca9ea8b4f_23);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8da743f627ed20407ab0c98ca9ea8b4f_23, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8da743f627ed20407ab0c98ca9ea8b4f_23->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8da743f627ed20407ab0c98ca9ea8b4f_23, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8da743f627ed20407ab0c98ca9ea8b4f_23,
            type_description_2,
            outline_21_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_8da743f627ed20407ab0c98ca9ea8b4f_23 == cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23);
            cache_frame_8da743f627ed20407ab0c98ca9ea8b4f_23 = NULL;
        }

        assertFrameObject(frame_8da743f627ed20407ab0c98ca9ea8b4f_23);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_22;

        frame_no_exception_22:;
        goto skip_nested_handling_22;
        nested_frame_exit_22:;

        goto try_except_handler_68;
        skip_nested_handling_22:;
        {
            nuitka_bool tmp_condition_result_132;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_22__bases;
            CHECK_OBJECT(tmp_class_creation_22__bases_orig);
            tmp_cmp_expr_right_22 = tmp_class_creation_22__bases_orig;
            tmp_condition_result_132 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_132 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 939;

                goto try_except_handler_68;
            }
            if (tmp_condition_result_132 == NUITKA_BOOL_TRUE) {
                goto branch_yes_88;
            } else {
                goto branch_no_88;
            }
            assert(tmp_condition_result_132 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_88:;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dictset_value = tmp_class_creation_22__bases_orig;
        tmp_res = PyObject_SetItem(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;

            goto try_except_handler_68;
        }
        branch_no_88:;
        {
            PyObject *tmp_assign_source_213;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_225;
            PyObject *tmp_kwargs_value_44;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_61 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_225 = mod_consts[201];
            tmp_args_value_44 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_225);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_225 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_225);
            tmp_tuple_element_225 = locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939;
            PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_225);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_44 = tmp_class_creation_22__class_decl_dict;
            frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 939;
            tmp_assign_source_213 = CALL_FUNCTION(tmp_called_value_61, tmp_args_value_44, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_44);
            if (tmp_assign_source_213 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 939;

                goto try_except_handler_68;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_213;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_assign_source_212 = outline_21_var___class__;
        Py_INCREF(tmp_assign_source_212);
        goto try_return_handler_68;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_68:;
        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939);
        locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939 = NULL;
        goto try_return_handler_67;
        // Exception handler code:
        try_except_handler_68:;
        exception_keeper_type_66 = exception_type;
        exception_keeper_value_66 = exception_value;
        exception_keeper_tb_66 = exception_tb;
        exception_keeper_lineno_66 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939);
        locals_visvis$text$freetype$ft_structs$$$class__22_FT_BitmapGlyphRec_939 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_66;
        exception_value = exception_keeper_value_66;
        exception_tb = exception_keeper_tb_66;
        exception_lineno = exception_keeper_lineno_66;

        goto try_except_handler_67;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_67;
        exception_value = exception_keeper_value_67;
        exception_tb = exception_keeper_tb_67;
        exception_lineno = exception_keeper_lineno_67;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 939;
        goto try_except_handler_66;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_212);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_22__bases_orig);
    Py_DECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        frame_32f53683b90dff1123ccf9ee5c92b255->m_frame.f_lineno = 950;
        tmp_assign_source_214 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_18);
        if (tmp_assign_source_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_214);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32f53683b90dff1123ccf9ee5c92b255);
#endif
    popFrameStack();

    assertFrameObject(frame_32f53683b90dff1123ccf9ee5c92b255);

    goto frame_no_exception_23;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32f53683b90dff1123ccf9ee5c92b255);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32f53683b90dff1123ccf9ee5c92b255, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32f53683b90dff1123ccf9ee5c92b255->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32f53683b90dff1123ccf9ee5c92b255, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_23:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("visvis.text.freetype.ft_structs", false);

    return module_visvis$text$freetype$ft_structs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_visvis$text$freetype$ft_structs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("visvis$text$freetype$ft_structs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
