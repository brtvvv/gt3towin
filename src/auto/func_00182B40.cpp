#define DEF_func_00182B40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A808 __attribute__((section(".data")));

extern "C" s32 func_00182B40(s32 arg0) {
    func_00182220(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032A808;
    return arg0;
}
