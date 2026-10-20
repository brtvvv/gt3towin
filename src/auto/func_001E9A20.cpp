#include "m2c.h"
extern "C" f32 func_0026B3D8(f32);                             /* extern */
extern "C" f32 func_0026B828(f32);                             /* extern */

extern "C" f32 func_001E9A20(s32 arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f21;
    f32 var_f0;
    f32 var_f1;
    f32 var_f21;

    temp_f21 = func_0026B828(fparg2 * fparg0);
    var_f21 = temp_f21 + func_0026B3D8(fparg2 * fparg1);
    if (arg0 != 0) {
        var_f0 = var_f21;
        if (arg0 == 1) {
            var_f1 = var_f21 * var_f21;
            if (var_f21 < 0.0f) {
                var_f1 = -var_f1;
            }
            var_f21 = var_f1;
            goto block_5;
        }
    } else {
block_5:
        var_f0 = var_f21;
    }
    return var_f0;
}
