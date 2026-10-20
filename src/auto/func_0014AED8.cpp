#include "m2c.h"
extern "C" s32 func_0014AEB0();                                /* extern */

extern "C" s32 func_0014AED8(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0014AEB0();
    var_v0 = 0;
    if (temp_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x30620);
        if (var_v0 == temp_v0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x30624);
        }
    }
    return var_v0;
}
