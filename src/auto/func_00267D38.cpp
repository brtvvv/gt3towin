#define DEF_func_00267D38
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00267D38(void *arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = 8;
    M2C_FIELD(arg0, s8 *, 2) = arg2;
    M2C_FIELD(arg0, s8 *, 3) = arg3;
    M2C_FIELD(arg0, s8 *, 4) = (s8) ((arg4 * 0x10) | arg6);
    M2C_FIELD(arg0, s8 *, 5) = (s8) ((arg5 * 0x10) | arg7);
    M2C_FIELD(arg0, s8 *, 6) = (s8) ((arg_sp8 * 0x10) | arg_sp0);
    return arg0;
}
