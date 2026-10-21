#define DEF_func_0015E1B0
#include "m2c.h"
#include "funcs.h"
extern s32 D_002B2EFC __attribute__((section(".data")));
extern M2C_UNK D_003532A0 __attribute__((section(".data")));
extern M2C_UNK D_003532A8 __attribute__((section(".data")));

extern "C" void func_0015E1B0(void *arg0, s32 arg1) {
    if (M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x540) != 0) {
        if (func_00169680() != 0) {
            func_0024C4D0(arg1, &D_003532A0, M2C_FIELD(arg0, s32 *, 0xF98), D_002B2EFC);
            return;
        }
        goto block_4;
    }
block_4:
    strcpy((char *)(arg1), "----");
}
