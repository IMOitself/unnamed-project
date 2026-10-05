#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_unnamed_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject)
{
    return env->NewStringUTF("hmm");
}