#define DEF_func_0023A4B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));

extern "C" s32 func_0023A4B0(s32 unused0, s32 arg1, s32 arg2, s32 arg3) {
    return (func_002428C8(arg1, arg2, arg3, 1, (s32) &D_002F49E0) == 0) ? 0 : arg2;
}
