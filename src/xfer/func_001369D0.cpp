#define DEF_func_001369D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003185F8 __attribute__((section(".data")));

extern "C" void func_001369D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x0) = &D_003185F8;
    func_001C07B8((s32) (arg0 + 0x4), 2);
    func_00101AB0((s32) arg0, arg1);
}
