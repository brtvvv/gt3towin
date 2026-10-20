#define DEF_func_001B1938
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B1938(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = func_001B1628(arg0, arg1, arg2, 1);
}
