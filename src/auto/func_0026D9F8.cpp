#include "m2c.h"
extern "C" s32 func_0026D9F8(void *arg0, s8 arg1) {
    s8 *temp_v1;

    temp_v1 = M2C_FIELD(arg0, s8 **, 4);
    *temp_v1 = arg1;
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (temp_v1 + 1);
    return 0;
}
