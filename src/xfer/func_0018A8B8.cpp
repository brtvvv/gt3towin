#define DEF_func_0018A8B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D6E8 __attribute__((section(".data")));

extern "C" s32 func_0018A8B8(s32 arg0) {
    func_00191900(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0032D6E8;
    return arg0;
}
