#define DEF_func_001192E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00310C10 __attribute__((section(".data")));

extern "C" s32 func_001192E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001BA7C8(arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x100) = arg3;
    M2C_FIELD(arg0, s32 *, 0x104) = arg4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00310C10;
    return arg0;
}
