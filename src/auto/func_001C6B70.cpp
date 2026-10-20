#define DEF_func_001C6B70
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00337DE0 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));
extern s32 D_004B4010 __attribute__((section(".data")));

extern "C" s32 *func_001C6B70(void) {
    if (D_004B4010 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B4010, (s32) &D_00337DE0, (s32) &D_004B3EF0);
    }
    return &D_004B4010;
}
