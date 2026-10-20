#include "m2c.h"
extern "C" M2C_UNK func_0021EE68(s32, s32, s32);               /* extern */

extern "C" void func_0021E798(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x18);
    func_0021EE68(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 0), arg1);
}
