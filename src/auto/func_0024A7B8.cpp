#define DEF_func_0024A7B8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0024A7B8(void *arg0) {
    s32 *temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 **, 0x20);
    if (temp_v0 == NULL) {
        return 0;
    }
    return *temp_v0;
}
