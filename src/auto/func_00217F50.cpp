#include "m2c.h"
extern "C" s32 func_0021E800(s32, s32);                        /* extern */
extern "C" s32 func_0021EE60();                                /* extern */

extern "C" s32 func_00217F50(s32 arg0, s32 arg1) {
    return arg0 + (func_0021E800(func_0021EE60(), arg1) * 4);
}
