#include "m2c.h"
extern "C" s32 func_002432A0(s32);                             /* extern */

extern "C" void func_001974B0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = func_002432A0(temp_a0);
    }
}
