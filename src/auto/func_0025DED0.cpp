#define DEF_func_0025DED0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00347260 __attribute__((section(".data")));
extern M2C_UNK D_00354EE0;
extern s32 D_004B44F0 __attribute__((section(".data")));

extern "C" s32 *func_0025DED0(void) {
    if (D_004B44F0 == 0) {
        func_0025C570();
        func_0027D620((s32) &D_004B44F0, (s32) &D_00347260, (s32) &D_00354EE0);
    }
    return &D_004B44F0;
}
