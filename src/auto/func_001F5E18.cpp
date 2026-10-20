#define DEF_func_001F5E18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033F4D8 __attribute__((section(".data")));

extern "C" void *func_001F5E18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x5C) = &D_0033F4D8;
    func_001F52D8(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    return arg0;
}
