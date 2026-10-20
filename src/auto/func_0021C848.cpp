#include "m2c.h"
extern "C" void *func_0021C848(void *arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    u8 *temp_a0;
    u8 temp_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    var_a1 = temp_v0 - 1;
    if (temp_v0 == 0) {
        return arg0;
    }
    var_a3 = 0;
    if (var_a1 >= 0) {
        do {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0) + var_a1;
            temp_v1 = *temp_a0;
            var_a1 -= 1;
            *temp_a0 = var_a3 | (temp_v1 >> 1);
            var_a3 = (temp_v1 << 7) & 0x80;
        } while (var_a1 >= 0);
    }
    return arg0;
}
