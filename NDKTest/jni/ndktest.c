//
// Created by rapha on 14/01/2016.
//

#include <jni.h>
#include <string.h>

jstring Java_br_ufc_gtel_ndktest_MainActivity_helloWorld(JNIEnv* env, jobject obj){

    return (*env)->NewStringUTF(env, "Esse código está completamente em C!!!");

}
