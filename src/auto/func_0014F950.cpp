#include "m2c.h"
extern "C" s32 func_0014F838(void *, s32);                     /* extern */

extern "C" s32 func_0014F950(void *arg0) {
    s32 temp_v1;
    s32 var_v0;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    var_v0 = 0;
    if (temp_v1 >= 0) {
        temp_a0 = (temp_v1 == 0) ? (arg0 + 8) : (arg0 + 0x2C);
        var_v0 = func_0014F838(temp_a0, M2C_FIELD(temp_a0, s32 *, 8));
    }
    return var_v0;
}
