#define DEF_func_0018F890
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0018F890(s32 unused0, void *arg1) {
    s32 temp_a1;
    s32 var_a0;
    void *temp_v0;
    void *var_v1;

    temp_v0 = M2C_FIELD(arg1, void **, 0x18);
    var_a0 = 0;
    temp_a1 = M2C_FIELD(temp_v0, s32 *, 0);
    var_v1 = M2C_FIELD(temp_v0, void **, 0x14);
    if (temp_a1 > 0) {
loop_1:
        if (M2C_FIELD(var_v1, s32 *, 0x14) != 0) {
            var_a0 += 1;
            var_v1 = M2C_FIELD(var_v1, void **, 0x10);
            if (var_a0 < temp_a1) {
                goto loop_1;
            }
        }
    }
    return var_a0;
}
