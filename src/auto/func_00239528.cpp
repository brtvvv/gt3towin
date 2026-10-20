#include "m2c.h"
extern "C" s64 func_00239528(void *arg0) {
    s64 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s64 *, 0x20);
    if (temp_v0 == 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s64 *, 8);
    }
    return temp_v0;
}
