#define DEF_func_001D9038
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033AC28 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));
extern s32 D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_001D9038(void) {
    if (D_004B4220 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B4220, (s32) &D_0033AC28, (s32) &D_004B3EF0);
    }
    return &D_004B4220;
}
