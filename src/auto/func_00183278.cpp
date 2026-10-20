#define DEF_func_00183278
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032ACE8 __attribute__((section(".data")));

extern "C" s32 func_00183278(s32 arg0) {
    func_00182B40(arg0);
    M2C_FIELD(arg0, s64 *, 0x258) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032ACE8;
    M2C_FIELD(arg0, s32 *, 0x260) = 0;
    return arg0;
}
