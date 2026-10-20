#define DEF_func_0018EB40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032ED68 __attribute__((section(".data")));
extern M2C_UNK D_004B3AF0 __attribute__((section(".data")));
extern s32 D_004B3B10 __attribute__((section(".data")));

extern "C" s32 *func_0018EB40(void) {
    if (D_004B3B10 == 0) {
        func_0018EBE0();
        func_0027D620((s32) &D_004B3B10, (s32) &D_0032ED68, (s32) &D_004B3AF0);
    }
    return &D_004B3B10;
}
