#define DEF_func_001BC9A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335C68 __attribute__((section(".data")));
extern M2C_UNK D_00354EC8;
extern s32 D_004B2D20 __attribute__((section(".data")));

extern "C" s32 *func_001BC9A0(void) {
    if (D_004B2D20 == 0) {
        func_0023D728();
        func_0027D620((s32) &D_004B2D20, (s32) &D_00335C68, (s32) &D_00354EC8);
    }
    return &D_004B2D20;
}
