#include "m2c.h"
extern "C" s32 func_0023D558(s32);                             /* extern */

extern "C" s32 func_001BC6C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0023D558(arg0 + 0xB0);
    return (temp_v0 == 0) ? 0 : (temp_v0 - 0x28);
}
