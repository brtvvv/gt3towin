#define DEF_func_0023E260
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0023E260(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0;
    s32 var_v0;

    var_s0 = arg0 + ((func_0023E4D0(arg1) % 15U) * 4);
loop_1:
    var_s0 = *var_s0;
    var_v0 = 0;
    if (var_s0 != NULL) {
        if (func_0027FC78(M2C_FIELD(var_s0, s32 *, 4), arg1) == 0) {
            var_v0 = M2C_FIELD(var_s0, s32 *, 8);
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
