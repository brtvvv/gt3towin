#include "m2c.h"
extern "C" s32 func_002168C0(s32, s32, s32, s32);              /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" s32 func_00172C00(void *arg0, s32 arg1) {
    return func_002168C0(func_00219680() + 0x1F550, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1) != 0x157529FF;
}
