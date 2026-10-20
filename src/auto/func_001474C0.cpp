#define DEF_func_001474C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D900 __attribute__((section(".data")));
extern M2C_UNK D_004B32F0 __attribute__((section(".data")));
extern s32 D_004B3330 __attribute__((section(".data")));

extern "C" s32 *func_001474C0(void) {
    if (D_004B3330 == 0) {
        func_00147810();
        func_0027D620((s32) &D_004B3330, (s32) &D_0031D900, (s32) &D_004B32F0);
    }
    return &D_004B3330;
}
