#define DEF_func_0025E4B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003472D8 __attribute__((section(".data")));

extern "C" void func_0025E4B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_003472D8;
    func_0025C368((s32) arg0, arg1);
}
