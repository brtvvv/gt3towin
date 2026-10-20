#define DEF_func_001917A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F818 __attribute__((section(".data")));
extern M2C_UNK D_00354DA0;
extern s32 D_004B3B90 __attribute__((section(".data")));

extern "C" s32 *func_001917A0(void) {
    if (D_004B3B90 == 0) {
        func_001918C0();
        func_0027D620((s32) &D_004B3B90, (s32) &D_0032F818, (s32) &D_00354DA0);
    }
    return &D_004B3B90;
}
