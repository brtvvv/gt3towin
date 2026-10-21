#define DEF_func_00160690
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00160690(s32 arg0) {
    s32 g = func_00219680() + 0x307C8;
    if (M2C_FIELD(g, s32 *, 0x540) == 0) return 0;
    return func_002362C0(arg0 + 0xE50) == 0x4E;
}
