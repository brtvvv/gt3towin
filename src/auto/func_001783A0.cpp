#include "m2c.h"
extern "C" M2C_UNK func_001AB990(void *);                      /* extern */

extern "C" void func_001783A0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18BC) != 0) {
        func_001AB990(arg0 + 0x11F8);
    }
}
