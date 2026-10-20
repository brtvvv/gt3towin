#define DEF_func_00267CE0
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00267CE0(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = 6;
    M2C_FIELD(arg0, s8 *, 2) = arg2;
    M2C_FIELD(arg0, s8 *, 3) = arg3;
    M2C_FIELD(arg0, s8 *, 4) = arg4;
    M2C_FIELD(arg0, s8 *, 5) = arg5;
    M2C_FIELD(arg0, s8 *, 6) = (s8) ((arg6 * 0x10) | arg7);
    return arg0;
}
