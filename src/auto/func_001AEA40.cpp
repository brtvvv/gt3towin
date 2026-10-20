#include "m2c.h"
extern "C" M2C_UNK func_00101A58(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_00286DD0(s32);                         /* extern */

extern "C" void func_001AEA40(void *arg0) {
    func_00101A58(0);
    func_00286DD0(M2C_FIELD(arg0, s32 *, 0x10));
}
