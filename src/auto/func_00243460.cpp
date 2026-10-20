#include "m2c.h"
extern "C" s32 func_0026D660(M2C_UNK);                         /* extern */

extern "C" void *func_00243460(void *arg0, s32 arg1) {
    s32 var_v1;
    s8 *var_v0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = func_0026D660(0x40);
    }
    var_v1 = 0x3F;
    var_v0 = arg0 + 0x57;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return arg0;
}
