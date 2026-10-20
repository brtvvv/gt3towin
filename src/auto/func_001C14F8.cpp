#define DEF_func_001C14F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003362C8 __attribute__((section(".data")));
extern M2C_UNK D_004B3F10 __attribute__((section(".data")));
extern s32 D_004B3F50 __attribute__((section(".data")));

extern "C" s32 *func_001C14F8(void) {
    if (D_004B3F50 == 0) {
        func_001BC950();
        func_0027D620((s32) &D_004B3F50, (s32) &D_003362C8, (s32) &D_004B3F10);
    }
    return &D_004B3F50;
}
