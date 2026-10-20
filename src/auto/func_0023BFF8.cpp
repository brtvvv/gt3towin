#include "m2c.h"
extern "C" s32 func_00232210(s32);                             /* extern */
extern "C" M2C_UNK func_00238E38(s32, s32);                    /* extern */

extern "C" void func_0023BFF8(void *arg0, s32 arg1) {
    func_00238E38(arg0 + 0x10, func_00232210(arg1));
    M2C_FIELD(arg0, s32 *, 0x228) = 1;
}
