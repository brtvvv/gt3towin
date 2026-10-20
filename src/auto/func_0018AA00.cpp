#define DEF_func_0018AA00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032DAA0 __attribute__((section(".data")));

extern "C" s32 func_0018AA00(s32 arg0) {
    func_0017E6E8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0032DAA0;
    return arg0;
}
