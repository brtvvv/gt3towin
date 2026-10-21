#define DEF_func_00232510
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern M2C_UNK D_00343618 __attribute__((section(".data")));

extern "C" void func_00232510(s32 *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
    }
    temp_s0 = (func_00242030((s32) &D_00343618, 1, (s32) &D_002F49E0) + 0x3F) & ~0x3F;
    temp_v0 = func_0026D660(0x40, temp_s0);
    if (func_002428C8((s32) &D_00343618, temp_v0, temp_s0, 1, (s32) &D_002F49E0) != 0) {
        *arg0 = temp_v0;
        func_002325F8((s32) arg0);
    }
}
