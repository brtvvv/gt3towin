#define DEF_func_00183C68
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032B7D0 __attribute__((section(".data")));

extern "C" s32 func_00183C68(s32 arg0) {
    func_00184EE8(arg0);
    M2C_FIELD(arg0, s32 *, 0x48) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032B7D0;
    return arg0;
}
