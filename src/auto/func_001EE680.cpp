#include "m2c.h"
extern "C" s32 func_001EE680(void *arg0, u32 arg1) {
    s32 var_a0;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u16 *, 0xE378) * 0xEA60;
    var_a0 = 0;
    if (temp_v0 != 0) {
        var_a0 = arg1 >= temp_v0;
    }
    return var_a0;
}
