#define DEF_func_001D6888
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A838 __attribute__((section(".data")));
extern s32 D_004B4170 __attribute__((section(".data")));
extern M2C_UNK D_004B41C0 __attribute__((section(".data")));

extern "C" s32 *func_001D6888(void) {
    if (D_004B4170 == 0) {
        func_001D69F8();
        func_0027D620((s32) &D_004B4170, (s32) &D_0033A838, (s32) &D_004B41C0);
    }
    return &D_004B4170;
}
