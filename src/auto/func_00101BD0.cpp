#define DEF_func_00101BD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00309E70 __attribute__((section(".data")));

extern "C" void func_00101BD0(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_00309E70;
    func_00101D38((s32) arg0);
    func_00101AB0((s32) arg0, arg1);
}
