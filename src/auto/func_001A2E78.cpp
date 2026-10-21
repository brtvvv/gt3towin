#define DEF_func_001A2E78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331898 __attribute__((section(".data")));

extern "C" void *func_001A2E78(void *arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00331898;
    M2C_FIELD(arg0, s32 *, 4) = 0x64;
    temp_v0 = func_0027D510(0x1F40);
    var_v1 = temp_v0;
    var_a0 = 0x63;
    do {
        *(s32 *)var_v1 = 0;
        var_a0 -= 1;
        var_v1 += 0x50;
    } while (var_a0 != -1);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
