#define DEF_func_00176C68
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003282E8 __attribute__((section(".data")));
extern M2C_UNK D_004B3820 __attribute__((section(".data")));
extern s32 D_004B3840 __attribute__((section(".data")));

extern "C" s32 *func_00176C68(void) {
    if (D_004B3840 == 0) {
        func_001768C8();
        func_0027D620((s32) &D_004B3840, (s32) &D_003282E8, (s32) &D_004B3820);
    }
    return &D_004B3840;
}
