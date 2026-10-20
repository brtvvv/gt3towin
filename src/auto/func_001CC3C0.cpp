#include "m2c.h"
extern "C" M2C_UNK func_00101A58(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_00102308(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_001C0888(void *);                      /* extern */

extern "C" void func_001CC3C0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        func_00102308(M2C_FIELD(arg0, s32 *, 0x40), 1);
    } else {
        func_00101A58(0);
    }
    func_001C0888(arg0 + 4);
}
