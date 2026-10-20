#include "m2c.h"
extern "C" s32 func_0017A748(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x50);
    var_v0 = 0;
    if (temp_v1 >= 0) {
        var_v0 = (temp_v1 != 0) ? temp_v1 : arg1;
    }
    return var_v0;
}
