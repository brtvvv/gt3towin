#define DEF_func_00225630
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342A58 __attribute__((section(".data")));
extern M2C_UNK D_00354E48;
extern s32 D_004B4400 __attribute__((section(".data")));

extern "C" s32 *func_00225630(void) {
    if (D_004B4400 == 0) {
        func_00220B40();
        func_0027D620((s32) &D_004B4400, (s32) &D_00342A58, (s32) &D_00354E48);
    }
    return &D_004B4400;
}
