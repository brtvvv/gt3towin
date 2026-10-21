#define DEF_func_0027B008
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0027B008(void *arg0, s32 (*arg1)(), void *arg2) {
    s32 var_v0;

    if (arg2 != NULL) {
        var_v0 = 0;
        if (M2C_FIELD(arg2, s16 *, 4) == 4) {
            goto block_2;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
block_2:
    if (arg1 == (s32 (*)())0xFFFFFFFF) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    var_v0 = func_0027DC80(arg1(), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x28));
    if (var_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = var_v0;
    }
    return var_v0;
}
