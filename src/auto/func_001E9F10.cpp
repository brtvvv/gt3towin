#include "m2c.h"
extern "C" f32 func_001E9F10(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18) - M2C_FIELD(arg1, f32 *, 0x18);
    temp_f0 = M2C_FIELD(arg2, f32 *, 0x30);
    if (temp_f1 >= 0.0f) {
        return temp_f0 * temp_f1 * temp_f1;
    }
    return -temp_f0 * temp_f1 * temp_f1;
}
