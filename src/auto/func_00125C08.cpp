#define DEF_func_00125C08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00313530 __attribute__((section(".data")));
extern M2C_UNK D_00354EC0;
extern s32 D_004B2D50 __attribute__((section(".data")));

extern "C" s32 *func_00125C08(void) {
    if (D_004B2D50 == 0) {
        func_0023D7A8();
        func_0027D620((s32) &D_004B2D50, (s32) &D_00313530, (s32) &D_00354EC0);
    }
    return &D_004B2D50;
}
