#define DEF_func_001770C8
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001770C8(void *arg0, s32 arg1) {
    f32 temp_f0;

    if (func_001B32C8(arg0 + 0xC) != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x944) - 0.02f;
        M2C_FIELD(arg0, f32 *, 0x944) = temp_f0;
        if (temp_f0 < 0.0f) {
            func_0017A100(arg1 + 0x84, 1, 0, 0);
        }
    }
}
