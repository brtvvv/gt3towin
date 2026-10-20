#include "m2c.h"
extern "C" M2C_UNK func_001AB360(void *);                      /* extern */

extern "C" void func_00178290(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18BC) != 0) {
        func_001AB360(arg0 + 0x11F8);
    }
}
