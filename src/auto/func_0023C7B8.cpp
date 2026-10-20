#define DEF_func_0023C7B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00345370 __attribute__((section(".data")));
extern M2C_UNK D_00354ED8;
extern s32 D_004B44A0 __attribute__((section(".data")));

extern "C" s32 *func_0023C7B8(void) {
    if (D_004B44A0 == 0) {
        func_00246890();
        func_0027D620((s32) &D_004B44A0, (s32) &D_00345370, (s32) &D_00354ED8);
    }
    return &D_004B44A0;
}
