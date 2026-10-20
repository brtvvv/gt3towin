#include "m2c.h"
extern "C" s32 func_002081C8(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f12;
    f32 temp_f1;
    s32 var_v0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f12 = (fparg0 - temp_f1) / (M2C_FIELD(arg0, f32 *, 8) - temp_f1);
    var_v0 = 0;
    if ((fparg1 <= temp_f12) && (temp_f12 <= fparg2)) {
        var_v0 = 1;
    }
    return var_v0;
}
