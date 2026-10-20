#define DEF_func_001F5BA0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001F5BA0(void *arg0) {
    s32 *temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 **, 0x38);
    if (temp_v0 != NULL) {
        return *temp_v0;
    }
    return 0;
}
