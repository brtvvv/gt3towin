#include "m2c.h"
extern "C" void func_0019DF10(void *arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg1, void **, 0x18);
    M2C_FIELD(arg0, void **, 4) = arg1;
    M2C_FIELD(temp_v1, s64 *, 8) = (s64) (M2C_FIELD(temp_v1, s64 *, 8) & ~0x1E0);
}
