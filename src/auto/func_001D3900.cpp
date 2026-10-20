#define DEF_func_001D3900
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339450 __attribute__((section(".data")));

extern "C" s32 func_001D3900(s32 arg0) {
    func_001D37D0(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00339450;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}
