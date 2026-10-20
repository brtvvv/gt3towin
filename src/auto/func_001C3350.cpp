#define DEF_func_001C3350
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));

extern "C" s32 func_001C3350(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_002428C8(arg1, 0, 0, 1, (s32) &D_002F49E0);
    if (temp_v0 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    func_001C8DB8(temp_v0, temp_v0);
    return 1;
}
