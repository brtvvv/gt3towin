#include "m2c.h"
extern "C" s16 func_00200590(void *arg0) {
    s16 var_a1;

    var_a1 = -1;
    if (M2C_FIELD(arg0, s16 *, 0x16) == 1) {
        var_a1 = M2C_FIELD(arg0, s16 *, 0xA);
    }
    return var_a1;
}
