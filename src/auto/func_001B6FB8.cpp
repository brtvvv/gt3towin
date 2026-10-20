#define DEF_func_001B6FB8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334F48 __attribute__((section(".data")));

extern "C" s32 func_001B6FB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001BA8A0(arg0, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
    M2C_FIELD(arg0, s32 *, 0x104) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00334F48;
    return arg0;
}
