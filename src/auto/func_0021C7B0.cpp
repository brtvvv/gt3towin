#define DEF_func_0021C7B0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0021C7B0(void *arg0) {
    s32 var_a1;
    s32 var_v1;
    u8 temp_v1;

    var_a1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v1 = *(s32 *)(M2C_FIELD(arg0, s32 *, 0) + var_a1);
            var_a1 -= 1;
            var_v1 = (var_v1 << 8) | temp_v1;
        } while (var_a1 >= 0);
    }
    return var_v1;
}
