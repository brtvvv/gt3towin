#define DEF_func_001CE890
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338B00 __attribute__((section(".data")));
extern M2C_UNK D_004B3F10 __attribute__((section(".data")));
extern s32 D_004B40A0 __attribute__((section(".data")));

extern "C" s32 *func_001CE890(void) {
    if (D_004B40A0 == 0) {
        func_001BC950();
        func_0027D620((s32) &D_004B40A0, (s32) &D_00338B00, (s32) &D_004B3F10);
    }
    return &D_004B40A0;
}
