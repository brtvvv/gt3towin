#include "m2c.h"
extern "C" M2C_UNK func_001C05F8(s32);                         /* extern */

extern "C" void func_001B1828(s32 *arg0) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_001C05F8(temp_a0);
    }
}
