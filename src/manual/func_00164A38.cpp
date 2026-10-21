#define DEF_func_00164A38
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00164A38(s32 arg0, s32 arg1) {
    s32 r = 0; s32 g = func_00219680() + 0x307C8; if (M2C_FIELD(g, s32 *, 0x540) != 0) { M2C_FIELD(arg0, s32 *, 0xF6C) = arg1; r = func_00168210(arg0 + 0xE40); } return r;
}
