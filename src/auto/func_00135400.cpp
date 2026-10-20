#define DEF_func_00135400
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00318568 __attribute__((section(".data")));

extern "C" void func_00135400(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &D_00318568;
    func_00211550((s32) arg0, arg1);
}
