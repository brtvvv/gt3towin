#define DEF_func_00169150
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00169150(void) {
    s32 g = func_00219680() + 0x307C8;
    s32 p = M2C_FIELD(g, s32 *, 0x540);
    if (p == 0) return 0;
    return func_00238C20(p + 0x10, 61) != 0;
}
