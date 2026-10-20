#define DEF_func_001721A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003263B8 __attribute__((section(".data")));
extern s32 D_004B3700 __attribute__((section(".data")));
extern M2C_UNK D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_001721A8(void) {
    if (D_004B3700 == 0) {
        func_001D9038();
        func_0027D620((s32) &D_004B3700, (s32) &D_003263B8, (s32) &D_004B4220);
    }
    return &D_004B3700;
}
