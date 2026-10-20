#define DEF_func_00143E60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D678 __attribute__((section(".data")));

extern "C" s32 func_00143E60(s32 arg0, s32 arg1) {
    func_001430F8(arg0, arg1);
    M2C_FIELD(arg0, s8 *, 0x128) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D678;
    return arg0;
}
