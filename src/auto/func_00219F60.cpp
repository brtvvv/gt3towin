#define DEF_func_00219F60
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00219F60(void *arg0) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
    var_v0 = 0;
    if (temp_a1 >= 0) {
        var_v0 = func_0021A480((s32) arg0, temp_a1);
    }
    return var_v0;
}
