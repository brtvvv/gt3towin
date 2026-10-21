#define DEF_func_001A0720
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001A0720(void *arg0) {
    s32 var_s0;

    var_s0 = M2C_FIELD(arg0, s32 *, 4);
    if (var_s0 != 0) {
        do {
            func_0019FDE8(var_s0);
            var_s0 = *(s32 *)var_s0;
        } while (var_s0 != 0);
    }
}
