#include "m2c.h"
extern "C" s32 func_0022E890(s32);                             /* extern */
extern "C" M2C_UNK func_00231068(void *, s32);                 /* extern */

extern "C" void func_0022F618(void *arg0, s32 arg1) {
    if (func_0022E890(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_00231068(arg0 + 0xBC, arg1);
    }
}
