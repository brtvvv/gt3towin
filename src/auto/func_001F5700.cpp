#define DEF_func_001F5700
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F5700(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp[4];
    s32 var_s0;

    var_s0 = arg1;
    if (arg2 == 0) {
        func_001F53F0(arg0);
    }
    if (var_s0 > 0) {
        do {
            func_001F5588(arg0, (s32) sp);
            var_s0 -= 1;
        } while (var_s0 != 0);
    }
}
