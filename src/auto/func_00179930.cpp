#include "m2c.h"
extern "C" void *func_00179EA0(s32);                           /* extern */
extern "C" s32 func_001AC5E0(s32);                             /* extern */

extern "C" void func_00179930(s32 arg0, s32 arg1) {
    M2C_FIELD(func_00179EA0(func_001AC5E0(arg0 + 0x11F8)), s32 *, 8) = arg1;
}
