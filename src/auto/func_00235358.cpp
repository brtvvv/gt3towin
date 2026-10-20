#include "m2c.h"
extern "C" void *func_00232658(void *, M2C_UNK, s64);          /* extern */
extern "C" M2C_UNK func_002327C0(s32, u16);                    /* extern */

extern "C" void func_00235358(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x1D0;
    func_002327C0(M2C_FIELD(temp_s0, s32 *, 8), M2C_FIELD(func_00232658(temp_s0, 6, M2C_FIELD(arg0, s64 *, 0x30)), u16 *, 0x12));
}
