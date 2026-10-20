#define DEF_func_00183228
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A8B0 __attribute__((section(".data")));
extern M2C_UNK D_004B38F0 __attribute__((section(".data")));
extern s32 D_004B3920 __attribute__((section(".data")));

extern "C" s32 *func_00183228(void) {
    if (D_004B3920 == 0) {
        func_00182AF0();
        func_0027D620((s32) &D_004B3920, (s32) &D_0032A8B0, (s32) &D_004B38F0);
    }
    return &D_004B3920;
}
