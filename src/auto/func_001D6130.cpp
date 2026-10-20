#define DEF_func_001D6130
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A2A0 __attribute__((section(".data")));

extern "C" s32 func_001D6130(s32 arg0, s32 arg1) {
    func_001D5050(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0033A2A0;
    return arg0;
}
