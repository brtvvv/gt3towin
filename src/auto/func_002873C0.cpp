#define DEF_func_002873C0
#include "m2c.h"
#include "funcs.h"
extern s32 D_00309090 __attribute__((section(".data")));

extern "C" s32 func_002873C0(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) (arg0 - 1) < 2U) {
        if (D_00309090 == 0) {
            if (func_002883E8() != 0) {
                D_00309090 = 1;
                goto block_4;
            }
            goto block_5;
        }
block_4:
        return func_002881C8(arg1, arg2);
    }
block_5:
    return -1;
}
