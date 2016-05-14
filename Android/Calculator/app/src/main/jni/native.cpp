#include <jni.h>

#include <Addition.h>
#include <Subtraction.h>

extern "C" {
JNIEXPORT jint JNICALL
Java_com_harkish_calculator_MainActivity_add(JNIEnv *env, jobject instance, jint a, jint b) {
    Addition addition;
    addition.add(a, b);
}

JNIEXPORT jint JNICALL
Java_com_harkish_calculator_MainActivity_subtract(JNIEnv *env, jobject instance, jint a, jint b) {
    Subtraction subtraction;
    subtraction.subtract(a, b);
}
}