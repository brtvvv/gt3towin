#define DEF_func_00199288
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003304C0 __attribute__((section(".data")));

extern "C" s32 func_00199288(s32 arg0) {
    func_00197398(arg0);
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003304C0;
    M2C_FIELD(arg0, s8 *, 0x19) = 0;
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B) = 0;
    return arg0;
}
