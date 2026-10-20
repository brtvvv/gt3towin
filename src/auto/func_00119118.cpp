#define DEF_func_00119118
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00310708 __attribute__((section(".data")));
extern s32 D_004B2F70 __attribute__((section(".data")));
extern M2C_UNK D_004B3F10 __attribute__((section(".data")));

extern "C" s32 *func_00119118(void) {
    if (D_004B2F70 == 0) {
        func_001BC950();
        func_0027D620((s32) &D_004B2F70, (s32) &D_00310708, (s32) &D_004B3F10);
    }
    return &D_004B2F70;
}
