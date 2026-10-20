#include "m2c.h"
extern "C" s32 func_00198A58(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x12) != 0) && ((temp_f0 = M2C_FIELD(arg0, f32 *, 0x1C), (temp_f0 == 0.0f)) || ((temp_f0 > 0.0f) && (temp_f1 = M2C_FIELD(arg0, f32 *, 0x18), (temp_f1 >= 0.0f)) && (temp_f1 <= temp_f0)))) {
        var_v1 = 1;
    }
    return var_v1;
}
