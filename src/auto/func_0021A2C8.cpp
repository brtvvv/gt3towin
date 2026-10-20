#include "m2c.h"
extern "C" s32 func_0021A148();                                /* extern */
extern "C" s32 func_00238C40(s32);                             /* extern */

extern "C" void func_0021A2C8(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_0021A148();
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (M2C_FIELD(arg0, s64 *, 0x18) - func_00238C40(temp_v0 + 0x10));
    }
}
