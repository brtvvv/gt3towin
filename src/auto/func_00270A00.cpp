#define DEF_func_00270A00
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00270A00(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = M2C_INDEX(arg0, s32, 0x98, arg1);
    if (arg2 == 3) {
        return (u32) (temp_v1 - 1) < 2U;
    }
    return temp_v1 == arg2;
}
