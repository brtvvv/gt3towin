#include "m2c.h"
extern "C" s32 func_0020AF88(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x23C) != 0) || (M2C_FIELD(arg0, s32 *, 0x248) != 0)) {
        var_v1 = 1;
    }
    return var_v1;
}
