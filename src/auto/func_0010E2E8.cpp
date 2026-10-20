#define DEF_func_0010E2E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00352748 __attribute__((section(".data")));
extern M2C_UNK D_0049D590 __attribute__((section(".data")));

extern "C" M2C_UNK *func_0010E2E8(s32 unused0, s32 arg1, s32 unused2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0026D950((s32) &D_0049D590, (s32) &D_00352748, arg1, arg3, arg4, arg5, arg6, arg7);
    return &D_0049D590;
}
