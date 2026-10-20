#define DEF_func_0012CE30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00316478 __attribute__((section(".data")));

extern "C" s32 func_0012CE30(s32 arg0) {
    func_001CC2F8(arg0);
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00316478;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    return arg0;
}
