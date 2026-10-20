#include "m2c.h"
extern "C" void func_00229C70(void *arg0) {
    u32 temp_v1;
    void *var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0 + 0x3C;
    do {
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, f32 *, 8) = 1.0f;
        var_a0 += 0xC;
    } while ((u32) var_a0 < temp_v1);
}
