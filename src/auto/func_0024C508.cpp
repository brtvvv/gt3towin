#define DEF_func_0024C508
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F8900 __attribute__((section(".data")));

extern "C" void func_0024C508(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_s0;

    var_s0 = &D_002F8900;
    var_s0 = &D_002F8900;
    M2C_FIELD(&D_002F8900, s8 **, 0xE0) = arg0;
    func_0024EC38((s32) func_0024C4A8, arg1, arg2);
    *M2C_FIELD(&D_002F8900, s8 **, 0xE0) = 0;
    M2C_FIELD(&D_002F8900, s8 **, 0xE0) = NULL;
}
