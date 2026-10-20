#define DEF_func_0021B8D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342280 __attribute__((section(".data")));
extern M2C_UNK D_00354EC8;
extern s32 D_004B2D30 __attribute__((section(".data")));

extern "C" s32 *func_0021B8D0(void) {
    if (D_004B2D30 == 0) {
        func_0023D728();
        func_0027D620((s32) &D_004B2D30, (s32) &D_00342280, (s32) &D_00354EC8);
    }
    return &D_004B2D30;
}
