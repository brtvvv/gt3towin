#define DEF_func_00147BA0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031DA40 __attribute__((section(".data")));
extern s32 D_004B3310 __attribute__((section(".data")));
extern M2C_UNK D_004B3320 __attribute__((section(".data")));

extern "C" s32 *func_00147BA0(void) {
    if (D_004B3310 == 0) {
        func_00147EC0();
        func_0027D620((s32) &D_004B3310, (s32) &D_0031DA40, (s32) &D_004B3320);
    }
    return &D_004B3310;
}
