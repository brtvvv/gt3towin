#define DEF_func_002250C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342920 __attribute__((section(".data")));
extern M2C_UNK D_00354E60;
extern s32 D_004B43D0 __attribute__((section(".data")));

extern "C" s32 *func_002250C0(void) {
    if (D_004B43D0 == 0) {
        func_00226DD0();
        func_0027D620((s32) &D_004B43D0, (s32) &D_00342920, (s32) &D_00354E60);
    }
    return &D_004B43D0;
}
