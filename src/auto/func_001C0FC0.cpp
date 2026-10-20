#define DEF_func_001C0FC0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00336248 __attribute__((section(".data")));
extern M2C_UNK D_00354DF8;
extern s32 D_004B3F40 __attribute__((section(".data")));

extern "C" s32 *func_001C0FC0(void) {
    if (D_004B3F40 == 0) {
        func_001C1060();
        func_0027D620((s32) &D_004B3F40, (s32) &D_00336248, (s32) &D_00354DF8);
    }
    return &D_004B3F40;
}
