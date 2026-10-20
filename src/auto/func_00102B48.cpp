#include "m2c.h"
extern "C" s32 func_00102F40();                                /* extern */
extern "C" M2C_UNK func_0025ED90(s32, s32);                    /* extern */

extern "C" void func_00102B48(s32 arg0) {
    func_0025ED90(arg0, func_00102F40());
}
