#define DEF_func_00144918
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00144918(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x230);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
    }
}
