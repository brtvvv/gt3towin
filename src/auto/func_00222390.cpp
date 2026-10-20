#define DEF_func_00222390
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342820 __attribute__((section(".data")));

extern "C" void *func_00222390(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x98C) = &D_00342820;
    func_002223F8((s32) arg0, arg1);
    return arg0;
}
