#define DEF_func_00227D30
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00227D30(void *arg0, s32 arg1, f32 fparg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a0 != 0) {
            func_0024A288(temp_a0, arg1, fparg0);
        }
    }
}
