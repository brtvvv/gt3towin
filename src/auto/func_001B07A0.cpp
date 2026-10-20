#include "m2c.h"
extern "C" M2C_UNK func_001B0838(void *);                      /* extern */
extern "C" M2C_UNK func_001B0E10(s32);                         /* extern */
extern "C" M2C_UNK func_001B0F38();                            /* extern */
extern "C" M2C_UNK func_001B16D0(void *, M2C_UNK);             /* extern */

extern "C" void func_001B07A0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x1F0) != 0) {
        func_001B0E10(arg1);
        func_001B16D0(arg0, 1);
        func_001B0838(arg0);
        func_001B0F38();
    }
}
