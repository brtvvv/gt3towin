#define DEF_func_001BC8D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335B28 __attribute__((section(".data")));

extern "C" void func_001BC8D0(s32 arg0, M2C_UNK *arg1) {
    M2C_UNK *var_a1;

    var_a1 = arg1;
    if (var_a1 == NULL) {
        var_a1 = &D_00335B28;
    }
    func_001BC578(arg0, (s32) var_a1);
}
