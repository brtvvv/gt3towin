#define DEF_func_001BC950
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335C28 __attribute__((section(".data")));
extern s32 D_004B3F10 __attribute__((section(".data")));
extern M2C_UNK D_004B4100 __attribute__((section(".data")));

extern "C" s32 *func_001BC950(void) {
    if (D_004B3F10 == 0) {
        func_001D28A8();
        func_0027D620((s32) &D_004B3F10, (s32) &D_00335C28, (s32) &D_004B4100);
    }
    return &D_004B3F10;
}
