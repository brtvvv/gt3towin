#define DEF_func_001C82C0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C82C0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 4);
    if ((temp_v0 != NULL) && ((M2C_FIELD(temp_v0, s8 *, 0x44) != 0) || (M2C_FIELD(arg0, s8 *, 0x88) != 0))) {
        return 1;
    }
    return 0;
}
