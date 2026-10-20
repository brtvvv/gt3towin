#include "m2c.h"
extern "C" M2C_UNK func_001E9F50(void *, s32, f32);            /* extern */
extern "C" s8 func_001E9FE0(void *, s32, M2C_UNK);             /* extern */

extern "C" void func_001EA0E8(s32 arg0) {
    f32 temp_f0;
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = arg0 + 0xF84;
    temp_s0 = arg0 + 0x10;
    temp_f0 = M2C_FIELD(temp_s1, f32 *, 0x5C) / M2C_FIELD(temp_s1, f32 *, 0x2C);
    M2C_FIELD(temp_s1, f32 *, 0x3A4) = temp_f0;
    func_001E9F50(temp_s1, temp_s0, temp_f0);
    M2C_FIELD(temp_s1, s8 *, 0x4DD) = func_001E9FE0(temp_s1, temp_s0, 0);
}
