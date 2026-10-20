#define DEF_func_00190788
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F660 __attribute__((section(".data")));

extern "C" void *func_00190788(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_0032F660;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
