#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */
extern "C" s32 func_00236F98(void *, u8, u8, u8);              /* extern */

extern "C" void func_00233480(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 0x15, M2C_FIELD(arg0, s64 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0x194) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x13), M2C_FIELD(temp_v0, u8 *, 0x12), M2C_FIELD(temp_v0, u8 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x198) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x1D), M2C_FIELD(temp_v0, u8 *, 0x1C), M2C_FIELD(temp_v0, u8 *, 0x1E));
    M2C_FIELD(arg0, s32 *, 0x19C) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x16), M2C_FIELD(temp_v0, u8 *, 0x15), M2C_FIELD(temp_v0, u8 *, 0x17));
    M2C_FIELD(arg0, s32 *, 0x1A0) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x20), M2C_FIELD(temp_v0, u8 *, 0x1F), M2C_FIELD(temp_v0, u8 *, 0x21));
    M2C_FIELD(arg0, s32 *, 0x1A4) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x19), M2C_FIELD(temp_v0, u8 *, 0x18), M2C_FIELD(temp_v0, u8 *, 0x1A));
    M2C_FIELD(arg0, s32 *, 0x1A8) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x23), M2C_FIELD(temp_v0, u8 *, 0x22), M2C_FIELD(temp_v0, u8 *, 0x24));
}
