#define DEF_func_0023B090
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002ED3B8 __attribute__((section(".data")));

extern "C" s64 func_0023B090(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_002325C8((s32) &D_002ED3B8, 0x1E);
    return M2C_FIELD(((M2C_FIELD(temp_v0, u16 *, 0xA) * arg0) + temp_v0), s64 *, 0x10);
}
