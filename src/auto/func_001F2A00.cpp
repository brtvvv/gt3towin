#define DEF_func_001F2A00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033EE88 __attribute__((section(".data")));

extern "C" s32 func_001F2A00(s32 arg0) {
    func_001F3938(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0xE3A8) = &D_0033EE88;
    return arg0;
}
