#define DEF_func_00138EA8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00318F60 __attribute__((section(".data")));
extern M2C_UNK D_004B30D0 __attribute__((section(".data")));
extern s32 D_004B3100 __attribute__((section(".data")));

extern "C" s32 *func_00138EA8(void) {
    if (D_004B3100 == 0) {
        func_00138F58();
        func_0027D620((s32) &D_004B3100, (s32) &D_00318F60, (s32) &D_004B30D0);
    }
    return &D_004B3100;
}
