#define DEF_func_0023F320
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003454C8 __attribute__((section(".data")));
extern M2C_UNK D_00354F10;
extern s32 D_004B44B0 __attribute__((section(".data")));

extern "C" s32 *func_0023F320(void) {
    if (D_004B44B0 == 0) {
        func_0026F4C0();
        func_0027D620((s32) &D_004B44B0, (s32) &D_003454C8, (s32) &D_00354F10);
    }
    return &D_004B44B0;
}
