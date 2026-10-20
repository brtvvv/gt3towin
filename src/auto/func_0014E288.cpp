#define DEF_func_0014E288
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031E8A0 __attribute__((section(".data")));
extern s32 D_004B33F0 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_0014E288(void) {
    if (D_004B33F0 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B33F0, (s32) &D_0031E8A0, (s32) &D_004B3EF0);
    }
    return &D_004B33F0;
}
