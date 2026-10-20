#include "m2c.h"
extern "C" f32 func_00202360(void *arg0, s32 *arg1, f32 fparg0) {
    f32 temp_f1;
    f32 var_f0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    var_f0 = (fparg0 - temp_f1) / (M2C_FIELD(arg0, f32 *, 8) - temp_f1);
    *arg1 = 0;
    if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
        *arg1 = 1;
    }
    if (var_f0 > 1.0f) {
        var_f0 = 1.0f;
        *arg1 = 1;
    }
    return var_f0;
}
