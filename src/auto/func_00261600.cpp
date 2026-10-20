#include "m2c.h"
extern "C" M2C_UNK func_00286EC0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */

extern "C" s32 func_00261600(void *arg0) {
    s32 temp_s1;

    func_00286EE0(M2C_FIELD(arg0, s32 *, 0x1C));
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x14) == M2C_FIELD(arg0, s32 *, 0xC);
    func_00286EC0(M2C_FIELD(arg0, s32 *, 0x1C));
    return temp_s1;
}
