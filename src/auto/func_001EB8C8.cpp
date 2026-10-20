#define DEF_func_001EB8C8
#include "m2c.h"
#include "funcs.h"
extern s32 D_002F7008 __attribute__((section(".data")));

extern "C" f32 func_001EB8C8(void *arg0) {
    f32 var_f1;

    var_f1 = M2C_FIELD(arg0, f32 *, 0x1374);
    if (D_002F7008 == 1) {
        var_f1 *= 0.625f;
    }
    return var_f1;
}
