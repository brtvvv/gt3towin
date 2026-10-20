#define DEF_func_0023C6A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00345070 __attribute__((section(".data")));
extern M2C_UNK D_00354ED8;
extern s32 D_004B4490 __attribute__((section(".data")));

extern "C" s32 *func_0023C6A8(void) {
    if (D_004B4490 == 0) {
        func_00246890();
        func_0027D620((s32) &D_004B4490, (s32) &D_00345070, (s32) &D_00354ED8);
    }
    return &D_004B4490;
}
