#define DEF_func_001BB828
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003357F0 __attribute__((section(".data")));
extern s32 D_004B3EF0 __attribute__((section(".data")));
extern M2C_UNK D_004B40D0 __attribute__((section(".data")));

extern "C" s32 *func_001BB828(void) {
    if (D_004B3EF0 == 0) {
        func_001D08F0();
        func_0027D620((s32) &D_004B3EF0, (s32) &D_003357F0, (s32) &D_004B40D0);
    }
    return &D_004B3EF0;
}
