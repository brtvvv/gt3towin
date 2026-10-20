#include "m2c.h"
extern "C" s32 func_001477F0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x290) != 0;
    }
    return var_v1;
}
