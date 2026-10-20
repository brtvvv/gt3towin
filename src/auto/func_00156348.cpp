#define DEF_func_00156348
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003204D8 __attribute__((section(".data")));
extern M2C_UNK D_004B3490 __attribute__((section(".data")));
extern s32 D_004B34C0 __attribute__((section(".data")));

extern "C" s32 *func_00156348(void) {
    if (D_004B34C0 == 0) {
        func_00151E88();
        func_0027D620((s32) &D_004B34C0, (s32) &D_003204D8, (s32) &D_004B3490);
    }
    return &D_004B34C0;
}
