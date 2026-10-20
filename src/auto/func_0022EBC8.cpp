#define DEF_func_0022EBC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343278 __attribute__((section(".data")));

extern "C" void func_0022EBC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &D_00343278;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0022ED40((s32) arg0);
    }
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
