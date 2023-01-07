#include <Python.h>

static PyObject* identity(PyObject* self, PyObject* args) {
    int x;
    if (!PyArg_ParseTuple(args, "i", &x)) {
        return NULL;
    }
    return Py_BuildValue("i", x);
}

static PyMethodDef IdentityMethods[] = {
    {"identity", identity, METH_VARARGS, "Return the input number."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef identitymodule = {
    PyModuleDef_HEAD_INIT,
    "identity",
    "A Python module that returns the input number.",
    -1,
    IdentityMethods
};

PyMODINIT_FUNC PyInit_identity(void) {
    return PyModule_Create(&identitymodule);
}