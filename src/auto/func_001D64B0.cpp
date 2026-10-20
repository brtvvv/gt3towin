#define DEF_func_001D64B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339C40 __attribute__((section(".data")));

extern "C" s32 func_001D64B0(s32 arg0, s32 arg1) {
    func_001D6388(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x1F0) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00339C40;
    return arg0;
}
