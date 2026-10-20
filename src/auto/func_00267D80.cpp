#define DEF_func_00267D80
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00267D80(void *arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s8 arg6) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = 9;
    M2C_FIELD(arg0, s8 *, 2) = arg2;
    M2C_FIELD(arg0, s8 *, 3) = arg3;
    M2C_FIELD(arg0, s8 *, 4) = arg6;
    M2C_FIELD(arg0, s8 *, 5) = (s8) ((arg4 * 0x10) | arg5);
    return arg0;
}
