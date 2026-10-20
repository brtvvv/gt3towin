#define DEF_func_001D4E30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339A40 __attribute__((section(".data")));
extern s32 D_004B4140 __attribute__((section(".data")));
extern M2C_UNK D_004B4160 __attribute__((section(".data")));

extern "C" s32 *func_001D4E30(void) {
    if (D_004B4140 == 0) {
        func_001D6AD0();
        func_0027D620((s32) &D_004B4140, (s32) &D_00339A40, (s32) &D_004B4160);
    }
    return &D_004B4140;
}
