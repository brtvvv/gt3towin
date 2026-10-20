#include "m2c.h"
extern "C" M2C_UNK func_001F0DF8(s32);                         /* extern */
extern "C" M2C_UNK func_001F5200();                            /* extern */

extern "C" void func_001F1A80(s32 arg0) {
    func_001F5200();
    func_001F0DF8(arg0);
}
