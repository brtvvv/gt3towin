#include "m2c.h"
extern "C" s32 func_00204E38(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (M2C_FIELD(arg0, s32 *, 0xDC) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0xDC) = 1;
    }
    return var_v1;
}
