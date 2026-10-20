#define DEF_func_0026BBE0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0026BBE0(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, void **, 0xC) = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, void **, 8) = arg1;
    }
    M2C_FIELD(arg0, void **, 0xC) = arg1;
}
