#define DEF_func_001994D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330468 __attribute__((section(".data")));

extern "C" s32 func_001994D8(s32 arg0) {
    func_00197398(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330468;
    return arg0;
}
