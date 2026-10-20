#define DEF_func_002115D8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002115D8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x128);
    if (temp_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x30);
}
