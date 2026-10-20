#define DEF_func_00125A10
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003132F0 __attribute__((section(".data")));
extern s32 D_004B2FD0 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_00125A10(void) {
    if (D_004B2FD0 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B2FD0, (s32) &D_003132F0, (s32) &D_004B3EF0);
    }
    return &D_004B2FD0;
}
