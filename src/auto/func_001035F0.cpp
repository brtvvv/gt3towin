#define DEF_func_001035F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A980 __attribute__((section(".data")));

extern "C" void *func_001035F0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0030A980;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
