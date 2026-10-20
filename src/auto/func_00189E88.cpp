#define DEF_func_00189E88
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D3F0 __attribute__((section(".data")));

extern "C" void func_00189E88(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032D3F0;
    func_00187548((s32) arg0, arg1);
}
