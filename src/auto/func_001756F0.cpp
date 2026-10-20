#define DEF_func_001756F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327800 __attribute__((section(".data")));

extern "C" void *func_001756F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00327800;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}
