#define DEF_func_00147860
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D9A0 __attribute__((section(".data")));
extern s32 D_004B3300 __attribute__((section(".data")));
extern M2C_UNK D_004B3360 __attribute__((section(".data")));

extern "C" s32 *func_00147860(void) {
    if (D_004B3300 == 0) {
        func_00147958();
        func_0027D620((s32) &D_004B3300, (s32) &D_0031D9A0, (s32) &D_004B3360);
    }
    return &D_004B3300;
}
