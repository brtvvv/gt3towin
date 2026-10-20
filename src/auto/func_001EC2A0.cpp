#include "m2c.h"
extern "C" s32 func_001EC2A0(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (!(M2C_FIELD(arg0, f32 *, 0x13B4) > 0.25f)) {
        var_v0 = 0;
    }
    return var_v0;
}
