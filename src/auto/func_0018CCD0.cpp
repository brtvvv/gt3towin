#define DEF_func_0018CCD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032E268 __attribute__((section(".data")));
extern M2C_UNK D_004B3A80 __attribute__((section(".data")));
extern s32 D_004B3AA0 __attribute__((section(".data")));

extern "C" s32 *func_0018CCD0(void) {
    if (D_004B3AA0 == 0) {
        func_0018B668();
        func_0027D620((s32) &D_004B3AA0, (s32) &D_0032E268, (s32) &D_004B3A80);
    }
    return &D_004B3AA0;
}
