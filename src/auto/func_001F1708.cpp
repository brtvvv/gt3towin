#define DEF_func_001F1708
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F1708(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 unused4, s32 arg5, s32 arg6) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_v1 = func_001F3A90((s32) arg0, arg1);
    if (M2C_FIELD(temp_s0, s32 *, 0x6C) == 0) {
        func_001ED458((s32) arg0, arg1, arg2, arg3, arg5, arg6, (s32) M2C_FIELD(temp_v1, u8 *, 0x14A2));
    }
}
