#define DEF_func_001D6258
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A080 __attribute__((section(".data")));

extern "C" s32 func_001D6258(s32 arg0, s32 arg1) {
    func_001D6130(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x1F0) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0033A080;
    return arg0;
}
