#define DEF_func_00213DE8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003412E8 __attribute__((section(".data")));

extern "C" s32 func_00213DE8(s32 arg0, s32 arg1) {
    return arg0 + (func_0021E650(func_0021EE60(), arg1, (s32) &D_003412E8) * 0x300);
}
