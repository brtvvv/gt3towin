#define DEF_func_00177B40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328CB0 __attribute__((section(".data")));

extern "C" void func_00177B40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1DC) = &D_00328CB0;
    func_00232BB8((s32) arg0, arg1);
}
