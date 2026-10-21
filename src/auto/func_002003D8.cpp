#define DEF_func_002003D8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002003D8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s16 *, 0xD0) > 0;
    func_00200348((s32) arg0, arg1, arg2);
    M2C_FIELD(arg0, s16 *, 8) = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) *(s32 *)((arg1 * 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x18), s32 *, 8));
    return temp_s0;
}
