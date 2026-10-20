#define DEF_func_00147270
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D8A0 __attribute__((section(".data")));
extern M2C_UNK D_00354EC8;
extern s32 D_004B3340 __attribute__((section(".data")));

extern "C" s32 *func_00147270(void) {
    if (D_004B3340 == 0) {
        func_0023D728();
        func_0027D620((s32) &D_004B3340, (s32) &D_0031D8A0, (s32) &D_00354EC8);
    }
    return &D_004B3340;
}
