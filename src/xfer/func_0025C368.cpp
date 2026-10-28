#define DEF_func_0025C368
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00347148 __attribute__((section(".data")));

extern "C" void func_0025C368(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_00347148;
    func_0027D2F8(M2C_FIELD(arg0, s32 *, 0));
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
