#define DEF_func_00223798
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003428A0 __attribute__((section(".data")));

extern "C" void func_00223798(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_003428A0;
    func_00224E48((s32) (arg0 + 0x44), 2);
    func_00220C20((s32) arg0, arg1);
}
