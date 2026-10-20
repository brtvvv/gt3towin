#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */
extern "C" s32 func_00236F98(void *, M2C_UNK, u8, u8);         /* extern */

extern "C" void func_00233550(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 0x17, M2C_FIELD(arg0, s64 *, 0xD8));
    M2C_FIELD(arg0, s32 *, 0x1BC) = func_00236F98(arg0, 1, M2C_FIELD(temp_v0, u8 *, 0x12), M2C_FIELD(temp_v0, u8 *, 0x11));
    M2C_FIELD(arg0, s32 *, 0x1C0) = func_00236F98(arg0, 1, M2C_FIELD(temp_v0, u8 *, 0x1B), M2C_FIELD(temp_v0, u8 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x1C4) = func_00236F98(arg0, 1, M2C_FIELD(temp_v0, u8 *, 0x21), M2C_FIELD(temp_v0, u8 *, 0x1E));
    M2C_FIELD(arg0, s32 *, 0x1C8) = func_00236F98(arg0, 1, M2C_FIELD(temp_v0, u8 *, 0x26), M2C_FIELD(temp_v0, u8 *, 0x23));
}
