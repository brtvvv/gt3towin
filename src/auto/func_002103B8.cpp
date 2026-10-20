#include "m2c.h"
extern "C" void func_002103B8(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg0 + 0xE0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    temp_v1 = arg0 + 0xEC;
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
}
