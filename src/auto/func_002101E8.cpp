#include "m2c.h"
extern "C" void func_002101E8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
}
