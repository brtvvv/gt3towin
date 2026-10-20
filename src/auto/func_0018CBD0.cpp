#define DEF_func_0018CBD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032E230 __attribute__((section(".data")));
extern M2C_UNK D_00354D48;
extern s32 D_004B3A90 __attribute__((section(".data")));

extern "C" s32 *func_0018CBD0(void) {
    if (D_004B3A90 == 0) {
        func_00189E10();
        func_0027D620((s32) &D_004B3A90, (s32) &D_0032E230, (s32) &D_00354D48);
    }
    return &D_004B3A90;
}
