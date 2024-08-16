#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include <stdio.h>
#include <stdlib.h>

/**
 * cufo parse *.txt
 */
static PyObject* ufo_text(PyObject *self, PyObject *args) {
    const char *filename;
    if (!PyArg_ParseTuple(args, "s", &filename)) return NULL;

    printf("%s\n", filename);
    Py_RETURN_NONE;
}

/**
 *  ufo method table
 */
static PyMethodDef UFOMethods[] = {
    {"text", ufo_text, METH_VARARGS, "parse *.txt file into ufo text object"},
    {NULL, NULL, 0, NULL}
};

/**
 *  ufo Module Definition struct
 */
static struct PyModuleDef ufomodule = {
    PyModuleDef_HEAD_INIT,
    "ufo",
    NULL,   // [TODO] Module Documentation,
    -1,
    UFOMethods
};

PyMODINIT_FUNC
PyInit_ufo(void) {
    return PyModule_Create(&ufomodule);
}