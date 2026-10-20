#define DEF_func_0019DF90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330DF8 __attribute__((section(".data")));
extern M2C_UNK D_004B2BD0 __attribute__((section(".data")));
extern s32 D_004B3D30 __attribute__((section(".data")));

extern "C" s32 *func_0019DF90(void) {
    if (D_004B3D30 == 0) {
        func_00196A00();
        func_0027D620((s32) &D_004B3D30, (s32) &D_00330DF8, (s32) &D_004B2BD0);
    }
    return &D_004B3D30;
}
