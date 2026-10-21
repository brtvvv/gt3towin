#define DEF_func_001C3538
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C3538(s32 arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = func_001C3FE0(M2C_FIELD(arg1, s32 *, 0x44), M2C_FIELD(arg1, s32 *, 0x40), arg0);
    if (!(temp_v0 == 0)) {
        return *(s32 *)temp_v0;
    }
    return 0;
}
