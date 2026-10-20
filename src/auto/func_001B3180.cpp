#include "m2c.h"
extern "C" M2C_UNK func_001B27C8(void *);                      /* extern */

extern "C" void func_001B3180(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x908) == 0) {
        func_001B27C8(arg0 + ((arg1 * 0xF0) + 0x240));
    }
}
