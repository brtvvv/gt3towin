#define DEF_func_001B1E30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333938 __attribute__((section(".data")));

extern "C" s32 func_001B1E30(s32 arg0, s32 arg1, s32 arg2) {
    func_001BA988(arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00333938;
    return arg0;
}
