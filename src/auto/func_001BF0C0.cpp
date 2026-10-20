#include "m2c.h"
extern "C" f32 func_001BF0C0(void *arg0, f32 fparg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
    return (M2C_FIELD(arg0, f32 *, 0x28) - (temp_f1 * 0.5f)) + ((temp_f1 * fparg0) / 100.0f);
}
