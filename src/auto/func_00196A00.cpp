#define DEF_func_00196A00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FEB0 __attribute__((section(".data")));
extern M2C_UNK D_00354DA8;
extern s32 D_004B2BD0 __attribute__((section(".data")));

extern "C" s32 *func_00196A00(void) {
    if (D_004B2BD0 == 0) {
        func_001977D8();
        func_0027D620((s32) &D_004B2BD0, (s32) &D_0032FEB0, (s32) &D_00354DA8);
    }
    return &D_004B2BD0;
}
