#define DEF_func_0023E7F0
#include "m2c.h"
#include "funcs.h"
extern "C" u8 func_0023E7F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x244);
    if (temp_v0 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_v0, u8 *, 0x11);
}
