#define DEF_func_0017B868
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00353B68 __attribute__((section(".data")));

extern "C" M2C_UNK *func_0017B868(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_v0 == NULL) {
        return &D_00353B68;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0xC);
}
