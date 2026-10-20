#include "m2c.h"
extern "C" M2C_UNK func_001199A8();                            /* extern */
extern "C" M2C_UNK func_001199D0(s32);                         /* extern */
extern "C" M2C_UNK func_001199F0(s32);                         /* extern */
extern "C" M2C_UNK func_00119B58(s32);                         /* extern */
extern "C" s32 func_00119E20(s32);                             /* extern */

extern "C" s32 func_0011A128(s32 arg0) {
    s32 temp_s1;

    func_001199A8();
    func_001199F0(arg0);
    temp_s1 = func_00119E20(arg0);
    func_00119B58(arg0);
    func_001199D0(arg0);
    return temp_s1;
}
