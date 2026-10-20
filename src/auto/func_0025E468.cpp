#define DEF_func_0025E468
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003472D8 __attribute__((section(".data")));

extern "C" s32 func_0025E468(s32 arg0) {
    func_0025C328(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_003472D8;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg0 + 0x40);
    M2C_FIELD(arg0, s32 *, 0x30) = 0x80;
    return arg0;
}
