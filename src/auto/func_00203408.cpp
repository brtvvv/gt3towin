#include "m2c.h"
extern "C" s32 func_00203408(void *arg0) {
    s32 var_a1;

    var_a1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0xA78) == 3) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_a1;
}
