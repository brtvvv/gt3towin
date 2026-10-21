#define DEF_func_001C34A0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C34A0(void *arg0, s32 arg1) {
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_v0;

    if (arg1 != 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 8);
        temp_v0_2 = func_001C3F48(M2C_FIELD(temp_v0, s32 *, 0x4C), M2C_FIELD(temp_v0, s32 *, 0x48), arg1);
        var_v1 = 0;
        if (temp_v0_2 != 0) {
            var_v1 = *(s32 *)temp_v0_2;
        }
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
