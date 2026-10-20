#define DEF_func_00191270
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F740 __attribute__((section(".data")));

extern "C" s32 func_00191270(s32 arg0) {
    func_001910B8(arg0);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0032F740;
    return arg0;
}
