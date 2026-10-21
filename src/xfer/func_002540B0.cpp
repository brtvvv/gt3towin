#define DEF_func_002540B0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_002540B0(s32 arg0) {
    M2C_FIELD(M2C_SPR(0x70003000), s32 *, 0x14C) = arg0;
}
