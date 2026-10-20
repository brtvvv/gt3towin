#define DEF_func_00220BB0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342668 __attribute__((section(".data")));

extern "C" void *func_00220BB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_00342668;
    M2C_FIELD(arg0, s32 *, 8) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((f32) func_0027F858() * 4.656613e-10f);
    return arg0;
}
