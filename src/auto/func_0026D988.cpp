#define DEF_func_0026D988
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349070 __attribute__((section(".data")));

extern "C" s32 func_0026D988(s32 arg0, s32 arg1) {
    func_0026C400(arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00349070;
    return arg0;
}
