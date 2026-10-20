#include "m2c.h"
extern "C" s32 func_0017C228(void *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    if ((temp_v1 == 0x157529FF) || (arg1 < temp_v1)) {
        M2C_FIELD(arg0, u32 *, 0x10) = arg1;
        return 1;
    }
    return 0;
}
