#define DEF_func_00205DA0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340490 __attribute__((section(".data")));
extern M2C_UNK D_004B4320 __attribute__((section(".data")));
extern s32 D_004B4340 __attribute__((section(".data")));

extern "C" s32 *func_00205DA0(void) {
    if (D_004B4340 == 0) {
        func_002056C8();
        func_0027D620((s32) &D_004B4340, (s32) &D_00340490, (s32) &D_004B4320);
    }
    return &D_004B4340;
}
