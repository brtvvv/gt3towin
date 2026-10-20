#include "m2c.h"
extern "C" M2C_UNK func_0021C088(void *, void *);              /* extern */
extern "C" M2C_UNK func_0027ED70(void *, M2C_UNK, s32);        /* extern */

extern "C" void func_0021C2C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        func_0027ED70(arg0 + (temp_v0 + 0x14), 0, 8 - temp_v0);
        func_0021C088(arg0, arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
