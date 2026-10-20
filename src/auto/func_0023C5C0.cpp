#define DEF_func_0023C5C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003442F8 __attribute__((section(".data")));

extern "C" void func_0023C5C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003442F8;
    func_0023D140((s32) arg0, arg1);
}
