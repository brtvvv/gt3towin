#define DEF_func_001768A0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001768A0(void *arg0, void *arg1) {
    return M2C_FIELD(*(s32 *)((M2C_FIELD(arg0, s32 *, 4) * 4) + M2C_FIELD(M2C_FIELD(arg1, void **, 0x18), s32 *, 8)), s32 *, 0x220);
}
