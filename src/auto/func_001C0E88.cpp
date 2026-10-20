#define DEF_func_001C0E88
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C0E88(s32 arg0, void *arg1) {
    s32 var_s1;
    void *temp_a1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg1;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, s32 *, 0x14) == 0) {
                temp_a1 = M2C_FIELD(var_s0, void **, 8);
                var_s1 += 1;
                if (temp_a1 != NULL) {
                    var_s1 += func_001C0E88(arg0, temp_a1);
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
    return var_s1;
}
