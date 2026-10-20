#define DEF_func_001FF770
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033F830 __attribute__((section(".data")));

extern "C" s32 func_001FF770(s32 unused0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0026D8C8((s32) &D_0033F830, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    return 1;
}
