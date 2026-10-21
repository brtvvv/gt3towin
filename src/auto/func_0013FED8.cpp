#define DEF_func_0013FED8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031B578 __attribute__((section(".data")));

extern "C" void func_0013FED8(void *arg0, s32 arg1) {
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    var_s2 = arg1;
    var_s1 = arg0;
    M2C_FIELD(var_s1, M2C_UNK **, 0x288) = &D_0031B578;
    var_s0 = var_s1 + 0x28C;
    func_001C07B8(var_s1 + 0x290, 2);
    func_00101AB0((s32) var_s0, 2);
    func_001CC978((s32) var_s1, var_s2);
}
