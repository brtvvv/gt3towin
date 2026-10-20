#define DEF_func_001A3490
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003318E8 __attribute__((section(".data")));

extern "C" void *func_001A3490(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003318E8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}
