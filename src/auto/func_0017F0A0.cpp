#define DEF_func_0017F0A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00329898 __attribute__((section(".data")));
extern M2C_UNK D_00354D70;
extern s32 D_004B38C0 __attribute__((section(".data")));

extern "C" s32 *func_0017F0A0(void) {
    if (D_004B38C0 == 0) {
        func_00179818();
        func_0027D620((s32) &D_004B38C0, (s32) &D_00329898, (s32) &D_00354D70);
    }
    return &D_004B38C0;
}
