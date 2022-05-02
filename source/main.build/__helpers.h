#ifndef __NUITKA_CALLS_H__
#define __NUITKA_CALLS_H__

extern PyObject *CALL_FUNCTION_WITH_ARGS11(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS12(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS13(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS16(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS20(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS23(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS18_KWSPLIT(PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names);
extern PyObject *CALL_METHOD_WITH_ARGS13(PyObject *source, PyObject *attr_name, PyObject *const *args);
#endif
