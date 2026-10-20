#define DEF_func_0019E098
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330E20 __attribute__((section(".data")));
extern M2C_UNK D_004B2BD0 __attribute__((section(".data")));
extern s32 D_004B3D10 __attribute__((section(".data")));

extern "C" s32 *func_0019E098(void) {
    if (D_004B3D10 == 0) {
        func_00196A00();
        func_0027D620((s32) &D_004B3D10, (s32) &D_00330E20, (s32) &D_004B2BD0);
    }
    return &D_004B3D10;
}
