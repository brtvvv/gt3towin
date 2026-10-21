#define DEF_func_0012B9E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0029D250 __attribute__((section(".data")));

extern "C" s32 func_0012B9E0(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x108);
    if (temp_a1 == 5) {
        return 0;
    }
    return *(s32 *)((M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0xBE0) * 4) + *(s32 *)((arg1 * 8) + M2C_INDEX(&D_0029D250, s32, 0, temp_a1)));
}
