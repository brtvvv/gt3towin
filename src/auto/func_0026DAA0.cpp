#define DEF_func_0026DAA0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349088 __attribute__((section(".data")));
extern M2C_UNK D_00354F00;
extern s32 D_004B4530 __attribute__((section(".data")));

extern "C" s32 *func_0026DAA0(void) {
    if (D_004B4530 == 0) {
        func_0026D2B8();
        func_0027D620((s32) &D_004B4530, (s32) &D_00349088, (s32) &D_00354F00);
    }
    return &D_004B4530;
}
