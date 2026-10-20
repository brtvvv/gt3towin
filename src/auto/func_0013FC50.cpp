#define DEF_func_0013FC50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031B238 __attribute__((section(".data")));
extern M2C_UNK D_004B30B0 __attribute__((section(".data")));
extern s32 D_004B3250 __attribute__((section(".data")));

extern "C" s32 *func_0013FC50(void) {
    if (D_004B3250 == 0) {
        func_00139078();
        func_0027D620((s32) &D_004B3250, (s32) &D_0031B238, (s32) &D_004B30B0);
    }
    return &D_004B3250;
}
