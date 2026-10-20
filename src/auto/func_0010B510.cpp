#define DEF_func_0010B510
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030C320 __attribute__((section(".data")));

extern "C" void func_0010B510(void *arg0, s32 arg1) {
    s32 var_a0;

    if (arg1 != 2) {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x3ADC);
    } else {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x3B48);
    }
    func_001BC578(var_a0, (s32) &D_0030C320);
}
