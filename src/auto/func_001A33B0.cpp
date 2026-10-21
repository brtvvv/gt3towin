#define DEF_func_001A33B0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001A33B0(void *arg0) {
    s32 var_s0;

    var_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (var_s0 != 0) {
        do {
            func_001A2CD0(var_s0);
            var_s0 = *(s32 *)var_s0;
        } while (var_s0 != 0);
    }
}
