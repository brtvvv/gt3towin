#define DEF_func_002389D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343CF8 __attribute__((section(".data")));

extern "C" void func_002389D8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1DC) = &D_00343CF8;
    func_00232BB8((s32) arg0, arg1);
}
