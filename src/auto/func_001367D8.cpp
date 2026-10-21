#define DEF_func_0026AF50
#define DEF_func_001367D8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0026AF50(s32);
extern s32 D_00352EFC;
extern M2C_UNK D_00354C28;

extern "C" void func_001367D8(void) {
    if (D_00352EFC != 0) {
        func_0026AF50((s32) &D_00354C28);
        D_00352EFC -= 1;
    }
}
