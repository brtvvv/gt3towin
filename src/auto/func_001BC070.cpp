#define DEF_func_001BC070
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335938 __attribute__((section(".data")));
extern M2C_UNK D_00354E80;
extern s32 D_004B3F00 __attribute__((section(".data")));

extern "C" s32 *func_001BC070(void) {
    if (D_004B3F00 == 0) {
        func_0022F4B0();
        func_0027D620((s32) &D_004B3F00, (s32) &D_00335938, (s32) &D_00354E80);
    }
    return &D_004B3F00;
}
