#define DEF_func_00232480
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));

extern "C" s32 func_00232480(s32 unused0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (func_00242030(arg1, 1, (s32) &D_002F49E0) + 0x3F) & ~0x3F;
    temp_v0 = func_0026D660(0x40, temp_s0);
    return (func_002428C8(arg1, temp_v0, temp_s0, 1, (s32) &D_002F49E0) == 0) ? 0 : temp_v0;
}
