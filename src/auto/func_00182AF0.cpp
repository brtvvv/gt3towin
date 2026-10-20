#define DEF_func_00182AF0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A340 __attribute__((section(".data")));
extern M2C_UNK D_00354D80;
extern s32 D_004B38F0 __attribute__((section(".data")));

extern "C" s32 *func_00182AF0(void) {
    if (D_004B38F0 == 0) {
        func_0017AA40();
        func_0027D620((s32) &D_004B38F0, (s32) &D_0032A340, (s32) &D_00354D80);
    }
    return &D_004B38F0;
}
