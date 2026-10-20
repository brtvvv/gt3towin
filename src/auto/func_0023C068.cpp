#include "m2c.h"
extern "C" s32 func_002350A0(s32);                             /* extern */
extern "C" void *func_0023A220(M2C_UNK *, s32);                /* extern */
extern "C" s32 func_0023A2A8(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK D_00354730;

extern "C" s32 func_0023C068(void *arg0, s32 arg1) {
    return arg1 | M2C_FIELD(func_0023A220(&D_00354730, func_0023A2A8(&D_00354730, func_002350A0(arg0 + 0x10), M2C_FIELD(arg0, s32 *, 0x1C))), s32 *, 0xC);
}
