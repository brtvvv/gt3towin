#include "m2c.h"
extern "C" M2C_UNK func_0021EF08(s32, s32, s32);               /* extern */

extern "C" void func_0021E878(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
    func_0021EF08(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 0), arg1);
}
