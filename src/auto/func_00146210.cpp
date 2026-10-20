#define DEF_func_00146210
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00146210(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (((arg1 == 0x52) && ((arg2 == 0) || (arg2 == M2C_FIELD(arg0, s64 *, 0x248))) && ((arg3 == 0) || (arg3 == M2C_FIELD(arg0, s64 *, 0x240))) && ((arg4 == 0) || (arg4 == M2C_FIELD(arg0, s32 *, 0x284))) && ((arg5 == 0) || (arg5 == M2C_FIELD(arg0, s32 *, 0x288)))) || (arg1 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x60) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}
