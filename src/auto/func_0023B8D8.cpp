#define DEF_func_0023B8D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002ED3B8 __attribute__((section(".data")));

extern "C" s32 func_0023B8D8(s32 arg0) {
    return M2C_FIELD(func_00232658((s32) &D_002ED3B8, 0x1E, arg0), s32 *, 0xF8);
}
