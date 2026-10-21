#define DEF_func_0015FAD8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003532A8 __attribute__((section(".data")));

extern "C" void func_0015FAD8(s32 arg0, s32 arg1) {
    if (M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x540) != 0) {
        func_0027FDBC(arg1, func_00236928(arg0 + 0xE50));
        return;
    }
    strcpy((char *)(arg1), "----");
}
