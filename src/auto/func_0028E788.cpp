#include "m2c.h"
extern "C" M2C_UNK func_002872A0(M2C_UNK, M2C_UNK);            /* extern */
extern "C" s32 func_002872B0(M2C_UNK);                         /* extern */
extern "C" M2C_UNK func_00287310();                            /* extern */

extern "C" s32 func_0028E788(void) {
    if (func_002872B0(4) & 0x40000) {
        func_002872A0(4, 0x40000);
        func_00287310();
        return 1;
    }
    return 0;
}
