#define DEF_func_001286B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003132D0 __attribute__((section(".data")));

extern "C" void func_001286B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003132D0;
    func_0023D140((s32) arg0, arg1);
}
