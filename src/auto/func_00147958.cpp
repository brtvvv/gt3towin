#define DEF_func_00147958
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D9C8 __attribute__((section(".data")));
extern M2C_UNK D_004B3320 __attribute__((section(".data")));
extern s32 D_004B3360 __attribute__((section(".data")));

extern "C" s32 *func_00147958(void) {
    if (D_004B3360 == 0) {
        func_00147EC0();
        func_0027D620((s32) &D_004B3360, (s32) &D_0031D9C8, (s32) &D_004B3320);
    }
    return &D_004B3360;
}
