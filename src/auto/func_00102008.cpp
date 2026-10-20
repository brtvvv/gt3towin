#define DEF_func_00102008
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00309EC0 __attribute__((section(".data")));
extern M2C_UNK D_00354D20;
extern s32 D_004B2DC0 __attribute__((section(".data")));

extern "C" s32 *func_00102008(void) {
    if (D_004B2DC0 == 0) {
        func_00101B20();
        func_0027D620((s32) &D_004B2DC0, (s32) &D_00309EC0, (s32) &D_00354D20);
    }
    return &D_004B2DC0;
}
