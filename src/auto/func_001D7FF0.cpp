#define DEF_func_001D7FF0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D7FF0(s32 arg0, s32 arg1) {
    f32 var_f20;
    f32 var_f21;

    var_f20 = func_001D7DA0(arg0);
    var_f21 = func_001D7DE0(arg0);
    M2C_FIELD(arg0, s32 *, 0xA0) = 3;
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
    if (arg1 != 0) {
        var_f20 -= func_001D7DA0(arg1);
        var_f21 -= func_001D7DE0(arg1);
    }
    func_001D7E20(arg0, var_f20);
    func_001D7E98(arg0, var_f21);
}
