#include "m2c.h"
extern "C" s32 func_00219680();                                /* extern */
extern "C" s32 func_0021ADA0(s32);                             /* extern */
extern "C" s32 func_0021E830(s32, s32);                        /* extern */
extern "C" s32 func_0021EE60();                                /* extern */

extern "C" s32 func_00121038(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_0021ADA0(func_00219680());
    return temp_s0 >= func_0021E830(func_0021EE60(), arg0);
}
