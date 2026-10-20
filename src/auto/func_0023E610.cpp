#include "m2c.h"
extern "C" M2C_UNK func_0023DC50();                            /* extern */
extern "C" M2C_UNK func_0023E570(void *);                      /* extern */
extern "C" M2C_UNK func_0023E668(void *);                      /* extern */

extern "C" void func_0023E610(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x244);
    func_0023DC50();
    if (M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        if (temp_s1 != M2C_FIELD(arg0, s32 *, 0x244)) {
            func_0023E668(arg0);
            goto block_3;
        }
    } else {
block_3:
        func_0023E570(arg0);
    }
}
