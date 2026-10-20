#define DEF_func_00220688
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003425F0 __attribute__((section(".data")));
extern M2C_UNK D_00342600 __attribute__((section(".data")));

extern "C" s32 func_00220688(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    if (arg2 != 0) {
        func_0026D950(arg0, (s32) &D_003425F0, arg1, arg3, arg4, arg5, arg6, arg7);
    } else {
        func_0026D950(arg0, (s32) &D_00342600, arg1, arg3, arg4, arg5, arg6, arg7);
    }
    return arg0;
}
