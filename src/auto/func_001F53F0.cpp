#define DEF_func_001F53F0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F53F0(s32 arg0) {
    func_0026DB50(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_001F5258(arg0 + 0x18);
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    }
}
