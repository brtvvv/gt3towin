#define DEF_func_00115670
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F040 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B2F00 __attribute__((section(".data")));

extern "C" s32 *func_00115670(void) {
    if (D_004B2F00 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B2F00, (s32) &D_0030F040, (s32) &D_00354E00);
    }
    return &D_004B2F00;
}
