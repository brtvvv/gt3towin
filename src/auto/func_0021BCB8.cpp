#include "m2c.h"
extern "C" void func_0021BCB8(void *arg0) {
    s8 temp_v0;
    s8 var_a2;
    u32 var_a1;
    void *var_v1;

    var_a2 = 1;
    var_a1 = 0;
    if (M2C_FIELD(arg0, u32 *, 0) != 0) {
        var_v1 = arg0 + 0x10;
        do {
            var_a1 += 1;
            temp_v0 = M2C_FIELD(var_v1, s8 *, 9) == 0;
            M2C_FIELD(var_v1, s8 *, 8) = temp_v0;
            var_a2 = (temp_v0 == 0) ? 0 : var_a2;
            var_v1 += 0x10;
        } while (var_a1 < (u32) M2C_FIELD(arg0, u32 *, 0));
    }
    M2C_FIELD(arg0, s8 *, 7) = var_a2;
}
