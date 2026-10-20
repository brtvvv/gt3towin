#include "m2c.h"
extern "C" f32 func_00200540(void *arg0) {
    f32 var_f2;
    s16 temp_v1;

    var_f2 = 1.0f;
    if (M2C_FIELD(arg0, s16 *, 0x16) == 0) {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0xD0);
        if (temp_v1 > 0) {
            var_f2 = 1.0f - ((f32) temp_v1 / (f32) M2C_FIELD(arg0, s16 *, 0xD2));
        }
    }
    return var_f2;
}
