#define DEF_func_00109F50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030BD08 __attribute__((section(".data")));
extern s32 D_004B2EA0 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_00109F50(void) {
    if (D_004B2EA0 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B2EA0, (s32) &D_0030BD08, (s32) &D_004B3EF0);
    }
    return &D_004B2EA0;
}
