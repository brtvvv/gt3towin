#include "m2c.h"
extern "C" void func_00209AB8(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x980);
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0x984);
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x988);
    M2C_FIELD(arg2, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x994);
    M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    if (M2C_FIELD(arg0, s32 *, 0x23C) != 0) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x240);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x244);
    }
    if (M2C_FIELD(arg0, s32 *, 0x248) != 0) {
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x24C);
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x250);
        M2C_FIELD(arg2, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x254);
        M2C_FIELD(arg2, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x258);
    }
}
