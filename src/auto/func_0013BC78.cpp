#define DEF_func_0013BC78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031A838 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B30B0 __attribute__((section(".data")));

extern "C" s32 *func_0013BC78(void) {
    if (D_004B30B0 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B30B0, (s32) &D_0031A838, (s32) &D_00354E00);
    }
    return &D_004B30B0;
}
