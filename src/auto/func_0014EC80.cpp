#define DEF_func_0014EC80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031E910 __attribute__((section(".data")));
extern s32 D_004B3410 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_0014EC80(void) {
    if (D_004B3410 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3410, (s32) &D_0031E910, (s32) &D_004B3EF0);
    }
    return &D_004B3410;
}
