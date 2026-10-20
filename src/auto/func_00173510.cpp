#define DEF_func_00173510
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003268D8 __attribute__((section(".data")));
extern s32 D_004B3750 __attribute__((section(".data")));
extern M2C_UNK D_004B3760 __attribute__((section(".data")));

extern "C" s32 *func_00173510(void) {
    if (D_004B3750 == 0) {
        func_00173580();
        func_0027D620((s32) &D_004B3750, (s32) &D_003268D8, (s32) &D_004B3760);
    }
    return &D_004B3750;
}
