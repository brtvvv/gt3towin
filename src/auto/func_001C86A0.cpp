#define DEF_func_001C86A0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C86A0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 4);
    if (temp_v0 == NULL) {
        return 0;
    }
    return func_001C8520((s32) arg0, (s32) M2C_FIELD(temp_v0, s16 *, 0x40));
}
