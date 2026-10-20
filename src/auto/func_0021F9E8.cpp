#include "m2c.h"
extern "C" s32 func_0021F990();                                /* extern */
extern s32 D_00354454;

extern "C" s32 func_0021F9E8(void) {
    return M2C_FIELD(((func_0021F990() * 0x10) + D_00354454), s32 *, 8);
}
