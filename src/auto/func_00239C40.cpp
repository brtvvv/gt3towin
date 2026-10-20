#include "m2c.h"
extern "C" s32 func_00232700();                                /* extern */

extern "C" s32 func_00239C40(void *arg0) {
    s32 var_s0;

    var_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), u16 *, 0x1E2) * 0x64;
    if (func_00232700() != 0) {
        var_s0 *= 0x64;
    }
    return var_s0;
}
