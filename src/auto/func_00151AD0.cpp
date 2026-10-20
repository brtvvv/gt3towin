#define DEF_func_00151AD0
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_00151AD0(void *arg0) {
    f32 var_f0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x30);
    var_f0 = 1.0f;
    if (temp_v0 != NULL) {
        var_f0 = M2C_FIELD(temp_v0, f32 *, 0x54);
    }
    return var_f0;
}
