#include "m2c.h"
extern "C" s32 func_001C4248(s32, s32, s32);                   /* extern */

extern "C" s32 func_001C3778(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_a0 == 0) {
        return 0;
    }
    return func_001C4248(temp_a0, M2C_FIELD(arg0, s32 *, 0x7C), arg1);
}
