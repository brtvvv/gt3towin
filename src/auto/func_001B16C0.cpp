#define DEF_func_001B16C0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B16C0(s32 unused0, void *arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0xAC) = arg2;
    }
}
