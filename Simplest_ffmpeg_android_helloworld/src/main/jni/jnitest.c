//
// Created by Wuhang on 16/12/22.
//
#include <string.h>
#include <stdio.h>
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavfilter/avfilter.h"

#include <jni.h>
#include "cn_yunyunhei_wuhang_simplest_ffmpeg_android_helloworld_NdkJniUtils.h"
/*
 * Class:     cn_yunyunhei_wuhang_simplest_ffmpeg_android_helloworld_NdkJniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_yunyunhei_wuhang_simplest_1ffmpeg_1android_1helloworld_NdkJniUtils_getCLanguageString
  (JNIEnv *env, jobject obj){
     return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
  }

JNIEXPORT jstring JNICALL Java_cn_yunyunhei_wuhang_simplest_1ffmpeg_1android_1helloworld_NdkJniUtils_stringFromJNI
        (JNIEnv *env, jobject obj){
    char info[10000] = { 0 };
    sprintf(info, "%s\n", avcodec_configuration());
    return (*env)->NewStringUTF(env, info);
}

