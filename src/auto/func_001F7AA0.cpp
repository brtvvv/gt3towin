#include "m2c.h"
extern "C" void func_001F7AA0(void *arg0) {
    s32 var_v0;
    s8 *var_a0;

    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    var_v0 = 7;
    var_a0 = arg0 + 0xBB;
    do {
        *var_a0 = 0;
        var_v0 -= 1;
        var_a0 -= 1;
    } while (var_v0 >= 0);
}
