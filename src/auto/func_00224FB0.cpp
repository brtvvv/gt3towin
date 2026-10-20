#include "m2c.h"
extern void *D_00354464;

extern "C" s32 func_00224FB0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x17C);
    if (temp_a0 < 0) {
        return 0;
    }
    return M2C_FIELD(D_00354464, s32 *, 0x24) + (temp_a0 << 5);
}
