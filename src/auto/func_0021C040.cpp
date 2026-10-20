#include "m2c.h"
extern "C" M2C_UNK func_0021BFC0(void *);                      /* extern */
extern "C" M2C_UNK func_0027ED70(void *, M2C_UNK, M2C_UNK);    /* extern */

extern "C" void *func_0021C040(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    func_0021BFC0(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0027ED70(arg0 + 0x14, 0, 8);
    return arg0;
}
