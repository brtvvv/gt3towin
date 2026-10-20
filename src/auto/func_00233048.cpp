#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */
extern "C" s32 func_00236F98(void *, u16, u16, u16);           /* extern */

extern "C" void func_00233048(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 0x11, M2C_FIELD(arg0, s64 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(temp_v0, u16 *, 0x12);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(temp_v0, u16 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(temp_v0, u16 *, 0x16);
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) M2C_FIELD(temp_v0, u16 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) M2C_FIELD(temp_v0, u16 *, 0x1A);
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) M2C_FIELD(temp_v0, u16 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) M2C_FIELD(temp_v0, u16 *, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) M2C_FIELD(temp_v0, u16 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x110) = func_00236F98(arg0, M2C_FIELD(temp_v0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x22), M2C_FIELD(temp_v0, u16 *, 0x24));
    M2C_FIELD(arg0, s32 *, 0x114) = func_00236F98(arg0, (u16) M2C_FIELD(temp_v0, u8 *, 0x2A), (u16) M2C_FIELD(temp_v0, u8 *, 0x29), (u16) M2C_FIELD(temp_v0, u8 *, 0x2B));
    M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
}
