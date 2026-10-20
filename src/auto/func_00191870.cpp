#define DEF_func_00191870
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F850 __attribute__((section(".data")));
extern M2C_UNK D_00354DA0;
extern s32 D_004B3B60 __attribute__((section(".data")));

extern "C" s32 *func_00191870(void) {
    if (D_004B3B60 == 0) {
        func_001918C0();
        func_0027D620((s32) &D_004B3B60, (s32) &D_0032F850, (s32) &D_00354DA0);
    }
    return &D_004B3B60;
}
