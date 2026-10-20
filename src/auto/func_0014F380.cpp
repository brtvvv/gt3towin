#include "m2c.h"
extern "C" s32 func_0014F380(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    return temp_v0;
}
