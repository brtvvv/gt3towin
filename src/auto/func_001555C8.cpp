#define DEF_func_001555C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00320440 __attribute__((section(".data")));
extern M2C_UNK D_004B3490 __attribute__((section(".data")));
extern s32 D_004B3560 __attribute__((section(".data")));

extern "C" s32 *func_001555C8(void) {
    if (D_004B3560 == 0) {
        func_00151E88();
        func_0027D620((s32) &D_004B3560, (s32) &D_00320440, (s32) &D_004B3490);
    }
    return &D_004B3560;
}
