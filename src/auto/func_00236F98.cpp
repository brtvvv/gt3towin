#define DEF_func_00236F98
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00236F98(s32 unused0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;

    temp_a2 = (arg2 < arg1) ? arg1 : arg2;
    return (arg3 >= temp_a2) ? temp_a2 : arg3;
}
