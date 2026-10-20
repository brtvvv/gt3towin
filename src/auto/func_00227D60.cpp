#define DEF_func_00227D60
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00227D60(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a0 != 0) {
            func_0024A218(temp_a0);
        }
    }
}
