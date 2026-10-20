#include "m2c.h"
extern "C" M2C_UNK func_001CD800();                            /* extern */

extern "C" void func_001CD868(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_001CD800();
}
