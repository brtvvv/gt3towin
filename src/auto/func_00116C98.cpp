#define DEF_func_00116C98
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F850 __attribute__((section(".data")));
extern M2C_UNK D_0030F870 __attribute__((section(".data")));

extern "C" s32 func_00116C98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0) {
    func_001B4B58(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, fparg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x108) = &D_0030F850;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0030F870;
    return arg0;
}
