#define DEF_func_00243758
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F5260 __attribute__((section(".data")));
extern s8 D_002F5330 __attribute__((section(".data")));
extern s32 D_00354944;
extern s32 D_00354948;
extern s32 D_0035494C;

extern "C" void func_00243758(void) {
    D_002F5330 = 0;
    D_0035494C = 0;
    D_00354948 = 0;
    D_00354944 = 0;
    func_00243AF0((s32) &D_002F5260);
}
