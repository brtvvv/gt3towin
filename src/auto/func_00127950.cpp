#define DEF_func_00127950
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00314050 __attribute__((section(".data")));
extern M2C_UNK D_00354ED8;
extern s32 D_004B3000 __attribute__((section(".data")));

extern "C" s32 *func_00127950(void) {
    if (D_004B3000 == 0) {
        func_00246890();
        func_0027D620((s32) &D_004B3000, (s32) &D_00314050, (s32) &D_00354ED8);
    }
    return &D_004B3000;
}
