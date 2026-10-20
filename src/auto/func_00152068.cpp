#define DEF_func_00152068
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031FA28 __attribute__((section(".data")));
extern M2C_UNK D_00354EC8;
extern s32 D_004B33C0 __attribute__((section(".data")));

extern "C" s32 *func_00152068(void) {
    if (D_004B33C0 == 0) {
        func_0023D728();
        func_0027D620((s32) &D_004B33C0, (s32) &D_0031FA28, (s32) &D_00354EC8);
    }
    return &D_004B33C0;
}
