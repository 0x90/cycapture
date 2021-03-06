/* Generated by Cython 0.23.4 */

#ifndef __PYX_HAVE__cycapture__libtins___py_exceptions
#define __PYX_HAVE__cycapture__libtins___py_exceptions


#ifndef __PYX_HAVE_API__cycapture__libtins___py_exceptions

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C DL_IMPORT(PyObject) *py_libtins_exception;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_malformed_address;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_malformed_packet;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_malformed_option;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_option_not_found;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_option_payload_too_large;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_field_not_present;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_pdu_not_found;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_invalid_interface;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_unknown_link_type;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_socket_open_error;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_socket_close_error;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_socket_write_error;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_invalid_socket_type;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_bad_tins_cast;
__PYX_EXTERN_C DL_IMPORT(PyObject) *py_protocol_disabled;

#endif /* !__PYX_HAVE_API__cycapture__libtins___py_exceptions */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC init_py_exceptions(void);
#else
PyMODINIT_FUNC PyInit__py_exceptions(void);
#endif

#endif /* !__PYX_HAVE__cycapture__libtins___py_exceptions */
