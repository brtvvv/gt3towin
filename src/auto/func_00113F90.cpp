#define DEF_func_00113F90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F000 __attribute__((section(".data")));

extern "C" void func_00113F90(void *arg0, s32 arg1) {
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    var_s2 = arg1;
    var_s0 = arg0;
    M2C_FIELD(var_s0, M2C_UNK **, 0x288) = &D_0030F000;
    func_001CD518(var_s0 + 0x3A10, 2);
    var_s1 = var_s0 + 0x28C;
    func_00232BB8((s32) (var_s0 + 0x36D0), 2);
    func_00232BB8((s32) (var_s0 + 0x2198), 2);
    func_001C07B8((s32) (var_s0 + 0x290), 2);
    func_00101AB0((s32) var_s1, 2);
    func_001CC978((s32) var_s0, var_s2);
}
