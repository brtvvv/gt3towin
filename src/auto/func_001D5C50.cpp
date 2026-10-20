#include "m2c.h"
extern "C" M2C_UNK func_001D5E90();                            /* extern */

extern "C" void func_001D5C50(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x238) = arg1;
    if (arg2 != 0) {
        func_001D5E90();
    }
}
