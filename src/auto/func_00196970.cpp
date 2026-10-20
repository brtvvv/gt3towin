#define DEF_func_00196970
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FE68 __attribute__((section(".data")));
extern s32 D_004B2D60 __attribute__((section(".data")));
extern M2C_UNK D_004B3D20 __attribute__((section(".data")));

extern "C" s32 *func_00196970(void) {
    if (D_004B2D60 == 0) {
        func_0019E018();
        func_0027D620((s32) &D_004B2D60, (s32) &D_0032FE68, (s32) &D_004B3D20);
    }
    return &D_004B2D60;
}
