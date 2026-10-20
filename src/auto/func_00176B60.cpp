#define DEF_func_00176B60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327F90 __attribute__((section(".data")));

extern "C" void *func_00176B60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00327F90;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}
