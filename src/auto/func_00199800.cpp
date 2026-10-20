#define DEF_func_00199800
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330410 __attribute__((section(".data")));

extern "C" s32 func_00199800(s32 arg0) {
    func_00197398(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330410;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}
