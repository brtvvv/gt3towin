#include "m2c.h"
extern "C" f32 func_002071F8(f32);                             /* extern */

extern "C" void func_0020B6E8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 > 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_v0 - 1);
    }
    M2C_FIELD(arg0, f32 *, 4) = func_002071F8(M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg0, f32 *, 8));
}
