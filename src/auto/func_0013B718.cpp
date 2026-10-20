#define DEF_func_0013B718
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031A4D8 __attribute__((section(".data")));
extern s32 D_004B3080 __attribute__((section(".data")));
extern M2C_UNK D_004B30B0 __attribute__((section(".data")));

extern "C" s32 *func_0013B718(void) {
    if (D_004B3080 == 0) {
        func_00139078();
        func_0027D620((s32) &D_004B3080, (s32) &D_0031A4D8, (s32) &D_004B30B0);
    }
    return &D_004B3080;
}
