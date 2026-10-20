#include "m2c.h"
extern "C" s32 func_00196110(s32);                             /* extern */
extern "C" s32 func_0019A508(s32);                             /* extern */

extern "C" void func_0019A578(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x28) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        M2C_FIELD(arg0, s32 *, 0x20) = func_00196110(func_0019A508(arg1));
    }
}
