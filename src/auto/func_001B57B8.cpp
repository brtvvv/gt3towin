#define DEF_func_001B57B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003345C8 __attribute__((section(".data")));
extern M2C_UNK D_00354EC0;
extern s32 D_004B2EC0 __attribute__((section(".data")));

extern "C" s32 *func_001B57B8(void) {
    if (D_004B2EC0 == 0) {
        func_0023D7A8();
        func_0027D620((s32) &D_004B2EC0, (s32) &D_003345C8, (s32) &D_00354EC0);
    }
    return &D_004B2EC0;
}
