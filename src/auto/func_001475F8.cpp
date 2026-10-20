#define DEF_func_001475F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D930 __attribute__((section(".data")));
extern s32 D_004B32E0 __attribute__((section(".data")));
extern M2C_UNK D_004B32F0 __attribute__((section(".data")));

extern "C" s32 *func_001475F8(void) {
    if (D_004B32E0 == 0) {
        func_00147810();
        func_0027D620((s32) &D_004B32E0, (s32) &D_0031D930, (s32) &D_004B32F0);
    }
    return &D_004B32E0;
}
