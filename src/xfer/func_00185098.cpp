#define DEF_func_00185098
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032B608 __attribute__((section(".data")));

extern "C" s32 func_00185098(s32 arg0) {
    func_001819C0(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0032B608;
    return arg0;
}
