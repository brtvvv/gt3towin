#define DEF_func_001D08F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338F48 __attribute__((section(".data")));
extern M2C_UNK D_004B40C0 __attribute__((section(".data")));
extern s32 D_004B40D0 __attribute__((section(".data")));

extern "C" s32 *func_001D08F0(void) {
    if (D_004B40D0 == 0) {
        func_001CFFC0();
        func_0027D620((s32) &D_004B40D0, (s32) &D_00338F48, (s32) &D_004B40C0);
    }
    return &D_004B40D0;
}
