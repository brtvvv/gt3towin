#define DEF_func_00231870
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00231870(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    func_002318F8((s32) arg0);
    func_002319A8((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0x64) = 4;
}
