#include "m2c.h"
extern "C" s32 func_0021E8B0(s32, s32);                        /* extern */
extern "C" s32 func_0021EE60();                                /* extern */

extern "C" s32 func_00217C38(s32 arg0, s32 arg1) {
    return arg0 + (func_0021E8B0(func_0021EE60(), arg1) * 4);
}
