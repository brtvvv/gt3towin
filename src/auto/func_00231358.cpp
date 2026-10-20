#define DEF_func_00231358
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003433C8 __attribute__((section(".data")));

extern "C" s32 func_00231358(s32 arg0) {
    func_00230290(arg0);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003433C8;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
