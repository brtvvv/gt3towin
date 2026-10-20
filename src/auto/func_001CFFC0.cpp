#define DEF_func_001CFFC0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338DB0 __attribute__((section(".data")));
extern M2C_UNK D_004B3F10 __attribute__((section(".data")));
extern s32 D_004B40C0 __attribute__((section(".data")));

extern "C" s32 *func_001CFFC0(void) {
    if (D_004B40C0 == 0) {
        func_001BC950();
        func_0027D620((s32) &D_004B40C0, (s32) &D_00338DB0, (s32) &D_004B3F10);
    }
    return &D_004B40C0;
}
