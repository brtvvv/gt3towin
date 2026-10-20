#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */
extern "C" s32 func_00236F98(void *, M2C_UNK, u8, u8);         /* extern */

extern "C" void func_00233148(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 1, M2C_FIELD(arg0, s64 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x11C) = func_00236F98(arg0, 1, M2C_FIELD(temp_v0, u8 *, 0x14), M2C_FIELD(temp_v0, u8 *, 0x11));
    M2C_FIELD(arg0, s32 *, 0x120) = func_00236F98(arg0, 1, M2C_FIELD(temp_v0, u8 *, 0x14), M2C_FIELD(temp_v0, u8 *, 0x15));
}
