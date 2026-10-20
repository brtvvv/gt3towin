#define DEF_func_0022BC30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern M2C_UNK D_00342E10 __attribute__((section(".data")));
extern s32 D_00354498;

extern "C" void func_0022BC30(void) {
    s32 temp_v0;

    if (D_00354498 == 0) {
        temp_v0 = func_002428C8((s32) &D_00342E10, 0, 0, 1, (s32) &D_002F49E0);
        func_0022BB38(temp_v0);
        D_00354498 = temp_v0;
    }
}
