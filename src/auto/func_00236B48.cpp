#include "m2c.h"
extern "C" s32 func_00236100();                                /* extern */
extern "C" M2C_UNK func_00236830(s32);                         /* extern */

extern "C" void func_00236B48(void) {
    func_00236830(func_00236100());
}
