#define DEF_func_001B3720
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333B40 __attribute__((section(".data")));

extern "C" void func_001B3720(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00333B40;
    func_00246860((s32) arg0, arg1);
}
