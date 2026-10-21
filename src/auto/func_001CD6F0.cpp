#define DEF_func_001CD6F0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001CD6F0(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 < M2C_FIELD(arg0, s32 *, 4)) {
        func_001CD548(arg1, M2C_FIELD(arg0, s32 *, 0) + *(s32 *)((arg2 << 5) + M2C_FIELD(arg0, s32 *, 8)));
        return 1;
    }
    return 0;
}
