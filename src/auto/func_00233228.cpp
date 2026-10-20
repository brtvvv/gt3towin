#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */

extern "C" void func_00233228(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 0xC, M2C_FIELD(arg0, s64 *, 0xA8));
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) M2C_FIELD(temp_v0, u8 *, 0x12);
    M2C_FIELD(arg0, s32 *, 0x130) = (s32) M2C_FIELD(temp_v0, u8 *, 0x13);
    M2C_FIELD(arg0, s32 *, 0x134) = (s32) M2C_FIELD(temp_v0, u8 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) M2C_FIELD(temp_v0, u8 *, 0x15);
    M2C_FIELD(arg0, s32 *, 0x13C) = (s32) M2C_FIELD(temp_v0, u8 *, 0x16);
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(temp_v0, u8 *, 0x17);
}
