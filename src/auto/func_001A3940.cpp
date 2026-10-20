#include "m2c.h"
extern "C" M2C_UNK func_001A3780();                            /* extern */
extern "C" M2C_UNK func_001A3860();                            /* extern */

extern "C" void func_001A3940(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        func_001A3780();
        return;
    }
    func_001A3860();
}
