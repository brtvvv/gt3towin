#include "m2c.h"
extern f32 D_00352144;
extern f32 D_00352148;
extern f32 D_0035214C;

extern "C" f32 func_002061A0(f32 fparg0) {
    f32 var_f12;

    var_f12 = fparg0 / 90.0f;
    if (var_f12 < 0.0f) {
        var_f12 = 0.0f;
    }
    if (var_f12 > 1.0f) {
        var_f12 = 1.0f;
    }
    return ((((var_f12 * D_00352144) + D_00352148) * var_f12) + D_0035214C) * var_f12 * 90.0f;
}
