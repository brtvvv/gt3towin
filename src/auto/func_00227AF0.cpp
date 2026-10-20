#include "m2c.h"
extern "C" s32 func_002279D0();                                /* extern */

extern "C" u32 func_00227AF0(void *arg0) {
    return (u32) (func_002279D0() - M2C_FIELD(arg0, s32 *, 0x34)) >> 4;
}
