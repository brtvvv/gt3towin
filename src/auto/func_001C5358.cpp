#include "m2c.h"
extern "C" s32 func_001C5230(s32);                             /* extern */
extern "C" s32 func_001C5290();                                /* extern */
extern "C" s32 func_0023A2A8(M2C_UNK *, s32, s32);             /* extern */
extern "C" s32 func_0023A3B8(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK D_00354730;

extern "C" s32 func_001C5358(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= func_001C5290())) {
        return 0;
    }
    return func_0023A3B8(&D_00354730, func_0023A2A8(&D_00354730, func_001C5230(arg0), arg1));
}
