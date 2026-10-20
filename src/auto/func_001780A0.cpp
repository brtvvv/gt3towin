#include "m2c.h"
extern "C" M2C_UNK func_001AADD8(void *, s32);                 /* extern */

extern "C" s32 func_001780A0(void *arg0) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x18B8);
    var_v0 = 0;
    if (temp_a1 != 0) {
        func_001AADD8(arg0 + 0x11F8, temp_a1);
        M2C_FIELD(arg0, s32 *, 0x18B8) = 0;
        M2C_FIELD(arg0, s32 *, 0x18BC) = 1;
        var_v0 = 1;
    }
    return var_v0;
}
