#define DEF_func_002327C0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002327C0(s32 arg0, s32 arg1) {
    return arg0 + M2C_INDEX(arg0, s32, 0x10, arg1) + 2;
}
