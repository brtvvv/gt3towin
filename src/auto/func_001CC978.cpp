#define DEF_func_001CC978
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338888 __attribute__((section(".data")));

extern "C" void func_001CC978(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x288) = &D_00338888;
    func_0022EBC8((s32) (arg0 + 0x134), 2);
    func_0022EBC8((s32) arg0, 2);
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
