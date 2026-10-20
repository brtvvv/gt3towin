#define DEF_func_001B3A98
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333B98 __attribute__((section(".data")));
extern M2C_UNK D_00354D00;
extern s32 D_004B3E50 __attribute__((section(".data")));

extern "C" s32 *func_001B3A98(void) {
    if (D_004B3E50 == 0) {
        func_00103778();
        func_0027D620((s32) &D_004B3E50, (s32) &D_00333B98, (s32) &D_00354D00);
    }
    return &D_004B3E50;
}
