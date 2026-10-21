#define DEF_func_00115DD0
#include "m2c.h"
#include "funcs.h"
extern s32 D_0035294C;
extern s32 D_00354648;

extern "C" void func_00115DD0(s32 unused0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg1 == func_0022E8B0()) {
        temp_v0 = arg2 == 2;
        D_00354648 = temp_v0;
        D_0035294C = temp_v0;
    }
    func_00270A88(func_0022E438(), arg1, arg2);
}
