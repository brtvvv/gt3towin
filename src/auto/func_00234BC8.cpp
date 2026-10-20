#include "m2c.h"
extern "C" void func_00234BC8(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u16 *, 0xA4) = (u16) ((s32) (M2C_FIELD(arg1, u16 *, 0xA4) * M2C_FIELD(arg2, u16 *, 0x1C)) / 100);
    M2C_FIELD(arg1, u8 *, 0xA6) = (u8) ((s32) (M2C_FIELD(arg1, u8 *, 0xA6) * M2C_FIELD(arg2, u8 *, 0x1B)) / 100);
    M2C_FIELD(arg1, u8 *, 0xA7) = (u8) M2C_FIELD(arg2, u8 *, 0x11);
    M2C_FIELD(arg1, u8 *, 0x6F) = (u8) (M2C_FIELD(arg1, u8 *, 0x6F) + M2C_FIELD(arg2, u8 *, 0x18));
    M2C_FIELD(arg1, u8 *, 0x70) = (u8) (M2C_FIELD(arg1, u8 *, 0x70) + M2C_FIELD(arg2, u8 *, 0x19));
    M2C_FIELD(arg1, u8 *, 0xAC) = (u8) M2C_FIELD(arg0, u8 *, 0x12C);
    M2C_FIELD(arg1, u8 *, 0xAA) = (u8) M2C_FIELD(arg0, u8 *, 0x130);
    M2C_FIELD(arg1, u8 *, 0xAE) = (u8) M2C_FIELD(arg0, u8 *, 0x134);
    M2C_FIELD(arg1, u8 *, 0xAD) = (u8) M2C_FIELD(arg0, u8 *, 0x138);
    M2C_FIELD(arg1, u8 *, 0xAB) = (u8) M2C_FIELD(arg0, u8 *, 0x13C);
    M2C_FIELD(arg1, u8 *, 0xAF) = (u8) M2C_FIELD(arg0, u8 *, 0x140);
}
