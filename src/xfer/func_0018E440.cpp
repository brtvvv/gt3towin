#define DEF_func_0018E440
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032ED18 __attribute__((section(".data")));

extern "C" s32 func_0018E440(s32 arg0) {
    func_00243CF8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0032ED18;
    return arg0;
}
