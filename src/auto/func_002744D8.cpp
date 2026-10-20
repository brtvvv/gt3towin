#define DEF_func_002744D8
#include "m2c.h"
#include "funcs.h"
extern s32 D_00307508 __attribute__((section(".data")));

extern "C" s32 func_002744D8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_002743A0(arg0, arg1, arg2, 0x40);
    if (temp_v0 == 0) {
        D_00307508 = 0xB;
    }
    return temp_v0;
}
