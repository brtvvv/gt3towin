#define DEF_func_001AF948
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332BA8 __attribute__((section(".data")));
extern M2C_UNK D_00354ED8;
extern s32 D_004B3DD0 __attribute__((section(".data")));

extern "C" s32 *func_001AF948(void) {
    if (D_004B3DD0 == 0) {
        func_00246890();
        func_0027D620((s32) &D_004B3DD0, (s32) &D_00332BA8, (s32) &D_00354ED8);
    }
    return &D_004B3DD0;
}
