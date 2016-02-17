//
// Created by rapha on 14/01/2016.
//

#include <jni.h>
#include <string.h>
//#include "ndktest.h"
#include "rpcmem.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "calculator_ndk_imp.h"

jint Java_br_ufc_gtel_ndktest_MainActivity_calculator_ndk_test(JNIEnv* env, jobject obj, jint num1, jint num2)
    {
        int nErr = 0;
        int *resp = 0;
        int len = 0;
        int64 result = 0;

        rpcmem_init();

        len = sizeof(*resp);
        printf("- allocate %d bytes from ION heap\n", len);
        if (0 == (resp = (int*)rpcmem_alloc(0, RPCMEM_HEAP_DEFAULT, len))) {
            printf("Error: alloc failed\n");
            nErr = 1;
            goto bail;
        }

        printf("- compute sum on the aDSP\n");
        *resp = calculator_ndk_sum(num1, num2);
        return (jint)*resp;

        bail:
        if (resp) {
            rpcmem_free(resp);
        }
        rpcmem_deinit();

        return (jint)nErr;
    }


