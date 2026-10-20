#define DEF_func_0022B308
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0022B308(void **arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(temp_a0, s32 *, 0xC);
    }
    return var_v0;
}
