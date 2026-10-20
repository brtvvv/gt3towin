#define DEF_func_0021BAD8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342330 __attribute__((section(".data")));
extern M2C_UNK D_00354EC0;
extern s32 D_004B2D50 __attribute__((section(".data")));

extern "C" s32 *func_0021BAD8(void) {
    if (D_004B2D50 == 0) {
        func_0023D7A8();
        func_0027D620((s32) &D_004B2D50, (s32) &D_00342330, (s32) &D_00354EC0);
    }
    return &D_004B2D50;
}
