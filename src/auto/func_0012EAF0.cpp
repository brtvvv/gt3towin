#include "m2c.h"
extern "C" s32 func_0012EAF0(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_a0;
    void *temp_v0;
    void *var_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0x18);
    var_a0 = 0;
    temp_a2 = M2C_FIELD(temp_v0, s32 *, 0);
    var_v1 = M2C_FIELD(temp_v0, void **, 0x14);
    if (temp_a2 > 0) {
loop_1:
        if (M2C_FIELD(var_v1, s32 *, 0x14) != arg1) {
            var_a0 += 1;
            var_v1 = M2C_FIELD(var_v1, void **, 0x10);
            if (var_a0 < temp_a2) {
                goto loop_1;
            }
        }
    }
    return var_a0;
}
