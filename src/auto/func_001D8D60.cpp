#include "m2c.h"
extern "C" s32 func_0027FC78(s32, s32);                        /* extern */

extern "C" s32 func_001D8D60(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xE4);
    if (temp_v0 == 0) {
        return 0;
    }
    return func_0027FC78(arg1, temp_v0) == 0;
}
