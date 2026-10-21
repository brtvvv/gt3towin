#define DEF_func_001C3600
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C3600(void *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_v0_2 != NULL) {
        temp_v0 = func_001C4078(M2C_FIELD(temp_v0_2, s32 *, 0x44), M2C_FIELD(temp_v0_2, s32 *, 0x40), arg1);
        if (temp_v0 != 0) {
            return *(s32 *)temp_v0;
        }
    }
    return 0;
}
