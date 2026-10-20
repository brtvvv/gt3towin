#define DEF_func_0019B9D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00353A78 __attribute__((section(".data")));

extern "C" void func_0019B9D8(s32 arg0, M2C_UNK *arg1, s32 arg2) {
    M2C_UNK *var_a1;

    var_a1 = arg1;
    if (var_a1 == NULL) {
        var_a1 = &D_00353A78;
    }
    if (arg2 < 0) {
        func_0027FDBC(arg0, (s32) var_a1);
        return;
    }
    func_00280088(arg0, (s32) var_a1, arg2 - 1);
    M2C_FIELD((arg2 + arg0), s8 *, -1) = 0;
}
