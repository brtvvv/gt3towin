#include "m2c.h"
extern u8 D_00354A4C;
extern s32 D_00354C7C;
extern s32 D_00354C80;
extern s32 D_00354C84;
extern s32 D_00354C88;

extern "C" void func_0024D590(void) {
    if (D_00354A4C == 0) {
        D_00354C7C = 0;
        D_00354A4C = 1;
        D_00354C80 = 0;
        D_00354C84 = 0;
        D_00354C88 = 0;
    }
}
