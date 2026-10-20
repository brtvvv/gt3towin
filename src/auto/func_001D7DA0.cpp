#include "m2c.h"
extern "C" f32 func_001D11E8();                                /* extern */
extern "C" f32 func_001D7CB0(s32);                             /* extern */

extern "C" f32 func_001D7DA0(s32 arg0) {
    f32 temp_f20;

    temp_f20 = func_001D11E8();
    return temp_f20 - func_001D7CB0(arg0);
}
