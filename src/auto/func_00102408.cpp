#define DEF_func_00102408
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00309FC0 __attribute__((section(".data")));
extern M2C_UNK D_00309FF8 __attribute__((section(".data")));
extern M2C_UNK D_0030A030 __attribute__((section(".data")));
extern M2C_UNK D_0030A068 __attribute__((section(".data")));
extern M2C_UNK *D_0049D100 __attribute__((section(".data")));
extern M2C_UNK *D_0049D510 __attribute__((section(".data")));
extern M2C_UNK *D_0049D528 __attribute__((section(".data")));
extern M2C_UNK *D_0049D540 __attribute__((section(".data")));

extern "C" void func_00102408(void) {
    func_00101A98((s32) &D_0049D540);
    D_0049D540 = &D_0030A068;
    func_00101A98((s32) &D_0049D528);
    D_0049D528 = &D_0030A030;
    func_00101A98((s32) &D_0049D510);
    D_0049D510 = &D_00309FF8;
    func_00101A98((s32) &D_0049D100);
    D_0049D100 = &D_00309FC0;
}
