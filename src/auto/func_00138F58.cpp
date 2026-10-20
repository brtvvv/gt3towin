#define DEF_func_00138F58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00318F88 __attribute__((section(".data")));
extern M2C_UNK D_004B30B0 __attribute__((section(".data")));
extern s32 D_004B30D0 __attribute__((section(".data")));

extern "C" s32 *func_00138F58(void) {
    if (D_004B30D0 == 0) {
        func_00139078();
        func_0027D620((s32) &D_004B30D0, (s32) &D_00318F88, (s32) &D_004B30B0);
    }
    return &D_004B30D0;
}
