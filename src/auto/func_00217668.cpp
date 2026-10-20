#define DEF_func_00217668
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00341B28 __attribute__((section(".data")));

extern "C" s32 func_00217668(s32 arg0, s32 arg1, s32 arg2) {
    return arg0 + (((arg1 * func_0021E508(func_0021EE60(), (s32) &D_00341B28)) + arg2) * 0x14);
}
