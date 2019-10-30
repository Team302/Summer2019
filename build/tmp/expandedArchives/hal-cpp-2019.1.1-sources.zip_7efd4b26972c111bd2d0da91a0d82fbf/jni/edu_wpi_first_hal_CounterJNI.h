/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_hal_CounterJNI */

#ifndef _Included_edu_wpi_first_hal_CounterJNI
#define _Included_edu_wpi_first_hal_CounterJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    initializeCounter
 * Signature: (ILjava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_CounterJNI_initializeCounter
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    freeCounter
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_freeCounter
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterAverageSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterAverageSize
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterUpSource
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterUpSource
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterUpSourceEdge
 * Signature: (IZZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterUpSourceEdge
  (JNIEnv *, jclass, jint, jboolean, jboolean);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    clearCounterUpSource
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_clearCounterUpSource
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterDownSource
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterDownSource
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterDownSourceEdge
 * Signature: (IZZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterDownSourceEdge
  (JNIEnv *, jclass, jint, jboolean, jboolean);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    clearCounterDownSource
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_clearCounterDownSource
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterUpDownMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterUpDownMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterExternalDirectionMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterExternalDirectionMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterSemiPeriodMode
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterSemiPeriodMode
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterPulseLengthMode
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterPulseLengthMode
  (JNIEnv *, jclass, jint, jdouble);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    getCounterSamplesToAverage
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_CounterJNI_getCounterSamplesToAverage
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterSamplesToAverage
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterSamplesToAverage
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    resetCounter
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_resetCounter
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    getCounter
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_CounterJNI_getCounter
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    getCounterPeriod
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_CounterJNI_getCounterPeriod
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterMaxPeriod
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterMaxPeriod
  (JNIEnv *, jclass, jint, jdouble);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterUpdateWhenEmpty
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterUpdateWhenEmpty
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    getCounterStopped
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_CounterJNI_getCounterStopped
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    getCounterDirection
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_CounterJNI_getCounterDirection
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_CounterJNI
 * Method:    setCounterReverseDirection
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_CounterJNI_setCounterReverseDirection
  (JNIEnv *, jclass, jint, jboolean);

#ifdef __cplusplus
}
#endif
#endif
