#define DEF_func_001793C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328C70 __attribute__((section(".data")));

extern "C" void *func_001793C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00328C70;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
