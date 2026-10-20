#define DEF_func_001734A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003268B0 __attribute__((section(".data")));
extern M2C_UNK D_004B3760 __attribute__((section(".data")));
extern s32 D_004B3780 __attribute__((section(".data")));

extern "C" s32 *func_001734A8(void) {
    if (D_004B3780 == 0) {
        func_00173580();
        func_0027D620((s32) &D_004B3780, (s32) &D_003268B0, (s32) &D_004B3760);
    }
    return &D_004B3780;
}
