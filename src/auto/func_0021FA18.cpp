#define DEF_func_0021FA18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342558 __attribute__((section(".data")));
extern M2C_UNK D_00342568 __attribute__((section(".data")));
extern M2C_UNK D_00342578 __attribute__((section(".data")));
extern M2C_UNK D_00342588 __attribute__((section(".data")));

extern "C" s32 func_0021FA18(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a1;

    var_a1 = &D_00342558;
    switch (arg2) {                                 /* irregular */
    case 3:
        var_a1 = &D_00342568;
        break;
    case 1:
        var_a1 = &D_00342578;
        break;
    case 2:
        var_a1 = &D_00342588;
        break;
    }
    func_0027FDBC(arg1, (s32) var_a1);
    func_0027F9CC(arg1, func_0021F9E8(arg0));
    return arg1;
}
