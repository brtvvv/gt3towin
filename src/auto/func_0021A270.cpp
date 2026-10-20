#include "m2c.h"
extern "C" M2C_UNK func_001DAE70(s32);                         /* extern */
extern "C" s32 func_0021A068();                                /* extern */
extern "C" s32 func_00238C40(s32);                             /* extern */

extern "C" void func_0021A270(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_0021A068();
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (M2C_FIELD(arg0, s64 *, 0x18) - func_00238C40(temp_v0 + 0x10));
        func_001DAE70(temp_v0 + 0x204);
    }
}
