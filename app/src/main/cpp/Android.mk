LOCAL_PATH := $(call my-dir)
LV_PATH := $(LOCAL_PATH)/lvgl-9.2.1/

LOCAL_SHORT_COMMANDS := true
LOCAL_ARM_NEON := true
# build shared libs
include $(CLEAR_VARS)
LOCAL_MODULE := lvApp

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH) \
    $(LOCAL_PATH)/watch \
    $(LV_PATH) \
    $(LV_PATH)/src \
    $(LV_PATH)/demos

LOCAL_SRC_FILES := \
	$(wildcard $(LOCAL_PATH)/watch/*.cpp) \
	$(wildcard $(LOCAL_PATH)/watch/**/*.c) \
	$(wildcard $(LOCAL_PATH)/watch/**/**/*.c) \
    $(wildcard $(LOCAL_PATH)/watch/**/**/**/*.c) \
	$(wildcard $(LV_PATH)/src/*.c) \
	$(wildcard $(LV_PATH)/src/**/*.c) \
	$(wildcard $(LV_PATH)/src/**/**/*.c) \
	$(wildcard $(LV_PATH)/src/extra/**/**/*.c) \
	$(wildcard $(LV_PATH)/src/draw/**/**/*.c) \
	$(wildcard $(LV_PATH)/demos/**/*.c) \
	$(wildcard $(LV_PATH)/demos/**/**/*.c) \
	$(wildcard $(LOCAL_PATH)/**/*.c) \
	$(wildcard $(LOCAL_PATH)/*.cpp)

LOCAL_CFLAGS += -ffunction-sections -fdata-sections -fvisibility=hidden
LOCAL_LDFLAGS += -Wl,--gc-sections
LOCAL_LDLIBS := -llog -landroid

include $(BUILD_SHARED_LIBRARY)