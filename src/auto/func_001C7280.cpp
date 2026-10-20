#define DEF_func_001C7280
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00337F80 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));
extern s32 D_004B4030 __attribute__((section(".data")));

extern "C" s32 *func_001C7280(void) {
    if (D_004B4030 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B4030, (s32) &D_00337F80, (s32) &D_004B3EF0);
    }
    return &D_004B4030;
}
