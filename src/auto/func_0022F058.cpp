#define DEF_func_0022F058
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0022F058(void *arg0) {
    return ~M2C_FIELD(arg0, s32 *, 0x2C) & (M2C_FIELD(arg0, s32 *, 0x1C) & M2C_FIELD(arg0, s32 *, 0x28)) & M2C_FIELD(arg0, s32 *, 0x18);
}
