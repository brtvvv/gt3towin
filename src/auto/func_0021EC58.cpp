#include "m2c.h"
extern "C" s32 func_0021EFA8(s32, s32, s32);                   /* extern */

extern "C" u32 func_0021EC58(void *arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x20);
    temp_s0 = M2C_FIELD(temp_v0, s32 *, 4);
    return (u32) (func_0021EFA8(temp_s0, M2C_FIELD(temp_v0, s32 *, 0), arg1) - temp_s0) >> 2;
}
