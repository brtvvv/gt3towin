#define DEF_func_001CD9D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338A70 __attribute__((section(".data")));

extern "C" s32 func_001CD9D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001C0298(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00338A70;
    return arg0;
}
