#define DEF_func_001760C0
#include "m2c.h"
#include "funcs.h"

extern "C" s32 func_001760C0(void *arg0) {
    f32 temp_f0;
    s32 var_v0;

    var_v0 = 0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x944) - 0.02f;
    M2C_FIELD(arg0, f32 *, 0x944) = temp_f0;
    if (temp_f0 < 0.0f) {
        var_v0 = 1;
    }
    return var_v0;
}
