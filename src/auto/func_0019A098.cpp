#define DEF_func_0019A098
#include "m2c.h"
#include "funcs.h"

extern "C" void func_0019A098(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_v0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f1 < temp_f2) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f1 + 0.02f);
    }
    if (temp_f2 >= 0.0f) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_v0 > 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_v0 - 1);
        }
    }
}
