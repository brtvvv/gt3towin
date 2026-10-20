#include "m2c.h"
extern "C" void *func_001882A0(void *);                        /* extern */
extern "C" M2C_UNK func_00188518();                            /* extern */
extern "C" M2C_UNK func_001E1A80(s32, M2C_UNK);                /* extern */

extern "C" void func_0018A358(void *arg0) {
    func_00188518();
    func_001E1A80(M2C_FIELD(arg0, s32 *, 8), 0);
    if (M2C_FIELD(func_001882A0(arg0), s32 *, 0x140) == 0) {
        func_001E1A80(M2C_FIELD(arg0, s32 *, 8), 1);
    }
}
