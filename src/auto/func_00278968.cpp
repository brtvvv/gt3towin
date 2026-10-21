#define DEF_func_00278968
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00278968(void) {
    s32 temp_v0;

    temp_v0 = func_0026D5E0(0x18);
    if (temp_v0 == 0) {
        func_00278908();
    }
    func_0027ED70(temp_v0, 0, 0x18);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (temp_v0 + 0x10);
    return temp_v0;
}
