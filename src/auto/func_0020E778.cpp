#include "m2c.h"
extern "C" s8 func_0020E778(void *arg0) {
    s8 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s16 *, 0) != 0) {
        var_v1 = M2C_FIELD(arg0, s8 *, 4);
    }
    return var_v1;
}
