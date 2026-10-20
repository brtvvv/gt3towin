#define DEF_func_0018BDD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032E100 __attribute__((section(".data")));

extern "C" s32 func_0018BDD0(s32 arg0) {
    func_0018B110(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &D_0032E100;
    return arg0;
}
