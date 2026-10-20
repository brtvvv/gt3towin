#define DEF_func_001D6838
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A818 __attribute__((section(".data")));
extern M2C_UNK D_004B4170 __attribute__((section(".data")));
extern s32 D_004B41D0 __attribute__((section(".data")));

extern "C" s32 *func_001D6838(void) {
    if (D_004B41D0 == 0) {
        func_001D6888();
        func_0027D620((s32) &D_004B41D0, (s32) &D_0033A818, (s32) &D_004B4170);
    }
    return &D_004B41D0;
}
