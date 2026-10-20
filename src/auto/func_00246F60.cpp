#include "m2c.h"
extern "C" f32 func_00246ED0(f32, f32);                        /* extern */

extern "C" void func_00246F60(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4) {
    f32 temp_f0;
    f32 temp_f22;

    temp_f22 = -fparg0;
    M2C_FIELD(arg0, f32 *, 0) = func_00246ED0(temp_f22, fparg0);
    M2C_FIELD(arg0, f32 *, 4) = func_00246ED0(-fparg1 * 0.5f, fparg1 * 0.5f);
    M2C_FIELD(arg0, f32 *, 8) = func_00246ED0(temp_f22, fparg0);
    M2C_FIELD(arg0, f32 *, 0xC) = 1.0f;
    temp_f0 = func_00246ED0(-fparg2, fparg2);
    M2C_FIELD(arg0, f32 *, 0x14) = fparg3;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x18) = func_00246ED0(-fparg4, fparg4);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
