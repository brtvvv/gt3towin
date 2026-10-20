#include "m2c.h"
extern "C" s32 func_002370B8(s32);                             /* extern */
extern "C" M2C_UNK func_002370C8(s32);                         /* extern */
extern "C" M2C_UNK func_0023C0C0(s32);                         /* extern */

extern "C" void func_0023C0E8(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x10;
    if (func_002370B8(temp_s0) != 0) {
        func_0023C0C0(arg0);
        return;
    }
    func_002370C8(temp_s0);
}
