#define DEF_func_001C8288
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C8288(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0_2 = *arg0;
    temp_v0 = func_001C8890(M2C_FIELD(temp_v0_2, s32 *, 4), M2C_FIELD(temp_v0_2, s32 *, 0), arg1);
    if (!(temp_v0 != 0)) {
        return 0;
    }
    return *(s32 *)temp_v0;
}
