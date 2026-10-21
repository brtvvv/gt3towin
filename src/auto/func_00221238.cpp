#define DEF_func_00221238
#include "m2c.h"
#include "funcs.h"

extern "C" f32 func_00221238(void *arg0) {
    f32 var_f0;

    var_f0 = 0.25f;
    if (((s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0x84), s32 *, 0x14) >> 1) & 1) {
        var_f0 = 0.3f;
    }
    return var_f0;
}
