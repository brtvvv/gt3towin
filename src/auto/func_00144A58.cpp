#define DEF_func_00144A58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D538 __attribute__((section(".data")));

extern "C" s32 func_00144A58(s32 arg0) {
    func_001430B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D538;
    return arg0;
}
