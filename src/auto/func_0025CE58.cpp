#include "m2c.h"
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */

extern "C" s32 func_0025CE58(void *arg0) {
    func_00286EE0(M2C_FIELD(arg0, s32 *, 0x40));
    return M2C_FIELD(arg0, s32 *, 0x80) == 0;
}
