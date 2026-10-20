#include "m2c.h"
extern "C" void func_00210190(void *arg0, void *arg1) {
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg0 + 0x40;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    temp_v1 = arg0 + 0x4C;
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_a2 = arg0 + 0x58;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(temp_a2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
}
