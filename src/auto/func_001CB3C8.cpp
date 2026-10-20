#define DEF_func_001CB3C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003385F8 __attribute__((section(".data")));
extern M2C_UNK D_00354EC8;
extern s32 D_004B2EE0 __attribute__((section(".data")));

extern "C" s32 *func_001CB3C8(void) {
    if (D_004B2EE0 == 0) {
        func_0023D728();
        func_0027D620((s32) &D_004B2EE0, (s32) &D_003385F8, (s32) &D_00354EC8);
    }
    return &D_004B2EE0;
}
