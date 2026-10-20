#define DEF_func_00197D20
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003306D0 __attribute__((section(".data")));

extern "C" s32 func_00197D20(s32 arg0) {
    func_00197398(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003306D0;
    M2C_FIELD(arg0, s32 *, 0x20) = -0x18;
    M2C_FIELD(arg0, s8 *, 0x29) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}
