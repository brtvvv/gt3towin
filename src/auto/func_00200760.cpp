#include "m2c.h"
extern "C" f32 func_00200760(f32 *arg0) {
    f32 var_f0;

    var_f0 = *arg0 * 0.0078125f;
    if (var_f0 < -1.0f) {
        var_f0 = -1.0f;
    }
    if (var_f0 > 1.0f) {
        var_f0 = 1.0f;
    }
    return var_f0;
}
