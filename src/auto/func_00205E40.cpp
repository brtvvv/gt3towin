#define DEF_func_00205E40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003404F8 __attribute__((section(".data")));

extern "C" void func_00205E40(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_003404F8;
    func_001FF748((s32) arg0, arg1);
}
