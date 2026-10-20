#define DEF_func_001B36D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002C72B0 __attribute__((section(".data")));
extern M2C_UNK D_002C72C8 __attribute__((section(".data")));
extern M2C_UNK D_00333B30 __attribute__((section(".data")));
extern M2C_UNK D_00333B40 __attribute__((section(".data")));

extern "C" s32 func_001B36D0(s32 arg0) {
    func_00246830(arg0, (s32) &D_00333B30, (s32) &D_002C72B0, (s32) &D_002C72C8, 5);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00333B40;
    return arg0;
}
