#include "m2c.h"
extern "C" s32 func_001C3538(s32, s32);                        /* extern */

extern "C" s32 func_001C3508(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_v0 == 0) {
        return 0;
    }
    return func_001C3538(arg1, temp_v0);
}
