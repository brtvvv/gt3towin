#include "m2c.h"
extern "C" s32 func_0022E890(s32);                             /* extern */

extern "C" s32 func_0022F710(void *arg0) {
    return func_0022E890(M2C_FIELD(arg0, s32 *, 8)) != 0;
}
