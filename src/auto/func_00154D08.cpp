#define DEF_func_00154D08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003205B8 __attribute__((section(".data")));
extern M2C_UNK D_003531F0 __attribute__((section(".data")));
extern s32 D_004B3510 __attribute__((section(".data")));

extern "C" s32 *func_00154D08(void) {
    if (D_004B3510 == 0) {
        func_00151EE8();
        func_0027D5F8((s32) &D_004B3510, (s32) &D_003205B8, (s32) &D_003531F0, 1);
    }
    return &D_004B3510;
}
