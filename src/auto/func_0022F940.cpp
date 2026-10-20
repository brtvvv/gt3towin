#include "m2c.h"
extern "C" M2C_UNK func_00230958();                            /* extern */
extern "C" M2C_UNK func_00286EB0(s32);                         /* extern */

extern "C" void func_0022F940(void *arg0) {
    func_00230958();
    func_00286EB0(M2C_FIELD(arg0, s32 *, 0x970));
}
