#include "m2c.h"
extern "C" void func_001D1800(s32 arg0, f32 fparg0) {
    void *temp_a0;

    temp_a0 = arg0 + 0x20;
    M2C_FIELD(temp_a0, f32 *, 8) = (f32) (M2C_FIELD(temp_a0, f32 *, 8) + fparg0);
}
