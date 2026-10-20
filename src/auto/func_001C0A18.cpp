#define DEF_func_001C0A18
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001C0A18(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a1 != 0) {
        func_001C0A40((s32) arg0, temp_a1);
    }
}
