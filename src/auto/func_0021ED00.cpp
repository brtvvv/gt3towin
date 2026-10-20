#include "m2c.h"
extern "C" void *func_0021ECD0();                              /* extern */
extern s32 D_00354970;

extern "C" s32 func_0021ED00(void) {
    s32 var_a0;

    var_a0 = M2C_FIELD(func_0021ECD0(), s32 *, 4);
    if (D_00354970 == 0) {
        var_a0 *= 0x64;
    }
    return var_a0;
}
