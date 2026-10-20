#define DEF_func_0022B2F0
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_0022B2F0(void **arg0) {
    f32 var_f0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_f0 = 0.0f;
    if (temp_a0 != NULL) {
        var_f0 = M2C_FIELD(temp_a0, f32 *, 0x38);
    }
    return var_f0;
}
