#include "m2c.h"
extern "C" void *func_001882A0(void *);                        /* extern */
extern "C" M2C_UNK func_001E1A08(s32, M2C_UNK, s32);           /* extern */

extern "C" void func_00187E18(void *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x50) = 0;
    func_001E1A08(temp_s1, 0, arg1);
    if (M2C_FIELD(func_001882A0(arg0), s32 *, 0x140) == 0) {
        func_001E1A08(temp_s1, 1, arg1);
    }
}
