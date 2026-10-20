#include "m2c.h"
extern "C" s32 func_00219680();                                /* extern */
extern "C" s32 func_00219F60(s32);                             /* extern */
extern "C" s32 func_00238C20(s32, M2C_UNK);                    /* extern */

extern "C" s32 func_00119218(void) {
    s32 temp_v0;

    temp_v0 = func_00219F60(func_00219680());
    if (temp_v0 == 0) {
        return 0;
    }
    return func_00238C20(temp_v0 + 0x10, 0x1B);
}
