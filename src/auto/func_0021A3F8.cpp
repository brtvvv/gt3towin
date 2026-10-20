#include "m2c.h"
extern "C" s32 func_0021A3F8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0 != 0) {
        return (s32) (M2C_FIELD(arg0, s32 *, 0x10) * 0x64) / temp_a0;
    }
    return 0;
}
