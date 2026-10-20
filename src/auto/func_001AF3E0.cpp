#define DEF_func_001AF3E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003325D0 __attribute__((section(".data")));

extern "C" void *func_001AF3E0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_003325D0;
    func_001AF468((s32) arg0, 0x64, 0x64);
    return arg0;
}
