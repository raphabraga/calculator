#ifndef NDKTEST_H
#define NDKTEST_H
/*==============================================================================
  Copyright (c) 2012-2014 Qualcomm Technologies, Inc.
  All rights reserved. Qualcomm Proprietary and Confidential.
==============================================================================*/

#include "AEEStdDef.h"

#ifdef __cplusplus
extern "C" {
#endif

jint Java_br_ufc_gtel_ndktest_MainActivity_calculator_ndk_sum(JNIEnv* env, jobject obj, jint num1, jint num2);

#ifdef __cplusplus
}
#endif

#endif // NDKTEST_H

