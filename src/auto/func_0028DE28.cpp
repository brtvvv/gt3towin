#define DEF_func_0028DE28
#include "m2c.h"
#include "funcs.h"
extern s32 D_003098E8 __attribute__((section(".data")));
extern M2C_UNK D_004B2B28 __attribute__((section(".data")));

extern "C" s32 func_0028DE28(void) {
    D_003098E8 = -1;
    func_0027ED70((s32) &D_004B2B28, 0, 4);
    return 0;
}
