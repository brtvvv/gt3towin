#include "m2c.h"
extern "C" M2C_UNK func_0027ABE0(s64, s64);                    /* extern */

extern "C" s32 func_00277EB8(void *arg0) {
    s64 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s64 *, 8);
    func_0027ABE0(temp_a0, temp_a0);
    return 0;
}
