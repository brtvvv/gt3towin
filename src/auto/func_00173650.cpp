#define DEF_func_00173650
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00326950 __attribute__((section(".data")));
extern M2C_UNK D_00354D10;
extern s32 D_004B3740 __attribute__((section(".data")));

extern "C" s32 *func_00173650(void) {
    if (D_004B3740 == 0) {
        func_00173718();
        func_0027D620((s32) &D_004B3740, (s32) &D_00326950, (s32) &D_00354D10);
    }
    return &D_004B3740;
}
