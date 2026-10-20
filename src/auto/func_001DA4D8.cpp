#include "m2c.h"
extern "C" f32 func_001DA4D8(void *arg0, s32 arg1) {
    f32 var_f0;

    var_f0 = M2C_FIELD(arg0, f32 *, 0x3FC) * 0.5f;
    if ((arg1 >> 1) == 0) {
        var_f0 = -var_f0;
    }
    return var_f0;
}
