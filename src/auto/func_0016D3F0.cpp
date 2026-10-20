#define DEF_func_0016D3F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00326140 __attribute__((section(".data")));

extern "C" s32 func_0016D3F0(s32 arg0, s32 arg1) {
    func_001D6CA8(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00326140;
    return arg0;
}
