#define DEF_func_0028AC98
#include "m2c.h"
#include "funcs.h"
extern s32 D_003098D0 __attribute__((section(".data")));
extern M2C_UNK D_004B26A8 __attribute__((section(".data")));

extern "C" s32 func_0028AC98(void) {
    D_003098D0 = 0;
    func_0027ED70((s32) &D_004B26A8, 0, 4);
    return 0;
}
