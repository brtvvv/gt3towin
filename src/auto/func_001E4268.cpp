#include "m2c.h"
extern "C" s32 func_001E4268(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (M2C_FIELD(arg0, f32 *, 0x20) == 0.0f) {
        var_v0 = 0;
    }
    return var_v0;
}
