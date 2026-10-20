#include "m2c.h"
extern "C" M2C_UNK func_001953A8();                            /* extern */

extern "C" void func_0018D608(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_001953A8();
    }
}
