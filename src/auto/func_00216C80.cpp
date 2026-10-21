#define DEF_func_00216C80
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00216C80(s8 *arg0, s32 arg1) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = arg1;
    var_s0 = arg0;
    var_s0 += func_0021EC58(func_0021EE60(), var_s1);
    *var_s0 = 1;
}
