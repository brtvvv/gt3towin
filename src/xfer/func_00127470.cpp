#define DEF_func_00127470
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00313C08 __attribute__((section(".data")));

extern "C" s32 func_00127470(s32 arg0) {
    func_001CC2F8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00313C08;
    return arg0;
}
