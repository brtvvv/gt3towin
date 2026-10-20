#define DEF_func_0013FD60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031B200 __attribute__((section(".data")));
extern s32 D_004B3260 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_0013FD60(void) {
    if (D_004B3260 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3260, (s32) &D_0031B200, (s32) &D_004B3EF0);
    }
    return &D_004B3260;
}
