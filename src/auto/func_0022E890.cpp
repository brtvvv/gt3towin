#define DEF_func_0022E890
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354650;

extern "C" s32 func_0022E890(s32 arg0) {
    return (u32) (M2C_INDEX(D_00354650, s32, 0x98, arg0) - 1) < 2U;
}
