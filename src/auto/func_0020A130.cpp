#include "m2c.h"
extern "C" s32 func_0020A130(void *arg0, s32 arg1) {
    s32 var_a3;
    void *temp_v1;

    temp_v1 = (M2C_FIELD(arg0, s32 *, 0x96D8) * 0x24C0) + arg0 + 0x4A0;
    var_a3 = 0;
    if (M2C_FIELD(temp_v1, s16 *, 0x16) == 0) {
        var_a3 = arg1 == M2C_FIELD(temp_v1, s32 *, 0x18);
    }
    return var_a3;
}
