#define DEF_func_001CB368
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003385C8 __attribute__((section(".data")));
extern M2C_UNK D_003385E8 __attribute__((section(".data")));
extern s32 D_004B4060 __attribute__((section(".data")));

extern "C" s32 *func_001CB368(void) {
    if (D_004B4060 == 0) {
        func_001CB3C8();
        func_001D28A8();
        func_0027D5F8((s32) &D_004B4060, (s32) &D_003385C8, (s32) &D_003385E8, 2);
    }
    return &D_004B4060;
}
