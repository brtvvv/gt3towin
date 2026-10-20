#define DEF_func_0027DB40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349BF0 __attribute__((section(".data")));

extern "C" void func_0027DB40(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_00349BF0;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
