#define DEF_func_001D6AD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A8A8 __attribute__((section(".data")));
extern s32 D_004B4160 __attribute__((section(".data")));
extern M2C_UNK D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_001D6AD0(void) {
    if (D_004B4160 == 0) {
        func_001D9038();
        func_0027D620((s32) &D_004B4160, (s32) &D_0033A8A8, (s32) &D_004B4220);
    }
    return &D_004B4160;
}
