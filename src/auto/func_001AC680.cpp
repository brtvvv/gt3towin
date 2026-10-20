#define DEF_func_001AC680
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003324D0 __attribute__((section(".data")));
extern M2C_UNK D_00354E78;
extern s32 D_004B2CC0 __attribute__((section(".data")));

extern "C" s32 *func_001AC680(void) {
    if (D_004B2CC0 == 0) {
        func_0022DB98();
        func_0027D620((s32) &D_004B2CC0, (s32) &D_003324D0, (s32) &D_00354E78);
    }
    return &D_004B2CC0;
}
