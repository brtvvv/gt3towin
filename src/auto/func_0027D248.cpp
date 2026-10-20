#define DEF_func_0027D248
#include "m2c.h"
#include "funcs.h"
extern s32 D_00307ECC __attribute__((section(".data")));

extern "C" s32 func_0027D248(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00307ECC;
    D_00307ECC = arg0;
    return temp_v0;
}
