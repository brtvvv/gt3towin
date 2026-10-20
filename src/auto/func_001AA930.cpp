#include "m2c.h"
extern "C" s32 func_001AA8D8();                                /* extern */
extern s32 D_00353BCC;

extern "C" s32 func_001AA930(void) {
    return M2C_FIELD(((func_001AA8D8() * 0x10) + D_00353BCC), s32 *, 8);
}
