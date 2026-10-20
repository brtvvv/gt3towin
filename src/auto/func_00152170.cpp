#define DEF_func_00152170
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031FA88 __attribute__((section(".data")));
extern M2C_UNK D_00354EC0;
extern s32 D_004B3390 __attribute__((section(".data")));

extern "C" s32 *func_00152170(void) {
    if (D_004B3390 == 0) {
        func_0023D7A8();
        func_0027D620((s32) &D_004B3390, (s32) &D_0031FA88, (s32) &D_00354EC0);
    }
    return &D_004B3390;
}
