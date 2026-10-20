#define DEF_func_00225010
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003428F8 __attribute__((section(".data")));
extern M2C_UNK D_00354E48;
extern s32 D_004B43E0 __attribute__((section(".data")));

extern "C" s32 *func_00225010(void) {
    if (D_004B43E0 == 0) {
        func_00220B40();
        func_0027D620((s32) &D_004B43E0, (s32) &D_003428F8, (s32) &D_00354E48);
    }
    return &D_004B43E0;
}
