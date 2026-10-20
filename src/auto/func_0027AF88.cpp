#include "m2c.h"
extern "C" void **func_002789E8();                             /* extern */

extern "C" void *func_0027AF88(void) {
    void *temp_v1;

    temp_v1 = *func_002789E8();
    M2C_FIELD(temp_v1, s32 *, 0x14) = 1;
    M2C_FIELD(temp_v1, s64 *, 0x20) = (s64) (M2C_FIELD(temp_v1, s64 *, 0x20) + 1);
    return temp_v1;
}
