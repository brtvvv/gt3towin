#define DEF_func_00114AA8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00114AA8(void *arg0, s32 arg1) {
    s32 var_a1;

    if (arg1 != 2) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x38DC);
    } else {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x3974);
    }
    func_00114AD8((s32) arg0, var_a1);
}
