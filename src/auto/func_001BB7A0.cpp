#define DEF_func_001BB7A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335748 __attribute__((section(".data")));

extern "C" void func_001BB7A0(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *var_a2;
    void *temp_v0;

    var_a2 = NULL;
    if (arg1 != NULL) {
        var_a2 = arg1;
    } else {
        temp_v0 = M2C_FIELD(arg0, void **, 0xE4);
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s32 *, 0x40) & 0x0F000000)) {
            var_a2 = &D_00335748;
        }
    }
    if (var_a2 != NULL) {
        func_001BC578((s32) arg0, (s32) var_a2);
        return;
    }
    func_001C0768((s32) arg0);
}
