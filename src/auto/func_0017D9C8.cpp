#define DEF_func_0017D9C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00329788 __attribute__((section(".data")));

extern "C" s32 func_0017D9C8(s32 arg0) {
    func_001793C8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00329788;
    M2C_FIELD(arg0, s32 *, 4) = 7;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg0 + 0x20);
    return arg0;
}
