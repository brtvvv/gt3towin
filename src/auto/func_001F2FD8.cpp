#define DEF_func_001F2FD8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F2FD8(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s0;
    void *temp_s3;

    var_s0 = 0;
    func_001F4000(arg0);
    temp_s3 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(arg0, s32 *, 0xE384) > 0) {
        do {
            temp_a0 = func_001F3A90(arg0, var_s0);
            temp_a1 = var_s0 * 4;
            var_s0 += 1;
            func_001ED400(temp_a0, M2C_FIELD(*(s32 *)(temp_a1 + M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x18), s32 *, 8)), s32 *, 0x11D8));
        } while (var_s0 < M2C_FIELD(arg0, s32 *, 0xE384));
    }
}
