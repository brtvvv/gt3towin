#define DEF_func_0021A6C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00354440 __attribute__((section(".data")));

extern "C" void func_0021A6C8(s32 arg0, s32 arg1) {
    if (func_0021A580(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (M2C_FIELD(arg0, s64 *, 0x18) - func_0021ED00(func_0021EE60(), (s32) &D_00354440));
    }
}
