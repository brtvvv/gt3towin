#include "m2c.h"
extern "C" void func_002536C0(void *arg0) {
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0x15C);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x158);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x160);
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, f32 *, 0xB88) = (f32) ((temp_f1 - temp_f3) * temp_f4 * 0.5f);
    M2C_FIELD(arg0, f32 *, 0xB98) = (f32) ((((1.0f - ((temp_f1 + temp_f3) * 0.5f)) + M2C_FIELD(arg0, f32 *, 0x168)) * temp_f4) + (M2C_FIELD(arg0, f32 *, 0x164) + 1.0f));
}
