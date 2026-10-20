#include "m2c.h"
extern f32 D_00351F1C;

extern "C" void func_001EDF40(void *arg0) {
    void *temp_v0;

    temp_v0 = arg0 + 0xF84;
    M2C_FIELD(arg0, f32 *, 0xEC0) = (f32) (M2C_FIELD(temp_v0, f32 *, 0x524) * D_00351F1C);
    M2C_FIELD(temp_v0, f32 *, 0x4A0) = (f32) (50.0f / M2C_FIELD(temp_v0, f32 *, 0x524));
}
