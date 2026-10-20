#define DEF_func_001A9518
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001A9518(void *arg0) {
    f32 temp_f15;
    s32 var_v0;

    temp_f15 = M2C_FIELD(arg0, f32 *, 0x58);
    var_v0 = 0;
    if (temp_f15 != 0.0f) {
        func_00256D50(1.0f, 1.0f, 1.0f, temp_f15);
        func_00256D70(0.0f, 0.0f, 0.0f, 0.0f);
        var_v0 = 1;
    }
    return var_v0;
}
