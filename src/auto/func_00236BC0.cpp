#define DEF_func_00236BC0
#include "m2c.h"
#include "funcs.h"
extern s32 D_002F27B4 __attribute__((section(".data")));

extern "C" s32 func_00236BC0(s32 arg0) {
    s32 var_a0;

    if (func_00235100(arg0) == 0) {
        var_a0 = func_002362C0(arg0);
        if (var_a0 == 0x4E) {
            return D_002F27B4;
        }
        goto block_4;
    }
    var_a0 = func_002362C0(arg0);
block_4:
    return func_00236830(var_a0);
}
