#define DEF_func_0026BA60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00347A08 __attribute__((section(".data")));

extern "C" void func_0026BA60(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00347A08;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
