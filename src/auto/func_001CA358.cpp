#include "m2c.h"
extern "C" M2C_UNK func_001CA228();                            /* extern */

extern "C" void func_001CA358(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE8) = 1;
    func_001CA228();
}
