#define DEF_func_001445B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D5D8 __attribute__((section(".data")));

extern "C" s32 func_001445B0(s32 arg0) {
    func_00143E28(arg0);
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D5D8;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    return arg0;
}
