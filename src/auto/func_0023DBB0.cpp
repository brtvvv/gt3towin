#include "m2c.h"
extern "C" s32 func_0023E260();                                /* extern */

extern "C" s32 func_0023DBB0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_0023E260();
    M2C_FIELD(arg0, s32 *, 0x248) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}
