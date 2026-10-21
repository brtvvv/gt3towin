#define DEF_func_0017D498
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0017D498(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    void *temp_s1;
    void *var_s2;

    temp_s1 = M2C_FIELD(arg0, void **, 4);
    var_s0 = 0;
    if (*M2C_FIELD(temp_s1, s32 **, 0x18) > 0) {
        var_s2 = temp_s1 + 0x84;
        do {
            temp_v0 = var_s0 * 4;
            var_s0 += 1;
            func_001A7A80(*(s32 *)(temp_v0 + M2C_FIELD(M2C_FIELD(temp_s1, s32 **, 0x18), s32 *, 8)) + 0x18C4);
        } while (var_s0 < *M2C_FIELD(temp_s1, s32 **, 0x18));
    } else {
        var_s2 = temp_s1 + 0x84;
    }
    func_0017A100((s32) var_s2, 0x14, -3, 0);
}
