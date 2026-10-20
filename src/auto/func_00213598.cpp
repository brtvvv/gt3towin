#include "m2c.h"
extern "C" M2C_UNK func_00213098(s32, s32);                    /* extern */

extern "C" void func_00213598(s32 arg0, s32 arg1, s32 arg2) {
    func_00213098((arg1 * 0x300) + arg0, arg2);
}
