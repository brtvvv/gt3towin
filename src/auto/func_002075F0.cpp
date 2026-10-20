#define DEF_func_002075F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340718 __attribute__((section(".data")));

extern "C" void *func_002075F0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x44C) = &D_00340718;
    M2C_FIELD(arg0, s32 *, 0x438) = 0x87654321;
    M2C_FIELD(arg0, f32 *, 0x41C) = 90.0f;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, s32 *, 0x424) = 0;
    return arg0;
}
