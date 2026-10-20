#define DEF_func_0019A8E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330998 __attribute__((section(".data")));
extern M2C_UNK D_00354DA8;
extern s32 D_004B3C10 __attribute__((section(".data")));

extern "C" s32 *func_0019A8E8(void) {
    if (D_004B3C10 == 0) {
        func_001977D8();
        func_0027D620((s32) &D_004B3C10, (s32) &D_00330998, (s32) &D_00354DA8);
    }
    return &D_004B3C10;
}
