#define DEF_func_00147F10
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031DAA0 __attribute__((section(".data")));
extern M2C_UNK D_00354EC0;
extern s32 D_004B3290 __attribute__((section(".data")));

extern "C" s32 *func_00147F10(void) {
    if (D_004B3290 == 0) {
        func_0023D7A8();
        func_0027D620((s32) &D_004B3290, (s32) &D_0031DAA0, (s32) &D_00354EC0);
    }
    return &D_004B3290;
}
