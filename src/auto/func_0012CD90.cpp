#define DEF_func_0012CD90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00316108 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B2D10 __attribute__((section(".data")));

extern "C" s32 *func_0012CD90(void) {
    if (D_004B2D10 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B2D10, (s32) &D_00316108, (s32) &D_00354E00);
    }
    return &D_004B2D10;
}
