#define DEF_func_00115E64
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00115E64(s32 unused0, s32 unused1, s32 arg2, s32 *arg3) {
    if (arg2 != 0) {
        *arg3 = 1;
        return;
    }
    *arg3 = 3;
}
