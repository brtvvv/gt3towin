#define DEF_func_001856A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C118 __attribute__((section(".data")));

extern "C" s32 func_001856A0(s32 arg0) {
    func_00211430(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &D_0032C118;
    return arg0;
}
