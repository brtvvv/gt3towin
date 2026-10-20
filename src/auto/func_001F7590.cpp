#include "m2c.h"
extern "C" M2C_UNK func_001F74D0(s32);                         /* extern */
extern "C" M2C_UNK func_001F7FD0();                            /* extern */

extern "C" void func_001F7590(s32 arg0) {
    func_001F7FD0();
    func_001F74D0(arg0);
}
