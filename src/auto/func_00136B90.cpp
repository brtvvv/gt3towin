#define DEF_func_00136B90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003185C8 __attribute__((section(".data")));

extern "C" void func_00136B90(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x288) = &D_003185C8;
    func_00136AA8((s32) (arg0 + 0x2E8), 2);
    func_001369D0((s32) (arg0 + 0x28C), 2);
    func_001CC978((s32) arg0, arg1);
}
