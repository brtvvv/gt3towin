#include "m2c.h"
extern "C" f32 func_001D7CE0(s32);                             /* extern */
extern "C" f32 func_001D7D40(s32);                             /* extern */

extern "C" void func_001D3AC8(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a0;

    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_a0 != 0) {
        M2C_FIELD(arg0, f32 *, 0x28) = fparg0;
        M2C_FIELD(arg0, f32 *, 0x2C) = fparg1;
        temp_f20 = fparg0 - func_001D7CE0(temp_a0);
        temp_f0 = fparg1 - func_001D7D40(M2C_FIELD(arg0, s32 *, 0x20));
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (temp_f20 * 0.25f);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f0 * 0.25f);
    }
}
