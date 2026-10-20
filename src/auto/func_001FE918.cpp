#include "m2c.h"
extern "C" void func_001FE918(void *arg0, f32 fparg0) {
    f32 temp_f0;

    if (M2C_FIELD(arg0, s32 *, 0x400) != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x38C);
        if ((((M2C_FIELD(arg0, f32 *, 0x3A0) - temp_f0) * M2C_FIELD(arg0, f32 *, 0x404)) + temp_f0) < fparg0) {
            M2C_FIELD(arg0, s32 *, 0x444) = 1;
        }
    }
}
