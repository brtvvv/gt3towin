#include "m2c.h"
extern "C" void func_002104B0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x120) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x124) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x128) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x12C) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}
