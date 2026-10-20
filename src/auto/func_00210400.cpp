#include "m2c.h"
extern "C" void func_00210400(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x100) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}
