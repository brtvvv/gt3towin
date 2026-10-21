#define DEF_func_0018B5B8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0018B5B8(void *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_FIELD(arg0, s8 *, 0x8C) = arg2;
    M2C_FIELD(arg0, s8 *, 0x8D) = arg3;
    func_0018B1B8((s32) arg0, arg1, arg4, arg5, arg6);
}
