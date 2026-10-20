#define DEF_func_0027F858
#include "m2c.h"
#include "funcs.h"
extern void *D_00308C0C __attribute__((section(".data")));

extern "C" s32 func_0027F858(void) {
    s32 temp_v1;

    temp_v1 = (M2C_FIELD(D_00308C0C, s32 *, 0x58) * 0x41C64E6D) + 0x3039;
    M2C_FIELD(D_00308C0C, s32 *, 0x58) = temp_v1;
    return temp_v1 & 0x7FFFFFFF;
}
