#include "m2c.h"
extern "C" M2C_UNK func_0027EBC8(s32, s32, s32);               /* extern */

extern "C" s32 func_001A7438(s32 arg0, void *arg1) {
    func_0027EBC8(arg0 + 0x24, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8));
    return arg0;
}
