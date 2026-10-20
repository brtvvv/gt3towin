#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */
extern "C" s32 func_00236F98(void *, u8, u8, u8);              /* extern */

extern "C" void func_002331B8(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 5, M2C_FIELD(arg0, s64 *, 0x78));
    M2C_FIELD(arg0, s32 *, 0x124) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x11), M2C_FIELD(temp_v0, u8 *, 0x13), M2C_FIELD(temp_v0, u8 *, 0x12));
    M2C_FIELD(arg0, s32 *, 0x128) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x3A), M2C_FIELD(temp_v0, u8 *, 0x3C), M2C_FIELD(temp_v0, u8 *, 0x3B));
}
