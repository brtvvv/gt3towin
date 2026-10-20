#define DEF_func_0016A808
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0016A808(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;

    func_001D5360(arg0, arg1);
    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v1 != NULL) {
        temp_v0 = M2C_FIELD(temp_v1, void **, 0x1C);
        var_v0 = func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001D9038, 1, (s32) (temp_v1 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001C1060, (s32) temp_v1);
    } else {
        var_v0 = 0;
    }
    if (func_001D8990(M2C_FIELD(var_v0, s32 *, 0x24C)) == 0) {
        func_0016A7B8(arg0, M2C_FIELD(arg0, s8 *, 0x2D1) != 0);
    }
}
