#define DEF_func_002696A8
#include "m2c.h"
#include "funcs.h"
extern s8 D_003007F8 __attribute__((section(".data")));
extern M2C_UNK D_00303D28 __attribute__((section(".data")));
extern s32 D_00354B48;

void func_002696A8(void) {
    if (D_00354B48 == 0) {
        D_00354B48 = 1;
        func_0025D418((s32) &D_00303D28);
        func_0027ED70((s32) &D_003007F8, 0, 0x7F0);
        D_003007F8 = 0x2D;
        func_00269710(0x3C);
    }
}
