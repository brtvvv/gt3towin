#include "m2c.h"
extern "C" s32 func_00224FE0(void *arg0) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0x14);
    var_a1 = 0;
    if (((temp_v1 >> 1) & 1) || (M2C_FIELD(arg0, s32 *, 0x80) != 0)) {
        var_a1 = temp_v1 & 1;
    }
    return var_a1;
}
