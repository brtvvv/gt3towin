#define DEF_func_00147A58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D9F0 __attribute__((section(".data")));
extern s32 D_004B32B0 __attribute__((section(".data")));
extern M2C_UNK D_004B3320 __attribute__((section(".data")));

extern "C" s32 *func_00147A58(void) {
    if (D_004B32B0 == 0) {
        func_00147EC0();
        func_0027D620((s32) &D_004B32B0, (s32) &D_0031D9F0, (s32) &D_004B3320);
    }
    return &D_004B32B0;
}
