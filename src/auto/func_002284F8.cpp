#define DEF_func_002284F8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002284F8(void *arg0, s32 arg1, s32 arg2) {
    return *(s32 *)(((((M2C_FIELD(arg0, s16 *, 4) - 1) * arg2) + arg1) * 4) + M2C_FIELD(arg0, s32 *, 0));
}
