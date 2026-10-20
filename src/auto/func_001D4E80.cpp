#define DEF_func_001D4E80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A698 __attribute__((section(".data")));

extern "C" s32 func_001D4E80(s32 arg0, s32 arg1) {
    func_001D6CA8(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0033A698;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x200) = 0;
    return arg0;
}
