#define DEF_func_001B19A0
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_001B19A0(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x30);
    if ((temp_v1 == NULL) || (M2C_FIELD(arg0, s32 *, 0) == 0)) {
        return -1.0f;
    }
    return M2C_FIELD(temp_v1, f32 *, 0x3C);
}
