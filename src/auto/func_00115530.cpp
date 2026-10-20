#include "m2c.h"
extern "C" M2C_UNK func_00114078();                            /* extern */
extern "C" M2C_UNK func_00114110(s32);                         /* extern */
extern "C" M2C_UNK func_00114178(s32);                         /* extern */
extern "C" M2C_UNK func_001146F8(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_00114BA8(s32);                         /* extern */

extern "C" s32 func_00115530(s32 arg0) {
    func_00114078();
    func_00114178(arg0);
    func_00114BA8(arg0);
    func_001146F8(arg0, 1);
    func_00114110(arg0);
    return 1;
}
