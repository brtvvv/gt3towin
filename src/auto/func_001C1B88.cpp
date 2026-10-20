#define DEF_func_001C1B88
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00336698 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));
extern s32 D_004B3F70 __attribute__((section(".data")));

extern "C" s32 *func_001C1B88(void) {
    if (D_004B3F70 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3F70, (s32) &D_00336698, (s32) &D_004B3EF0);
    }
    return &D_004B3F70;
}
