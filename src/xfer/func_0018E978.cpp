#define DEF_func_0018E978
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032EC28 __attribute__((section(".data")));

extern "C" s32 func_0018E978(s32 arg0) {
    func_0018E638(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0032EC28;
    return arg0;
}
