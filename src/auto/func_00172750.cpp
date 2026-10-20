#include "m2c.h"
extern "C" s32 func_00214B38(s32, s32, s32);                   /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" s32 func_00172750(void *arg0, s32 arg1) {
    return func_00214B38(func_00219680() + 0x246F8, M2C_FIELD(arg0, s32 *, 4), arg1) != 0x157529FF;
}
