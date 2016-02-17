/*==============================================================================
  Copyright (c) 2012-2014 Qualcomm Technologies, Inc.
  All rights reserved. Qualcomm Proprietary and Confidential.
==============================================================================*/

#include <stdio.h>
#include "HAP_farf.h"
#include "calculator_ndk.h"

int calculator_ndk_sum(int num1, int num2)
{
  return num1+num2;
}
/*
int calculator_ndk_diff(const int* vec, int vecLen, int64* res)
{
  int ii = 0;
  *res = vec[0];
  for (ii = 1; ii < vecLen; ++ii) {
    *res = *res - vec[ii];
  }
  FARF(HIGH, "===============     DSP: diff result %lld ===============", *res);
  return 0;
}
*/

