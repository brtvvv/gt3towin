#include "m2c.h"
extern "C" M2C_UNK func_00219260();                            /* extern */
extern "C" M2C_UNK func_00219538();                            /* extern */
extern "C" M2C_UNK func_00251E38(s32, s32);                    /* extern */

extern "C" void func_002193B0(void *arg0) {
    func_00219260();
    func_00251E38(M2C_FIELD(arg0, s32 *, 0x64) * 2, M2C_FIELD(arg0, s32 *, 0x68) * 2);
    func_00219538();
}
