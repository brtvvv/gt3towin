#define DEF_func_001916E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F780 __attribute__((section(".data")));
extern M2C_UNK D_00354DA0;
extern s32 D_004B3BB0 __attribute__((section(".data")));

extern "C" s32 *func_001916E8(void) {
    if (D_004B3BB0 == 0) {
        func_001918C0();
        func_0027D620((s32) &D_004B3BB0, (s32) &D_0032F780, (s32) &D_00354DA0);
    }
    return &D_004B3BB0;
}
