#define DEF_func_00267C60
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00267C60(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = 3;
    M2C_FIELD(arg0, s8 *, 2) = arg2;
    M2C_FIELD(arg0, s8 *, 3) = arg3;
    M2C_FIELD(arg0, s8 *, 4) = arg4;
    return arg0;
}
