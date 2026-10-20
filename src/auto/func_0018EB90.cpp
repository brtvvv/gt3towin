#define DEF_func_0018EB90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032ED80 __attribute__((section(".data")));
extern M2C_UNK D_004B3AF0 __attribute__((section(".data")));
extern s32 D_004B3B20 __attribute__((section(".data")));

extern "C" s32 *func_0018EB90(void) {
    if (D_004B3B20 == 0) {
        func_0018EBE0();
        func_0027D620((s32) &D_004B3B20, (s32) &D_0032ED80, (s32) &D_004B3AF0);
    }
    return &D_004B3B20;
}
