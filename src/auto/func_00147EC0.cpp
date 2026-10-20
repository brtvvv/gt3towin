#define DEF_func_00147EC0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031DA80 __attribute__((section(".data")));
extern M2C_UNK D_004B3290 __attribute__((section(".data")));
extern s32 D_004B3320 __attribute__((section(".data")));

extern "C" s32 *func_00147EC0(void) {
    if (D_004B3320 == 0) {
        func_00147F10();
        func_0027D620((s32) &D_004B3320, (s32) &D_0031DA80, (s32) &D_004B3290);
    }
    return &D_004B3320;
}
