#define DEF_func_001F4348
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001F4348(s32 arg0, s32 unused1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_a0;
    s32 temp_a1;
    void *temp_v0;

    temp_v0 = func_001F6E80(arg0, func_001F3E90(arg0), 0);
    temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x19) * -0xA;
    temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x1A) * 5;
    if ((temp_a1 < 0) && (temp_a0 > 0)) {
        *arg2 = 3;
        *arg3 = temp_a1;
        *arg4 = temp_a0;
        return 1;
    }
    return 0;
}
