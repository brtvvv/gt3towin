#define DEF_func_00172318
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00326440 __attribute__((section(".data")));
extern s32 D_004B36B0 __attribute__((section(".data")));
extern M2C_UNK D_004B41C0 __attribute__((section(".data")));

extern "C" s32 *func_00172318(void) {
    if (D_004B36B0 == 0) {
        func_001D69F8();
        func_0027D620((s32) &D_004B36B0, (s32) &D_00326440, (s32) &D_004B41C0);
    }
    return &D_004B36B0;
}
