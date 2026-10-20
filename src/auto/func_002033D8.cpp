#define DEF_func_002033D8
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_002033D8(void *arg0) {
    f32 var_f0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x180);
    var_f0 = 0.0f;
    if (temp_a1 != NULL) {
        var_f0 = 1.0f;
        if (M2C_FIELD(arg0, s32 *, 0xA78) != 3) {
            var_f0 = M2C_FIELD(temp_a1, f32 *, 0x64);
        }
    }
    return var_f0;
}
