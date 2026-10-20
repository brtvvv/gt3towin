#include "m2c.h"
extern "C" void func_001E3BF8(void *arg0, f32 fparg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x90) + fparg0;
    M2C_FIELD(arg0, f32 *, 0x90) = temp_f0;
    if (temp_f0 > 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x90) = 1.0f;
    }
}
