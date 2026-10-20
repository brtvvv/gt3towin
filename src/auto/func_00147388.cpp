#define DEF_func_00147388
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D8D8 __attribute__((section(".data")));
extern s32 D_004B32C0 __attribute__((section(".data")));
extern M2C_UNK D_004B32F0 __attribute__((section(".data")));

extern "C" s32 *func_00147388(void) {
    if (D_004B32C0 == 0) {
        func_00147810();
        func_0027D620((s32) &D_004B32C0, (s32) &D_0031D8D8, (s32) &D_004B32F0);
    }
    return &D_004B32C0;
}
