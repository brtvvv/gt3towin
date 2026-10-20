#define DEF_func_001D3B48
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339548 __attribute__((section(".data")));
extern M2C_UNK D_004B4110 __attribute__((section(".data")));
extern s32 D_004B4120 __attribute__((section(".data")));

extern "C" s32 *func_001D3B48(void) {
    if (D_004B4120 == 0) {
        func_001D38B0();
        func_0027D620((s32) &D_004B4120, (s32) &D_00339548, (s32) &D_004B4110);
    }
    return &D_004B4120;
}
