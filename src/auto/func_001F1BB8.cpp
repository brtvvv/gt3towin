#include "m2c.h"
extern "C" M2C_UNK func_001ED420(void *);                      /* extern */
extern "C" M2C_UNK func_001F0840(s32, void *);                 /* extern */
extern "C" M2C_UNK func_001F0870(s32, void *);                 /* extern */
extern "C" s32 func_001F1AD0(s32);                             /* extern */

extern "C" void func_001F1BB8(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, u8 *, 0x1464) != 0) {
        func_001ED420(arg1);
        return;
    }
    if (func_001F1AD0(arg0 + 0xE340) == 0) {
        func_001F0840(arg0, arg1);
        return;
    }
    func_001F0870(arg0, arg1);
}
