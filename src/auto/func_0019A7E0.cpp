#define DEF_func_0019A7E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330968 __attribute__((section(".data")));
extern M2C_UNK D_00354DA8;
extern s32 D_004B3C20 __attribute__((section(".data")));

extern "C" s32 *func_0019A7E0(void) {
    if (D_004B3C20 == 0) {
        func_001977D8();
        func_0027D620((s32) &D_004B3C20, (s32) &D_00330968, (s32) &D_00354DA8);
    }
    return &D_004B3C20;
}
