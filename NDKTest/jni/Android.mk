LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ndktest
LOCAL_SRC_FILES := ndktest.c
LOCAL_SRC_FILES += rpcmem.c
LOCAL_SRC_FILES += calculator_ndk_imp.c

FILE_LIST := $(LOCAL_PATH)

include $(BUILD_SHARED_LIBRARY)