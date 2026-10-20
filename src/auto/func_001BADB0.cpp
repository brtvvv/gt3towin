#define DEF_func_001BADB0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001BADB0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_001C3670(arg2, arg1);
    if (temp_v0 != 0) {
        func_001BAC38(arg0, temp_v0, func_001C36B0(arg2, temp_v0));
    }
}
