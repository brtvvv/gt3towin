#include "m2c.h"
extern "C" M2C_UNK func_002726F8(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_00272BD0(s32);                         /* extern */
extern "C" M2C_UNK func_00289568(M2C_UNK);                     /* extern */

extern "C" void func_0025ED98(void *arg0) {
    func_00289568(0);
    func_002726F8(0);
    func_00272BD0(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
