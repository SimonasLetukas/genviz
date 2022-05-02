/* Generated code for Python module 'OpenGL.raw.GL.ARB.internalformat_query2'
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

/* The "module_OpenGL$raw$GL$ARB$internalformat_query2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GL$ARB$internalformat_query2;
PyDictObject *moduledict_OpenGL$raw$GL$ARB$internalformat_query2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[312];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[312];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("OpenGL.raw.GL.ARB.internalformat_query2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 312; i++) {
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
void checkModuleConstants_OpenGL$raw$GL$ARB$internalformat_query2(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 312; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_75dd99819d7a986a135c9efe61e51697;
static PyCodeObject *codeobj_1377a9aee85b8f6a52e02590207dbef4;
static PyCodeObject *codeobj_f9a1016c92ba03d9b0edefc2f5c513a9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[307]); CHECK_OBJECT(module_filename_obj);
    codeobj_75dd99819d7a986a135c9efe61e51697 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[308], NULL, NULL, 0, 0, 0);
    codeobj_1377a9aee85b8f6a52e02590207dbef4 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[309], NULL, 1, 0, 0);
    codeobj_f9a1016c92ba03d9b0edefc2f5c513a9 = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[306], mod_consts[310], NULL, 5, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$internalformat_query2$$$function__1__f();


static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$internalformat_query2$$$function__2_glGetInternalformati64v();


// The module function definitions.
static PyObject *impl_OpenGL$raw$GL$ARB$internalformat_query2$$$function__1__f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function = python_pars[0];
    struct Nuitka_FrameObject *frame_1377a9aee85b8f6a52e02590207dbef4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1377a9aee85b8f6a52e02590207dbef4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1377a9aee85b8f6a52e02590207dbef4)) {
        Py_XDECREF(cache_frame_1377a9aee85b8f6a52e02590207dbef4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1377a9aee85b8f6a52e02590207dbef4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1377a9aee85b8f6a52e02590207dbef4 = MAKE_FUNCTION_FRAME(codeobj_1377a9aee85b8f6a52e02590207dbef4, module_OpenGL$raw$GL$ARB$internalformat_query2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1377a9aee85b8f6a52e02590207dbef4->m_type_description == NULL);
    frame_1377a9aee85b8f6a52e02590207dbef4 = cache_frame_1377a9aee85b8f6a52e02590207dbef4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1377a9aee85b8f6a52e02590207dbef4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1377a9aee85b8f6a52e02590207dbef4) == 2); // Frame stack

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[0]);

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[5]);

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
        frame_1377a9aee85b8f6a52e02590207dbef4->m_frame.f_lineno = 13;
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
    RESTORE_FRAME_EXCEPTION(frame_1377a9aee85b8f6a52e02590207dbef4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1377a9aee85b8f6a52e02590207dbef4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1377a9aee85b8f6a52e02590207dbef4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1377a9aee85b8f6a52e02590207dbef4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1377a9aee85b8f6a52e02590207dbef4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1377a9aee85b8f6a52e02590207dbef4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1377a9aee85b8f6a52e02590207dbef4,
        type_description_1,
        par_function
    );


    // Release cached frame if used for exception.
    if (frame_1377a9aee85b8f6a52e02590207dbef4 == cache_frame_1377a9aee85b8f6a52e02590207dbef4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1377a9aee85b8f6a52e02590207dbef4);
        cache_frame_1377a9aee85b8f6a52e02590207dbef4 = NULL;
    }

    assertFrameObject(frame_1377a9aee85b8f6a52e02590207dbef4);

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



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$internalformat_query2$$$function__1__f() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenGL$raw$GL$ARB$internalformat_query2$$$function__1__f,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1377a9aee85b8f6a52e02590207dbef4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$internalformat_query2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenGL$raw$GL$ARB$internalformat_query2$$$function__2_glGetInternalformati64v() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[306],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f9a1016c92ba03d9b0edefc2f5c513a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_OpenGL$raw$GL$ARB$internalformat_query2,
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

function_impl_code functable_OpenGL$raw$GL$ARB$internalformat_query2[] = {
    impl_OpenGL$raw$GL$ARB$internalformat_query2$$$function__1__f,
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

    function_impl_code *current = functable_OpenGL$raw$GL$ARB$internalformat_query2;
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

    if (offset > sizeof(functable_OpenGL$raw$GL$ARB$internalformat_query2) || offset < 0) {
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
        functable_OpenGL$raw$GL$ARB$internalformat_query2[offset],
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
        module_OpenGL$raw$GL$ARB$internalformat_query2,
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
PyObject *modulecode_OpenGL$raw$GL$ARB$internalformat_query2(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("OpenGL.raw.GL.ARB.internalformat_query2");

    // Store the module for future use.
    module_OpenGL$raw$GL$ARB$internalformat_query2 = module;

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
        PRINT_STRING("OpenGL.raw.GL.ARB.internalformat_query2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.ARB.internalformat_query2: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("OpenGL.raw.GL.ARB.internalformat_query2: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initOpenGL$raw$GL$ARB$internalformat_query2\n");

    moduledict_OpenGL$raw$GL$ARB$internalformat_query2 = MODULE_DICT(module_OpenGL$raw$GL$ARB$internalformat_query2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[311]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenGL$raw$GL$ARB$internalformat_query2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_OpenGL$raw$GL$ARB$internalformat_query2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_75dd99819d7a986a135c9efe61e51697;
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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_75dd99819d7a986a135c9efe61e51697 = MAKE_MODULE_FRAME(codeobj_75dd99819d7a986a135c9efe61e51697, module_OpenGL$raw$GL$ARB$internalformat_query2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_75dd99819d7a986a135c9efe61e51697);
    assert(Py_REFCNT(frame_75dd99819d7a986a135c9efe61e51697) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[11]);

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
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[17];
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_OpenGL$raw$GL$ARB$internalformat_query2, true, tmp_star_imported_1);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[26];
        tmp_level_value_4 = mod_consts[17];
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[28];
        tmp_level_value_5 = mod_consts[17];
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2,
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
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[31];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_OpenGL$raw$GL$ARB$internalformat_query2;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[17];
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$internalformat_query2$$$function__1__f();

        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 15;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[36]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 16;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[38]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[40]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 19;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[44]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[46]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[48]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 22;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[50]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 23;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[52]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 24;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[54]);

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 25;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[56]);

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 26;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[58]);

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 27;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[60]);

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[62]);

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 29;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[64]);

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 30;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[66]);

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 31;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[68]);

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 32;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[70]);

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 33;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[72]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 34;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[74]);

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 35;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[76]);

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 36;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[78]);

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 37;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[80]);

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 38;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[82]);

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 39;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[84]);

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 40;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[86]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 41;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[88]);

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 42;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[90]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 43;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[92]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 44;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[94]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 45;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[96]);

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 46;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[98]);

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 47;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[100]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 48;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[102]);

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 49;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[104]);

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 50;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[106]);

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 51;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_38, mod_consts[108]);

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 52;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[110]);

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 53;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_40, mod_consts[112]);

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 54;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[114]);

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 55;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[116]);

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 56;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[118]);

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 57;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_44, mod_consts[120]);

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 58;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[122]);

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 59;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_46, mod_consts[124]);

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 60;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_47, mod_consts[126]);

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 61;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[128]);

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 62;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[130]);

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 63;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[132]);

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 64;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[134]);

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_52;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 65;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_52, mod_consts[136]);

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 66;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[138]);

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_54;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 67;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_54, mod_consts[140]);

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_55;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 68;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[142]);

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 69;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_56, mod_consts[144]);

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 70;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_57, mod_consts[146]);

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_58;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 71;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_58, mod_consts[148]);

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 72;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_59, mod_consts[150]);

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 73;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_60, mod_consts[152]);

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_61;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 74;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_61, mod_consts[154]);

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 75;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_62, mod_consts[156]);

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 76;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_63, mod_consts[158]);

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_64;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 77;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_64, mod_consts[160]);

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 78;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_65, mod_consts[162]);

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 79;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_66, mod_consts[164]);

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_67;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 80;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[166]);

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_68;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 81;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_68, mod_consts[168]);

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_69;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 82;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_69, mod_consts[170]);

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_70;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 83;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_70, mod_consts[172]);

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_71;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 84;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[174]);

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_72;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 85;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_72, mod_consts[176]);

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_73;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 86;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_73, mod_consts[178]);

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_74;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 87;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_74, mod_consts[180]);

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_75;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 88;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_75, mod_consts[182]);

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_76;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 89;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_76, mod_consts[184]);

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_77;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 90;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_77, mod_consts[186]);

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_78;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 91;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_78, mod_consts[188]);

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_79;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 92;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[190]);

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_80;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 93;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_80, mod_consts[192]);

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_81;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 94;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_81, mod_consts[194]);

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_82;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 95;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_82, mod_consts[196]);

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_83;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 96;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_83, mod_consts[198]);

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_84;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 97;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_84, mod_consts[200]);

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_85;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 98;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_85, mod_consts[202]);

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_86;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 99;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_86, mod_consts[204]);

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_87;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 100;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_87, mod_consts[206]);

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_88;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 101;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_88, mod_consts[208]);

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_89;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 102;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_89, mod_consts[210]);

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_90;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 103;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_90, mod_consts[212]);

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_91;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 104;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_91, mod_consts[214]);

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_92;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 105;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_92, mod_consts[216]);

        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_93;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 106;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_93, mod_consts[218]);

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_94;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 107;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_94, mod_consts[220]);

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_95;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 108;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_95, mod_consts[222]);

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_96;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 109;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_96, mod_consts[224]);

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_97;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 110;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_97, mod_consts[226]);

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_98;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 111;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_98, mod_consts[228]);

        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_99;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 112;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_99, mod_consts[230]);

        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_100;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 113;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_100, mod_consts[232]);

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_101;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 114;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_101, mod_consts[234]);

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_102;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 115;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_102, mod_consts[236]);

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_103;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 116;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_103, mod_consts[238]);

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_104;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 117;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_104, mod_consts[240]);

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_105;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 118;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_105, mod_consts[242]);

        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_106;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 119;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_106, mod_consts[244]);

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_107;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 120;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_107, mod_consts[246]);

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_108;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 121;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_108, mod_consts[248]);

        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_109;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 122;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_109, mod_consts[250]);

        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_110;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 123;
        tmp_assign_source_122 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_110, mod_consts[252]);

        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_111;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 124;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_111, mod_consts[254]);

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_112;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 125;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_112, mod_consts[256]);

        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_113;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 126;
        tmp_assign_source_125 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_113, mod_consts[258]);

        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_114;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 127;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_114, mod_consts[260]);

        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_115;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 128;
        tmp_assign_source_127 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_115, mod_consts[262]);

        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_116;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 129;
        tmp_assign_source_128 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_116, mod_consts[264]);

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_117;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 130;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_117, mod_consts[266]);

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_118;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 131;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_118, mod_consts[268]);

        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_119;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 132;
        tmp_assign_source_131 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_119, mod_consts[270]);

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_120;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 133;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_120, mod_consts[272]);

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_121;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 134;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_121, mod_consts[274]);

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_122;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 135;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_122, mod_consts[276]);

        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_123;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 136;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_123, mod_consts[278]);

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_124;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 137;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_124, mod_consts[280]);

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_125;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 138;
        tmp_assign_source_137 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_125, mod_consts[282]);

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_126;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 139;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_126, mod_consts[284]);

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_127;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 140;
        tmp_assign_source_139 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_127, mod_consts[286]);

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_value_128;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 141;
        tmp_assign_source_140 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_128, mod_consts[288]);

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_129;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 142;
        tmp_assign_source_141 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_129, mod_consts[290]);

        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_130;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 143;
        tmp_assign_source_142 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_130, mod_consts[292]);

        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_131;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 144;
        tmp_assign_source_143 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_131, mod_consts[294]);

        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_132;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 145;
        tmp_assign_source_144 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_132, mod_consts[296]);

        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_133;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 146;
        tmp_assign_source_145 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_133, mod_consts[298]);

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_134;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 147;
        tmp_assign_source_146 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_134, mod_consts[300]);

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_136;
        PyObject *tmp_called_value_137;
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[302]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[303]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[303]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[303]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[304]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[305]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_called_value_136 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_137, call_args);
        }

        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_8 = MAKE_FUNCTION_OpenGL$raw$GL$ARB$internalformat_query2$$$function__2_glGetInternalformati64v();

        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 149;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_136, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_75dd99819d7a986a135c9efe61e51697->m_frame.f_lineno = 148;
        tmp_assign_source_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_135, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_147);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_75dd99819d7a986a135c9efe61e51697);
#endif
    popFrameStack();

    assertFrameObject(frame_75dd99819d7a986a135c9efe61e51697);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_75dd99819d7a986a135c9efe61e51697);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75dd99819d7a986a135c9efe61e51697, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75dd99819d7a986a135c9efe61e51697->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75dd99819d7a986a135c9efe61e51697, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("OpenGL.raw.GL.ARB.internalformat_query2", false);

    return module_OpenGL$raw$GL$ARB$internalformat_query2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenGL$raw$GL$ARB$internalformat_query2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("OpenGL$raw$GL$ARB$internalformat_query2", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
