#define DEF_func_00151930
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00151930(void *arg0) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
        var_v0 = func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001BC950, 1, (s32) (arg0 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001C1060, (s32) arg0);
    }
    if (var_v0 != 0) {
        func_001BC7B0(var_v0);
    }
}
