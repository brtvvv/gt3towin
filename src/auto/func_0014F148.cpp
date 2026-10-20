#include "m2c.h"
extern "C" M2C_UNK func_0014F100(s32);                         /* extern */
extern "C" M2C_UNK func_0027FDBC(s32);                         /* extern */

extern "C" void func_0014F148(s32 arg0) {
    func_0027FDBC(arg0 + 0x14);
    func_0014F100(arg0);
}
