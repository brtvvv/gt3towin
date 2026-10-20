#include "m2c.h"
extern "C" s32 func_00245AE0(s32);                             /* extern */
extern s32 D_003540F0;

extern "C" f32 func_001D2750(void *arg0) {
    f32 temp_f20;

    temp_f20 = M2C_FIELD(arg0, f32 *, 0x34);
    return (temp_f20 - 0.0f) * ((f32) func_00245AE0(D_003540F0) / 448.0f);
}
