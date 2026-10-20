#include "m2c.h"
extern "C" void func_00210128(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
}
