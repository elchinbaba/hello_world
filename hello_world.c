#include <Python.h>

/* Declare the function that will be called from Python */
static PyObject* hello_world(PyObject* self, PyObject* args) {
  /* Print the message to stdout */
  printf("Hello World from C\n");
  
  /* Return None to indicate that the function has completed successfully */
  Py_RETURN_NONE;
}

/* Define the methods that will be available in the module */
static PyMethodDef HelloWorldMethods[] = {
  {"hello_world", hello_world, METH_VARARGS, "Prints 'Hello World from C'"},
  {NULL, NULL, 0, NULL}
};

/* Define the module and its methods */
static struct PyModuleDef hello_world_module = {
  PyModuleDef_HEAD_INIT,
  "hello_world",
  "A Python module that prints 'Hello World from C'",
  -1,
  HelloWorldMethods
};

/* Initialize the module */
PyMODINIT_FUNC PyInit_hello_world(void) {
  return PyModule_Create(&hello_world_module);
}