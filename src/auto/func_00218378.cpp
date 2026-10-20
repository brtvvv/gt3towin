#include "m2c.h"
extern "C" s32 func_00217EC8();                                /* extern */
extern "C" s32 func_00217F28(s32);                             /* extern */

extern "C" s32 func_00218378(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00217EC8();
    return temp_s0 == func_00217F28(arg0);
}
