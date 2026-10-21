#define DEF_func_001E49A8
#include "m2c.h"
#include "funcs.h"
extern f32 D_00351D88;

extern "C" void func_001E49A8(s32 arg0) {
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    void *var_s0;

    var_s1 = arg0;
    var_s2 = var_s1 + 0xE8C;
    var_s0 = var_s1 + 0xF84;
    func_001E4290(arg0, var_s2);
    var_a2 = 1;
    if (!(M2C_FIELD(var_s0, f32 *, 0x430) < D_00351D88)) {
        var_a2 = 0;
    }
    func_001E3F98(var_s1, var_s2, var_a2);
}
