#include "m2c.h"
extern "C" void func_001B0D10(void *arg0, void *arg1) {
    void *temp_a2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = arg1 + 0x40;
    temp_v1 = arg1 + 0x50;
    temp_a2 = arg1 + 0x60;
    M2C_FIELD(arg1, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0);
    temp_a3 = arg1 + 0x70;
    M2C_FIELD(temp_v0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(temp_v1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_v1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(temp_a2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_a2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_a2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x70) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(temp_a3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_a3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_a3, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
}
