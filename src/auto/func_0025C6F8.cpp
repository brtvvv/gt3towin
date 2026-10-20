#define DEF_func_0025C6F8
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354A80;
extern M2C_UNK D_004A8440 __attribute__((section(".data")));
extern M2C_UNK D_004A84C0 __attribute__((section(".data")));

extern "C" void func_0025C6F8(void) {
    D_00354A80 = func_0026AD68(1);
    func_0025C400((s32) &D_004A84C0, 0x50434456);
    func_0025C400((s32) &D_004A8440, 0x50636476);
}
