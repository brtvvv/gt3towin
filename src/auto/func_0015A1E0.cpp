#define DEF_func_0015A1E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321718 __attribute__((section(".data")));
extern M2C_UNK D_004B3490 __attribute__((section(".data")));
extern s32 D_004B35C0 __attribute__((section(".data")));

extern "C" s32 *func_0015A1E0(void) {
    if (D_004B35C0 == 0) {
        func_00151E88();
        func_0027D620((s32) &D_004B35C0, (s32) &D_00321718, (s32) &D_004B3490);
    }
    return &D_004B35C0;
}
