#include "m2c.h"
extern "C" void *func_00232658(s32, M2C_UNK, s64);             /* extern */
extern "C" s32 func_00236F98(void *, u8, u8, u8);              /* extern */

extern "C" void func_00233100(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 0xD, M2C_FIELD(arg0, s64 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x118) = func_00236F98(arg0, M2C_FIELD(temp_v0, u8 *, 0x11), M2C_FIELD(temp_v0, u8 *, 0x13), M2C_FIELD(temp_v0, u8 *, 0x12));
}
