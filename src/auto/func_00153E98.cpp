#define DEF_func_00153E98
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00320500 __attribute__((section(".data")));
extern M2C_UNK D_004B3490 __attribute__((section(".data")));
extern s32 D_004B3580 __attribute__((section(".data")));

extern "C" s32 *func_00153E98(void) {
    if (D_004B3580 == 0) {
        func_00151E88();
        func_0027D620((s32) &D_004B3580, (s32) &D_00320500, (s32) &D_004B3490);
    }
    return &D_004B3580;
}
