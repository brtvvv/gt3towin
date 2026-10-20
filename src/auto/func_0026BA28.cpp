#define DEF_func_0026BA28
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00347A08 __attribute__((section(".data")));

extern "C" void *func_0026BA28(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00347A08;
    func_0026BC28((s32) arg0, arg1, arg2);
    return arg0;
}
