#define DEF_func_00101370
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00355100 __attribute__((section(".data")));
extern M2C_UNK D_003F5100 __attribute__((section(".data")));

extern "C" void *func_00101370(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00355100;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003F5100;
    M2C_FIELD(arg0, s32 *, 8) = 0xA0000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
