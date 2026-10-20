#include "m2c.h"
extern "C" s32 func_002431C8(s32, s32);                        /* extern */
extern "C" M2C_UNK func_00249EB0(s32);                         /* extern */

extern "C" void func_002431F8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_002431C8(arg1, M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
    func_00249EB0(temp_v0);
}
