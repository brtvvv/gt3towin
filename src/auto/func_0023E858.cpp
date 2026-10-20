#include "m2c.h"
extern "C" M2C_UNK func_0024AEC0(s32, M2C_UNK);                /* extern */
extern "C" f32 func_0024C548(s32);                             /* extern */

extern "C" f32 func_0023E858(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x244);
    if (temp_a0 == 0) {
        return 0.0f;
    }
    func_0024AEC0(temp_a0, 0);
    return func_0024C548(arg1);
}
