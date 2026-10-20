#define DEF_func_00244068
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00244068(s32 unused0, void *arg1) {
    u8 *temp_a0;
    u8 *var_v1;
    void *temp_a1;

    temp_a0 = arg1 + M2C_FIELD(arg1, s32 *, 0);
    temp_a1 = temp_a0 + M2C_FIELD(arg1, s32 *, 4);
    var_v1 = temp_a0;
    if (temp_a0 != temp_a1) {
        do {
            *var_v1 = ~*var_v1;
            var_v1 += 1;
        } while (var_v1 != temp_a1);
    }
    M2C_FIELD(arg1, s32 *, 0xC) = func_0026DCC8((s32) temp_a0, M2C_FIELD(arg1, s32 *, 4));
}
