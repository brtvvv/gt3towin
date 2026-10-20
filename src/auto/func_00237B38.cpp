#include "m2c.h"
extern "C" s32 func_00232210(s32);                             /* extern */
extern "C" M2C_UNK func_00232E30(s32, s32);                    /* extern */

extern "C" void func_00237B38(s32 arg0, s32 arg1) {
    func_00232E30(arg0, func_00232210(arg1));
}
