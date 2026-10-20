#define DEF_func_001D6748
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A7C0 __attribute__((section(".data")));
extern s32 D_004B4190 __attribute__((section(".data")));
extern M2C_UNK D_004B41C0 __attribute__((section(".data")));

extern "C" s32 *func_001D6748(void) {
    if (D_004B4190 == 0) {
        func_001D69F8();
        func_0027D620((s32) &D_004B4190, (s32) &D_0033A7C0, (s32) &D_004B41C0);
    }
    return &D_004B4190;
}
