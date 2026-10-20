#define DEF_func_00197418
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003300A8 __attribute__((section(".data")));

extern "C" void func_00197418(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003300A8;
    func_00197470();
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
