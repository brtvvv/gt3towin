#include "m2c.h"
extern "C" void *func_002431C8(void *arg0, s32 arg1) {
    s32 var_a1;
    void *var_v1;

    var_a1 = arg1;
    var_v1 = M2C_FIELD(arg0, void **, 0xC);
    if (var_a1 > 0) {
        do {
            var_a1 -= 1;
            var_v1 += M2C_FIELD(var_v1, s32 *, 0xC);
        } while (var_a1 != 0);
    }
    return var_v1;
}
