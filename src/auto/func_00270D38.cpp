#define DEF_func_00270D38
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00270D38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    func_00271018((s32) arg0, arg1);
}
