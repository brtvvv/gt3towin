#define DEF_func_0023BC70
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002ED3B8 __attribute__((section(".data")));

extern "C" s32 func_0023BC70(s64 arg0) {
    s32 temp_v0;
    s32 var_v0;
    s64 var_a2;

    var_v0 = func_00232658((s32) &D_002ED3B8, 0x23, arg0);
    if ((var_v0 != 0) || (var_v0 = func_00232658((s32) &D_002ED3B8, 0x1F, arg0), var_a2 = arg0, (var_v0 != 0))) {
        var_a2 = M2C_FIELD(var_v0, s64 *, 8);
    }
    temp_v0 = func_00232658((s32) &D_002ED3B8, 0x1E, var_a2);
    if (temp_v0 == 0) {
        return 1;
    }
    return func_0023BD00((s32) M2C_FIELD(temp_v0, u8 *, 0xF7));
}
