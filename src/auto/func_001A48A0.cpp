#include "m2c.h"
extern "C" M2C_UNK func_001A46A0();                            /* extern */
extern "C" M2C_UNK func_001A47A8();                            /* extern */

extern "C" void func_001A48A0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        func_001A46A0();
        return;
    }
    func_001A47A8();
}
