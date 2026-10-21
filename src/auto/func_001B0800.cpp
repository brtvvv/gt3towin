#define DEF_func_001B0800
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001B0800(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x210) - 0.02f;
    M2C_FIELD(arg0, f32 *, 0x210) = temp_f1;
    if (temp_f1 < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x210) = 0.5f;
    }
}
