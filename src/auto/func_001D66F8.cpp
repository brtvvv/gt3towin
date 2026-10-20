#define DEF_func_001D66F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A7A0 __attribute__((section(".data")));
extern M2C_UNK D_004B4190 __attribute__((section(".data")));
extern s32 D_004B41B0 __attribute__((section(".data")));

extern "C" s32 *func_001D66F8(void) {
    if (D_004B41B0 == 0) {
        func_001D6748();
        func_0027D620((s32) &D_004B41B0, (s32) &D_0033A7A0, (s32) &D_004B4190);
    }
    return &D_004B41B0;
}
