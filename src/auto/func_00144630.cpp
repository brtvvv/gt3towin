#define DEF_func_00144630
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D5D8 __attribute__((section(".data")));

extern "C" s32 func_00144630(s32 arg0, s32 arg1) {
    s32 *temp_a0;

    func_00143E98(arg0, arg1);
    temp_a0 = M2C_FIELD(arg1, s32 **, 0x230);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D5D8;
    M2C_FIELD(arg0, s32 *, 0x234) = (s32) M2C_FIELD(arg1, s32 *, 0x234);
    M2C_FIELD(arg0, s32 **, 0x230) = temp_a0;
    if (temp_a0 != NULL) {
        *temp_a0 += 1;
    }
    return arg0;
}
