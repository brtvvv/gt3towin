#include "m2c.h"
extern "C" s32 func_0021E878();                                /* extern */

extern "C" u32 func_0021E8B0(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 4);
    return (u32) (func_0021E878() - temp_s0) >> 2;
}
