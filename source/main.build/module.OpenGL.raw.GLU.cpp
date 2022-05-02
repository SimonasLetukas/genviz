/* Generated code for Python module 'OpenGL.raw.GLU'
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

/* The "module_OpenGL$raw$GLU" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GLU;
PyDictObject *moduledict_OpenGL$raw$GLU;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[302];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[302];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GLU"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 302; i++) {
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
void checkModuleConstants_OpenGL$raw$GLU(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 302; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7a2fd658d85c981cc5229e4bbce262df;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[299]); CHECK_OBJECT(module_filename_obj);
    codeobj_7a2fd658d85c981cc5229e4bbce262df = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[300], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_OpenGL$raw$GLU[] = {

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

    function_impl_code *current = functable_OpenGL$raw$GLU;
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

    if (offset > sizeof(functable_OpenGL$raw$GLU) || offset < 0) {
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
        functable_OpenGL$raw$GLU[offset],
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
        module_OpenGL$raw$GLU,
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
PyObject *modulecode_OpenGL$raw$GLU(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GLU");

    // Store the module for future use.
    module_OpenGL$raw$GLU = module;

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
        PRINT_STRING("OpenGL.raw.GLU: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GLU: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GLU: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GLU\n");

    moduledict_OpenGL$raw$GLU = MODULE_DICT(module_OpenGL$raw$GLU);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GLU,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GLU,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[301]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GLU,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GLU,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GLU,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GLU);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GLU);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_7a2fd658d85c981cc5229e4bbce262df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26 = NULL;
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
    PyObject *locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32 = NULL;
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
    PyObject *locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_7a2fd658d85c981cc5229e4bbce262df = MAKE_MODULE_FRAME(codeobj_7a2fd658d85c981cc5229e4bbce262df, module_OpenGL$raw$GLU);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7a2fd658d85c981cc5229e4bbce262df);
    assert(Py_REFCNT(frame_7a2fd658d85c981cc5229e4bbce262df) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_6;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_value_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[6]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[8]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[9];
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_value_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_value_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[6]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[10]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_5 = mod_consts[11];
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_value_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[6]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[7]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[12]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_subscript_value_1 = mod_consts[14];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[18], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[20];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_fromlist_value_1 = mod_consts[21];
        tmp_level_value_1 = mod_consts[14];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GLU, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[22];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[14];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 8;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GLU, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[23];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[24];
        tmp_level_value_3 = mod_consts[14];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 9;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[25],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[25]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[26],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[26]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[27];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[28];
        tmp_level_value_4 = mod_consts[14];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[29],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[30];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[31];
        tmp_level_value_5 = mod_consts[14];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[32],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[35]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[36]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[35]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 14;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[38];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GLU;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[39];
        tmp_level_value_6 = mod_consts[14];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 15;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[40],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[40]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[41],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[41]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[42],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[42]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[43],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[43]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[44],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[44]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[45],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[45]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_OpenGL$raw$GLU,
                mod_consts[46],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[46]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_19);
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_assign_source_20 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[48];
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
        tmp_key_value_2 = mod_consts[48];
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


            exception_lineno = 26;

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
        tmp_expression_value_13 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

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
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[48];
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
    tmp_dictdel_key = mod_consts[48];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 26;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_14 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[49]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_15 = tmp_class_creation_1__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[49]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[50];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 26;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_16 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[51]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

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
        tmp_left_value_1 = mod_consts[52];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[53];
        tmp_getattr_default_1 = mod_consts[54];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[53]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

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


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 26;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
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


                exception_lineno = 26;

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
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_9 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[50];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 26;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26);
        locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26 = NULL;
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

        Py_DECREF(locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26);
        locals_OpenGL$raw$GLU$$$class__1_GLUnurbs_26 = NULL;
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
        exception_lineno = 26;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_26);
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
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = PyList_New(0);
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[59], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assign_source_28 == NULL)) {
            tmp_assign_source_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_28);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_assign_source_29 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_5);
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
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[48];
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
        tmp_key_value_5 = mod_consts[48];
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


            exception_lineno = 32;

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
        tmp_expression_value_18 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

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
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[48];
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
    tmp_dictdel_key = mod_consts[48];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_19 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[49]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_20 = tmp_class_creation_2__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[49]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[61];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 32;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_21 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[51]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

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
        tmp_left_value_2 = mod_consts[52];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[53];
        tmp_getattr_default_2 = mod_consts[54];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[53]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

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


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
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


                exception_lineno = 32;

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
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_11 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[61];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 32;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32);
        locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32 = NULL;
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

        Py_DECREF(locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32);
        locals_OpenGL$raw$GLU$$$class__2_GLUquadric_32 = NULL;
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
        exception_lineno = 32;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_35);
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
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = PyList_New(0);
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[59], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assign_source_37 == NULL)) {
            tmp_assign_source_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_37);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        tmp_assign_source_38 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_39 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[48];
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
        tmp_key_value_8 = mod_consts[48];
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


            exception_lineno = 38;

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
        tmp_expression_value_23 = tmp_class_creation_3__bases;
        tmp_subscript_value_4 = mod_consts[14];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_4, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

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
        tmp_assign_source_41 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[48];
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
    tmp_dictdel_key = mod_consts[48];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 38;

        goto try_except_handler_9;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_24 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[49]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_25 = tmp_class_creation_3__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[49]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        tmp_tuple_element_10 = mod_consts[63];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 38;
        tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_26 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[51]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_value_3 = mod_consts[52];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[53];
        tmp_getattr_default_3 = mod_consts[54];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        tmp_right_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_27 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[53]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_value_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 38;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_43;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_11;
        }
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


                exception_lineno = 38;

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
        tmp_res = PyObject_SetItem(locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_11;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_13 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[63];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 38;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_44 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38);
        locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38 = NULL;
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

        Py_DECREF(locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38);
        locals_OpenGL$raw$GLU$$$class__3_GLUtesselator_38 = NULL;
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
        exception_lineno = 38;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_44);
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
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = PyList_New(0);
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[59], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assign_source_46 == NULL)) {
            tmp_assign_source_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assign_source_47 == NULL)) {
            tmp_assign_source_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[66]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[35]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[11]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = Py_None;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 50;
        tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_7);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_2);
        tmp_kw_call_value_3_1 = mod_consts[68];
        tmp_kw_call_value_4_1 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 48;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_14, mod_consts[70], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[66]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[35]);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[11]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = Py_None;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 59;
        tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_8);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_2 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_2, 0, tmp_list_element_3);
        tmp_kw_call_value_3_2 = mod_consts[73];
        tmp_kw_call_value_4_2 = mod_consts[74];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 57;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_16, mod_consts[75], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_2_2);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[66]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[35]);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[11]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = Py_None;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 68;
        tmp_list_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_9);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_3 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_3, 0, tmp_list_element_4);
        tmp_kw_call_value_3_3 = mod_consts[77];
        tmp_kw_call_value_4_3 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_18, mod_consts[78], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_0_3);
        Py_DECREF(tmp_kw_call_value_2_3);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_4_4;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[66]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[35]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[11]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = Py_None;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_value_0_4);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_value_0_4);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 77;
        tmp_list_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_10);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_value_0_4);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_4 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_4, 0, tmp_list_element_5);
        tmp_kw_call_value_3_4 = mod_consts[80];
        tmp_kw_call_value_4_4 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 75;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4};
            tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_20, mod_consts[81], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_0_4);
        Py_DECREF(tmp_kw_call_value_2_4);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_list_element_6;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_kw_call_value_4_5;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[66]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[35]);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[11]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_5 == NULL)) {
            tmp_kw_call_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_5 = PyList_New(9);
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 0, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 1, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 2, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 3, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 4, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 5, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 6, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 7, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_5, 8, tmp_list_element_6);
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_value_0_5);
        Py_DECREF(tmp_kw_call_value_2_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_value_3_5 = mod_consts[84];
        tmp_kw_call_value_4_5 = mod_consts[85];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 84;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5};
            tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_22, mod_consts[86], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_value_0_5);
        Py_DECREF(tmp_kw_call_value_2_5);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_list_element_7;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_kw_call_value_4_6;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[66]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[35]);
        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[11]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_6 == NULL)) {
            tmp_kw_call_value_1_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_kw_call_value_0_6);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_kw_call_value_0_6);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_6 = PyList_New(6);
        PyList_SET_ITEM0(tmp_kw_call_value_2_6, 0, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_6, 1, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_6, 2, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_6, 3, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_6, 4, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_6, 5, tmp_list_element_7);
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_0_6);
        Py_DECREF(tmp_kw_call_value_2_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_kw_call_value_3_6 = mod_consts[88];
        tmp_kw_call_value_4_6 = mod_consts[89];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 93;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6};
            tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_23, mod_consts[90], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_0_6);
        Py_DECREF(tmp_kw_call_value_2_6);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_list_element_8;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_kw_call_value_4_7;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[66]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[35]);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[11]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_7 == NULL)) {
            tmp_kw_call_value_1_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_value_0_7);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_value_0_7);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_7 = PyList_New(10);
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 1, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 2, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 3, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 4, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 5, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 6, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 7, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 8, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_7, 9, tmp_list_element_8);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_0_7);
        Py_DECREF(tmp_kw_call_value_2_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_kw_call_value_3_7 = mod_consts[92];
        tmp_kw_call_value_4_7 = mod_consts[93];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 102;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_24, mod_consts[94], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_0_7);
        Py_DECREF(tmp_kw_call_value_2_7);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_list_element_9;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_kw_call_value_4_8;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[66]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[35]);
        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[11]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_8 == NULL)) {
            tmp_kw_call_value_1_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_value_0_8);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_value_0_8);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_8 = PyList_New(7);
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 0, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 1, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 2, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 3, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 4, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 5, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_8, 6, tmp_list_element_9);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_value_0_8);
        Py_DECREF(tmp_kw_call_value_2_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_kw_call_value_3_8 = mod_consts[96];
        tmp_kw_call_value_4_8 = mod_consts[97];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 111;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_25, mod_consts[98], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_value_0_8);
        Py_DECREF(tmp_kw_call_value_2_8);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_list_element_10;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_kw_call_value_4_9;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[66]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[35]);
        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[11]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_9 == NULL)) {
            tmp_kw_call_value_1_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_0_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_0_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_9 = PyList_New(11);
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 0, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 1, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 2, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 3, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 4, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 5, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 6, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 7, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 8, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 9, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_9, 10, tmp_list_element_10);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_0_9);
        Py_DECREF(tmp_kw_call_value_2_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_kw_call_value_3_9 = mod_consts[100];
        tmp_kw_call_value_4_9 = mod_consts[101];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 120;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_9};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_26, mod_consts[102], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_0_9);
        Py_DECREF(tmp_kw_call_value_2_9);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_list_element_11;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_kw_call_value_4_10;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[66]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[35]);
        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[11]);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_10 == NULL)) {
            tmp_kw_call_value_1_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_0_10);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_0_10);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_10 = PyList_New(8);
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 0, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 1, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 2, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 3, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 4, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 5, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 6, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_10, 7, tmp_list_element_11);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_0_10);
        Py_DECREF(tmp_kw_call_value_2_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_kw_call_value_3_10 = mod_consts[104];
        tmp_kw_call_value_4_10 = mod_consts[105];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 129;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_10};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_27, mod_consts[106], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_0_10);
        Py_DECREF(tmp_kw_call_value_2_10);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_11;
        PyObject *tmp_list_element_12;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_kw_call_value_3_11;
        PyObject *tmp_kw_call_value_4_11;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[66]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[35]);
        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[11]);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_kw_call_value_1_11 == NULL)) {
            tmp_kw_call_value_1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_kw_call_value_1_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[108]);
        if (tmp_list_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_11 = PyList_New(2);
        {
            PyObject *tmp_expression_value_62;
            PyList_SET_ITEM(tmp_kw_call_value_2_11, 0, tmp_list_element_12);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_8;
            }
            tmp_list_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[108]);
            if (tmp_list_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_11, 1, tmp_list_element_12);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_0_11);
        Py_DECREF(tmp_kw_call_value_2_11);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_kw_call_value_3_11 = mod_consts[109];
        tmp_kw_call_value_4_11 = mod_consts[110];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 138;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_11};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_28, mod_consts[111], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_0_11);
        Py_DECREF(tmp_kw_call_value_2_11);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_12;
        PyObject *tmp_list_element_13;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_kw_call_value_3_12;
        PyObject *tmp_kw_call_value_4_12;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[66]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[35]);
        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[11]);
        Py_DECREF(tmp_expression_value_64);
        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_12 = Py_None;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_value_0_12);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_value_0_12);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 149;
        tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_11);
        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_value_0_12);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_12 = PyList_New(6);
        PyList_SET_ITEM(tmp_kw_call_value_2_12, 0, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_12, 1, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_12, 2, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_12, 3, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_12, 4, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_12, 5, tmp_list_element_13);
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_value_0_12);
        Py_DECREF(tmp_kw_call_value_2_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_kw_call_value_3_12 = mod_consts[113];
        tmp_kw_call_value_4_12 = mod_consts[114];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 147;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_12};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_29, mod_consts[115], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_value_0_12);
        Py_DECREF(tmp_kw_call_value_2_12);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_kw_call_value_2_13;
        PyObject *tmp_list_element_14;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_kw_call_value_3_13;
        PyObject *tmp_kw_call_value_4_13;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[66]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[35]);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[11]);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_kw_call_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_13 = Py_None;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_kw_call_value_0_13);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_kw_call_value_0_13);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 158;
        tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_12);
        if (tmp_list_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_kw_call_value_0_13);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_13 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_13, 0, tmp_list_element_14);
        tmp_kw_call_value_3_13 = mod_consts[117];
        tmp_kw_call_value_4_13 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 156;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_13};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_31, mod_consts[118], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_value_0_13);
        Py_DECREF(tmp_kw_call_value_2_13);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_kw_call_value_1_14;
        PyObject *tmp_kw_call_value_2_14;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_kw_call_value_3_14;
        PyObject *tmp_kw_call_value_4_14;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[66]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[35]);
        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[11]);
        Py_DECREF(tmp_expression_value_70);
        if (tmp_kw_call_value_0_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_14 = Py_None;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_kw_call_value_0_14);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_kw_call_value_0_14);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 167;
        tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_13);
        if (tmp_list_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_kw_call_value_0_14);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_14 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_14, 0, tmp_list_element_15);
        tmp_kw_call_value_3_14 = mod_consts[120];
        tmp_kw_call_value_4_14 = mod_consts[121];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 165;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_14};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_33, mod_consts[122], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_kw_call_value_0_14);
        Py_DECREF(tmp_kw_call_value_2_14);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_kw_call_value_1_15;
        PyObject *tmp_kw_call_value_2_15;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_kw_call_value_3_15;
        PyObject *tmp_kw_call_value_4_15;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[66]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[35]);
        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[11]);
        Py_DECREF(tmp_expression_value_73);
        if (tmp_kw_call_value_0_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_15 = Py_None;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_value_0_15);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_value_0_15);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 176;
        tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_14);
        if (tmp_list_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_value_0_15);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_15 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_15, 0, tmp_list_element_16);
        tmp_kw_call_value_3_15 = mod_consts[124];
        tmp_kw_call_value_4_15 = mod_consts[74];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 174;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_15};
            tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_35, mod_consts[125], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_value_0_15);
        Py_DECREF(tmp_kw_call_value_2_15);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_kw_call_value_1_16;
        PyObject *tmp_kw_call_value_2_16;
        PyObject *tmp_list_element_17;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_kw_call_value_3_16;
        PyObject *tmp_kw_call_value_4_16;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[66]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[35]);
        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[11]);
        Py_DECREF(tmp_expression_value_76);
        if (tmp_kw_call_value_0_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_16 = Py_None;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_kw_call_value_0_16);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_kw_call_value_0_16);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 185;
        tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_15);
        if (tmp_list_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_kw_call_value_0_16);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_16 = PyList_New(5);
        PyList_SET_ITEM(tmp_kw_call_value_2_16, 0, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_16, 1, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_16, 2, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_16, 3, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_16, 4, tmp_list_element_17);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_kw_call_value_0_16);
        Py_DECREF(tmp_kw_call_value_2_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_kw_call_value_3_16 = mod_consts[127];
        tmp_kw_call_value_4_16 = mod_consts[128];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 183;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_16};
            tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_37, mod_consts[129], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_kw_call_value_0_16);
        Py_DECREF(tmp_kw_call_value_2_16);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_kw_call_value_1_17;
        PyObject *tmp_kw_call_value_2_17;
        PyObject *tmp_list_element_18;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_kw_call_value_3_17;
        PyObject *tmp_kw_call_value_4_17;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[66]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[35]);
        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[11]);
        Py_DECREF(tmp_expression_value_79);
        if (tmp_kw_call_value_0_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_17 = Py_None;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 194;
        tmp_list_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_16);
        if (tmp_list_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_17 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_17, 0, tmp_list_element_18);
        tmp_kw_call_value_3_17 = mod_consts[131];
        tmp_kw_call_value_4_17 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 192;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_17, tmp_kw_call_value_3_17, tmp_kw_call_value_4_17};
            tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_39, mod_consts[132], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_kw_call_value_0_17);
        Py_DECREF(tmp_kw_call_value_2_17);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_kw_call_value_1_18;
        PyObject *tmp_kw_call_value_2_18;
        PyObject *tmp_list_element_19;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_kw_call_value_3_18;
        PyObject *tmp_kw_call_value_4_18;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[66]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[35]);
        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[11]);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_kw_call_value_0_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_18 = Py_None;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_kw_call_value_0_18);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_kw_call_value_0_18);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 203;
        tmp_list_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_17);
        if (tmp_list_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_kw_call_value_0_18);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_18 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_18, 0, tmp_list_element_19);
        tmp_kw_call_value_3_18 = mod_consts[134];
        tmp_kw_call_value_4_18 = mod_consts[74];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 201;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_18, tmp_kw_call_value_3_18, tmp_kw_call_value_4_18};
            tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_41, mod_consts[135], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_kw_call_value_0_18);
        Py_DECREF(tmp_kw_call_value_2_18);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_kw_call_value_1_19;
        PyObject *tmp_kw_call_value_2_19;
        PyObject *tmp_list_element_20;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_kw_call_value_3_19;
        PyObject *tmp_kw_call_value_4_19;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[66]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[35]);
        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[11]);
        Py_DECREF(tmp_expression_value_85);
        if (tmp_kw_call_value_0_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_19 = Py_None;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_kw_call_value_0_19);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_kw_call_value_0_19);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 212;
        tmp_list_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_18);
        if (tmp_list_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_kw_call_value_0_19);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_19 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_19, 0, tmp_list_element_20);
        tmp_kw_call_value_3_19 = mod_consts[137];
        tmp_kw_call_value_4_19 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 210;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_19, tmp_kw_call_value_2_19, tmp_kw_call_value_3_19, tmp_kw_call_value_4_19};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_43, mod_consts[138], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_kw_call_value_0_19);
        Py_DECREF(tmp_kw_call_value_2_19);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_kw_call_value_0_20;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_kw_call_value_1_20;
        PyObject *tmp_kw_call_value_2_20;
        PyObject *tmp_list_element_21;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_kw_call_value_3_20;
        PyObject *tmp_kw_call_value_4_20;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[66]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[35]);
        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[11]);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_kw_call_value_0_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_20 = Py_None;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_kw_call_value_0_20);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_kw_call_value_0_20);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 221;
        tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_19);
        if (tmp_list_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_kw_call_value_0_20);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_20 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_20, 0, tmp_list_element_21);
        tmp_kw_call_value_3_20 = mod_consts[140];
        tmp_kw_call_value_4_20 = mod_consts[69];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 219;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_20, tmp_kw_call_value_2_20, tmp_kw_call_value_3_20, tmp_kw_call_value_4_20};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_45, mod_consts[141], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_kw_call_value_0_20);
        Py_DECREF(tmp_kw_call_value_2_20);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_kw_call_value_1_21;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_kw_call_value_2_21;
        PyObject *tmp_list_element_22;
        PyObject *tmp_kw_call_value_3_21;
        PyObject *tmp_kw_call_value_4_21;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[66]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[35]);
        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[11]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_kw_call_value_0_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_kw_call_value_0_21);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_kw_call_value_0_21);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 229;
        tmp_kw_call_value_1_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_20);
        if (tmp_kw_call_value_1_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_kw_call_value_0_21);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_kw_call_value_0_21);
            Py_DECREF(tmp_kw_call_value_1_21);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_21 = PyList_New(1);
        PyList_SET_ITEM0(tmp_kw_call_value_2_21, 0, tmp_list_element_22);
        tmp_kw_call_value_3_21 = mod_consts[143];
        tmp_kw_call_value_4_21 = mod_consts[144];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 228;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_21, tmp_kw_call_value_2_21, tmp_kw_call_value_3_21, tmp_kw_call_value_4_21};
            tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_47, mod_consts[145], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_kw_call_value_0_21);
        Py_DECREF(tmp_kw_call_value_1_21);
        Py_DECREF(tmp_kw_call_value_2_21);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_kw_call_value_1_22;
        PyObject *tmp_kw_call_value_2_22;
        PyObject *tmp_list_element_23;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_kw_call_value_3_22;
        PyObject *tmp_kw_call_value_4_22;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[66]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[35]);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[11]);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_kw_call_value_0_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_22 = Py_None;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_kw_call_value_0_22);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_kw_call_value_0_22);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 239;
        tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_21);
        if (tmp_list_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_kw_call_value_0_22);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_22 = PyList_New(3);
        {
            PyObject *tmp_expression_value_96;
            PyList_SET_ITEM(tmp_kw_call_value_2_22, 0, tmp_list_element_23);
            tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_23 == NULL)) {
                tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_22, 1, tmp_list_element_23);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto list_build_exception_11;
            }
            tmp_list_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[147]);
            if (tmp_list_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_22, 2, tmp_list_element_23);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_kw_call_value_0_22);
        Py_DECREF(tmp_kw_call_value_2_22);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_kw_call_value_3_22 = mod_consts[148];
        tmp_kw_call_value_4_22 = mod_consts[149];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 237;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_22, tmp_kw_call_value_2_22, tmp_kw_call_value_3_22, tmp_kw_call_value_4_22};
            tmp_assign_source_69 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_49, mod_consts[150], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_kw_call_value_0_22);
        Py_DECREF(tmp_kw_call_value_2_22);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_kw_call_value_1_23;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_kw_call_value_2_23;
        PyObject *tmp_list_element_24;
        PyObject *tmp_kw_call_value_3_23;
        PyObject *tmp_kw_call_value_4_23;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[66]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[35]);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[11]);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_kw_call_value_0_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_kw_call_value_0_23);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_kw_call_value_0_23);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 247;
        tmp_kw_call_value_1_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_22);
        if (tmp_kw_call_value_1_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_kw_call_value_0_23);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_kw_call_value_0_23);
            Py_DECREF(tmp_kw_call_value_1_23);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_23 = PyList_New(1);
        PyList_SET_ITEM0(tmp_kw_call_value_2_23, 0, tmp_list_element_24);
        tmp_kw_call_value_3_23 = mod_consts[152];
        tmp_kw_call_value_4_23 = mod_consts[153];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 246;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_23, tmp_kw_call_value_2_23, tmp_kw_call_value_3_23, tmp_kw_call_value_4_23};
            tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_51, mod_consts[154], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_kw_call_value_0_23);
        Py_DECREF(tmp_kw_call_value_1_23);
        Py_DECREF(tmp_kw_call_value_2_23);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_kw_call_value_0_24;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_kw_call_value_1_24;
        PyObject *tmp_kw_call_value_2_24;
        PyObject *tmp_list_element_25;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_kw_call_value_3_24;
        PyObject *tmp_kw_call_value_4_24;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[66]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[35]);
        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[11]);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_kw_call_value_0_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_24 = Py_None;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_value_0_24);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_value_0_24);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 257;
        tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_23);
        if (tmp_list_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_value_0_24);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_24 = PyList_New(3);
        {
            PyObject *tmp_expression_value_103;
            PyList_SET_ITEM(tmp_kw_call_value_2_24, 0, tmp_list_element_25);
            tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_25 == NULL)) {
                tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_24, 1, tmp_list_element_25);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto list_build_exception_12;
            }
            tmp_list_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[156]);
            if (tmp_list_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_24, 2, tmp_list_element_25);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_kw_call_value_0_24);
        Py_DECREF(tmp_kw_call_value_2_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_kw_call_value_3_24 = mod_consts[157];
        tmp_kw_call_value_4_24 = mod_consts[158];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 255;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_24, tmp_kw_call_value_1_24, tmp_kw_call_value_2_24, tmp_kw_call_value_3_24, tmp_kw_call_value_4_24};
            tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_53, mod_consts[159], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_kw_call_value_0_24);
        Py_DECREF(tmp_kw_call_value_2_24);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_kw_call_value_1_25;
        PyObject *tmp_kw_call_value_2_25;
        PyObject *tmp_list_element_26;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_kw_call_value_3_25;
        PyObject *tmp_kw_call_value_4_25;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[66]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[35]);
        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[11]);
        Py_DECREF(tmp_expression_value_105);
        if (tmp_kw_call_value_0_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_25 = Py_None;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_kw_call_value_0_25);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_kw_call_value_0_25);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 266;
        tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_24);
        if (tmp_list_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_kw_call_value_0_25);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_25 = PyList_New(4);
        {
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyList_SET_ITEM(tmp_kw_call_value_2_25, 0, tmp_list_element_26);
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto list_build_exception_13;
            }
            tmp_list_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[147]);
            if (tmp_list_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_25, 1, tmp_list_element_26);
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto list_build_exception_13;
            }
            tmp_list_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[147]);
            if (tmp_list_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_25, 2, tmp_list_element_26);
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto list_build_exception_13;
            }
            tmp_list_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[161]);
            if (tmp_list_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_25, 3, tmp_list_element_26);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_kw_call_value_0_25);
        Py_DECREF(tmp_kw_call_value_2_25);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_kw_call_value_3_25 = mod_consts[162];
        tmp_kw_call_value_4_25 = mod_consts[163];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 264;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_25, tmp_kw_call_value_1_25, tmp_kw_call_value_2_25, tmp_kw_call_value_3_25, tmp_kw_call_value_4_25};
            tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_55, mod_consts[164], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_kw_call_value_0_25);
        Py_DECREF(tmp_kw_call_value_2_25);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_kw_call_value_0_26;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_kw_call_value_1_26;
        PyObject *tmp_kw_call_value_2_26;
        PyObject *tmp_list_element_27;
        PyObject *tmp_kw_call_value_3_26;
        PyObject *tmp_kw_call_value_4_26;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[66]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[35]);
        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[11]);
        Py_DECREF(tmp_expression_value_111);
        if (tmp_kw_call_value_0_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_26 = Py_None;
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_kw_call_value_0_26);

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_26 = PyList_New(9);
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 0, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 1, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 2, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 3, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 4, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 5, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 6, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 7, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_26, 8, tmp_list_element_27);
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_kw_call_value_0_26);
        Py_DECREF(tmp_kw_call_value_2_26);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_kw_call_value_3_26 = mod_consts[166];
        tmp_kw_call_value_4_26 = mod_consts[167];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 273;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_26, tmp_kw_call_value_1_26, tmp_kw_call_value_2_26, tmp_kw_call_value_3_26, tmp_kw_call_value_4_26};
            tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_57, mod_consts[168], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_kw_call_value_0_26);
        Py_DECREF(tmp_kw_call_value_2_26);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_kw_call_value_0_27;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_kw_call_value_1_27;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_kw_call_value_2_27;
        PyObject *tmp_kw_call_value_3_27;
        PyObject *tmp_kw_call_value_4_27;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[66]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[35]);
        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[11]);
        Py_DECREF(tmp_expression_value_114);
        if (tmp_kw_call_value_0_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_kw_call_value_0_27);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_kw_call_value_0_27);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 283;
        tmp_kw_call_value_1_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_25);
        if (tmp_kw_call_value_1_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_kw_call_value_0_27);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_27 = PyList_New(0);
        tmp_kw_call_value_3_27 = mod_consts[170];
        tmp_kw_call_value_4_27 = mod_consts[171];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 282;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_27, tmp_kw_call_value_1_27, tmp_kw_call_value_2_27, tmp_kw_call_value_3_27, tmp_kw_call_value_4_27};
            tmp_assign_source_74 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_58, mod_consts[172], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_kw_call_value_0_27);
        Py_DECREF(tmp_kw_call_value_1_27);
        Py_DECREF(tmp_kw_call_value_2_27);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_kw_call_value_1_28;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_kw_call_value_2_28;
        PyObject *tmp_kw_call_value_3_28;
        PyObject *tmp_kw_call_value_4_28;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[66]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[35]);
        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[11]);
        Py_DECREF(tmp_expression_value_117);
        if (tmp_kw_call_value_0_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_value_0_28);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_value_0_28);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 292;
        tmp_kw_call_value_1_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_26);
        if (tmp_kw_call_value_1_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_value_0_28);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_28 = PyList_New(0);
        tmp_kw_call_value_3_28 = mod_consts[174];
        tmp_kw_call_value_4_28 = mod_consts[171];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 291;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_28, tmp_kw_call_value_1_28, tmp_kw_call_value_2_28, tmp_kw_call_value_3_28, tmp_kw_call_value_4_28};
            tmp_assign_source_75 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_60, mod_consts[175], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_kw_call_value_0_28);
        Py_DECREF(tmp_kw_call_value_1_28);
        Py_DECREF(tmp_kw_call_value_2_28);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_kw_call_value_0_29;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_kw_call_value_1_29;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_kw_call_value_2_29;
        PyObject *tmp_kw_call_value_3_29;
        PyObject *tmp_kw_call_value_4_29;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[66]);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[35]);
        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[11]);
        Py_DECREF(tmp_expression_value_120);
        if (tmp_kw_call_value_0_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_value_0_29);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_value_0_29);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 301;
        tmp_kw_call_value_1_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_27);
        if (tmp_kw_call_value_1_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_value_0_29);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_29 = PyList_New(0);
        tmp_kw_call_value_3_29 = mod_consts[177];
        tmp_kw_call_value_4_29 = mod_consts[171];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 300;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_29, tmp_kw_call_value_1_29, tmp_kw_call_value_2_29, tmp_kw_call_value_3_29, tmp_kw_call_value_4_29};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_62, mod_consts[178], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_kw_call_value_0_29);
        Py_DECREF(tmp_kw_call_value_1_29);
        Py_DECREF(tmp_kw_call_value_2_29);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_kw_call_value_1_30;
        PyObject *tmp_kw_call_value_2_30;
        PyObject *tmp_list_element_28;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_kw_call_value_3_30;
        PyObject *tmp_kw_call_value_4_30;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[66]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[35]);
        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[11]);
        Py_DECREF(tmp_expression_value_123);
        if (tmp_kw_call_value_0_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_30 = Py_None;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_value_0_30);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_value_0_30);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 311;
        tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_28);
        if (tmp_list_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_value_0_30);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_30 = PyList_New(2);
        PyList_SET_ITEM(tmp_kw_call_value_2_30, 0, tmp_list_element_28);
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_30, 1, tmp_list_element_28);
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_kw_call_value_0_30);
        Py_DECREF(tmp_kw_call_value_2_30);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_kw_call_value_3_30 = mod_consts[180];
        tmp_kw_call_value_4_30 = mod_consts[181];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 309;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_30, tmp_kw_call_value_1_30, tmp_kw_call_value_2_30, tmp_kw_call_value_3_30, tmp_kw_call_value_4_30};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_64, mod_consts[182], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_kw_call_value_0_30);
        Py_DECREF(tmp_kw_call_value_2_30);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 317;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_66, mod_consts[184]);

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_kw_call_value_1_31;
        PyObject *tmp_kw_call_value_2_31;
        PyObject *tmp_list_element_29;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_kw_call_value_3_31;
        PyObject *tmp_kw_call_value_4_31;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[66]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[35]);
        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[11]);
        Py_DECREF(tmp_expression_value_126);
        if (tmp_kw_call_value_0_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_31 = Py_None;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_kw_call_value_0_31);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_kw_call_value_0_31);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 321;
        tmp_list_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_29);
        if (tmp_list_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_kw_call_value_0_31);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_31 = PyList_New(3);
        PyList_SET_ITEM(tmp_kw_call_value_2_31, 0, tmp_list_element_29);
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto list_build_exception_16;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_31, 1, tmp_list_element_29);
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto list_build_exception_16;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_31, 2, tmp_list_element_29);
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_kw_call_value_0_31);
        Py_DECREF(tmp_kw_call_value_2_31);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_kw_call_value_3_31 = mod_consts[186];
        tmp_kw_call_value_4_31 = mod_consts[187];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 319;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_31, tmp_kw_call_value_1_31, tmp_kw_call_value_2_31, tmp_kw_call_value_3_31, tmp_kw_call_value_4_31};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_67, mod_consts[188], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_kw_call_value_0_31);
        Py_DECREF(tmp_kw_call_value_2_31);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = Py_None;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_kw_call_value_0_32;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_kw_call_value_1_32;
        PyObject *tmp_kw_call_value_2_32;
        PyObject *tmp_list_element_30;
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_kw_call_value_3_32;
        PyObject *tmp_kw_call_value_4_32;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[66]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[35]);
        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[11]);
        Py_DECREF(tmp_expression_value_129);
        if (tmp_kw_call_value_0_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_32 = Py_None;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_kw_call_value_0_32);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_kw_call_value_0_32);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 330;
        tmp_list_element_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_30);
        if (tmp_list_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_kw_call_value_0_32);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_32 = PyList_New(2);
        {
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_31;
            PyList_SET_ITEM(tmp_kw_call_value_2_32, 0, tmp_list_element_30);
            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_71 == NULL)) {
                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto list_build_exception_17;
            }
            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_31 == NULL)) {
                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto list_build_exception_17;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 330;
            tmp_list_element_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_31);
            if (tmp_list_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto list_build_exception_17;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_32, 1, tmp_list_element_30);
        }
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_kw_call_value_0_32);
        Py_DECREF(tmp_kw_call_value_2_32);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_kw_call_value_3_32 = mod_consts[190];
        tmp_kw_call_value_4_32 = mod_consts[191];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 328;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_32, tmp_kw_call_value_1_32, tmp_kw_call_value_2_32, tmp_kw_call_value_3_32, tmp_kw_call_value_4_32};
            tmp_assign_source_81 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_69, mod_consts[192], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_kw_call_value_0_32);
        Py_DECREF(tmp_kw_call_value_2_32);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_kw_call_value_0_33;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_kw_call_value_1_33;
        PyObject *tmp_kw_call_value_2_33;
        PyObject *tmp_list_element_31;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_kw_call_value_3_33;
        PyObject *tmp_kw_call_value_4_33;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[66]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[35]);
        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[11]);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_kw_call_value_0_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_33 = Py_None;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_kw_call_value_0_33);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_kw_call_value_0_33);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 339;
        tmp_list_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_32);
        if (tmp_list_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_kw_call_value_0_33);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_33 = PyList_New(2);
        {
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_element_value_33;
            PyList_SET_ITEM(tmp_kw_call_value_2_33, 0, tmp_list_element_31);
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_18;
            }
            tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_33 == NULL)) {
                tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_18;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 339;
            tmp_list_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_33);
            if (tmp_list_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_33, 1, tmp_list_element_31);
        }
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_kw_call_value_0_33);
        Py_DECREF(tmp_kw_call_value_2_33);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_kw_call_value_3_33 = mod_consts[194];
        tmp_kw_call_value_4_33 = mod_consts[191];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 337;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_33, tmp_kw_call_value_1_33, tmp_kw_call_value_2_33, tmp_kw_call_value_3_33, tmp_kw_call_value_4_33};
            tmp_assign_source_82 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_72, mod_consts[195], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_kw_call_value_0_33);
        Py_DECREF(tmp_kw_call_value_2_33);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_kw_call_value_0_34;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_kw_call_value_1_34;
        PyObject *tmp_kw_call_value_2_34;
        PyObject *tmp_list_element_32;
        PyObject *tmp_called_value_76;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_kw_call_value_3_34;
        PyObject *tmp_kw_call_value_4_34;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[66]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[35]);
        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[11]);
        Py_DECREF(tmp_expression_value_135);
        if (tmp_kw_call_value_0_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_34 = Py_None;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_34 == NULL)) {
            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 348;
        tmp_list_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_34);
        if (tmp_list_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_34 = PyList_New(7);
        {
            PyObject *tmp_expression_value_137;
            PyObject *tmp_expression_value_138;
            PyList_SET_ITEM(tmp_kw_call_value_2_34, 0, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_34, 1, tmp_list_element_32);
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_137 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            tmp_list_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[147]);
            if (tmp_list_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_34, 2, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_34, 3, tmp_list_element_32);
            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_138 == NULL)) {
                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            tmp_list_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[147]);
            if (tmp_list_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_34, 4, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_34, 5, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_34, 6, tmp_list_element_32);
        }
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_kw_call_value_0_34);
        Py_DECREF(tmp_kw_call_value_2_34);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_kw_call_value_3_34 = mod_consts[197];
        tmp_kw_call_value_4_34 = mod_consts[198];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 346;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_34, tmp_kw_call_value_1_34, tmp_kw_call_value_2_34, tmp_kw_call_value_3_34, tmp_kw_call_value_4_34};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_75, mod_consts[199], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_kw_call_value_0_34);
        Py_DECREF(tmp_kw_call_value_2_34);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_kw_call_value_0_35;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_kw_call_value_1_35;
        PyObject *tmp_kw_call_value_2_35;
        PyObject *tmp_list_element_33;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_kw_call_value_3_35;
        PyObject *tmp_kw_call_value_4_35;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[66]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[35]);
        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[11]);
        Py_DECREF(tmp_expression_value_140);
        if (tmp_kw_call_value_0_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_35 = Py_None;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_kw_call_value_0_35);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_kw_call_value_0_35);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 357;
        tmp_list_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_35);
        if (tmp_list_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_kw_call_value_0_35);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_35 = PyList_New(3);
        PyList_SET_ITEM(tmp_kw_call_value_2_35, 0, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_35, 1, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_35, 2, tmp_list_element_33);
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_kw_call_value_0_35);
        Py_DECREF(tmp_kw_call_value_2_35);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_kw_call_value_3_35 = mod_consts[201];
        tmp_kw_call_value_4_35 = mod_consts[202];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 355;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_35, tmp_kw_call_value_1_35, tmp_kw_call_value_2_35, tmp_kw_call_value_3_35, tmp_kw_call_value_4_35};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_77, mod_consts[203], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_kw_call_value_0_35);
        Py_DECREF(tmp_kw_call_value_2_35);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_kw_call_value_0_36;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_kw_call_value_1_36;
        PyObject *tmp_kw_call_value_2_36;
        PyObject *tmp_list_element_34;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_kw_call_value_3_36;
        PyObject *tmp_kw_call_value_4_36;
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[66]);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[35]);
        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[11]);
        Py_DECREF(tmp_expression_value_143);
        if (tmp_kw_call_value_0_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_36 = Py_None;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_kw_call_value_0_36);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_kw_call_value_0_36);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 366;
        tmp_list_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_36);
        if (tmp_list_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_kw_call_value_0_36);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_36 = PyList_New(11);
        {
            PyObject *tmp_expression_value_145;
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyList_SET_ITEM(tmp_kw_call_value_2_36, 0, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 1, tmp_list_element_34);
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_145 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            tmp_list_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[147]);
            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_36, 2, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 3, tmp_list_element_34);
            tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_146 == NULL)) {
                tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            tmp_list_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[147]);
            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_36, 4, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 5, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 6, tmp_list_element_34);
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            tmp_list_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[147]);
            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_36, 7, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 8, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 9, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_36, 10, tmp_list_element_34);
        }
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_kw_call_value_0_36);
        Py_DECREF(tmp_kw_call_value_2_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_kw_call_value_3_36 = mod_consts[205];
        tmp_kw_call_value_4_36 = mod_consts[206];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 364;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_36, tmp_kw_call_value_1_36, tmp_kw_call_value_2_36, tmp_kw_call_value_3_36, tmp_kw_call_value_4_36};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_79, mod_consts[207], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_kw_call_value_0_36);
        Py_DECREF(tmp_kw_call_value_2_36);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_kw_call_value_0_37;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_kw_call_value_1_37;
        PyObject *tmp_kw_call_value_2_37;
        PyObject *tmp_list_element_35;
        PyObject *tmp_kw_call_value_3_37;
        PyObject *tmp_kw_call_value_4_37;
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[66]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[35]);
        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[11]);
        Py_DECREF(tmp_expression_value_149);
        if (tmp_kw_call_value_0_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_37 = Py_None;
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);
            Py_DECREF(tmp_kw_call_value_0_37);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_37 = PyList_New(4);
        PyList_SET_ITEM0(tmp_kw_call_value_2_37, 0, tmp_list_element_35);
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_37, 1, tmp_list_element_35);
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_37, 2, tmp_list_element_35);
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_37, 3, tmp_list_element_35);
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_kw_call_value_0_37);
        Py_DECREF(tmp_kw_call_value_2_37);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_kw_call_value_3_37 = mod_consts[209];
        tmp_kw_call_value_4_37 = mod_consts[210];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 373;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_37, tmp_kw_call_value_1_37, tmp_kw_call_value_2_37, tmp_kw_call_value_3_37, tmp_kw_call_value_4_37};
            tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_81, mod_consts[211], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_kw_call_value_0_37);
        Py_DECREF(tmp_kw_call_value_2_37);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_kw_call_value_0_38;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_kw_call_value_1_38;
        PyObject *tmp_kw_call_value_2_38;
        PyObject *tmp_list_element_36;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_kw_call_value_3_38;
        PyObject *tmp_kw_call_value_4_38;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[66]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[35]);
        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[11]);
        Py_DECREF(tmp_expression_value_152);
        if (tmp_kw_call_value_0_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_38 = Py_None;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_value_0_38);

            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_value_0_38);

            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 384;
        tmp_list_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_37);
        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_value_0_38);

            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_38 = PyList_New(7);
        PyList_SET_ITEM(tmp_kw_call_value_2_38, 0, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_38, 1, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_38, 2, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_38, 3, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_38, 4, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_38, 5, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_38, 6, tmp_list_element_36);
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_kw_call_value_0_38);
        Py_DECREF(tmp_kw_call_value_2_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_kw_call_value_3_38 = mod_consts[213];
        tmp_kw_call_value_4_38 = mod_consts[214];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 382;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_38, tmp_kw_call_value_1_38, tmp_kw_call_value_2_38, tmp_kw_call_value_3_38, tmp_kw_call_value_4_38};
            tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_82, mod_consts[215], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_kw_call_value_0_38);
        Py_DECREF(tmp_kw_call_value_2_38);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_kw_call_value_0_39;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_kw_call_value_1_39;
        PyObject *tmp_kw_call_value_2_39;
        PyObject *tmp_list_element_37;
        PyObject *tmp_kw_call_value_3_39;
        PyObject *tmp_kw_call_value_4_39;
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[66]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[35]);
        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[11]);
        Py_DECREF(tmp_expression_value_155);
        if (tmp_kw_call_value_0_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_39 = Py_None;
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_kw_call_value_0_39);

            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_39 = PyList_New(4);
        PyList_SET_ITEM0(tmp_kw_call_value_2_39, 0, tmp_list_element_37);
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_39, 1, tmp_list_element_37);
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_39, 2, tmp_list_element_37);
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_39, 3, tmp_list_element_37);
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_kw_call_value_0_39);
        Py_DECREF(tmp_kw_call_value_2_39);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_kw_call_value_3_39 = mod_consts[217];
        tmp_kw_call_value_4_39 = mod_consts[218];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 391;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_39, tmp_kw_call_value_1_39, tmp_kw_call_value_2_39, tmp_kw_call_value_3_39, tmp_kw_call_value_4_39};
            tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_84, mod_consts[219], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_kw_call_value_0_39);
        Py_DECREF(tmp_kw_call_value_2_39);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_kw_call_value_0_40;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_kw_call_value_1_40;
        PyObject *tmp_kw_call_value_2_40;
        PyObject *tmp_list_element_38;
        PyObject *tmp_kw_call_value_3_40;
        PyObject *tmp_kw_call_value_4_40;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[66]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[35]);
        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[11]);
        Py_DECREF(tmp_expression_value_158);
        if (tmp_kw_call_value_0_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_40 = Py_None;
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_kw_call_value_0_40);

            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_40 = PyList_New(5);
        {
            PyObject *tmp_expression_value_160;
            PyList_SET_ITEM0(tmp_kw_call_value_2_40, 0, tmp_list_element_38);
            tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_38 == NULL)) {
                tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_40, 1, tmp_list_element_38);
            tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_38 == NULL)) {
                tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_40, 2, tmp_list_element_38);
            tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_38 == NULL)) {
                tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_40, 3, tmp_list_element_38);
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto list_build_exception_25;
            }
            tmp_list_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[161]);
            if (tmp_list_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_40, 4, tmp_list_element_38);
        }
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_kw_call_value_0_40);
        Py_DECREF(tmp_kw_call_value_2_40);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_kw_call_value_3_40 = mod_consts[221];
        tmp_kw_call_value_4_40 = mod_consts[222];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 400;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_40, tmp_kw_call_value_1_40, tmp_kw_call_value_2_40, tmp_kw_call_value_3_40, tmp_kw_call_value_4_40};
            tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_85, mod_consts[223], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_kw_call_value_0_40);
        Py_DECREF(tmp_kw_call_value_2_40);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_kw_call_value_0_41;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_kw_call_value_1_41;
        PyObject *tmp_kw_call_value_2_41;
        PyObject *tmp_list_element_39;
        PyObject *tmp_kw_call_value_3_41;
        PyObject *tmp_kw_call_value_4_41;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[66]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[35]);
        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[11]);
        Py_DECREF(tmp_expression_value_162);
        if (tmp_kw_call_value_0_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_41 == NULL)) {
            tmp_kw_call_value_1_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_kw_call_value_0_41);

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_kw_call_value_0_41);

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_41 = PyList_New(9);
        {
            PyObject *tmp_expression_value_164;
            PyObject *tmp_expression_value_165;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_expression_value_169;
            PyList_SET_ITEM0(tmp_kw_call_value_2_41, 0, tmp_list_element_39);
            tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_39 == NULL)) {
                tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_41, 1, tmp_list_element_39);
            tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_39 == NULL)) {
                tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_41, 2, tmp_list_element_39);
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            tmp_list_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[156]);
            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_41, 3, tmp_list_element_39);
            tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_165 == NULL)) {
                tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_165 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            tmp_list_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[156]);
            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_41, 4, tmp_list_element_39);
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_166 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            tmp_list_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[161]);
            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_41, 5, tmp_list_element_39);
            tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_167 == NULL)) {
                tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_167 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            tmp_list_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[156]);
            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_41, 6, tmp_list_element_39);
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            tmp_list_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[156]);
            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_41, 7, tmp_list_element_39);
            tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_169 == NULL)) {
                tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_169 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            tmp_list_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[156]);
            if (tmp_list_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_41, 8, tmp_list_element_39);
        }
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_kw_call_value_0_41);
        Py_DECREF(tmp_kw_call_value_2_41);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_kw_call_value_3_41 = mod_consts[225];
        tmp_kw_call_value_4_41 = mod_consts[226];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 409;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_41, tmp_kw_call_value_1_41, tmp_kw_call_value_2_41, tmp_kw_call_value_3_41, tmp_kw_call_value_4_41};
            tmp_assign_source_90 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_86, mod_consts[227], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_kw_call_value_0_41);
        Py_DECREF(tmp_kw_call_value_2_41);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_kw_call_value_0_42;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_kw_call_value_1_42;
        PyObject *tmp_kw_call_value_2_42;
        PyObject *tmp_list_element_40;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_kw_call_value_3_42;
        PyObject *tmp_kw_call_value_4_42;
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[66]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[35]);
        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[11]);
        Py_DECREF(tmp_expression_value_171);
        if (tmp_kw_call_value_0_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_42 = Py_None;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_kw_call_value_0_42);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_kw_call_value_0_42);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 420;
        tmp_list_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_38);
        if (tmp_list_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_kw_call_value_0_42);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_42 = PyList_New(5);
        {
            PyObject *tmp_expression_value_173;
            PyList_SET_ITEM(tmp_kw_call_value_2_42, 0, tmp_list_element_40);
            tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_40 == NULL)) {
                tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_42, 1, tmp_list_element_40);
            tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_173 == NULL)) {
                tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_173 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto list_build_exception_27;
            }
            tmp_list_element_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[147]);
            if (tmp_list_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_42, 2, tmp_list_element_40);
            tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_list_element_40 == NULL)) {
                tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_list_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_42, 3, tmp_list_element_40);
            tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_40 == NULL)) {
                tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_42, 4, tmp_list_element_40);
        }
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_kw_call_value_0_42);
        Py_DECREF(tmp_kw_call_value_2_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_kw_call_value_3_42 = mod_consts[229];
        tmp_kw_call_value_4_42 = mod_consts[230];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 418;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_42, tmp_kw_call_value_1_42, tmp_kw_call_value_2_42, tmp_kw_call_value_3_42, tmp_kw_call_value_4_42};
            tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_87, mod_consts[231], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_kw_call_value_0_42);
        Py_DECREF(tmp_kw_call_value_2_42);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_kw_call_value_0_43;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_kw_call_value_1_43;
        PyObject *tmp_kw_call_value_2_43;
        PyObject *tmp_list_element_41;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_kw_call_value_3_43;
        PyObject *tmp_kw_call_value_4_43;
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[66]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[35]);
        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[11]);
        Py_DECREF(tmp_expression_value_175);
        if (tmp_kw_call_value_0_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_43 = Py_None;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_value_0_43);

            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_value_0_43);

            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 429;
        tmp_list_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_39);
        if (tmp_list_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_value_0_43);

            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_43 = PyList_New(3);
        PyList_SET_ITEM(tmp_kw_call_value_2_43, 0, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto list_build_exception_28;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_43, 1, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto list_build_exception_28;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_43, 2, tmp_list_element_41);
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_kw_call_value_0_43);
        Py_DECREF(tmp_kw_call_value_2_43);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_kw_call_value_3_43 = mod_consts[233];
        tmp_kw_call_value_4_43 = mod_consts[234];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 427;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_43, tmp_kw_call_value_1_43, tmp_kw_call_value_2_43, tmp_kw_call_value_3_43, tmp_kw_call_value_4_43};
            tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_89, mod_consts[235], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_kw_call_value_0_43);
        Py_DECREF(tmp_kw_call_value_2_43);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_kw_call_value_0_44;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_kw_call_value_1_44;
        PyObject *tmp_kw_call_value_2_44;
        PyObject *tmp_list_element_42;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_kw_call_value_3_44;
        PyObject *tmp_kw_call_value_4_44;
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[66]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[35]);
        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[11]);
        Py_DECREF(tmp_expression_value_178);
        if (tmp_kw_call_value_0_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_44 = Py_None;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_kw_call_value_0_44);

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_kw_call_value_0_44);

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 438;
        tmp_list_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_40);
        if (tmp_list_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_kw_call_value_0_44);

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_44 = PyList_New(2);
        PyList_SET_ITEM(tmp_kw_call_value_2_44, 0, tmp_list_element_42);
        tmp_list_element_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_42 == NULL)) {
            tmp_list_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_44, 1, tmp_list_element_42);
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_kw_call_value_0_44);
        Py_DECREF(tmp_kw_call_value_2_44);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_kw_call_value_3_44 = mod_consts[237];
        tmp_kw_call_value_4_44 = mod_consts[238];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 436;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_44, tmp_kw_call_value_1_44, tmp_kw_call_value_2_44, tmp_kw_call_value_3_44, tmp_kw_call_value_4_44};
            tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_91, mod_consts[239], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_kw_call_value_0_44);
        Py_DECREF(tmp_kw_call_value_2_44);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_kw_call_value_0_45;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_kw_call_value_1_45;
        PyObject *tmp_kw_call_value_2_45;
        PyObject *tmp_list_element_43;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_kw_call_value_3_45;
        PyObject *tmp_kw_call_value_4_45;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[66]);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[35]);
        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[11]);
        Py_DECREF(tmp_expression_value_181);
        if (tmp_kw_call_value_0_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_45 = Py_None;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_kw_call_value_0_45);

            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_kw_call_value_0_45);

            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 447;
        tmp_list_element_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_41);
        if (tmp_list_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_kw_call_value_0_45);

            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_45 = PyList_New(2);
        PyList_SET_ITEM(tmp_kw_call_value_2_45, 0, tmp_list_element_43);
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_45, 1, tmp_list_element_43);
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_kw_call_value_0_45);
        Py_DECREF(tmp_kw_call_value_2_45);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_kw_call_value_3_45 = mod_consts[241];
        tmp_kw_call_value_4_45 = mod_consts[242];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 445;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_45, tmp_kw_call_value_1_45, tmp_kw_call_value_2_45, tmp_kw_call_value_3_45, tmp_kw_call_value_4_45};
            tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_93, mod_consts[243], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_kw_call_value_0_45);
        Py_DECREF(tmp_kw_call_value_2_45);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_kw_call_value_0_46;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_kw_call_value_1_46;
        PyObject *tmp_kw_call_value_2_46;
        PyObject *tmp_list_element_44;
        PyObject *tmp_called_value_96;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_kw_call_value_3_46;
        PyObject *tmp_kw_call_value_4_46;
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[66]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[35]);
        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[11]);
        Py_DECREF(tmp_expression_value_184);
        if (tmp_kw_call_value_0_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_46 = Py_None;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_kw_call_value_0_46);

            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_kw_call_value_0_46);

            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 456;
        tmp_list_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_42);
        if (tmp_list_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_kw_call_value_0_46);

            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_46 = PyList_New(2);
        PyList_SET_ITEM(tmp_kw_call_value_2_46, 0, tmp_list_element_44);
        tmp_list_element_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_44 == NULL)) {
            tmp_list_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_46, 1, tmp_list_element_44);
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_kw_call_value_0_46);
        Py_DECREF(tmp_kw_call_value_2_46);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_kw_call_value_3_46 = mod_consts[245];
        tmp_kw_call_value_4_46 = mod_consts[246];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 454;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_46, tmp_kw_call_value_1_46, tmp_kw_call_value_2_46, tmp_kw_call_value_3_46, tmp_kw_call_value_4_46};
            tmp_assign_source_95 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_95, mod_consts[247], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_kw_call_value_0_46);
        Py_DECREF(tmp_kw_call_value_2_46);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_kw_call_value_0_47;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_kw_call_value_1_47;
        PyObject *tmp_kw_call_value_2_47;
        PyObject *tmp_list_element_45;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_kw_call_value_3_47;
        PyObject *tmp_kw_call_value_4_47;
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[66]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[35]);
        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[11]);
        Py_DECREF(tmp_expression_value_187);
        if (tmp_kw_call_value_0_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_47 = Py_None;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_0_47);

            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_43 == NULL)) {
            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_0_47);

            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 465;
        tmp_list_element_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_43);
        if (tmp_list_element_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_0_47);

            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_47 = PyList_New(2);
        PyList_SET_ITEM(tmp_kw_call_value_2_47, 0, tmp_list_element_45);
        tmp_list_element_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_list_element_45 == NULL)) {
            tmp_list_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_list_element_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto list_build_exception_32;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_47, 1, tmp_list_element_45);
        goto list_build_noexception_32;
        // Exception handling pass through code for list_build:
        list_build_exception_32:;
        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_kw_call_value_0_47);
        Py_DECREF(tmp_kw_call_value_2_47);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_32:;
        tmp_kw_call_value_3_47 = mod_consts[249];
        tmp_kw_call_value_4_47 = mod_consts[250];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 463;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_47, tmp_kw_call_value_1_47, tmp_kw_call_value_2_47, tmp_kw_call_value_3_47, tmp_kw_call_value_4_47};
            tmp_assign_source_96 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_97, mod_consts[251], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_kw_call_value_0_47);
        Py_DECREF(tmp_kw_call_value_2_47);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_kw_call_value_0_48;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_kw_call_value_1_48;
        PyObject *tmp_kw_call_value_2_48;
        PyObject *tmp_list_element_46;
        PyObject *tmp_kw_call_value_3_48;
        PyObject *tmp_kw_call_value_4_48;
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[66]);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);

            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[35]);
        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);

            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[11]);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_kw_call_value_0_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);

            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_48 == NULL)) {
            tmp_kw_call_value_1_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);
            Py_DECREF(tmp_kw_call_value_0_48);

            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_46 == NULL)) {
            tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_99);
            Py_DECREF(tmp_kw_call_value_0_48);

            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_48 = PyList_New(9);
        {
            PyObject *tmp_called_value_100;
            PyObject *tmp_args_element_value_44;
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 0, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 1, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 2, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 3, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 4, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 5, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 6, tmp_list_element_46);
            tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_list_element_46 == NULL)) {
                tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_48, 7, tmp_list_element_46);
            tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_100 == NULL)) {
                tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_44 == NULL)) {
                tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 474;
            tmp_list_element_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_44);
            if (tmp_list_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_48, 8, tmp_list_element_46);
        }
        goto list_build_noexception_33;
        // Exception handling pass through code for list_build:
        list_build_exception_33:;
        Py_DECREF(tmp_called_value_99);
        Py_DECREF(tmp_kw_call_value_0_48);
        Py_DECREF(tmp_kw_call_value_2_48);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_33:;
        tmp_kw_call_value_3_48 = mod_consts[253];
        tmp_kw_call_value_4_48 = mod_consts[254];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 472;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_48, tmp_kw_call_value_1_48, tmp_kw_call_value_2_48, tmp_kw_call_value_3_48, tmp_kw_call_value_4_48};
            tmp_assign_source_97 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_99, mod_consts[255], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_99);
        Py_DECREF(tmp_kw_call_value_0_48);
        Py_DECREF(tmp_kw_call_value_2_48);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_kw_call_value_0_49;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_kw_call_value_1_49;
        PyObject *tmp_kw_call_value_2_49;
        PyObject *tmp_list_element_47;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_kw_call_value_3_49;
        PyObject *tmp_kw_call_value_4_49;
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[66]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[35]);
        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[11]);
        Py_DECREF(tmp_expression_value_193);
        if (tmp_kw_call_value_0_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_49 = Py_None;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_kw_call_value_0_49);

            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_kw_call_value_0_49);

            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 483;
        tmp_list_element_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_45);
        if (tmp_list_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_kw_call_value_0_49);

            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_49 = PyList_New(4);
        PyList_SET_ITEM(tmp_kw_call_value_2_49, 0, tmp_list_element_47);
        tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_47 == NULL)) {
            tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto list_build_exception_34;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_49, 1, tmp_list_element_47);
        tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_47 == NULL)) {
            tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto list_build_exception_34;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_49, 2, tmp_list_element_47);
        tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_list_element_47 == NULL)) {
            tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_list_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto list_build_exception_34;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_49, 3, tmp_list_element_47);
        goto list_build_noexception_34;
        // Exception handling pass through code for list_build:
        list_build_exception_34:;
        Py_DECREF(tmp_called_value_101);
        Py_DECREF(tmp_kw_call_value_0_49);
        Py_DECREF(tmp_kw_call_value_2_49);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_34:;
        tmp_kw_call_value_3_49 = mod_consts[257];
        tmp_kw_call_value_4_49 = mod_consts[258];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 481;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_49, tmp_kw_call_value_1_49, tmp_kw_call_value_2_49, tmp_kw_call_value_3_49, tmp_kw_call_value_4_49};
            tmp_assign_source_98 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_101, mod_consts[259], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_101);
        Py_DECREF(tmp_kw_call_value_0_49);
        Py_DECREF(tmp_kw_call_value_2_49);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_kw_call_value_0_50;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_kw_call_value_1_50;
        PyObject *tmp_kw_call_value_2_50;
        PyObject *tmp_list_element_48;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_kw_call_value_3_50;
        PyObject *tmp_kw_call_value_4_50;
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[66]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[35]);
        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[11]);
        Py_DECREF(tmp_expression_value_196);
        if (tmp_kw_call_value_0_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_50 = Py_None;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_value_0_50);

            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_46 == NULL)) {
            tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_value_0_50);

            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 492;
        tmp_list_element_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_46);
        if (tmp_list_element_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_value_0_50);

            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_50 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_50, 0, tmp_list_element_48);
        tmp_kw_call_value_3_50 = mod_consts[261];
        tmp_kw_call_value_4_50 = mod_consts[74];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 490;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_50, tmp_kw_call_value_1_50, tmp_kw_call_value_2_50, tmp_kw_call_value_3_50, tmp_kw_call_value_4_50};
            tmp_assign_source_99 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_103, mod_consts[262], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_kw_call_value_0_50);
        Py_DECREF(tmp_kw_call_value_2_50);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_kw_call_value_0_51;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_kw_call_value_1_51;
        PyObject *tmp_kw_call_value_2_51;
        PyObject *tmp_list_element_49;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_kw_call_value_3_51;
        PyObject *tmp_kw_call_value_4_51;
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[66]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[35]);
        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[11]);
        Py_DECREF(tmp_expression_value_199);
        if (tmp_kw_call_value_0_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_51 = Py_None;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_kw_call_value_0_51);

            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_47 == NULL)) {
            tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_kw_call_value_0_51);

            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 501;
        tmp_list_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_47);
        if (tmp_list_element_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_kw_call_value_0_51);

            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_51 = PyList_New(2);
        {
            PyObject *tmp_called_value_107;
            PyObject *tmp_args_element_value_48;
            PyList_SET_ITEM(tmp_kw_call_value_2_51, 0, tmp_list_element_49);
            tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_107 == NULL)) {
                tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_35;
            }
            tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_48 == NULL)) {
                tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_35;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 501;
            tmp_list_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_48);
            if (tmp_list_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_35;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_51, 1, tmp_list_element_49);
        }
        goto list_build_noexception_35;
        // Exception handling pass through code for list_build:
        list_build_exception_35:;
        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_kw_call_value_0_51);
        Py_DECREF(tmp_kw_call_value_2_51);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_35:;
        tmp_kw_call_value_3_51 = mod_consts[264];
        tmp_kw_call_value_4_51 = mod_consts[265];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 499;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_51, tmp_kw_call_value_1_51, tmp_kw_call_value_2_51, tmp_kw_call_value_3_51, tmp_kw_call_value_4_51};
            tmp_assign_source_100 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_105, mod_consts[266], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_kw_call_value_0_51);
        Py_DECREF(tmp_kw_call_value_2_51);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_kw_call_value_0_52;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_kw_call_value_1_52;
        PyObject *tmp_kw_call_value_2_52;
        PyObject *tmp_list_element_50;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_kw_call_value_3_52;
        PyObject *tmp_kw_call_value_4_52;
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[66]);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[35]);
        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[11]);
        Py_DECREF(tmp_expression_value_202);
        if (tmp_kw_call_value_0_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_52 = Py_None;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_kw_call_value_0_52);

            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_49 == NULL)) {
            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_kw_call_value_0_52);

            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 510;
        tmp_list_element_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_109, tmp_args_element_value_49);
        if (tmp_list_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_kw_call_value_0_52);

            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_52 = PyList_New(3);
        PyList_SET_ITEM(tmp_kw_call_value_2_52, 0, tmp_list_element_50);
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_52, 1, tmp_list_element_50);
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_52, 2, tmp_list_element_50);
        goto list_build_noexception_36;
        // Exception handling pass through code for list_build:
        list_build_exception_36:;
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_kw_call_value_0_52);
        Py_DECREF(tmp_kw_call_value_2_52);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_36:;
        tmp_kw_call_value_3_52 = mod_consts[268];
        tmp_kw_call_value_4_52 = mod_consts[269];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 508;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_52, tmp_kw_call_value_1_52, tmp_kw_call_value_2_52, tmp_kw_call_value_3_52, tmp_kw_call_value_4_52};
            tmp_assign_source_101 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_108, mod_consts[270], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_kw_call_value_0_52);
        Py_DECREF(tmp_kw_call_value_2_52);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_kw_call_value_0_53;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_kw_call_value_1_53;
        PyObject *tmp_kw_call_value_2_53;
        PyObject *tmp_list_element_51;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_kw_call_value_3_53;
        PyObject *tmp_kw_call_value_4_53;
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[66]);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_205 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[35]);
        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[11]);
        Py_DECREF(tmp_expression_value_205);
        if (tmp_kw_call_value_0_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_53 = Py_None;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_value_0_53);

            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_50 == NULL)) {
            tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_value_0_53);

            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 519;
        tmp_list_element_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_111, tmp_args_element_value_50);
        if (tmp_list_element_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_value_0_53);

            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_53 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_53, 0, tmp_list_element_51);
        tmp_kw_call_value_3_53 = mod_consts[272];
        tmp_kw_call_value_4_53 = mod_consts[74];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 517;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_53, tmp_kw_call_value_1_53, tmp_kw_call_value_2_53, tmp_kw_call_value_3_53, tmp_kw_call_value_4_53};
            tmp_assign_source_102 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_110, mod_consts[273], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_kw_call_value_0_53);
        Py_DECREF(tmp_kw_call_value_2_53);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_kw_call_value_0_54;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_kw_call_value_1_54;
        PyObject *tmp_kw_call_value_2_54;
        PyObject *tmp_list_element_52;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_kw_call_value_3_54;
        PyObject *tmp_kw_call_value_4_54;
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[66]);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[35]);
        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[11]);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_kw_call_value_0_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_54 = Py_None;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_kw_call_value_0_54);

            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_51 == NULL)) {
            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_kw_call_value_0_54);

            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 528;
        tmp_list_element_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_113, tmp_args_element_value_51);
        if (tmp_list_element_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_kw_call_value_0_54);

            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_54 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_54, 0, tmp_list_element_52);
        tmp_kw_call_value_3_54 = mod_consts[275];
        tmp_kw_call_value_4_54 = mod_consts[74];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 526;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_54, tmp_kw_call_value_1_54, tmp_kw_call_value_2_54, tmp_kw_call_value_3_54, tmp_kw_call_value_4_54};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_112, mod_consts[276], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_kw_call_value_0_54);
        Py_DECREF(tmp_kw_call_value_2_54);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_kw_call_value_0_55;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_kw_call_value_1_55;
        PyObject *tmp_kw_call_value_2_55;
        PyObject *tmp_list_element_53;
        PyObject *tmp_called_value_115;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_kw_call_value_3_55;
        PyObject *tmp_kw_call_value_4_55;
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[66]);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[35]);
        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[11]);
        Py_DECREF(tmp_expression_value_211);
        if (tmp_kw_call_value_0_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_55 = Py_None;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_kw_call_value_0_55);

            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_52 == NULL)) {
            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_kw_call_value_0_55);

            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 537;
        tmp_list_element_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_115, tmp_args_element_value_52);
        if (tmp_list_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_kw_call_value_0_55);

            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_55 = PyList_New(4);
        PyList_SET_ITEM(tmp_kw_call_value_2_55, 0, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto list_build_exception_37;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_55, 1, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto list_build_exception_37;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_55, 2, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto list_build_exception_37;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_55, 3, tmp_list_element_53);
        goto list_build_noexception_37;
        // Exception handling pass through code for list_build:
        list_build_exception_37:;
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_kw_call_value_0_55);
        Py_DECREF(tmp_kw_call_value_2_55);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_37:;
        tmp_kw_call_value_3_55 = mod_consts[278];
        tmp_kw_call_value_4_55 = mod_consts[279];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 535;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_55, tmp_kw_call_value_1_55, tmp_kw_call_value_2_55, tmp_kw_call_value_3_55, tmp_kw_call_value_4_55};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_114, mod_consts[280], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_kw_call_value_0_55);
        Py_DECREF(tmp_kw_call_value_2_55);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_kw_call_value_0_56;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_kw_call_value_1_56;
        PyObject *tmp_kw_call_value_2_56;
        PyObject *tmp_list_element_54;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_kw_call_value_3_56;
        PyObject *tmp_kw_call_value_4_56;
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[66]);
        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[35]);
        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[11]);
        Py_DECREF(tmp_expression_value_214);
        if (tmp_kw_call_value_0_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_56 = Py_None;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_kw_call_value_0_56);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_53 == NULL)) {
            tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_kw_call_value_0_56);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 546;
        tmp_list_element_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_53);
        if (tmp_list_element_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_kw_call_value_0_56);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_56 = PyList_New(3);
        PyList_SET_ITEM(tmp_kw_call_value_2_56, 0, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_56, 1, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_kw_call_value_2_56, 2, tmp_list_element_54);
        goto list_build_noexception_38;
        // Exception handling pass through code for list_build:
        list_build_exception_38:;
        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_kw_call_value_0_56);
        Py_DECREF(tmp_kw_call_value_2_56);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_38:;
        tmp_kw_call_value_3_56 = mod_consts[282];
        tmp_kw_call_value_4_56 = mod_consts[158];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 544;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_56, tmp_kw_call_value_1_56, tmp_kw_call_value_2_56, tmp_kw_call_value_3_56, tmp_kw_call_value_4_56};
            tmp_assign_source_105 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_116, mod_consts[283], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_kw_call_value_0_56);
        Py_DECREF(tmp_kw_call_value_2_56);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_kw_call_value_0_57;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_kw_call_value_1_57;
        PyObject *tmp_kw_call_value_2_57;
        PyObject *tmp_list_element_55;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_kw_call_value_3_57;
        PyObject *tmp_kw_call_value_4_57;
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[66]);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_217 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[35]);
        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[11]);
        Py_DECREF(tmp_expression_value_217);
        if (tmp_kw_call_value_0_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_57 = Py_None;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_kw_call_value_0_57);

            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_54 == NULL)) {
            tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_kw_call_value_0_57);

            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 555;
        tmp_list_element_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_54);
        if (tmp_list_element_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_kw_call_value_0_57);

            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_57 = PyList_New(3);
        {
            PyObject *tmp_expression_value_219;
            PyObject *tmp_called_value_120;
            PyObject *tmp_args_element_value_55;
            PyList_SET_ITEM(tmp_kw_call_value_2_57, 0, tmp_list_element_55);
            tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_219 == NULL)) {
                tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_219 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto list_build_exception_39;
            }
            tmp_list_element_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[156]);
            if (tmp_list_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto list_build_exception_39;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_57, 1, tmp_list_element_55);
            tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_120 == NULL)) {
                tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto list_build_exception_39;
            }
            tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_55 == NULL)) {
                tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto list_build_exception_39;
            }
            frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 555;
            tmp_list_element_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_55);
            if (tmp_list_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto list_build_exception_39;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_57, 2, tmp_list_element_55);
        }
        goto list_build_noexception_39;
        // Exception handling pass through code for list_build:
        list_build_exception_39:;
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_kw_call_value_0_57);
        Py_DECREF(tmp_kw_call_value_2_57);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_39:;
        tmp_kw_call_value_3_57 = mod_consts[285];
        tmp_kw_call_value_4_57 = mod_consts[286];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 553;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_57, tmp_kw_call_value_1_57, tmp_kw_call_value_2_57, tmp_kw_call_value_3_57, tmp_kw_call_value_4_57};
            tmp_assign_source_106 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_118, mod_consts[287], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_kw_call_value_0_57);
        Py_DECREF(tmp_kw_call_value_2_57);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_121;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_kw_call_value_0_58;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_kw_call_value_1_58;
        PyObject *tmp_kw_call_value_2_58;
        PyObject *tmp_list_element_56;
        PyObject *tmp_kw_call_value_3_58;
        PyObject *tmp_kw_call_value_4_58;
        tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_220 == NULL)) {
            tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[66]);
        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_221 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[35]);
        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[11]);
        Py_DECREF(tmp_expression_value_221);
        if (tmp_kw_call_value_0_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_58 == NULL)) {
            tmp_kw_call_value_1_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_kw_call_value_0_58);

            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_kw_call_value_0_58);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_58 = PyList_New(9);
        {
            PyObject *tmp_expression_value_223;
            PyObject *tmp_expression_value_224;
            PyObject *tmp_expression_value_225;
            PyObject *tmp_expression_value_226;
            PyObject *tmp_expression_value_227;
            PyObject *tmp_expression_value_228;
            PyList_SET_ITEM0(tmp_kw_call_value_2_58, 0, tmp_list_element_56);
            tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_56 == NULL)) {
                tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_58, 1, tmp_list_element_56);
            tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_56 == NULL)) {
                tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_58, 2, tmp_list_element_56);
            tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_223 == NULL)) {
                tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_223 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            tmp_list_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[156]);
            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_58, 3, tmp_list_element_56);
            tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_224 == NULL)) {
                tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_224 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            tmp_list_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[156]);
            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_58, 4, tmp_list_element_56);
            tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_225 == NULL)) {
                tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_225 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            tmp_list_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[161]);
            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_58, 5, tmp_list_element_56);
            tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_226 == NULL)) {
                tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_226 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            tmp_list_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[156]);
            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_58, 6, tmp_list_element_56);
            tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_227 == NULL)) {
                tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_227 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            tmp_list_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[156]);
            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_58, 7, tmp_list_element_56);
            tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_228 == NULL)) {
                tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_228 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            tmp_list_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[156]);
            if (tmp_list_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_58, 8, tmp_list_element_56);
        }
        goto list_build_noexception_40;
        // Exception handling pass through code for list_build:
        list_build_exception_40:;
        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_kw_call_value_0_58);
        Py_DECREF(tmp_kw_call_value_2_58);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_40:;
        tmp_kw_call_value_3_58 = mod_consts[289];
        tmp_kw_call_value_4_58 = mod_consts[290];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 562;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_58, tmp_kw_call_value_1_58, tmp_kw_call_value_2_58, tmp_kw_call_value_3_58, tmp_kw_call_value_4_58};
            tmp_assign_source_107 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_121, mod_consts[291], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_kw_call_value_0_58);
        Py_DECREF(tmp_kw_call_value_2_58);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_kw_call_value_0_59;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_kw_call_value_1_59;
        PyObject *tmp_kw_call_value_2_59;
        PyObject *tmp_list_element_57;
        PyObject *tmp_kw_call_value_3_59;
        PyObject *tmp_kw_call_value_4_59;
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[66]);
        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[35]);
        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[11]);
        Py_DECREF(tmp_expression_value_230);
        if (tmp_kw_call_value_0_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_kw_call_value_1_59 == NULL)) {
            tmp_kw_call_value_1_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_kw_call_value_1_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_kw_call_value_0_59);

            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_kw_call_value_0_59);

            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_59 = PyList_New(13);
        {
            PyObject *tmp_expression_value_232;
            PyObject *tmp_expression_value_233;
            PyObject *tmp_expression_value_234;
            PyObject *tmp_expression_value_235;
            PyObject *tmp_expression_value_236;
            PyObject *tmp_expression_value_237;
            PyObject *tmp_expression_value_238;
            PyList_SET_ITEM0(tmp_kw_call_value_2_59, 0, tmp_list_element_57);
            tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_57 == NULL)) {
                tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_59, 1, tmp_list_element_57);
            tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_57 == NULL)) {
                tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_59, 2, tmp_list_element_57);
            tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_57 == NULL)) {
                tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_59, 3, tmp_list_element_57);
            tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_232 == NULL)) {
                tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_232 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[156]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 4, tmp_list_element_57);
            tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_233 == NULL)) {
                tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_233 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[156]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 5, tmp_list_element_57);
            tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_234 == NULL)) {
                tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_234 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[161]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 6, tmp_list_element_57);
            tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_57 == NULL)) {
                tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_59, 7, tmp_list_element_57);
            tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_57 == NULL)) {
                tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM0(tmp_kw_call_value_2_59, 8, tmp_list_element_57);
            tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_235 == NULL)) {
                tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_235 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[156]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 9, tmp_list_element_57);
            tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_236 == NULL)) {
                tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_236 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[156]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 10, tmp_list_element_57);
            tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_237 == NULL)) {
                tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_237 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[156]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 11, tmp_list_element_57);
            tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_238 == NULL)) {
                tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_value_238 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            tmp_list_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[156]);
            if (tmp_list_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_59, 12, tmp_list_element_57);
        }
        goto list_build_noexception_41;
        // Exception handling pass through code for list_build:
        list_build_exception_41:;
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_kw_call_value_0_59);
        Py_DECREF(tmp_kw_call_value_2_59);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_41:;
        tmp_kw_call_value_3_59 = mod_consts[293];
        tmp_kw_call_value_4_59 = mod_consts[294];
        frame_7a2fd658d85c981cc5229e4bbce262df->m_frame.f_lineno = 571;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_59, tmp_kw_call_value_1_59, tmp_kw_call_value_2_59, tmp_kw_call_value_3_59, tmp_kw_call_value_4_59};
            tmp_assign_source_108 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_122, mod_consts[295], kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_kw_call_value_0_59);
        Py_DECREF(tmp_kw_call_value_2_59);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_108);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a2fd658d85c981cc5229e4bbce262df);
#endif
    popFrameStack();

    assertFrameObject(frame_7a2fd658d85c981cc5229e4bbce262df);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a2fd658d85c981cc5229e4bbce262df);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a2fd658d85c981cc5229e4bbce262df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a2fd658d85c981cc5229e4bbce262df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a2fd658d85c981cc5229e4bbce262df, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = LIST_COPY(mod_consts[297]);
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_109);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GLU", false);

    return module_OpenGL$raw$GLU;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GLU, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GLU", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
