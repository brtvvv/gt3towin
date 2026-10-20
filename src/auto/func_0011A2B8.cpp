#define DEF_func_0011A2B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00310F38 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B2F90 __attribute__((section(".data")));

extern "C" s32 *func_0011A2B8(void) {
    if (D_004B2F90 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B2F90, (s32) &D_00310F38, (s32) &D_00354E00);
    }
    return &D_004B2F90;
}
