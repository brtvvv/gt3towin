#define DEF_func_0019ABC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003309E8 __attribute__((section(".data")));
extern M2C_UNK D_00354DA8;
extern s32 D_004B3CF0 __attribute__((section(".data")));

extern "C" s32 *func_0019ABC8(void) {
    if (D_004B3CF0 == 0) {
        func_001977D8();
        func_0027D620((s32) &D_004B3CF0, (s32) &D_003309E8, (s32) &D_00354DA8);
    }
    return &D_004B3CF0;
}
