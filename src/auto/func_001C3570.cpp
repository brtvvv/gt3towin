#define DEF_func_001C3570
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C3570(s32 arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = func_001C4078(M2C_FIELD(arg1, s32 *, 0x4C), M2C_FIELD(arg1, s32 *, 0x48), arg0);
    if (!(temp_v0 == 0)) {
        return *(s32 *)temp_v0;
    }
    return 0;
}
