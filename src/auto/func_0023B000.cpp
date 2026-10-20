#define DEF_func_0023B000
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002ED3B8 __attribute__((section(".data")));

extern "C" u16 func_0023B000(void) {
    return M2C_FIELD(func_002325C8((s32) &D_002ED3B8, 0x22), u16 *, 8);
}
