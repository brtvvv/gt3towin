#define DEF_func_00143AB0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D718 __attribute__((section(".data")));

extern "C" s32 func_00143AB0(s32 arg0) {
    func_001430B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D718;
    return arg0;
}
