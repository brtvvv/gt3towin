#define DEF_func_0026BC00
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0026BC00(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg1, void **, 8);
    temp_v0 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, void **, 0xC) = temp_v0;
    } else {
        M2C_FIELD(arg0, void **, 0xC) = temp_v0;
    }
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, void **, 8) = temp_v1;
    }
}
