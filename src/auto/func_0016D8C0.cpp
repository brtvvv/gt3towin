#define DEF_func_0016D8C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325F68 __attribute__((section(".data")));

extern "C" s32 func_0016D8C0(s32 arg0, s32 arg1) {
    func_001D5050(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00325F68;
    return arg0;
}
