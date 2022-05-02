/* Generated code for Python module 'django.conf.global_settings'
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

/* The "module_django$conf$global_settings" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$conf$global_settings;
PyDictObject *moduledict_django$conf$global_settings;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[411];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[411];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("django.conf.global_settings"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 411; i++) {
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
void checkModuleConstants_django$conf$global_settings(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 411; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bc9d03c60fbe73bd2402ee3d5b5e8a65;
static PyCodeObject *codeobj_2d65f48f130077b4e279bf28ef4cf4fb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[408]); CHECK_OBJECT(module_filename_obj);
    codeobj_bc9d03c60fbe73bd2402ee3d5b5e8a65 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[409], NULL, NULL, 0, 0, 0);
    codeobj_2d65f48f130077b4e279bf28ef4cf4fb = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[410], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$conf$global_settings$$$function__1_gettext_noop();


// The module function definitions.
static PyObject *impl_django$conf$global_settings$$$function__1_gettext_noop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_django$conf$global_settings$$$function__1_gettext_noop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$conf$global_settings$$$function__1_gettext_noop,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d65f48f130077b4e279bf28ef4cf4fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_django$conf$global_settings,
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

function_impl_code functable_django$conf$global_settings[] = {
    impl_django$conf$global_settings$$$function__1_gettext_noop,
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

    function_impl_code *current = functable_django$conf$global_settings;
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

    if (offset > sizeof(functable_django$conf$global_settings) || offset < 0) {
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
        functable_django$conf$global_settings[offset],
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
        module_django$conf$global_settings,
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
PyObject *modulecode_django$conf$global_settings(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("django.conf.global_settings");

    // Store the module for future use.
    module_django$conf$global_settings = module;

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
        PRINT_STRING("django.conf.global_settings: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("django.conf.global_settings: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("django.conf.global_settings: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdjango$conf$global_settings\n");

    moduledict_django$conf$global_settings = MODULE_DICT(module_django$conf$global_settings);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_django$conf$global_settings,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_django$conf$global_settings,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[242]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_django$conf$global_settings,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_django$conf$global_settings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_django$conf$global_settings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_django$conf$global_settings);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_django$conf$global_settings);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_bc9d03c60fbe73bd2402ee3d5b5e8a65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_bc9d03c60fbe73bd2402ee3d5b5e8a65 = MAKE_MODULE_FRAME(codeobj_bc9d03c60fbe73bd2402ee3d5b5e8a65, module_django$conf$global_settings);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_bc9d03c60fbe73bd2402ee3d5b5e8a65);
    assert(Py_REFCNT(frame_bc9d03c60fbe73bd2402ee3d5b5e8a65) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_django$conf$global_settings$$$function__1_gettext_noop();

        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[19];
        tmp_list_element_1 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_1;
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_called_value_1 == NULL));
            frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 57;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[20]);

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_14 = PyList_New(97);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_tuple_element_81;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_tuple_element_91;
            PyObject *tmp_tuple_element_92;
            PyObject *tmp_tuple_element_93;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_tuple_element_95;
            PyObject *tmp_tuple_element_96;
            PyObject *tmp_tuple_element_97;
            PyList_SET_ITEM(tmp_assign_source_14, 0, tmp_list_element_1);
            tmp_tuple_element_2 = mod_consts[21];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_2;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
                tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_2 == NULL)) {
                    tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto tuple_build_exception_2;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 58;
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[22]);

                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyList_SET_ITEM(tmp_assign_source_14, 1, tmp_list_element_1);
            tmp_tuple_element_3 = mod_consts[23];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_3;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_3);
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto tuple_build_exception_3;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 59;
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[24]);

                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyList_SET_ITEM(tmp_assign_source_14, 2, tmp_list_element_1);
            tmp_tuple_element_4 = mod_consts[25];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_4;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;

                    goto tuple_build_exception_4;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 60;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[26]);

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyList_SET_ITEM(tmp_assign_source_14, 3, tmp_list_element_1);
            tmp_tuple_element_5 = mod_consts[27];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_5;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_5 == NULL)) {
                    tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;

                    goto tuple_build_exception_5;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 61;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[28]);

                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyList_SET_ITEM(tmp_assign_source_14, 4, tmp_list_element_1);
            tmp_tuple_element_6 = mod_consts[29];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_6;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_6 == NULL)) {
                    tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_6;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 62;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[30]);

                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyList_SET_ITEM(tmp_assign_source_14, 5, tmp_list_element_1);
            tmp_tuple_element_7 = mod_consts[31];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_7;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_7 == NULL)) {
                    tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;

                    goto tuple_build_exception_7;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 63;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[32]);

                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyList_SET_ITEM(tmp_assign_source_14, 6, tmp_list_element_1);
            tmp_tuple_element_8 = mod_consts[33];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_8 == NULL)) {
                    tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;

                    goto tuple_build_exception_8;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 64;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[34]);

                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            PyList_SET_ITEM(tmp_assign_source_14, 7, tmp_list_element_1);
            tmp_tuple_element_9 = mod_consts[35];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_9;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_9 == NULL)) {
                    tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;

                    goto tuple_build_exception_9;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 65;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[36]);

                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            PyList_SET_ITEM(tmp_assign_source_14, 8, tmp_list_element_1);
            tmp_tuple_element_10 = mod_consts[37];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_10;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_10);
                tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_10 == NULL)) {
                    tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;

                    goto tuple_build_exception_10;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 66;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[38]);

                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyList_SET_ITEM(tmp_assign_source_14, 9, tmp_list_element_1);
            tmp_tuple_element_11 = mod_consts[39];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_11;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_11);
                tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_11 == NULL)) {
                    tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;

                    goto tuple_build_exception_11;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 67;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[40]);

                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            PyList_SET_ITEM(tmp_assign_source_14, 10, tmp_list_element_1);
            tmp_tuple_element_12 = mod_consts[41];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_12;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_12);
                tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_12 == NULL)) {
                    tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;

                    goto tuple_build_exception_12;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 68;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[42]);

                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;

                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            PyList_SET_ITEM(tmp_assign_source_14, 11, tmp_list_element_1);
            tmp_tuple_element_13 = mod_consts[43];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_13;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
                tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_13 == NULL)) {
                    tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;

                    goto tuple_build_exception_13;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 69;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[44]);

                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyList_SET_ITEM(tmp_assign_source_14, 12, tmp_list_element_1);
            tmp_tuple_element_14 = mod_consts[45];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_14;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_14 == NULL)) {
                    tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_14;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 70;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[46]);

                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            PyList_SET_ITEM(tmp_assign_source_14, 13, tmp_list_element_1);
            tmp_tuple_element_15 = mod_consts[47];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_15;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_15);
                tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_15 == NULL)) {
                    tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;

                    goto tuple_build_exception_15;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 71;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[48]);

                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            PyList_SET_ITEM(tmp_assign_source_14, 14, tmp_list_element_1);
            tmp_tuple_element_16 = mod_consts[49];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_16;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_16);
                tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_16 == NULL)) {
                    tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto tuple_build_exception_16;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 72;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[50]);

                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            PyList_SET_ITEM(tmp_assign_source_14, 15, tmp_list_element_1);
            tmp_tuple_element_17 = mod_consts[51];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_17;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_17);
                tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_17 == NULL)) {
                    tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;

                    goto tuple_build_exception_17;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 73;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[52]);

                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;

                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            PyList_SET_ITEM(tmp_assign_source_14, 16, tmp_list_element_1);
            tmp_tuple_element_18 = mod_consts[53];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_18;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_18);
                tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_18 == NULL)) {
                    tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;

                    goto tuple_build_exception_18;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 74;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[54]);

                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;

                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            PyList_SET_ITEM(tmp_assign_source_14, 17, tmp_list_element_1);
            tmp_tuple_element_19 = mod_consts[55];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_19;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_19);
                tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_19 == NULL)) {
                    tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;

                    goto tuple_build_exception_19;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 75;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[56]);

                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            PyList_SET_ITEM(tmp_assign_source_14, 18, tmp_list_element_1);
            tmp_tuple_element_20 = mod_consts[57];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_20;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_20);
                tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_20 == NULL)) {
                    tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto tuple_build_exception_20;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 76;
                tmp_tuple_element_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[58]);

                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            PyList_SET_ITEM(tmp_assign_source_14, 19, tmp_list_element_1);
            tmp_tuple_element_21 = mod_consts[59];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_21;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_21);
                tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_21 == NULL)) {
                    tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_21;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 77;
                tmp_tuple_element_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[60]);

                if (tmp_tuple_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            PyList_SET_ITEM(tmp_assign_source_14, 20, tmp_list_element_1);
            tmp_tuple_element_22 = mod_consts[61];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_22;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_22);
                tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_22 == NULL)) {
                    tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;

                    goto tuple_build_exception_22;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 78;
                tmp_tuple_element_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[62]);

                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;

                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            PyList_SET_ITEM(tmp_assign_source_14, 21, tmp_list_element_1);
            tmp_tuple_element_23 = mod_consts[63];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_23;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_23);
                tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_23 == NULL)) {
                    tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto tuple_build_exception_23;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 79;
                tmp_tuple_element_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[64]);

                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            PyList_SET_ITEM(tmp_assign_source_14, 22, tmp_list_element_1);
            tmp_tuple_element_24 = mod_consts[65];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_24;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_24);
                tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_24 == NULL)) {
                    tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_24;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 80;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[66]);

                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_24;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            PyList_SET_ITEM(tmp_assign_source_14, 23, tmp_list_element_1);
            tmp_tuple_element_25 = mod_consts[67];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_25;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_25);
                tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_25 == NULL)) {
                    tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;

                    goto tuple_build_exception_25;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 81;
                tmp_tuple_element_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[68]);

                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;

                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            PyList_SET_ITEM(tmp_assign_source_14, 24, tmp_list_element_1);
            tmp_tuple_element_26 = mod_consts[69];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_26;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_26);
                tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_26 == NULL)) {
                    tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;

                    goto tuple_build_exception_26;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 82;
                tmp_tuple_element_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[70]);

                if (tmp_tuple_element_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_26);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            PyList_SET_ITEM(tmp_assign_source_14, 25, tmp_list_element_1);
            tmp_tuple_element_27 = mod_consts[71];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_27;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_27);
                tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_27 == NULL)) {
                    tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;

                    goto tuple_build_exception_27;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 83;
                tmp_tuple_element_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_27, mod_consts[72]);

                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyList_SET_ITEM(tmp_assign_source_14, 26, tmp_list_element_1);
            tmp_tuple_element_28 = mod_consts[73];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_28;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_28);
                tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_28 == NULL)) {
                    tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_28;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 84;
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[74]);

                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            PyList_SET_ITEM(tmp_assign_source_14, 27, tmp_list_element_1);
            tmp_tuple_element_29 = mod_consts[75];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_29;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_29);
                tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_29 == NULL)) {
                    tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;

                    goto tuple_build_exception_29;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 85;
                tmp_tuple_element_29 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[76]);

                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;

                    goto tuple_build_exception_29;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            PyList_SET_ITEM(tmp_assign_source_14, 28, tmp_list_element_1);
            tmp_tuple_element_30 = mod_consts[77];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_30;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_30);
                tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_30 == NULL)) {
                    tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;

                    goto tuple_build_exception_30;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 86;
                tmp_tuple_element_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[78]);

                if (tmp_tuple_element_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;

                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            PyList_SET_ITEM(tmp_assign_source_14, 29, tmp_list_element_1);
            tmp_tuple_element_31 = mod_consts[79];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_31;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_31);
                tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_31 == NULL)) {
                    tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;

                    goto tuple_build_exception_31;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 87;
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[80]);

                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;

                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            PyList_SET_ITEM(tmp_assign_source_14, 30, tmp_list_element_1);
            tmp_tuple_element_32 = mod_consts[81];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_32;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_32);
                tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_32 == NULL)) {
                    tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;

                    goto tuple_build_exception_32;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 88;
                tmp_tuple_element_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[82]);

                if (tmp_tuple_element_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;

                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            PyList_SET_ITEM(tmp_assign_source_14, 31, tmp_list_element_1);
            tmp_tuple_element_33 = mod_consts[83];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_33;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_33);
                tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_33 == NULL)) {
                    tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;

                    goto tuple_build_exception_33;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 89;
                tmp_tuple_element_33 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[84]);

                if (tmp_tuple_element_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;

                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_33);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            PyList_SET_ITEM(tmp_assign_source_14, 32, tmp_list_element_1);
            tmp_tuple_element_34 = mod_consts[85];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_34;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_34);
                tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_34 == NULL)) {
                    tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;

                    goto tuple_build_exception_34;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 90;
                tmp_tuple_element_34 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[86]);

                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;

                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            PyList_SET_ITEM(tmp_assign_source_14, 33, tmp_list_element_1);
            tmp_tuple_element_35 = mod_consts[87];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_35;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_35);
                tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_35 == NULL)) {
                    tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;

                    goto tuple_build_exception_35;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 91;
                tmp_tuple_element_35 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[88]);

                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;

                    goto tuple_build_exception_35;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_35);
            }
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            PyList_SET_ITEM(tmp_assign_source_14, 34, tmp_list_element_1);
            tmp_tuple_element_36 = mod_consts[89];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_36;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_36);
                tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_36 == NULL)) {
                    tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;

                    goto tuple_build_exception_36;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 92;
                tmp_tuple_element_36 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_36, mod_consts[90]);

                if (tmp_tuple_element_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;

                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_36);
            }
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            PyList_SET_ITEM(tmp_assign_source_14, 35, tmp_list_element_1);
            tmp_tuple_element_37 = mod_consts[91];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_37;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_37);
                tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_37 == NULL)) {
                    tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;

                    goto tuple_build_exception_37;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 93;
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_37, mod_consts[92]);

                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;

                    goto tuple_build_exception_37;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            PyList_SET_ITEM(tmp_assign_source_14, 36, tmp_list_element_1);
            tmp_tuple_element_38 = mod_consts[93];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_38;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_38);
                tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_38 == NULL)) {
                    tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_38;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 94;
                tmp_tuple_element_38 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_38, mod_consts[94]);

                if (tmp_tuple_element_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_38;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_38);
            }
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyList_SET_ITEM(tmp_assign_source_14, 37, tmp_list_element_1);
            tmp_tuple_element_39 = mod_consts[95];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_39;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_39);
                tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_39 == NULL)) {
                    tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_39;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 95;
                tmp_tuple_element_39 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[96]);

                if (tmp_tuple_element_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyList_SET_ITEM(tmp_assign_source_14, 38, tmp_list_element_1);
            tmp_tuple_element_40 = mod_consts[97];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_40;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_40);
                tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_40 == NULL)) {
                    tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_40;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 96;
                tmp_tuple_element_40 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_40, mod_consts[98]);

                if (tmp_tuple_element_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_40;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyList_SET_ITEM(tmp_assign_source_14, 39, tmp_list_element_1);
            tmp_tuple_element_41 = mod_consts[99];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_41;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_41);
                tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_41 == NULL)) {
                    tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;

                    goto tuple_build_exception_41;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 97;
                tmp_tuple_element_41 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[100]);

                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;

                    goto tuple_build_exception_41;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            PyList_SET_ITEM(tmp_assign_source_14, 40, tmp_list_element_1);
            tmp_tuple_element_42 = mod_consts[101];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_42;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_42);
                tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_42 == NULL)) {
                    tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;

                    goto tuple_build_exception_42;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 98;
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[102]);

                if (tmp_tuple_element_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;

                    goto tuple_build_exception_42;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            PyList_SET_ITEM(tmp_assign_source_14, 41, tmp_list_element_1);
            tmp_tuple_element_43 = mod_consts[103];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_43;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_43);
                tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_43 == NULL)) {
                    tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;

                    goto tuple_build_exception_43;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 99;
                tmp_tuple_element_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[104]);

                if (tmp_tuple_element_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;

                    goto tuple_build_exception_43;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_43);
            }
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            PyList_SET_ITEM(tmp_assign_source_14, 42, tmp_list_element_1);
            tmp_tuple_element_44 = mod_consts[105];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_44;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_44);
                tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_44 == NULL)) {
                    tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto tuple_build_exception_44;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 100;
                tmp_tuple_element_44 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_44, mod_consts[106]);

                if (tmp_tuple_element_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto tuple_build_exception_44;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_44);
            }
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            PyList_SET_ITEM(tmp_assign_source_14, 43, tmp_list_element_1);
            tmp_tuple_element_45 = mod_consts[107];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_45;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_45);
                tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_45 == NULL)) {
                    tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;

                    goto tuple_build_exception_45;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 101;
                tmp_tuple_element_45 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[108]);

                if (tmp_tuple_element_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;

                    goto tuple_build_exception_45;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_45);
            }
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            PyList_SET_ITEM(tmp_assign_source_14, 44, tmp_list_element_1);
            tmp_tuple_element_46 = mod_consts[109];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_46;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_46);
                tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_46 == NULL)) {
                    tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 102;

                    goto tuple_build_exception_46;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 102;
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_46, mod_consts[110]);

                if (tmp_tuple_element_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 102;

                    goto tuple_build_exception_46;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_46);
            }
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            PyList_SET_ITEM(tmp_assign_source_14, 45, tmp_list_element_1);
            tmp_tuple_element_47 = mod_consts[111];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_47;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_47);
                tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_47 == NULL)) {
                    tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_47;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 103;
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_47, mod_consts[112]);

                if (tmp_tuple_element_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_47;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_47);
            }
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyList_SET_ITEM(tmp_assign_source_14, 46, tmp_list_element_1);
            tmp_tuple_element_48 = mod_consts[113];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_48;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_48);
                tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_48 == NULL)) {
                    tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;

                    goto tuple_build_exception_48;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 104;
                tmp_tuple_element_48 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_48, mod_consts[114]);

                if (tmp_tuple_element_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;

                    goto tuple_build_exception_48;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_48);
            }
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            PyList_SET_ITEM(tmp_assign_source_14, 47, tmp_list_element_1);
            tmp_tuple_element_49 = mod_consts[115];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_49;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_49);
                tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_49 == NULL)) {
                    tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;

                    goto tuple_build_exception_49;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 105;
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[116]);

                if (tmp_tuple_element_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;

                    goto tuple_build_exception_49;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            PyList_SET_ITEM(tmp_assign_source_14, 48, tmp_list_element_1);
            tmp_tuple_element_50 = mod_consts[117];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_50;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_50);
                tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_50 == NULL)) {
                    tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;

                    goto tuple_build_exception_50;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 106;
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_50, mod_consts[118]);

                if (tmp_tuple_element_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;

                    goto tuple_build_exception_50;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            PyList_SET_ITEM(tmp_assign_source_14, 49, tmp_list_element_1);
            tmp_tuple_element_51 = mod_consts[119];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_51;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_51);
                tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_51 == NULL)) {
                    tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;

                    goto tuple_build_exception_51;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 107;
                tmp_tuple_element_51 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_51, mod_consts[120]);

                if (tmp_tuple_element_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;

                    goto tuple_build_exception_51;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_51);
            }
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            PyList_SET_ITEM(tmp_assign_source_14, 50, tmp_list_element_1);
            tmp_tuple_element_52 = mod_consts[121];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_52;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_52);
                tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_52 == NULL)) {
                    tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_52;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 108;
                tmp_tuple_element_52 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_52, mod_consts[122]);

                if (tmp_tuple_element_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_52;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_52);
            }
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            PyList_SET_ITEM(tmp_assign_source_14, 51, tmp_list_element_1);
            tmp_tuple_element_53 = mod_consts[123];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_53;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_53);
                tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_53 == NULL)) {
                    tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;

                    goto tuple_build_exception_53;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 109;
                tmp_tuple_element_53 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_53, mod_consts[124]);

                if (tmp_tuple_element_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;

                    goto tuple_build_exception_53;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_53);
            }
            goto tuple_build_noexception_53;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_53:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_53:;
            PyList_SET_ITEM(tmp_assign_source_14, 52, tmp_list_element_1);
            tmp_tuple_element_54 = mod_consts[125];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_54;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_54);
                tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_54 == NULL)) {
                    tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto tuple_build_exception_54;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 110;
                tmp_tuple_element_54 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_54, mod_consts[126]);

                if (tmp_tuple_element_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;

                    goto tuple_build_exception_54;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_54);
            }
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            PyList_SET_ITEM(tmp_assign_source_14, 53, tmp_list_element_1);
            tmp_tuple_element_55 = mod_consts[127];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_55;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_55);
                tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_55 == NULL)) {
                    tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;

                    goto tuple_build_exception_55;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 111;
                tmp_tuple_element_55 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[128]);

                if (tmp_tuple_element_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;

                    goto tuple_build_exception_55;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_55);
            }
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            PyList_SET_ITEM(tmp_assign_source_14, 54, tmp_list_element_1);
            tmp_tuple_element_56 = mod_consts[129];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_56;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_56);
                tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_56 == NULL)) {
                    tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;

                    goto tuple_build_exception_56;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 112;
                tmp_tuple_element_56 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_56, mod_consts[130]);

                if (tmp_tuple_element_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;

                    goto tuple_build_exception_56;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_56);
            }
            goto tuple_build_noexception_56;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_56:;
            PyList_SET_ITEM(tmp_assign_source_14, 55, tmp_list_element_1);
            tmp_tuple_element_57 = mod_consts[131];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_57;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_57);
                tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_57 == NULL)) {
                    tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;

                    goto tuple_build_exception_57;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 113;
                tmp_tuple_element_57 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[132]);

                if (tmp_tuple_element_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;

                    goto tuple_build_exception_57;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_57);
            }
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            PyList_SET_ITEM(tmp_assign_source_14, 56, tmp_list_element_1);
            tmp_tuple_element_58 = mod_consts[133];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_58;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_58);
                tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_58 == NULL)) {
                    tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;

                    goto tuple_build_exception_58;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 114;
                tmp_tuple_element_58 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_58, mod_consts[134]);

                if (tmp_tuple_element_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;

                    goto tuple_build_exception_58;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_58);
            }
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            PyList_SET_ITEM(tmp_assign_source_14, 57, tmp_list_element_1);
            tmp_tuple_element_59 = mod_consts[135];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_59;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_59);
                tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_59 == NULL)) {
                    tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;

                    goto tuple_build_exception_59;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 115;
                tmp_tuple_element_59 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[136]);

                if (tmp_tuple_element_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;

                    goto tuple_build_exception_59;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_59);
            }
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            PyList_SET_ITEM(tmp_assign_source_14, 58, tmp_list_element_1);
            tmp_tuple_element_60 = mod_consts[137];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_60;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_60);
                tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_60 == NULL)) {
                    tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;

                    goto tuple_build_exception_60;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 116;
                tmp_tuple_element_60 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_60, mod_consts[138]);

                if (tmp_tuple_element_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;

                    goto tuple_build_exception_60;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_60);
            }
            goto tuple_build_noexception_60;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_60:;
            PyList_SET_ITEM(tmp_assign_source_14, 59, tmp_list_element_1);
            tmp_tuple_element_61 = mod_consts[139];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_61;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_61);
                tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_61 == NULL)) {
                    tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;

                    goto tuple_build_exception_61;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 117;
                tmp_tuple_element_61 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_61, mod_consts[140]);

                if (tmp_tuple_element_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;

                    goto tuple_build_exception_61;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_61);
            }
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            PyList_SET_ITEM(tmp_assign_source_14, 60, tmp_list_element_1);
            tmp_tuple_element_62 = mod_consts[141];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_62;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_62);
                tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_62 == NULL)) {
                    tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;

                    goto tuple_build_exception_62;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 118;
                tmp_tuple_element_62 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_62, mod_consts[142]);

                if (tmp_tuple_element_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;

                    goto tuple_build_exception_62;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_62);
            }
            goto tuple_build_noexception_62;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_62:;
            PyList_SET_ITEM(tmp_assign_source_14, 61, tmp_list_element_1);
            tmp_tuple_element_63 = mod_consts[143];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_63;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_63);
                tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_63 == NULL)) {
                    tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_63 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 119;

                    goto tuple_build_exception_63;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 119;
                tmp_tuple_element_63 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_63, mod_consts[144]);

                if (tmp_tuple_element_63 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 119;

                    goto tuple_build_exception_63;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_63);
            }
            goto tuple_build_noexception_63;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_63:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_63:;
            PyList_SET_ITEM(tmp_assign_source_14, 62, tmp_list_element_1);
            tmp_tuple_element_64 = mod_consts[145];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_64;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_64);
                tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_64 == NULL)) {
                    tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 120;

                    goto tuple_build_exception_64;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 120;
                tmp_tuple_element_64 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_64, mod_consts[146]);

                if (tmp_tuple_element_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 120;

                    goto tuple_build_exception_64;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_64);
            }
            goto tuple_build_noexception_64;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_64:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_64:;
            PyList_SET_ITEM(tmp_assign_source_14, 63, tmp_list_element_1);
            tmp_tuple_element_65 = mod_consts[147];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_65;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_65);
                tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_65 == NULL)) {
                    tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 121;

                    goto tuple_build_exception_65;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 121;
                tmp_tuple_element_65 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_65, mod_consts[148]);

                if (tmp_tuple_element_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 121;

                    goto tuple_build_exception_65;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_65);
            }
            goto tuple_build_noexception_65;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_65:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_65:;
            PyList_SET_ITEM(tmp_assign_source_14, 64, tmp_list_element_1);
            tmp_tuple_element_66 = mod_consts[149];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_66;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_66);
                tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_66 == NULL)) {
                    tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;

                    goto tuple_build_exception_66;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 122;
                tmp_tuple_element_66 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_66, mod_consts[150]);

                if (tmp_tuple_element_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;

                    goto tuple_build_exception_66;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_66);
            }
            goto tuple_build_noexception_66;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_66:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_66:;
            PyList_SET_ITEM(tmp_assign_source_14, 65, tmp_list_element_1);
            tmp_tuple_element_67 = mod_consts[151];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_67;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_67);
                tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_67 == NULL)) {
                    tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;

                    goto tuple_build_exception_67;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 123;
                tmp_tuple_element_67 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_67, mod_consts[152]);

                if (tmp_tuple_element_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;

                    goto tuple_build_exception_67;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_67);
            }
            goto tuple_build_noexception_67;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_67:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_67:;
            PyList_SET_ITEM(tmp_assign_source_14, 66, tmp_list_element_1);
            tmp_tuple_element_68 = mod_consts[153];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_68;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_68);
                tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_68 == NULL)) {
                    tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_68 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;

                    goto tuple_build_exception_68;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 124;
                tmp_tuple_element_68 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_68, mod_consts[154]);

                if (tmp_tuple_element_68 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;

                    goto tuple_build_exception_68;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_68);
            }
            goto tuple_build_noexception_68;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_68:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_68:;
            PyList_SET_ITEM(tmp_assign_source_14, 67, tmp_list_element_1);
            tmp_tuple_element_69 = mod_consts[155];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_69;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_69);
                tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_69 == NULL)) {
                    tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_69 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;

                    goto tuple_build_exception_69;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 125;
                tmp_tuple_element_69 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_69, mod_consts[156]);

                if (tmp_tuple_element_69 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;

                    goto tuple_build_exception_69;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_69);
            }
            goto tuple_build_noexception_69;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_69:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_69:;
            PyList_SET_ITEM(tmp_assign_source_14, 68, tmp_list_element_1);
            tmp_tuple_element_70 = mod_consts[157];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_70;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_70);
                tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_70 == NULL)) {
                    tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;

                    goto tuple_build_exception_70;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 126;
                tmp_tuple_element_70 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_70, mod_consts[158]);

                if (tmp_tuple_element_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;

                    goto tuple_build_exception_70;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_70);
            }
            goto tuple_build_noexception_70;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_70:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_70:;
            PyList_SET_ITEM(tmp_assign_source_14, 69, tmp_list_element_1);
            tmp_tuple_element_71 = mod_consts[159];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_71;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_71);
                tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_71 == NULL)) {
                    tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;

                    goto tuple_build_exception_71;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 127;
                tmp_tuple_element_71 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_71, mod_consts[160]);

                if (tmp_tuple_element_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;

                    goto tuple_build_exception_71;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_71);
            }
            goto tuple_build_noexception_71;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_71:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_71:;
            PyList_SET_ITEM(tmp_assign_source_14, 70, tmp_list_element_1);
            tmp_tuple_element_72 = mod_consts[161];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_72;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_72);
                tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_72 == NULL)) {
                    tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_72 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 128;

                    goto tuple_build_exception_72;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 128;
                tmp_tuple_element_72 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_72, mod_consts[162]);

                if (tmp_tuple_element_72 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 128;

                    goto tuple_build_exception_72;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_72);
            }
            goto tuple_build_noexception_72;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_72:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_72:;
            PyList_SET_ITEM(tmp_assign_source_14, 71, tmp_list_element_1);
            tmp_tuple_element_73 = mod_consts[163];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_73;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_73);
                tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_73 == NULL)) {
                    tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_73 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 129;

                    goto tuple_build_exception_73;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 129;
                tmp_tuple_element_73 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_73, mod_consts[164]);

                if (tmp_tuple_element_73 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 129;

                    goto tuple_build_exception_73;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_73);
            }
            goto tuple_build_noexception_73;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_73:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_73:;
            PyList_SET_ITEM(tmp_assign_source_14, 72, tmp_list_element_1);
            tmp_tuple_element_74 = mod_consts[165];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_74;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_74);
                tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_74 == NULL)) {
                    tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_74 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;

                    goto tuple_build_exception_74;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 130;
                tmp_tuple_element_74 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_74, mod_consts[166]);

                if (tmp_tuple_element_74 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;

                    goto tuple_build_exception_74;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_74);
            }
            goto tuple_build_noexception_74;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_74:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_74:;
            PyList_SET_ITEM(tmp_assign_source_14, 73, tmp_list_element_1);
            tmp_tuple_element_75 = mod_consts[167];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_75;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_75);
                tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_75 == NULL)) {
                    tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_75 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;

                    goto tuple_build_exception_75;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 131;
                tmp_tuple_element_75 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_75, mod_consts[168]);

                if (tmp_tuple_element_75 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;

                    goto tuple_build_exception_75;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_75);
            }
            goto tuple_build_noexception_75;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_75:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_75:;
            PyList_SET_ITEM(tmp_assign_source_14, 74, tmp_list_element_1);
            tmp_tuple_element_76 = mod_consts[169];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_76;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_76);
                tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_76 == NULL)) {
                    tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_76 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;

                    goto tuple_build_exception_76;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 132;
                tmp_tuple_element_76 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_76, mod_consts[170]);

                if (tmp_tuple_element_76 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;

                    goto tuple_build_exception_76;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_76);
            }
            goto tuple_build_noexception_76;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_76:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_76:;
            PyList_SET_ITEM(tmp_assign_source_14, 75, tmp_list_element_1);
            tmp_tuple_element_77 = mod_consts[171];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_77;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_77);
                tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_77 == NULL)) {
                    tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_77 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 133;

                    goto tuple_build_exception_77;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 133;
                tmp_tuple_element_77 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_77, mod_consts[172]);

                if (tmp_tuple_element_77 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 133;

                    goto tuple_build_exception_77;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_77);
            }
            goto tuple_build_noexception_77;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_77:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_77:;
            PyList_SET_ITEM(tmp_assign_source_14, 76, tmp_list_element_1);
            tmp_tuple_element_78 = mod_consts[173];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_78;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_78);
                tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_78 == NULL)) {
                    tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;

                    goto tuple_build_exception_78;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 134;
                tmp_tuple_element_78 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_78, mod_consts[174]);

                if (tmp_tuple_element_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;

                    goto tuple_build_exception_78;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_78);
            }
            goto tuple_build_noexception_78;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_78:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_78:;
            PyList_SET_ITEM(tmp_assign_source_14, 77, tmp_list_element_1);
            tmp_tuple_element_79 = mod_consts[175];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_79;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_79);
                tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_79 == NULL)) {
                    tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_79 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;

                    goto tuple_build_exception_79;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 135;
                tmp_tuple_element_79 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_79, mod_consts[176]);

                if (tmp_tuple_element_79 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;

                    goto tuple_build_exception_79;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_79);
            }
            goto tuple_build_noexception_79;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_79:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_79:;
            PyList_SET_ITEM(tmp_assign_source_14, 78, tmp_list_element_1);
            tmp_tuple_element_80 = mod_consts[177];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_80;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_80);
                tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_80 == NULL)) {
                    tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_80 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;

                    goto tuple_build_exception_80;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 136;
                tmp_tuple_element_80 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_80, mod_consts[178]);

                if (tmp_tuple_element_80 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;

                    goto tuple_build_exception_80;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_80);
            }
            goto tuple_build_noexception_80;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_80:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_80:;
            PyList_SET_ITEM(tmp_assign_source_14, 79, tmp_list_element_1);
            tmp_tuple_element_81 = mod_consts[179];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_81;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_81);
                tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_81 == NULL)) {
                    tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;

                    goto tuple_build_exception_81;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 137;
                tmp_tuple_element_81 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_81, mod_consts[180]);

                if (tmp_tuple_element_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;

                    goto tuple_build_exception_81;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_81);
            }
            goto tuple_build_noexception_81;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_81:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_81:;
            PyList_SET_ITEM(tmp_assign_source_14, 80, tmp_list_element_1);
            tmp_tuple_element_82 = mod_consts[181];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_82;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_82);
                tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_82 == NULL)) {
                    tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_82 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;

                    goto tuple_build_exception_82;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 138;
                tmp_tuple_element_82 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_82, mod_consts[182]);

                if (tmp_tuple_element_82 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;

                    goto tuple_build_exception_82;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_82);
            }
            goto tuple_build_noexception_82;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_82:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_82:;
            PyList_SET_ITEM(tmp_assign_source_14, 81, tmp_list_element_1);
            tmp_tuple_element_83 = mod_consts[183];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_83;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_83);
                tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_83 == NULL)) {
                    tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;

                    goto tuple_build_exception_83;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 139;
                tmp_tuple_element_83 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_83, mod_consts[184]);

                if (tmp_tuple_element_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;

                    goto tuple_build_exception_83;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_83);
            }
            goto tuple_build_noexception_83;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_83:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_83:;
            PyList_SET_ITEM(tmp_assign_source_14, 82, tmp_list_element_1);
            tmp_tuple_element_84 = mod_consts[185];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_84;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_84);
                tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_84 == NULL)) {
                    tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_84 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;

                    goto tuple_build_exception_84;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 140;
                tmp_tuple_element_84 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_84, mod_consts[186]);

                if (tmp_tuple_element_84 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;

                    goto tuple_build_exception_84;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_84);
            }
            goto tuple_build_noexception_84;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_84:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_84:;
            PyList_SET_ITEM(tmp_assign_source_14, 83, tmp_list_element_1);
            tmp_tuple_element_85 = mod_consts[187];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_85;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_85);
                tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_85 == NULL)) {
                    tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;

                    goto tuple_build_exception_85;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 141;
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_85, mod_consts[188]);

                if (tmp_tuple_element_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;

                    goto tuple_build_exception_85;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_85);
            }
            goto tuple_build_noexception_85;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_85:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_85:;
            PyList_SET_ITEM(tmp_assign_source_14, 84, tmp_list_element_1);
            tmp_tuple_element_86 = mod_consts[189];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_86;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_86);
                tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_86 == NULL)) {
                    tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_86 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_86;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 142;
                tmp_tuple_element_86 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_86, mod_consts[190]);

                if (tmp_tuple_element_86 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_86;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_86);
            }
            goto tuple_build_noexception_86;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_86:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_86:;
            PyList_SET_ITEM(tmp_assign_source_14, 85, tmp_list_element_1);
            tmp_tuple_element_87 = mod_consts[191];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_87;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_87);
                tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_87 == NULL)) {
                    tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_87 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;

                    goto tuple_build_exception_87;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 143;
                tmp_tuple_element_87 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_87, mod_consts[192]);

                if (tmp_tuple_element_87 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;

                    goto tuple_build_exception_87;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_87);
            }
            goto tuple_build_noexception_87;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_87:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_87:;
            PyList_SET_ITEM(tmp_assign_source_14, 86, tmp_list_element_1);
            tmp_tuple_element_88 = mod_consts[193];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_88;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_88);
                tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_88 == NULL)) {
                    tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_88 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_88;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 144;
                tmp_tuple_element_88 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_88, mod_consts[194]);

                if (tmp_tuple_element_88 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_88;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_88);
            }
            goto tuple_build_noexception_88;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_88:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_88:;
            PyList_SET_ITEM(tmp_assign_source_14, 87, tmp_list_element_1);
            tmp_tuple_element_89 = mod_consts[195];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_89;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_89);
                tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_89 == NULL)) {
                    tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_89 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto tuple_build_exception_89;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 145;
                tmp_tuple_element_89 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_89, mod_consts[196]);

                if (tmp_tuple_element_89 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto tuple_build_exception_89;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_89);
            }
            goto tuple_build_noexception_89;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_89:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_89:;
            PyList_SET_ITEM(tmp_assign_source_14, 88, tmp_list_element_1);
            tmp_tuple_element_90 = mod_consts[197];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_90;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_90);
                tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_90 == NULL)) {
                    tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;

                    goto tuple_build_exception_90;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 146;
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_90, mod_consts[198]);

                if (tmp_tuple_element_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;

                    goto tuple_build_exception_90;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_90);
            }
            goto tuple_build_noexception_90;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_90:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_90:;
            PyList_SET_ITEM(tmp_assign_source_14, 89, tmp_list_element_1);
            tmp_tuple_element_91 = mod_consts[199];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_91;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_91);
                tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_91 == NULL)) {
                    tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;

                    goto tuple_build_exception_91;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 147;
                tmp_tuple_element_91 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_91, mod_consts[200]);

                if (tmp_tuple_element_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;

                    goto tuple_build_exception_91;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_91);
            }
            goto tuple_build_noexception_91;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_91:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_91:;
            PyList_SET_ITEM(tmp_assign_source_14, 90, tmp_list_element_1);
            tmp_tuple_element_92 = mod_consts[201];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_92;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_92);
                tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_92 == NULL)) {
                    tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;

                    goto tuple_build_exception_92;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 148;
                tmp_tuple_element_92 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_92, mod_consts[202]);

                if (tmp_tuple_element_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;

                    goto tuple_build_exception_92;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_92);
            }
            goto tuple_build_noexception_92;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_92:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_92:;
            PyList_SET_ITEM(tmp_assign_source_14, 91, tmp_list_element_1);
            tmp_tuple_element_93 = mod_consts[203];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_93;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_93);
                tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_93 == NULL)) {
                    tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_93 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;

                    goto tuple_build_exception_93;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 149;
                tmp_tuple_element_93 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_93, mod_consts[204]);

                if (tmp_tuple_element_93 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;

                    goto tuple_build_exception_93;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_93);
            }
            goto tuple_build_noexception_93;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_93:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_93:;
            PyList_SET_ITEM(tmp_assign_source_14, 92, tmp_list_element_1);
            tmp_tuple_element_94 = mod_consts[205];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_94;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_94);
                tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_94 == NULL)) {
                    tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_94 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;

                    goto tuple_build_exception_94;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 150;
                tmp_tuple_element_94 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_94, mod_consts[206]);

                if (tmp_tuple_element_94 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;

                    goto tuple_build_exception_94;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_94);
            }
            goto tuple_build_noexception_94;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_94:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_94:;
            PyList_SET_ITEM(tmp_assign_source_14, 93, tmp_list_element_1);
            tmp_tuple_element_95 = mod_consts[207];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_95;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_95);
                tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_95 == NULL)) {
                    tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_95 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;

                    goto tuple_build_exception_95;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 151;
                tmp_tuple_element_95 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_95, mod_consts[208]);

                if (tmp_tuple_element_95 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;

                    goto tuple_build_exception_95;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_95);
            }
            goto tuple_build_noexception_95;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_95:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_95:;
            PyList_SET_ITEM(tmp_assign_source_14, 94, tmp_list_element_1);
            tmp_tuple_element_96 = mod_consts[209];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_96;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_96);
                tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_96 == NULL)) {
                    tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_96 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;

                    goto tuple_build_exception_96;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 152;
                tmp_tuple_element_96 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_96, mod_consts[210]);

                if (tmp_tuple_element_96 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;

                    goto tuple_build_exception_96;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_96);
            }
            goto tuple_build_noexception_96;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_96:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_96:;
            PyList_SET_ITEM(tmp_assign_source_14, 95, tmp_list_element_1);
            tmp_tuple_element_97 = mod_consts[211];
            tmp_list_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_97;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_97);
                tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_called_value_97 == NULL)) {
                    tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                if (tmp_called_value_97 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;

                    goto tuple_build_exception_97;
                }
                frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame.f_lineno = 153;
                tmp_tuple_element_97 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_97, mod_consts[212]);

                if (tmp_tuple_element_97 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;

                    goto tuple_build_exception_97;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_97);
            }
            goto tuple_build_noexception_97;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_97:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_97:;
            PyList_SET_ITEM(tmp_assign_source_14, 96, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_14);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY(mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = Py_True;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = Py_True;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_26 == NULL)) {
            tmp_assign_source_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_26);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc9d03c60fbe73bd2402ee3d5b5e8a65);
#endif
    popFrameStack();

    assertFrameObject(frame_bc9d03c60fbe73bd2402ee3d5b5e8a65);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc9d03c60fbe73bd2402ee3d5b5e8a65);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc9d03c60fbe73bd2402ee3d5b5e8a65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc9d03c60fbe73bd2402ee3d5b5e8a65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc9d03c60fbe73bd2402ee3d5b5e8a65, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = Py_True;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = LIST_COPY(mod_consts[271]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = LIST_COPY(mod_consts[297]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = LIST_COPY(mod_consts[299]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = LIST_COPY(mod_consts[301]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[305];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[326];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = Py_True;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[332];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[336];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = DEEP_COPY_DICT(mod_consts[341]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[344];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = LIST_COPY(mod_consts[349]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[356];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = LIST_COPY(mod_consts[358]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[332];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[374];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[378];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[392];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = LIST_COPY(mod_consts[394]);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = Py_True;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = Py_None;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = Py_False;
        UPDATE_STRING_DICT0(moduledict_django$conf$global_settings, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_149);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("django.conf.global_settings", false);

    return module_django$conf$global_settings;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_django$conf$global_settings, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("django$conf$global_settings", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
