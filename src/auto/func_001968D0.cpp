#define DEF_func_001968D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FBA0 __attribute__((section(".data")));

extern "C" void func_001968D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0032FBA0;
    func_00197418((s32) arg0, arg1);
}
