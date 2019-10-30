/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_hal_sim_mockdata_SPIDataJNI */

#ifndef _Included_edu_wpi_first_hal_sim_mockdata_SPIDataJNI
#define _Included_edu_wpi_first_hal_sim_mockdata_SPIDataJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    registerInitializedCallback
 * Signature: (ILedu/wpi/first/hal/sim/NotifyCallback;Z)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_registerInitializedCallback
  (JNIEnv *, jclass, jint, jobject, jboolean);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    cancelInitializedCallback
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_cancelInitializedCallback
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    getInitialized
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_getInitialized
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    setInitialized
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_setInitialized
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    registerReadCallback
 * Signature: (ILedu/wpi/first/hal/sim/BufferCallback;)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_registerReadCallback
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    cancelReadCallback
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_cancelReadCallback
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    registerWriteCallback
 * Signature: (ILedu/wpi/first/hal/sim/ConstBufferCallback;)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_registerWriteCallback
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    cancelWriteCallback
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_cancelWriteCallback
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    registerReadAutoReceiveBufferCallback
 * Signature: (ILedu/wpi/first/hal/sim/SpiReadAutoReceiveBufferCallback;)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_registerReadAutoReceiveBufferCallback
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    cancelReadAutoReceiveBufferCallback
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_cancelReadAutoReceiveBufferCallback
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_sim_mockdata_SPIDataJNI
 * Method:    resetData
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_SPIDataJNI_resetData
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
