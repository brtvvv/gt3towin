#define DEF_func_001830C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A478 __attribute__((section(".data")));

extern "C" s32 func_001830C0(s32 arg0) {
    func_00182C88(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0032A478;
    return arg0;
}
