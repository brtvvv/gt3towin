#define DEF_func_00210860
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002EC7A0 __attribute__((section(".data")));

extern "C" void func_00210860(s32 arg0) {
    void *temp_v1;

    func_0020FF28(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) == 2) {
        func_00210660(arg0);
    } else {
        func_002104D8(arg0);
    }
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_v1, M2C_UNK (**)(s32, M2C_UNK *), 0x4C)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x48), &D_002EC7A0);
}
