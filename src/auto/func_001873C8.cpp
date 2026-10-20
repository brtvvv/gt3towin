#define DEF_func_001873C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C8E0 __attribute__((section(".data")));

extern "C" s32 func_001873C8(s32 arg0) {
    func_0017D9C8(arg0);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0032C8E0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    return arg0;
}
