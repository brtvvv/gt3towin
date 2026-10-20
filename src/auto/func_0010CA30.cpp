#define DEF_func_0010CA30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030C680 __attribute__((section(".data")));
extern s32 D_004B2E90 __attribute__((section(".data")));
extern M2C_UNK D_004B3F10 __attribute__((section(".data")));

extern "C" s32 *func_0010CA30(void) {
    if (D_004B2E90 == 0) {
        func_001BC950();
        func_0027D620((s32) &D_004B2E90, (s32) &D_0030C680, (s32) &D_004B3F10);
    }
    return &D_004B2E90;
}
