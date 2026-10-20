#define DEF_func_0016E368
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325D10 __attribute__((section(".data")));

extern "C" s32 func_0016E368(s32 arg0, s32 arg1) {
    func_001D6CA8(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x5DC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00325D10;
    M2C_FIELD(arg0, s32 *, 0x5E0) = 0;
    return arg0;
}
