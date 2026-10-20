#include "m2c.h"
extern "C" s32 func_001A3500(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    var_v0 = 0;
    if (temp_v1 != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0) + 1;
        M2C_FIELD(arg0, s32 *, 0) = temp_v0;
        var_v0 = temp_v1 < temp_v0;
    }
    return var_v0;
}
