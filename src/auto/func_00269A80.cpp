#define DEF_func_00269A80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK *D_00300FE8 __attribute__((section(".data")));

extern "C" void func_00269A80(M2C_UNK *arg0) {
    M2C_UNK *temp_v1;

    temp_v1 = D_00300FE8;
    D_00300FE8 = arg0;
    *arg0 = temp_v1;
}
