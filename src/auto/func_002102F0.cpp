#include "m2c.h"
extern "C" void func_002102F0(void *arg0, void *arg1) {
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg0 + 0xA4;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    temp_v1 = arg0 + 0xB0;
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_a2 = arg0 + 0xC8;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(temp_a2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
}
