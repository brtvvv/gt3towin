#define DEF_func_00275BC0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349570 __attribute__((section(".data")));
extern M2C_UNK D_00349580 __attribute__((section(".data")));

extern "C" s32 func_00275BC0(s32 arg0, s32 unused1, s32 unused2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 temp_s0;

    temp_s0 = arg0 & 0xFF;
    if (temp_s0 >= 0x64U) {
        func_0027E9F8((s32) &D_00349570, 0x119, (s32) &D_00349580, arg3, arg4, arg5, arg6, arg7);
    }
    return (((temp_s0 / 10U) * 6) + temp_s0) & 0xFF;
}
