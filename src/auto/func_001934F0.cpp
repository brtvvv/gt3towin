#define DEF_func_001934F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F970 __attribute__((section(".data")));
extern s32 D_00353948;

extern "C" void func_001934F0(void *arg0, s32 arg1, s32 unused2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp[4];
    s32 temp_lo;

    if (D_00353948 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            temp_lo = arg1 / 50;
            if (((arg1 % 50) == 0) && (temp_lo < 4)) {
                func_0026D950((s32) sp, (s32) &D_0032F970, temp_lo, arg3, arg4, arg5, arg6, arg7);
                func_00198D98((s32) (arg0 + 0xA2EC), (s32) sp, 1.0f, 0.0f);
            }
        }
    }
}
