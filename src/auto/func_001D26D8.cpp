#include "m2c.h"
extern "C" s32 func_00245AE0(s32);                             /* extern */
extern s32 D_003540F0;

extern "C" f32 func_001D26D8(void *arg0) {
    f32 temp_f20;

    temp_f20 = M2C_FIELD(arg0, f32 *, 0x3C);
    return temp_f20 * ((f32) func_00245AE0(D_003540F0) / 448.0f);
}
