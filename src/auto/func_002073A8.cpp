#include "m2c.h"
extern "C" f32 func_002073A8(void *arg0, f32 fparg0) {
    f32 var_f12;

    var_f12 = fparg0;
    if (var_f12 < 0.0f) {
        var_f12 = 0.0f;
    }
    if (var_f12 > 1.0f) {
        var_f12 = 1.0f;
    }
    return ((((M2C_FIELD(arg0, f32 *, 0) * var_f12) + M2C_FIELD(arg0, f32 *, 4)) * var_f12) + M2C_FIELD(arg0, f32 *, 8)) * var_f12 * M2C_FIELD(arg0, f32 *, 0xC);
}
