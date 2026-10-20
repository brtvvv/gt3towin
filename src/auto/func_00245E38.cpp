#include "m2c.h"
extern "C" s32 func_00245AB0();                                /* extern */
extern "C" M2C_UNK func_00245E68(s32, s32);                    /* extern */

extern "C" void func_00245E38(s32 arg0) {
    func_00245E68(arg0, func_00245AB0());
}
