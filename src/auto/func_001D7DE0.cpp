#include "m2c.h"
extern "C" f32 func_001D1228();                                /* extern */
extern "C" f32 func_001D7CC8(s32);                             /* extern */

extern "C" f32 func_001D7DE0(s32 arg0) {
    f32 temp_f20;

    temp_f20 = func_001D1228();
    return temp_f20 - func_001D7CC8(arg0);
}
