#include "m2c.h"
extern "C" M2C_UNK func_00218480(s32);                         /* extern */
extern "C" M2C_UNK func_00219260(s32);                         /* extern */

extern "C" s32 func_00219198(s32 arg0) {
    func_00218480(arg0 + 0x638);
    func_00219260(arg0);
    return arg0;
}
