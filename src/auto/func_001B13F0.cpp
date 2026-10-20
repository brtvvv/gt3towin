#include "m2c.h"
extern "C" void func_001B13F0(void *arg0) {
    s32 var_a2;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_a1, s32 *, 0xAC) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1C) = 1.0f;
    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_a2 = M2C_FIELD(arg0, s32 *, 0) != 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0xAC) = var_a2;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        M2C_FIELD(temp_a1, f32 *, 0xA4) = 1.0f;
        return;
    }
    M2C_FIELD(temp_a1, f32 *, 0xA4) = 0.5f;
}
