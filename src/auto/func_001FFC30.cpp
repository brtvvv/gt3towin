#define DEF_func_001FFC30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033F918 __attribute__((section(".data")));
extern M2C_UNK D_00354E40;
extern s32 D_004B42C0 __attribute__((section(".data")));

extern "C" s32 *func_001FFC30(void) {
    if (D_004B42C0 == 0) {
        func_0020FEE8();
        func_0027D620((s32) &D_004B42C0, (s32) &D_0033F918, (s32) &D_00354E40);
    }
    return &D_004B42C0;
}
