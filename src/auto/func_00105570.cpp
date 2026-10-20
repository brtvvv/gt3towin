#define DEF_func_00105570
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030B358 __attribute__((section(".data")));

extern "C" void func_00105570(void *arg0) {
    func_001BC578(M2C_FIELD(arg0, s32 *, 0x3A58), (s32) &D_0030B358);
    M2C_FIELD(arg0, s32 *, 0x3A58) = 0;
}
