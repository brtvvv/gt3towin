#define DEF_func_0015A710
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321838 __attribute__((section(".data")));
extern M2C_UNK D_004B3470 __attribute__((section(".data")));
extern s32 D_004B35D0 __attribute__((section(".data")));

extern "C" s32 *func_0015A710(void) {
    if (D_004B35D0 == 0) {
        func_00151F58();
        func_0027D620((s32) &D_004B35D0, (s32) &D_00321838, (s32) &D_004B3470);
    }
    return &D_004B35D0;
}
