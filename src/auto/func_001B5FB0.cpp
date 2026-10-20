#define DEF_func_001B5FB0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334750 __attribute__((section(".data")));
extern M2C_UNK D_00334770 __attribute__((section(".data")));

extern "C" s32 func_001B5FB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    func_001B4B58(arg0, arg1, 0, arg2, arg3, arg4, 0, arg5, 0.0f);
    M2C_FIELD(arg0, s32 *, 0x160) = arg6;
    M2C_FIELD(arg0, s32 *, 0x164) = arg7;
    M2C_FIELD(arg0, s32 *, 0x168) = arg_sp0;
    M2C_FIELD(arg0, M2C_UNK **, 0x108) = &D_00334750;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00334770;
    return arg0;
}
