#define DEF_func_0019A938
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330468 __attribute__((section(".data")));

extern "C" void func_0019A938(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330468;
    func_00197418((s32) arg0, arg1);
}
