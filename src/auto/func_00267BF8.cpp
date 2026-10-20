#define DEF_func_00267BF8
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00267BF8(void *arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    M2C_FIELD(arg0, s8 *, 1) = 1;
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 2) = arg2;
    M2C_FIELD(arg0, s8 *, 3) = arg3;
    M2C_FIELD(arg0, s8 *, 4) = (s8) ((arg5 * 0x10) | arg4);
    M2C_FIELD(arg0, s8 *, 5) = (s8) ((arg7 * 0x10) | arg6);
    M2C_FIELD(arg0, s8 *, 6) = (s8) arg_sp0;
    return arg0;
}
