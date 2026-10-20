#include "m2c.h"
extern "C" s32 func_00213E98(s32, s32, s32);                   /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" s32 func_001729C0(s32 arg0, s32 arg1) {
    return func_00213E98(func_00219680() + 0x26160, arg0 + 4, arg1) != 0x157529FF;
}
