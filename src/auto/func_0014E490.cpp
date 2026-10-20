#define DEF_func_0014E490
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031E8D0 __attribute__((section(".data")));
extern s32 D_004B3400 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_0014E490(void) {
    if (D_004B3400 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3400, (s32) &D_0031E8D0, (s32) &D_004B3EF0);
    }
    return &D_004B3400;
}
