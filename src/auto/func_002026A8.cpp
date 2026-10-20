#include "m2c.h"
extern "C" f32 func_00190930(s32);                             /* extern */
extern "C" s32 func_00190C60(s32);                             /* extern */

extern "C" f32 func_002026A8(void *arg0, void *arg1) {
    f32 temp_f20;
    f32 var_f21;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;

    var_f21 = 0.0f;
    temp_s1 = M2C_FIELD(arg0, s32 *, 0xF4);
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x70);
    if (M2C_FIELD(arg0, s32 *, 0xA70) < 0) {
        if (temp_v1 < M2C_FIELD(arg0, s32 *, 0xA74)) {
            temp_s0 = func_00190C60(temp_s1);
            var_f21 = (f32) temp_s0 * func_00190930(temp_s1);
        }
        return M2C_FIELD(arg1, f32 *, 0x38) + var_f21;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA74) != temp_v1) {
        var_f21 = func_00190930(temp_s1);
    }
    temp_f20 = M2C_FIELD(arg1, f32 *, 0x3C);
    return temp_f20 + ((f32) M2C_FIELD(arg0, s32 *, 0xA70) * func_00190930(temp_s1)) + var_f21;
}
