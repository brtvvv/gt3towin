#define DEF_func_001C2290
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003368F0 __attribute__((section(".data")));
extern M2C_UNK D_00353F88 __attribute__((section(".data")));
extern s32 D_004B3F80 __attribute__((section(".data")));

extern "C" s32 *func_001C2290(void) {
    if (D_004B3F80 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B3F80, (s32) &D_003368F0, (s32) &D_00353F88, 1);
    }
    return &D_004B3F80;
}
