#include "m2c.h"
extern "C" s32 func_0027FAE8(s32, M2C_UNK);                    /* extern */

extern "C" s32 func_001D8C08(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_0027FAE8(M2C_FIELD(arg0, s32 *, 0x110), 0x5F);
    return (temp_v0 == 0) ? 0 : (temp_v0 + 1);
}
