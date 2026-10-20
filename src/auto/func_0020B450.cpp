#define DEF_func_0020B450
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003409A0 __attribute__((section(".data")));

extern "C" void *func_0020B450(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x98) = &D_003409A0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x87654321;
    func_0020B4C0((s32) arg0);
    return arg0;
}
