#define DEF_func_00239488
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343D48 __attribute__((section(".data")));

extern "C" void func_00239488(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_00343D48;
    func_00232368((s32) arg0, arg1);
}
