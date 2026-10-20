#define DEF_func_001CE928
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338C30 __attribute__((section(".data")));

extern "C" s32 func_001CE928(s32 arg0, s32 arg1) {
    func_001BA7C8(arg0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00338C30;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    return arg0;
}
