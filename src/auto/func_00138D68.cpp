#define DEF_func_00138D68
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00315368 __attribute__((section(".data")));

extern "C" void func_00138D68(void *arg0, s32 arg1) {
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    var_s2 = arg1;
    var_s1 = arg0;
    M2C_FIELD(var_s1, M2C_UNK **, 0xF28) = &D_00315368;
    var_s0 = var_s1 + 0xE90;
    func_001C07B8(var_s1 + 0xE94, 2);
    func_00101AB0((s32) var_s0, 2);
    func_0018B150((s32) (var_s1 + 0xDE8), 2);
    func_001CC978((s32) var_s1, var_s2);
}
