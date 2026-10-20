#define DEF_func_001CD4B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338908 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));
extern s32 D_004B4080 __attribute__((section(".data")));

extern "C" s32 *func_001CD4B0(void) {
    if (D_004B4080 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B4080, (s32) &D_00338908, (s32) &D_004B3EF0);
    }
    return &D_004B4080;
}
