#define DEF_func_001BCA18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335CA0 __attribute__((section(".data")));
extern M2C_UNK D_00335CC0 __attribute__((section(".data")));
extern s32 D_004B2D00 __attribute__((section(".data")));

extern "C" s32 *func_001BCA18(void) {
    if (D_004B2D00 == 0) {
        func_001BCAD0();
        func_001BCB20();
        func_0027D5F8((s32) &D_004B2D00, (s32) &D_00335CA0, (s32) &D_00335CC0, 2);
    }
    return &D_004B2D00;
}
