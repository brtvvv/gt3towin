#define DEF_func_00269E30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00300FE8 __attribute__((section(".data")));

extern "C" void func_00269E30(s16 arg0) {
    s32 var_s0;

    var_s0 = M2C_FIELD(&D_00300FE8, s32 *, 0);
    M2C_FIELD(&D_00300FE8, s16 *, 6) = arg0;
    if (var_s0 != 0) {
        do {
            func_00269A98(var_s0);
            var_s0 = *(s32 *)var_s0;
        } while (var_s0 != 0);
    }
}
