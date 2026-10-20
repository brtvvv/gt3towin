#define DEF_func_002148B8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002148B8(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v1 = 9;
    var_v0 = arg0;
    do {
        M2C_FIELD(var_v0, s32 *, 0x2A0) = 8;
        var_v1 -= 1;
        var_v0 += 0x2A4;
    } while (var_v1 != -1);
    func_00214910((s32) arg0);
    return (s32) arg0;
}
