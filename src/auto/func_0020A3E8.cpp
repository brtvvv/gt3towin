#include "m2c.h"
extern "C" f32 func_0020A3E8(void *arg0) {
    f32 var_f0;

    var_f0 = M2C_FIELD(arg0, f32 *, 0x260);
    if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
    }
    if (var_f0 > 1.0f) {
        var_f0 = 1.0f;
    }
    return var_f0;
}
