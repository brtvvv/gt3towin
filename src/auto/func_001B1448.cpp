#define DEF_func_001B1448
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001B1448(void *arg0) {
    f32 temp_f0;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x1C) - 0.04f;
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_f0;
        if (temp_f0 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x1C) = 1.0f;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), f32 *, 0xA4) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    }
}
