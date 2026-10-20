#include "m2c.h"
extern f32 D_00351F78;
extern f32 D_00351F7C;

extern "C" f32 func_001F8468(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;

    var_f0_2 = fparg0 - fparg1;
    var_f1 = D_00351F78;
    if ((var_f0_2 < var_f1) || (var_f1 = D_00351F7C, (var_f1 < var_f0_2))) {
        var_f0_2 = var_f1;
    }
    var_f0 = fparg2 + (fparg3 * var_f0_2);
    if (var_f0 > 1.0f) {
        return 1.0f;
    }
    if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
    }
    return var_f0;
}
