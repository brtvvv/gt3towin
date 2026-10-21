#define DEF_func_0018E638
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032ECC8 __attribute__((section(".data")));

extern "C" s32 func_0018E638(s32 arg0) {
    func_00243CF8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0032ECC8;
    return arg0;
}
