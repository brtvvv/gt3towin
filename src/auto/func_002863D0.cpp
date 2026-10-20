#define DEF_func_002863D0
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354F28 __attribute__((section(".data")));

extern "C" s32 func_002863D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_00354F28 = 0;
    temp_v0 = func_00287440(arg1, arg2, arg3);
    if (temp_v0 == -1) {
        if (D_00354F28 != 0) {
            *arg0 = D_00354F28;
        }
    }
    return temp_v0;
}
