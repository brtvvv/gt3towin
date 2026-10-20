#define DEF_func_001353C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00318568 __attribute__((section(".data")));

extern "C" s32 func_001353C8(s32 arg0) {
    func_00211430(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &D_00318568;
    return arg0;
}
