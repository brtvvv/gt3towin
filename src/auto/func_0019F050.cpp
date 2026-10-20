#define DEF_func_0019F050
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003314A0 __attribute__((section(".data")));

extern "C" void func_0019F050(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003314A0;
    func_0019D3A0((s32) arg0, arg1);
}
