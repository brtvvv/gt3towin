#define DEF_func_0015DC80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003224E8 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B3020 __attribute__((section(".data")));

extern "C" s32 *func_0015DC80(void) {
    if (D_004B3020 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B3020, (s32) &D_003224E8, (s32) &D_00354E00);
    }
    return &D_004B3020;
}
