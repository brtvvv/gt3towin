#define DEF_func_00230B80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343370 __attribute__((section(".data")));

extern "C" s32 func_00230B80(s32 arg0) {
    func_00230290(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00343370;
    return arg0;
}
