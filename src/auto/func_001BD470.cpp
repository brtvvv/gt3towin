#include "m2c.h"
extern "C" s32 func_001BD470(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;
    void *var_a2;

    var_a2 = arg2 + 0x40;
    var_v1 = 3;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_a2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        M2C_FIELD(var_a2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
        M2C_FIELD(var_a2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
        M2C_FIELD(var_a2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
        var_a2 += 0x10;
    } while (var_v1 >= 0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
