#define DEF_func_0022C018
#include "m2c.h"
#include "funcs.h"
extern s32 D_003544BC;
extern M2C_UNK D_0049EB80 __attribute__((section(".data")));

extern "C" void func_0022C018(void) {
    if (D_003544BC != 0) {
        func_0026A720((s32) &D_0049EB80);
        D_003544BC = 0;
    }
}
