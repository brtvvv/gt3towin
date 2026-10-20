#include "m2c.h"
extern "C" void func_001DF460(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3, f32 fparg0, f32 fparg1) {
    u8 temp_v1;
    void *temp_a0;

    temp_a0 = (arg1 * 0xA4) + arg0 + 0xFE4;
    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x24);
    if ((temp_v1 == 1) || (temp_v1 == 0xD)) {
        *arg2 = fparg0 * M2C_FIELD(temp_a0, f32 *, 0x30);
        *arg3 = fparg1 * M2C_FIELD(temp_a0, f32 *, 0x34);
    }
}
