#define DEF_func_0019DDE0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330BC0 __attribute__((section(".data")));

extern "C" s32 func_0019DDE0(s32 arg0) {
    func_0019D268(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330BC0;
    return arg0;
}
