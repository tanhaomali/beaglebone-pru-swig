/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <prussdrv.h>
  

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_NUM_1PRU_1HOSTIRQS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(8);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_NUM_1PRU_1HOSTS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(10);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_NUM_1PRU_1CHANNELS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(10);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_NUM_1PRU_1SYS_1EVTS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(64);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1PRU0_1DATARAM_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1PRU1_1DATARAM_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1PRU0_1IRAM_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1PRU1_1IRAM_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1SHARED_1DATARAM_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1CFG_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1UART_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(6);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1IEP_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(7);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1ECAP_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(8);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1MII_1RT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(9);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRUSS0_1MDIO_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(10);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_10_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_11_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_12_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_13_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_14_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_15_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_16_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(6);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT_17_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(7);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1init(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)prussdrv_init();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1open(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_open(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1reset(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_pru_reset(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1disable(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_pru_disable(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1enable(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_pru_enable(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1write_1memory(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3, jlong jarg4) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  unsigned int *arg3 = (unsigned int *) 0 ;
  unsigned int arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  arg3 = *(unsigned int **)&jarg3; 
  arg4 = (unsigned int)jarg4; 
  result = (int)prussdrv_pru_write_memory(arg1,arg2,arg3,arg4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pruintc_1init(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  tpruss_intc_initdata *arg1 = (tpruss_intc_initdata *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(tpruss_intc_initdata **)&jarg1; 
  result = (int)prussdrv_pruintc_init(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1map_1l3mem(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  void **arg1 = (void **) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void ***)&jarg1; 
  result = (int)prussdrv_map_l3mem(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1map_1extmem(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  void **arg1 = (void **) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void ***)&jarg1; 
  result = (int)prussdrv_map_extmem(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1map_1prumem(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  void **arg2 = (void **) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = *(void ***)&jarg2; 
  result = (int)prussdrv_map_prumem(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1map_1peripheral_1io(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  void **arg2 = (void **) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = *(void ***)&jarg2; 
  result = (int)prussdrv_map_peripheral_io(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1get_1phys_1addr(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = (unsigned int)prussdrv_get_phys_addr(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1get_1virt_1addr(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  unsigned int arg1 ;
  void *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (void *)prussdrv_get_virt_addr(arg1);
  *(void **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1wait_1event(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_pru_wait_event(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1send_1event(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_pru_send_event(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1clear_1event(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (int)prussdrv_pru_clear_event(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pru_1send_1wait_1clear_1event(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  unsigned int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  arg3 = (unsigned int)jarg3; 
  result = (int)prussdrv_pru_send_wait_clear_event(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1exit(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)prussdrv_exit();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1exec_1program(JNIEnv *jenv, jclass jcls, jint jarg1, jstring jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  char *arg2 = (char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  result = (int)prussdrv_exec_program(arg1,arg2);
  jresult = (jint)result; 
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1start_1irqthread(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  int arg2 ;
  prussdrv_function_handler arg3 = (prussdrv_function_handler) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(prussdrv_function_handler *)&jarg3; 
  result = (int)prussdrv_start_irqthread(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_thelastcitadel_pru_PRUJNI_prussdrv_1pruintc_1init_1data(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  tpruss_intc_initdata *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (tpruss_intc_initdata *)prussdrv_pruintc_init_data();
  *(tpruss_intc_initdata **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU0_1PRU1_1INTERRUPT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(17);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU1_1PRU0_1INTERRUPT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(18);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU0_1ARM_1INTERRUPT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(19);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU1_1ARM_1INTERRUPT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(20);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_ARM_1PRU0_1INTERRUPT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(21);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_ARM_1PRU1_1INTERRUPT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(22);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL0_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL3_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL4_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL5_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL6_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(6);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL7_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(7);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL8_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(8);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_CHANNEL9_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(9);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU0_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT0_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT3_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT4_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(6);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT5_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(7);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT6_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(8);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT7_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(9);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU0_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0001);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU1_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0002);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT0_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0004);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT1_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0008);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT2_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0010);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT3_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0020);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT4_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0040);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT5_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0080);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT6_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0100);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_thelastcitadel_pru_PRUJNI_PRU_1EVTOUT7_1HOSTEN_1MASK_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0x0200);
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif
